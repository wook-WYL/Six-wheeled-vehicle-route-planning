# In robot_bringup/launch/test_planner.launch.py
import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    bringup_dir = get_package_share_directory('robot_bringup')
    local_planner_dir = get_package_share_directory('local_planner')
    
    # 只加载必要的配置文件
    local_planner_config = os.path.join(bringup_dir, 'config', 'local_planner.yaml')
    path_follower_config = os.path.join(bringup_dir, 'config', 'path_follower.yaml')

    # 只启动 local_planner 和 path_follower
    local_planner_node = Node(
        package='local_planner',
        executable='localPlanner',
        name='local_planner',
        output='screen',
        parameters=[
            local_planner_config,
            {
                'autonomyMode': True, # 强制开启自主模式
                'pathFolder': os.path.join(local_planner_dir, 'paths')
            }
        ],
        remappings=[
            # 为了测试，我们将使用“假”的输入话题
            ('state_estimation', '/fake_odom'),
            ('terrain_map', '/fake_terrain'),
            ('way_point', '/clicked_point') # 监听RViz的点击
        ]
    )

    path_follower_node = Node(
        package='local_planner',
        executable='pathFollower',
        name='path_follower',
        output='screen',
        parameters=[
            path_follower_config,
            {'operating_mode': 'autonomous'} # 强制开启自主模式
        ],
        remappings=[
            ('state_estimation', '/fake_odom')
        ]
    )
    
    # 启动RViz以方便发布目标点
    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', os.path.join(bringup_dir, 'rviz', 'test_config.rviz')] # 使用一个简单的RViz配置
    )

    return LaunchDescription([
        local_planner_node,
        path_follower_node,
        rviz_node
    ])