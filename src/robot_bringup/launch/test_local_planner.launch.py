# test_local_planner.launch.py
#
# 这个launch文件负责在主控计算机上启动所有与感知、定位和规划相关的节点。
# 机器人底层控制器和相机驱动在其他地方运行。
#

import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource, FrontendLaunchDescriptionSource

def generate_launch_description():
    # --- 1. 声明参数 ---
    # use_sim_time通常用于模拟，但在真实机器人上设为false
    use_sim_time = LaunchConfiguration('use_sim_time', default='false')

    # --- 2. 启动静态TF变换 (连接机器人骨架) ---
    # 这是至关重要的一步，它告诉系统相机在机器人上的安装位置。
    # !!! 重要：请用您实际测量的x, y, z值替换这里的0.2, 0.0, 0.15 !!!
    start_static_tf = Node(
        package='tf2_ros',
        executable='static_transform_publisher',
        name='base_to_camera_tf_publisher',
        arguments=['--x', '0.2', '--y', '0.0', '--z', '0.15', 
                   '--yaw', '0', '--pitch', '0', '--roll', '0', 
                   '--frame-id', 'base_link', '--child-frame-id', 'camera_link'],
        output='screen'
    )

    # --- 3. 启动RTAB-Map视觉里程计 (提供GPS定位) ---
    # 这个节点会订阅在局域网中由相机发布的图像话题。
    start_rtabmap_odom = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('rtabmap_launch'), 'launch', 'rtabmap.launch.py')
        ),
        launch_arguments={
            'rgb_topic': '/camera/color/image_raw',
            'depth_topic': '/camera/depth/image_raw',
            'camera_info_topic': '/camera/color/camera_info',
            'frame_id': 'base_link',
            'approx_sync': 'true',
            'rtabmap_mode': 'false', # 我们只进行里程计计算，不建图
            'odom_topic': '/state_estimation', # 将输出重命名为pathFollower需要的话题
            'use_sim_time': use_sim_time
        }.items()
    )

    # --- 4. 启动您的适配器和地形分析 ---
    # 假设您的适配器节点在'pointcloud_adapter'包中
    start_pointcloud_adapter = Node(
        package='pointcloud_adapter', 
        executable='pointcloud_adapter_node',
        name='pointcloud_adapter',
        output='screen'
    )

    # 包含terrain_analysis功能包的launch文件
    start_terrain_analysis = IncludeLaunchDescription(
        FrontendLaunchDescriptionSource(
            os.path.join(get_package_share_directory('terrain_analysis'), 'launch', 'terrain_analysis.launch') # 假设其launch文件就是这个名字
        )
    )

    # 包含terrain_analysis_ext功能包的launch文件
    start_terrain_analysis_ext = IncludeLaunchDescription(
        FrontendLaunchDescriptionSource(
            os.path.join(get_package_share_directory('terrain_analysis_ext'), 'launch', 'terrain_analysis_ext.launch') # 假设其launch文件就是这个名字
        )
    )

    # --- 5. 启动局部规划器和路径跟随器 ---
    # 根据您的信息，这两个节点都由local_planner.launch启动
    start_local_planner_stack = IncludeLaunchDescription(
        FrontendLaunchDescriptionSource(
            os.path.join(get_package_share_directory('local_planner'), 'launch', 'local_planner.launch')
        )
    )
    
    # --- 6. 启动手柄节点 ---
    # 用于手动控制和模式切换
    start_joy_node = Node(
        package='joy',
        executable='joy_node',
        name='joy_node',
        output='screen'
    )

    # --- 7. (可选，但强烈推荐) 启动RViz ---
    # 用于可视化所有数据，进行调试
    rviz_config_file = os.path.join(get_package_share_directory('robot_bringup'), 'rviz', 'navigation_test.rviz') # 假设您有一个rviz配置文件
    start_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_file],
        output='screen'
    )


    return LaunchDescription([
        DeclareLaunchArgument('use_sim_time', default_value='false', description='Use simulation (Gazebo) clock if true'),
        
        # 启动顺序可以根据依赖关系调整，但通常没问题
        start_static_tf,
        start_rtabmap_odom,
        start_pointcloud_adapter,
        start_terrain_analysis,
        start_terrain_analysis_ext,
        start_local_planner_stack,
        start_joy_node,
        #start_rviz # 如果您暂时不想启动RViz，可以注释掉这一行
    ])
