# In robot_bringup/launch/complete_autonomy.launch.py

import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    # =================================================================================
    # == 1. 路径与配置定义
    # =================================================================================
    bringup_dir = get_package_share_directory('robot_bringup')
    # ... (获取其他包的路径) ...
    vehicle_simulator_dir = get_package_share_directory('vehicle_simulator')
    boundary_handler_dir = get_package_share_directory('boundary_handler')
    far_planner_dir = get_package_share_directory('far_planner')
    graph_decoder_dir = get_package_share_directory('graph_decoder')
    local_planner_dir = get_package_share_directory('local_planner')
    orbbec_camera_dir = get_package_share_directory('orbbec_camera')
    
    # 加载所有YAML配置文件
    local_planner_config = os.path.join(bringup_dir, 'config', 'local_planner.yaml')
    path_follower_config = os.path.join(bringup_dir, 'config', 'path_follower.yaml')
    terrain_analysis_config = os.path.join(bringup_dir, 'config', 'terrain_analysis.yaml')
    terrain_analysis_ext_config = os.path.join(bringup_dir, 'config', 'terrain_analysis_ext.yaml')
    visualization_tools_config = os.path.join(bringup_dir, 'config', 'visualization_tools.yaml')
    boundary_handler_config = os.path.join(boundary_handler_dir, 'config', 'default.yaml')
    far_planner_config = os.path.join(far_planner_dir, 'config', 'indoor.yaml')
    graph_decoder_config = os.path.join(graph_decoder_dir, 'config', 'default.yaml')
    rviz_config_file = os.path.join(bringup_dir, 'rviz', 'autonomy_config.rviz')

    # 声明启动参数
    use_sim_time_arg = DeclareLaunchArgument('use_sim_time', default_value='false', description='...')
    world_name_arg = DeclareLaunchArgument('world_name', default_value='garage', description='...')
    check_terrain_conn_arg = DeclareLaunchArgument('checkTerrainConn', default_value='true', description='...')


    # =================================================================================
    # == 2. 硬件驱动层 (使用官方确认的参数)
    # =================================================================================
    orbbec_camera_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('orbbec_camera'), 'launch', 'gemini_330_series.launch.py')
        ),
        launch_arguments={
            'camera_name': 'camera',
            
            # [关键] 禁用驱动端的点云生成
            'enable_point_cloud': 'false',
            'enable_colored_point_cloud': 'false',
            
            # [关键] 设置合理的帧率
            'color_fps': '15',
            'depth_fps': '15',
            
            # [关键] 启用IMU同步输出
            'enable_sync_output_accel_gyro': 'true',
            
            # [关键] 启用深度图到彩色图的配准！
            'depth_registration': 'true',
            
            # 确保相机发布内部的TF树
            'publish_tf': 'true'
        }.items()
    )


    # =================================================================================
    # == 3. 核心：传感器与SLAM层 (适配配准后的深度图)
    # =================================================================================
    
    # ... (静态TF发布者 base_link -> camera_link 和 base_link -> vehicle 保持不变) ...

    rtabmap_odometry_node = Node(
        package='rtabmap_odom',
        executable='rgbd_odometry',
        name='rgbd_odometry',
        output='screen',
        parameters=[{
            'frame_id': 'base_link',
            'odom_frame_id': 'odom',
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'approx_sync': True,
            'approx_sync_max_interval': 0.05,
            # 由于输入已经是配准好的，这里就不再需要RTAB-Map内部复杂的TF查找了
        }],
        remappings=[
            # [最终修正] 订阅原始彩色图和“配准后”的深度图
            ('rgb/image',       '/camera/color/image_raw'),
            ('depth/image',     '/camera/depth_aligned_to_color/image_raw'), # <--- 关键修改！
            ('rgb/camera_info', '/camera/color/camera_info'),
            ('imu',             '/camera/imu') # <--- 使用标准的IMU话题 (需要确认)
        ]
    )

    rtabmap_slam_node = Node(
        package='rtabmap_slam',
        executable='rtabmap',
        name='rtabmap',
        output='screen',
        parameters=[{
            'subscribe_odom_info': True, 
            'frame_id': 'base_link', 
            'map_frame_id': 'map', 
            'use_sim_time': LaunchConfiguration('use_sim_time'), 
            'approx_sync': False,
            # 明确告诉它不要订阅图像
            'subscribe_depth': False,
            'subscribe_rgb': False,
        }],
        remappings=[('odom', '/odom')]
    )

    sensor_scan_node = Node(
        package='sensor_scan_generation',
        executable='sensorScanGeneration',
        name='sensorScanGeneration',
        remappings=[
            ('/state_estimation', '/odom'),
            ('/registered_scan', '/registered_scan_raw') # <--- 关键修改！订阅来自rtabmap_odom的点云
        ]
        # 输出: /sensor_scan (点云在 sensor_at_scan 系) 和 /state_estimation_at_scan
    )
    
    # --- pointcloud_adapter_node 已被移除 ---

    # =================================================================================
    # == 3. 感知层 (现在输入来自 sensor_scan_node)
    # =================================================================================
    terrain_analysis_node = Node(
        package='terrain_analysis',
        executable='terrainAnalysis',
        name='terrainAnalysis',
        parameters=[terrain_analysis_config],
        remappings=[
            ('/state_estimation', '/state_estimation_at_scan'),
            ('/registered_scan', '/sensor_scan') # <--- 关键修改！订阅同步后的、位于机器人坐标系的点云
        ]
    )
    
    terrain_analysis_ext_node = Node(
        package='terrain_analysis_ext',
        executable='terrainAnalysisExt',
        name='terrainAnalysisExt',
        output='screen',
        parameters=[
            terrain_analysis_ext_config,
            {'checkTerrainConn': LaunchConfiguration('checkTerrainConn')}
        ],
        remappings=[
            ('/state_estimation', '/state_estimation_at_scan'),
            ('/registered_scan', '/sensor_scan') # <--- 关键修改！
        ]
    )

    # =================================================================================
    # == 4. 全局规划层 (Route Planner)
    # =================================================================================
    boundary_handler_node = Node(
        package='boundary_handler',
        executable='boundary_handler',
        name='boundary_handler',
        parameters=[boundary_handler_config, {'folder_path': os.path.join(far_planner_dir, 'data', '')}]
    )

    far_planner_node = Node(
        package='far_planner',
        executable='far_planner',
        name='far_planner',
        parameters=[far_planner_config],
        remappings=[
            ('/odom_world', '/state_estimation_at_scan'),
            # '/terrain_cloud' 在旧系统中被重映射到了 '/terrain_map_ext'
            # 我们推断 terrain_analysis_ext 会发布这个话题
            ('/terrain_cloud', '/terrain_map_ext'), 
            ('/scan_cloud', '/terrain_map'),
            ('/terrain_local_cloud', '/registered_scan')
        ]
    )

    graph_decoder_node = Node(
        package='graph_decoder',
        executable='graph_decoder',
        name='graph_decoder',
        parameters=[graph_decoder_config]
    )

    # =================================================================================
    # == 5. 局部规划与控制层
    # =================================================================================
    local_planner_node = Node(
        package='local_planner',
        executable='localPlanner',
        name='local_planner',
        parameters=[
            local_planner_config,
            {
                'pathFolder': os.path.join(local_planner_dir, 'paths'),
                'autonomyMode': True # 在全局规划时，局部规划器应处于自主模式
            }
        ],
        remappings=[
            ('/state_estimation', '/state_estimation_at_scan')
        ]
    )

    path_follower_node = Node(
        package='local_planner',
        executable='pathFollower',
        name='path_follower',
        parameters=[
            path_follower_config,
            {'operating_mode': 'autonomous'} # 控制器也应处于自主模式
        ],
        remappings=[
            ('/state_estimation', '/state_estimation_at_scan')
        ]
    )
    # ######################################################################
    # ## 7. 实验评估与可视化工具
    # ######################################################################
    visualization_tools_node = Node(
        package='visualization_tools',
        executable='visualizationTools',
        name='visualizationTools',
        output='screen',
        parameters=[
            visualization_tools_config,
            {
                'metricFile': PathJoinSubstitution([vehicle_simulator_dir, 'log', 'metrics']),
                'trajFile': PathJoinSubstitution([vehicle_simulator_dir, 'log', 'trajectory']),
                'pcdFile': PathJoinSubstitution([vehicle_simulator_dir, 'log', 'pointcloud']),
                'mapFile': PathJoinSubstitution([vehicle_simulator_dir, 'mesh', LaunchConfiguration('world_name'), 'map.ply']),
            }
        ],
        remappings=[
             # 这里的位姿来源已是正确的
            ('/state_estimation', '/state_estimation_at_scan'),
        ]
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_file],
    )

    return LaunchDescription([
        orbbec_camera_launch,
        use_sim_time_arg,
        world_name_arg,
        check_terrain_conn_arg,
        rtabmap_odometry_node,
        rtabmap_slam_node,
        sensor_scan_node,
        terrain_analysis_node,
        terrain_analysis_ext_node,
        boundary_handler_node,
        far_planner_node,
        graph_decoder_node,
        local_planner_node,
        path_follower_node,
        visualization_tools_node,
        rviz_node
    ])