# In robot_bringup/launch/complete_autonomy.launch.py

import os
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import ComposableNodeContainer, LoadComposableNodes, Node
from launch_ros.descriptions import ComposableNode
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():

    # =================================================================================
    # == 1. 路径与配置定义
    # =================================================================================
    bringup_dir = get_package_share_directory('robot_bringup')
    vehicle_simulator_dir = get_package_share_directory('vehicle_simulator')
    boundary_handler_dir = get_package_share_directory('boundary_handler')
    far_planner_dir = get_package_share_directory('far_planner')
    graph_decoder_dir = get_package_share_directory('graph_decoder')
    local_planner_dir = get_package_share_directory('local_planner')
    
    # 加载所有YAML配置文件
    camera_config = os.path.join(bringup_dir, 'config', 'orbbec_camera.yaml')
    rtabmap_odom_config = os.path.join(bringup_dir, 'config', 'rtabmap_odom.yaml')
    rtabmap_slam_config = os.path.join(bringup_dir, 'config', 'rtabmap_slam.yaml') # 建议为slam也创建一个
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
    # == 2. 创建一个共享的组件容器
    # =================================================================================
    shared_container = ComposableNodeContainer(
        name='shared_container',
        namespace='',
        package='rclcpp_components',
        executable='component_container_mt',
        output='screen'
    )

    # =================================================================================
    # == 3. 定义并加载高带宽组件
    # =================================================================================
    load_composable_nodes = LoadComposableNodes(
        target_container='shared_container',
        composable_node_descriptions=[
            # 3.1 相机组件
            ComposableNode(
                package='orbbec_camera',
                plugin='orbbec_camera::OBCameraNodeDriver',
                name='camera',
                namespace='camera',
                parameters=[camera_config]
            ),
            # 3.2 RTAB-Map视觉里程计组件
            ComposableNode(
                package='rtabmap_odom',
                plugin='rtabmap_odom::RGBDOdometry',
                name='rgbd_odometry',
                parameters=[rtabmap_odom_config],
                remappings=[
                    ('rgb/image',       '/camera/color/image_raw'),
                    ('depth/image',     '/camera/depth_to_color/image_raw'),
                    ('rgb/camera_info', '/camera/color/camera_info'),
                    ('imu',             '/camera/imu'),
                    # [关键简化] 让 odom 直接发布 /registered_scan，省掉 adapter
                    ('cloud',           '/registered_scan') 
                ]
            )
        ]
    )

    # =================================================================================
    # == 4. 定义独立运行的节点 (低带宽)
    # =================================================================================
    
    static_tf_base_to_camera = Node(
        package='tf2_ros', executable='static_transform_publisher', name='static_tf_base_to_camera',
        arguments=['0.157', '-0.262', '0.63', '0.0', '0.0', '0.0', 'base_link', 'camera_link']
    )
    
    static_tf_base_to_vehicle = Node(
        package='tf2_ros', executable='static_transform_publisher', name='static_tf_base_to_vehicle',
        arguments=['0', '0', '0', '0', '0', '0', 'base_link', 'vehicle']
    )

    rtabmap_slam_node = Node(
        package='rtabmap_slam', executable='rtabmap', name='rtabmap', output='screen',
        parameters=[rtabmap_slam_config],
        remappings=[('odom', '/odom')]
    )
    
    # --- sensor_scan_node 和 pointcloud_adapter_node 已被移除 ---

    terrain_analysis_node = Node(
        package='terrain_analysis', executable='terrainAnalysis', name='terrainAnalysis',
        parameters=[terrain_analysis_config],
        remappings=[
            ('/state_estimation', '/odom'), # <--- 简化！直接使用 odom
            ('/registered_scan', '/registered_scan') # <--- 简化！直接使用 odom 发布的点云
        ]
    )
    
    terrain_analysis_ext_node = Node(
        package='terrain_analysis_ext', executable='terrainAnalysisExt', name='terrainAnalysisExt', output='screen',
        parameters=[terrain_analysis_ext_config, {'checkTerrainConn': LaunchConfiguration('checkTerrainConn')}],
        remappings=[
            ('/state_estimation', '/odom'), # <--- 简化！
            ('/registered_scan', '/registered_scan') # <--- 简化！
        ]
    )

    boundary_handler_node = Node(
        package='boundary_handler', executable='boundary_handler', name='boundary_handler',
        parameters=[boundary_handler_config, {'folder_path': os.path.join(far_planner_dir, 'data', '')}]
    )

    far_planner_node = Node(
        package='far_planner', executable='far_planner', name='far_planner',
        parameters=[far_planner_config],
        remappings=[
            ('/odom_world', '/odom'), # <--- 简化！
            ('/terrain_cloud', '/terrain_map_ext'), 
            ('/scan_cloud', '/terrain_map'),
            ('/terrain_local_cloud', '/registered_scan')
        ]
    )

    graph_decoder_node = Node(
        package='graph_decoder', executable='graph_decoder', name='graph_decoder',
        parameters=[graph_decoder_config]
    )

    local_planner_node = Node(
        package='local_planner', executable='localPlanner', name='local_planner',
        parameters=[local_planner_config, {'pathFolder': os.path.join(local_planner_dir, 'paths'), 'autonomyMode': True}],
        remappings=[('/state_estimation', '/odom')] # <--- 简化！
    )

    path_follower_node = Node(
        package='local_planner', executable='pathFollower', name='path_follower',
        parameters=[path_follower_config, {'operating_mode': 'autonomous'}],
        remappings=[('/state_estimation', '/odom')] # <--- 简化！
    )
    
    visualization_tools_node = Node(
        package='visualization_tools', executable='visualizationTools', name='visualizationTools', output='screen',
        parameters=[
            visualization_tools_config,
            {
                'metricFile': PathJoinSubstitution([vehicle_simulator_dir, 'log', 'metrics']),
                'trajFile': PathJoinSubstitution([vehicle_simulator_dir, 'log', 'trajectory']),
                'pcdFile': PathJoinSubstitution([vehicle_simulator_dir, 'log', 'pointcloud']),
                'mapFile': PathJoinSubstitution([vehicle_simulator_dir, 'mesh', LaunchConfiguration('world_name'), 'map.ply']),
            }
        ],
        remappings=[('/state_estimation', '/odom')] # <--- 简化！
    )

    rviz_node = Node(
        package='rviz2', executable='rviz2', name='rviz2',
        arguments=['-d', rviz_config_file],
    )

    # =================================================================================
    # == 5. 最终的启动描述
    # =================================================================================
    return LaunchDescription([
        use_sim_time_arg,
        world_name_arg,
        check_terrain_conn_arg,
        shared_container,
        load_composable_nodes,
        static_tf_base_to_camera,
        static_tf_base_to_vehicle,
        rtabmap_slam_node,
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