# final_bringup.launch.py
import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch_ros.actions import Node
from launch.launch_description_sources import PythonLaunchDescriptionSource, FrontendLaunchDescriptionSource
def generate_launch_description():

    # --- 1. 启动原始项目的核心规划与可视化部分 ---
    # 我们包含那个被我们清理过的、位于vehicle_simulator包中的launch文件
    start_original_core = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('vehicle_simulator'), 'launch', 'system_real_robot.launch.py')
        )
        # 我们可以通过launch_arguments来传递参数，比如sensorOffsetX
        # launch_arguments={'sensorOffsetX': '0.1'}.items()
    )

    # --- 2. 启动我们自己的真实传感器和定位 ---
    start_camera = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('orbbec_camera'), 'launch', 'gemini_330_series.launch.py')
        )
    )
    
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
            'rtabmap_mode': 'false',
            'odom_topic': '/state_estimation',
             'log_level': 'info' # 设置日志级别为info
        }.items()
    )

    # --- 3. 启动我们的适配器和TF ---
    start_pointcloud_adapter = Node(
        package='pointcloud_adapter',
        executable='pointcloud_adapter_node',
        name='pointcloud_adapter'
    )
    


    # 找到原始项目用于可视化的.rviz配置文件
    rviz_config_file = os.path.join(
        get_package_share_directory('vehicle_simulator'), 'rviz', 'vehicle_simulator.rviz')

    start_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        arguments=['-d', rviz_config_file], # 使用-d参数加载配置文件
        output='screen'
    )

    # 我们需要一个TF来连接base_link和相机
    # !!! 使用您的真实测量值 !!!
    start_static_tf = Node(
        package='tf2_ros', executable='static_transform_publisher',
        arguments=['0.1', '0.0', '0.2', '0', '0', '0', 'base_link', 'camera_link']
    )

    return LaunchDescription([
        start_original_core,
        start_camera,
        start_rtabmap_odom,
        start_pointcloud_adapter,
        start_static_tf,
        start_rviz
    ])
