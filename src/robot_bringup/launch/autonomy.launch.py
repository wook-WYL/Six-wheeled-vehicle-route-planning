# In robot_bringup/launch/autonomy_final.launch.py

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # ######################################################################
    # ##  所有变量定义和配置加载必须在函数内部完成
    # ######################################################################

    # 1. 定义所有配置文件的路径
    bringup_dir = get_package_share_directory('robot_bringup')
    local_planner_dir = get_package_share_directory('local_planner')
    vehicle_simulator_dir = get_package_share_directory('vehicle_simulator')

    local_planner_config = os.path.join(bringup_dir, 'config', 'local_planner.yaml')
    path_follower_config = os.path.join(bringup_dir, 'config', 'path_follower.yaml')
    terrain_analysis_config = os.path.join(bringup_dir, 'config', 'terrain_analysis.yaml')
    visualization_tools_config = os.path.join(bringup_dir, 'config', 'visualization_tools.yaml')

    # 2. 声明可配置的启动参数
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time', default_value='false',
        description='Use simulation (Gazebo) clock if true')
    
    world_name_arg = DeclareLaunchArgument(
        'world_name', default_value='garage',
        description='Name of the simulation world to load map from')

    # ######################################################################
    # ## 3. 静态TF树配置
    # ######################################################################
    static_tf_base_to_camera = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_tf_base_to_camera',
        arguments=['0.1', '0.0', '0.2', '0.0', '0.0', '0.0', 'base_link', 'camera_link']
    )
    
    static_tf_base_to_vehicle = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_tf_base_to_vehicle',
        arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'vehicle']
    )

    # ######################################################################
    # ## 4. RTAB-Map 节点组 (视觉定位引擎)
    # ######################################################################
    rtabmap_odometry_node = Node(
        package='rtabmap_odom',
        executable='rgbd_odometry',
        name='rgbd_odometry',
        output='screen',
        parameters=[{
            'frame_id': 'base_link',
            'odom_frame_id': 'odom',
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'approx_sync': True, # 使用近似时间同步，因为IMU和图像的频率通常不同
            'Odom/Strategy': '1', 
            'Vis/EstimationType': '1', 
        }],
        remappings=[
            # ###################################################################
            # ##               使用您列表中存在的真实话题进行重映射              ##
            # ###################################################################
            
            # RGB 彩色图像
            ('rgb/image', '/camera/color/image_raw'),
            
            # 深度图像
            ('depth/image', '/camera/depth/image_raw'),
            
            # 彩色相机的参数信息 (与RGB图像配对)
            ('rgb/camera_info', '/camera/color/camera_info'),
            
            # IMU 数据 (假设其类型为 sensor_msgs/msg/Imu)
            ('imu', '/camera/gyro_accel/sample')
        ]
    )

    rtabmap_slam_node = Node(
        package='rtabmap_slam',
        executable='rtabmap',
        name='rtabmap',
        output='screen',
        parameters=[{'subscribe_depth': False,
            'subscribe_rgb': False,
            'subscribe_odom_info': True,
            'subscribe_odom_info': True, 
            'frame_id': 'base_link', 
            'map_frame_id': 'map', 
            'use_sim_time': LaunchConfiguration('use_sim_time'), 
            'approx_sync': False}],
        remappings=[('odom', '/odom')]
    )

    # ######################################################################
    # ## 5. 我们的适配与分析层
    # ######################################################################
    pointcloud_adapter_node = Node(
        package='pointcloud_adapter',
        executable='adapter_node',
        name='pointcloud_adapter',
        parameters=[{'target_frame': 'map'}]
    )

    # <--- 新增! 启动关键的同步节点 --->
    sensor_scan_node = Node(
        package='sensor_scan_generation',
        executable='sensorScanGeneration',
        name='sensorScanGeneration',
        remappings=[
            ('/state_estimation', '/odom'),
            # 它订阅的 /registered_scan 话题名正确，无需重映射
        ]
    )

    terrain_analysis_node = Node(
        package='terrain_analysis',
        executable='terrainAnalysis',
        name='terrainAnalysis',
        output='screen',
        parameters=[terrain_analysis_config],
        remappings=[
            # <--- 修正! 统一使用同步后的位姿 --->
            ('/state_estimation', '/state_estimation_at_scan'),
            # 它订阅的 /registered_scan 话题名正确，无需重映射
        ]
    )

    # ######################################################################
    # ## 6. 最终的规划与控制层
    # ######################################################################
    local_planner_node = Node(
        package='local_planner',
        executable='localPlanner',
        name='local_planner',
        output='screen',
        parameters=[
            local_planner_config, # 先加载YAML
            { # 再覆盖或添加动态参数
                'useTerrainAnalysis': True,
                # <--- 修正! 动态设置pathFolder路径 --->
                'pathFolder': PathJoinSubstitution([local_planner_dir, 'paths'])
            }
        ],
        remappings=[
            # <--- 修正! 统一使用同步后的位姿 --->
            ('/state_estimation', '/state_estimation_at_scan'),
            #('/way_point', '/clicked_point')
        ]
    )
    
    path_follower_node = Node(
        package='local_planner',
        executable='pathFollower',
        name='path_follower',
        output='screen',
        ros_arguments=['--ros-args', '--log-level', 'debug'],
        parameters=[path_follower_config],
        remappings=[
            # 这里的位姿来源已是正确的
            ('/state_estimation', '/state_estimation_at_scan'),
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
        # arguments=['-d', os.path.join(bringup_dir, 'rviz', 'autonomy.rviz')]
    )

    # ######################################################################
    # ## 8. 返回最终的启动描述
    # ######################################################################
    return LaunchDescription([
        use_sim_time_arg,
        world_name_arg,
        static_tf_base_to_camera,
        static_tf_base_to_vehicle,
        rtabmap_odometry_node,
        rtabmap_slam_node,
        pointcloud_adapter_node,
        sensor_scan_node,         # <--- 确保启动了同步节点
        terrain_analysis_node,
        local_planner_node,
        path_follower_node,
        visualization_tools_node,
        rviz_node
    ])