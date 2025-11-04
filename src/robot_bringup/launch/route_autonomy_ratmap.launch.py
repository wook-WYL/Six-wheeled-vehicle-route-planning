import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument,IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, PythonExpression,PathJoinSubstitution
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():

    # =================================================================================
    # == 1. 路径与配置定义
    # =================================================================================
    bringup_dir = get_package_share_directory('robot_bringup')
    vehicle_simulator_dir = get_package_share_directory('vehicle_simulator')
    #boundary_handler_dir = get_package_share_directory('boundary_handler')
    far_planner_dir = get_package_share_directory('far_planner')
    #graph_decoder_dir = get_package_share_directory('graph_decoder')
    local_planner_dir = get_package_share_directory('local_planner')
    orbbec_camera_dir = get_package_share_directory('orbbec_camera')
    # 加载所有YAML配置文件
    local_planner_config = os.path.join(bringup_dir, 'config', 'local_planner.yaml')
    path_follower_config = os.path.join(bringup_dir, 'config', 'path_follower.yaml')
    terrain_analysis_config = os.path.join(bringup_dir, 'config', 'terrain_analysis.yaml')
    visualization_tools_config = os.path.join(bringup_dir, 'config', 'visualization_tools.yaml')
    # ... (加载route_planner的config)
    #boundary_handler_config = os.path.join(boundary_handler_dir, 'config', 'default.yaml')
    boundary_handler_config = os.path.join(bringup_dir, 'config', 'boundary_handler.yaml')
    boundary_handler_data_folder = os.path.join(bringup_dir, 'data', '')
    far_planner_config = os.path.join(far_planner_dir, 'config', 'indoor.yaml') # 假设使用indoor配置
    #graph_decoder_config = os.path.join(graph_decoder_dir, 'config', 'default.yaml')
    graph_decoder_config = os.path.join(bringup_dir, 'config', 'graph_decoder.yaml')
    # RViz配置文件
    rviz_config_file = os.path.join(bringup_dir, 'rviz', 'autonomy_config.rviz')
    terrain_analysis_ext_config = os.path.join(bringup_dir, 'config', 'terrain_analysis_ext.yaml')
    # 新增 checkTerrainConn 启动参数
    check_terrain_conn_arg = DeclareLaunchArgument('checkTerrainConn', default_value='true', description='')

    # #################################################
    # ##          为 boundary_handler 定义启动参数      ##
    # #################################################
    # 我们可以直接在这里定义默认文件名，使其更清晰
    boundary_file_arg = DeclareLaunchArgument(
        'boundary_file', default_value='boundary.ply'
    )
    traj_file_arg = DeclareLaunchArgument(
        'traj_file', default_value='trajectory.txt'
    )
    graph_file_arg = DeclareLaunchArgument(
        'graph_file', default_value='boundary_graph.vgh'
    )



    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time', default_value='false',
        description='Use simulation (Gazebo) clock if true')
    
    world_name_arg = DeclareLaunchArgument(
        'world_name', default_value='garage',
        description='Name of the simulation world to load map from')
    # =================================================================================
    # == 相机启动
    # =================================================================================
    start_camera_node = IncludeLaunchDescription(
    PythonLaunchDescriptionSource(
        # 明确指向您提供的这个复杂的相机启动文件
        os.path.join(orbbec_camera_dir, 'launch', 'gemini_330_series.launch.py') 
    ),
    # 使用 launch_arguments 来强制覆盖默认值
    launch_arguments={
        # #######################################################
        # ##               <--- 性能优化的关键 --->              ##
        # #######################################################
        
        # 1. 降低分辨率 (从默认的最高 -> 640x480)
        'color_width': '424',
        'color_height': '240',
        'depth_width': '424',
        'depth_height': '240',

        # 2. 降低帧率 (从默认的最高 -> 15 FPS)
        'color_fps': '30',
        'depth_fps': '30',

        # 3. 启用IMU (如果RTAB-Map需要)
        #'enable_accel': 'true',
        #'enable_gyro': 'true',
        #'accel_rate': '200hz', # 根据您的需求设置
        #'gyro_rate': '200hz',
        'enable_sync_output_accel_gyro': 'true',
        #'enable_point_cloud': 'true',

        # 4. 启用硬件同步 (对RTAB-Map非常重要)
        'enable_frame_sync': 'true',

        # 5. (可选但推荐) 指定配置文件路径，让YAML中的其他设置生效
        # 'config_file_path': os.path.join(orbbec_camera_dir, 'config', 'camera_params.yaml')

    }.items()
)
    # =================================================================================
    # == 2. 核心：传感器与SLAM层 (用RTAB-Map替换旧的激光雷达SLAM)
    # =================================================================================
    
     # ######################################################################
    # ## 2.1. 静态TF树配置
    # ######################################################################
    static_tf_base_to_camera = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_tf_base_to_camera',
        #arguments=[  x,     y,     z,  yaw_rad, pitch_rad, roll_rad, parent_frame, child_frame]
        #arguments=['0.157', '-0.262', '0.548', '-1.570796', '0.0', '-1.570796', 'base_link', 'camera_link']
        arguments=['0.157', '-0.262', '0.63', '0.0', '0.0', '0.0', 'base_link', 'camera_link']
    )
    
    #路径规划器的坐标系基座是 vehicle，但是我们的里程计和RTAB-Map都是基于 base_link，所以需要一个额外的TF，表明 base_link 到 vehicle 的偏移
    static_tf_base_to_vehicle = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='static_tf_base_to_vehicle',
        arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'vehicle']
    )

    # ######################################################################
    # ## 2.2. RTAB-Map 节点组 (视觉定位引擎)
    # ######################################################################
    rtabmap_odometry_node = Node(
        package='rtabmap_odom',
        executable='rgbd_odometry',
        name='rgbd_odometry',
        # output='screen',
        parameters=[{
            'frame_id': 'base_link',
            'odom_frame_id': 'odom',
            'use_sim_time': LaunchConfiguration('use_sim_time'),
            'approx_sync': 'true', # 使用近似时间同步，因为IMU和图像的频率通常不同
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
        parameters=[{
            # --- 核心框架参数 ---
            'frame_id': 'base_link',
            'map_frame_id': 'map',
            'use_sim_time': LaunchConfiguration('use_sim_time'),

            # --- 数据流与同步配置 (关键！) ---
            # 告诉后端，现在你需要订阅原始的RGB和Depth图像来生成点云
            'subscribe_depth': 'true',
            'subscribe_rgb': 'true',
            'subscribe_odom_info': 'false', # 当订阅原始图像时，通常不再需要odom_info
            'approx_sync': 'true',        # 必须使用近似同步来处理图像、深度和里程计

            # --- 建图模式 ---
            'Mem/IncrementalMemory': 'true',

            # #################################################
            # ##         <--- 生成点云地图的关键参数 --->         ##
            # #################################################
            # 参数组Grid/来自旧版rtabmap_ros，新版可能前缀不同，但功能类似
            
            # 1. 开启地图生成
            'Grid/FromDepth': 'true', # 必须为 "true"，告诉 rtabmap 从深度图生成点云
            
            # 2. (可选但推荐) 配置输出的点云地图
            'Grid/RangeMax': '5.0',       # 只考虑5米范围内的深度点，过滤远处噪点
            'Grid/VoxelSize': '0.05',     # 输出地图的点云分辨率（体素大小）
            'Grid/ClusterMinSize': '10',  # 过滤掉少于10个点的孤立小点云簇
            'Grid/NormalsSegmentation': 'false', # 通常关闭以提高速度
            
            # 3. (可选) 开启占据栅格地图生成
            'Grid/3D': 'false',            # 如果设为true，会生成3D OctoMap
            'Grid/CellSize': '0.05',       # 2D占据栅格的分辨率
            'Grid/RangeMin': '0.5',        # 忽略近处0.5米内的点（可能是机器人自身）
        }],
        remappings=[
            ('odom', '/odom'),
            # <--- 新增! 将原始图像话题也重映射给后端 --->
            ('rgb/image', '/camera/color/image_raw'),
            ('depth/image', '/camera/depth/image_raw'),
            ('rgb/camera_info', '/camera/color/camera_info'),
        ],
        # 默认它会发布 /rtabmap/cloud_map
    )

    
    # ######################################################################
    # ## 2.3. 我们的适配与分析层
    # ######################################################################
    pointcloud_adapter_node = Node(
        package='pointcloud_adapter',
        executable='adapter_node',
        name='pointcloud_adapter',
        parameters=[{'target_frame': 'map'}]
    )

    
    sensor_scan_node = Node(
        package='sensor_scan_generation',
        executable='sensorScanGeneration',
        name='sensorScanGeneration',
        remappings=[
            ('/state_estimation', '/odom'),
            # 它订阅的 /registered_scan 话题名正确，无需重映射
        ]
    )


    # =================================================================================
    # == 3. 感知层 (与旧系统保持一致)
    # =================================================================================
    terrain_analysis_node = Node(
        package='terrain_analysis',
        executable='terrainAnalysis',
        name='terrainAnalysis',
        parameters=[terrain_analysis_config],
        remappings=[
            #('/state_estimation', '/state_estimation_at_scan'),
            ('/state_estimation', '/odom'),
            ('/registered_scan', '/registered_scan')
        ]
        # 输出: /terrain_map
    )
    
    # <--- 新增! 启动扩展地形分析节点 --->
    terrain_analysis_ext_node = Node(
        package='terrain_analysis_ext',
        executable='terrainAnalysisExt', # 假设的可执行文件名
        name='terrainAnalysisExt',
        # output='screen',
        parameters=[
            terrain_analysis_ext_config,
            # 允许通过命令行覆盖 'checkTerrainConn' 参数
            {'checkTerrainConn': LaunchConfiguration('checkTerrainConn')}
        ],
        remappings=[
            # 假设它使用与 terrain_analysis 相同的输入
            #('/state_estimation', '/state_estimation_at_scan'),
            ('/state_estimation', '/odom'),
            #('/registered_scan', '/registered_scan')
        ]
        # 输出: /terrain_map_ext (这是我们的关键推断)
    )


    # =================================================================================
    # == 4. 全局规划层 (Route Planner)
    # =================================================================================
    boundary_handler_node = Node(
        package='boundary_handler',
        executable='boundary_handler',
        name='boundary_handler',
        output='screen',
        parameters=[
            # 1. 首先加载从YAML文件读取的配置
            boundary_handler_config, 
            
            # 2. 然后用一个字典传递所有文件路径相关的参数
            {
                'folder_path': boundary_handler_data_folder,
                'boundary_file': LaunchConfiguration('boundary_file'),
                'traj_file': LaunchConfiguration('traj_file'),
                'graph_file': LaunchConfiguration('graph_file')
            }
        ]
    )

    far_planner_node = Node(
        package='far_planner',
        executable='far_planner',
        name='far_planner',
        output='screen',
        parameters=[far_planner_config],
        remappings=[
            #('/odom_world', '/state_estimation_at_scan'),
            ('/odom_world', '/odom'),
            ('/terrain_cloud', '/terrain_map_ext'), 
            ('/scan_cloud', '/terrain_map'),
            ('/terrain_local_cloud', '/registered_scan')
        ]
    )

    graph_decoder_node = Node(
        package='graph_decoder',
        executable='graph_decoder',
        name='graph_decoder',
        output='screen',
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
            #('/state_estimation', '/state_estimation_at_scan')
            ('/state_estimation', '/odom'),
        ]
    )

    path_follower_node = Node(
        package='local_planner',
        executable='pathFollower',
        name='path_follower',
        output='screen',
        parameters=[
            path_follower_config,
            {'operating_mode': 'autonomous'} # 控制器也应处于自主模式
        ],
        remappings=[
            #('/state_estimation', '/state_estimation_at_scan')
            ('/state_estimation', '/odom'),
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
            #('/state_estimation', '/state_estimation_at_scan'),
            ('/state_estimation', '/odom'),
        ]
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_file],
    )
    # ... (还可以添加joy, rviz2, visualization_tools等)
    

    return LaunchDescription([
        start_camera_node,
        use_sim_time_arg,
        world_name_arg,
        check_terrain_conn_arg, # <--- 加入新参数
        boundary_file_arg,
        traj_file_arg,
        graph_file_arg,
        # ... (所有其他Node对象)
        static_tf_base_to_camera,
        static_tf_base_to_vehicle,
        rtabmap_odometry_node,
        rtabmap_slam_node,
        pointcloud_adapter_node,
        sensor_scan_node,
        terrain_analysis_node,
        terrain_analysis_ext_node, # <--- 加入新节点
        boundary_handler_node,
        local_planner_node,
        path_follower_node,
        far_planner_node,
        graph_decoder_node,
        #visualization_tools_node,
        rviz_node
    ])
