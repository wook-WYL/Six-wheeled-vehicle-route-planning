# In robot_bringup/launch/test_planner_only.launch.py
import os
from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    bringup_dir = get_package_share_directory('robot_bringup')
    local_planner_dir = get_package_share_directory('local_planner')
    
    local_planner_config = os.path.join(bringup_dir, 'config', 'local_planner.yaml')

    # 只启动 local_planner
    local_planner_node = Node(
        package='local_planner',
        executable='localPlanner',
        name='local_planner',
        output='screen', # 确保能看到所有日志
        parameters=[
            local_planner_config,
            {
                'autonomyMode': True,
                'pathFolder': os.path.join(local_planner_dir, 'paths'),
                'useTerrainAnalysis': False, # <--- 关键修改！暂时不使用地形分析
                'checkObstacle': False,    # <--- 关键修改！暂时不检查障碍物
            }
        ],
        remappings=[
            ('state_estimation', '/fake_odom'),
            # terrain_map 输入暂时用不到
            #('way_point', '/clicked_point')
        ]
    )
    
    # 启动RViz以方便发布目标点
    rviz_node = Node( package='rviz2', executable='rviz2', name='rviz2' )

    return LaunchDescription([ local_planner_node, rviz_node ])