import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/wook/ros2/ros2_ws/install/ros_tcp_endpoint'
