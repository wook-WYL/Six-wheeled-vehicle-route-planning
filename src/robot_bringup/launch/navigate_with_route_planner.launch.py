# navigate_with_route_planner.launch.py
#
# 这个launch文件用于在已建好的地图上，使用您自己的route_planner进行完整导航。
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
    # 定义地图文件的路径
    map_file_path = LaunchConfiguration('map_file', 
        default=os.path.join(get_package_share_directory('robot_bringup'), 'maps', 'my_map.yaml'))

    # --- 2. 启动地图服务器 (Map Server) ---
    # 这个节点只负责加载并发布地图到 /map 话题
    start_map_server = Node(
        package='nav2_map_server',
        executable='map_server',
        name='map_server',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time}, 
                    {'yaml_filename': map_file_path}]
    )

    # --- 3. 启动生命周期管理器 (Lifecycle Manager) ---
    # map_server是一个生命周期节点，需要一个管理器来激活它
    start_lifecycle_manager = Node(
        package='nav2_lifecycle_manager',
        executable='lifecycle_manager',
        name='lifecycle_manager_map',
        output='screen',
        parameters=[{'use_sim_time': use_sim_time},
                    {'autostart': True},
                    {'node_names': ['map_server']}]
    )

    # --- 后续步骤与之前的test_local_planner.launch.py非常相似 ---

    # 4. 启动相机 (如果需要的话，但通常在纯定位模式下，SLAM会处理)
    start_camera = IncludeLaunchDescription(...) # 和之前一样

    # 5. 启动静态TF
    start_static_tf = Node(...) # 和之前一样

    # 6. 启动RTAB-Map，但这次是在纯定位模式下
    start_rtabmap_localization = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('rtabmap_launch'), 'launch', 'rtabmap.launch.py')
        ),
        launch_arguments={
            'rtabmap_mode': 'false', # 纯定位模式
            'map_subscribe_fs': 'false',
            'odom_topic': '/state_estimation',
            # ... 其他相机和同步参数和之前一样 ...
            
            # 关键参数：告诉RTAB-Map不要再订阅/rtabmap/map，而是订阅标准/map
            'map_topic': '/map'
        }.items()
    )

    # 7. 启动您的完整规划器栈
    # !!! 这里需要您提供如何启动route_planner的信息 !!!
    # 假设route_planner也有一个自己的launch文件
    start_route_planner = IncludeLaunchDescription(
        # ... 启动 route_planner/far_planner 等...
    )
    
    start_local_planner_stack = IncludeLaunchDescription(
        # ... 启动 local_planner/pathFollower 等...
    )

    # ... 其他节点如joy, rviz等 ...

    return LaunchDescription([
        DeclareLaunchArgument('map_file', default_value=map_file_path, description='Full path to map file to load'),
        start_map_server,
        start_lifecycle_manager,
        # ... 其他所有启动项 ...
        start_rtabmap_localization,
        start_route_planner,
        start_local_planner_stack,
        # ...
    ])