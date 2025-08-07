# test_localization.launch.py - COMPLETE VERSION
#
# 这个launch文件用于测试在已加载的地图上进行纯定位和路径执行的基础功能。
# 它不包含任何全局规划器 (route_planner)。
#

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource, FrontendLaunchDescriptionSource

def generate_launch_description():
    # --- 1. 声明和获取参数 ---
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')
    
    map_file_path = LaunchConfiguration('map_file', 
        default=os.path.join(get_package_share_directory('robot_bringup'), 'maps', 'my_map.yaml'))

    # --- 2. 启动地图服务器 (Map Server) ---
    start_map_server = Node(
        package='nav2_map_server',
        executable='map_server',
        name='map_server',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}, 
                    {'yaml_filename': map_file_path}]
    )

    # --- 3. 启动生命周期管理器 (Lifecycle Manager) ---
    start_lifecycle_manager = Node(
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name='lifecycle_manager_localization',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time},
                    {'autostart': True},
                    {'node_names': ['map_server']}]
    )

    # --- 4. 启动相机 ---
    start_camera = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('orbbec_camera'), 'launch', 'gemini_330_series.launch.py')
        ),
        launch_arguments={'enable_colored_point_cloud': 'true'}.items()
    )

    # --- 5. 启动静态TF ---
    # !!! 使用您的真实测量值 !!!
    start_static_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='base_to_camera_tf_publisher',
        arguments=['0.1', '0.0', '0.2', '0', '0', '0', 'base_link', 'camera_link'],
        output='screen'
    )
    
    # --- 6. 启动RTAB-Map (纯定位模式) ---
    start_rtabmap_localization = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('rtabmap_launch'), 'launch', 'rtabmap.launch.py')
        ),
        launch_arguments={
            'rgb_topic': '/camera/color/image_raw',
            'depth_topic': '/camera/depth/image_raw',
            'camera_info_topic': '/camera/color/camera_info',
            'frame_id': 'base_link',
            'approx_sync': 'true',
            'use_sim_time': use_sim_time,
            'rtabmap_mode': 'false', # 纯定位模式
            'odom_topic': '/state_estimation',
            # 注意：在较新版本的rtabmap_ros中，map_topic可能不被直接支持作为launch参数
            # RTAB-Map通常会自动订阅 /map
            # 'map_topic': '/map', 
            'database_path': '~/.ros/empty.db', # 使用一个空数据库，强制不加载旧的3D地图
            'log_level': 'info'
        }.items()
    )

    # --- 7. 启动您的局部规划器栈 ---
    start_pointcloud_adapter = Node(
        package='pointcloud_adapter', 
        executable='pointcloud_adapter_node',
        name='pointcloud_adapter',
        output='screen'
    )

    start_terrain_analysis = IncludeLaunchDescription(
        FrontendLaunchDescriptionSource(
            os.path.join(get_package_share_directory('terrain_analysis'), 'launch', 'terrain_analysis.launch')
        )
    )

    start_terrain_analysis_ext = IncludeLaunchDescription(
        FrontendLaunchDescriptionSource(
            os.path.join(get_package_share_directory('terrain_analysis_ext'), 'launch', 'terrain_analysis_ext.launch')
        )
    )

    start_local_planner_stack = IncludeLaunchDescription(
        FrontendLaunchDescriptionSource(
            os.path.join(get_package_share_directory('local_planner'), 'launch', 'local_planner.launch')
        )
    )
    
    # --- 8. 启动手柄和RViz ---
    start_joy_node = Node(
        package='joy',
        executable='joy_node',
        name='joy_node',
        output='screen'
    )

    rviz_config_file = os.path.join(get_package_share_directory('robot_bringup'), 'rviz', 'real_robot.rviz')
    start_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_file],
        output='screen'
    )

    # --- 将所有启动项组合起来 ---
    return LaunchDescription([
        DeclareLaunchArgument('map_file', default_value=map_file_path, description='Full path to map file to load'),
        DeclareLaunchArgument('use_sim_time', default_value='false', description='Use simulation (Gazebo) clock if true'),

        start_map_server,
        start_lifecycle_manager,
        start_camera,
        start_static_tf,
        start_rtabmap_localization,
        start_pointcloud_adapter,
        start_terrain_analysis,
        start_terrain_analysis_ext,
        start_local_planner_stack,
        start_joy_node,
        start_rviz,
    ])
