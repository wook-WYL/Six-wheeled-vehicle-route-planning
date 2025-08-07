#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped

class PathPublisherOnce(Node):
    """
    这个节点只发布一次简单的直线路径，然后就保持静默。
    这用于正确地测试路径跟随能力，避免重复发布导致逻辑重置。
    """
    def __init__(self):
        super().__init__('path_publisher_once_node')
        self.publisher_ = self.create_publisher(Path, '/path', 10)
        
        # 我们不再使用持续的定时器，而是用一个一次性的定时器来确保发布时网络已经准备好
        self.timer = self.create_timer(1.0, self.publish_path_and_shutdown)
        
        self.get_logger().info('Path Publisher (Once) Node has been started.')
        self.get_logger().info('Will publish a straight path to /path in 1 second and then stop.')

    def publish_path_and_shutdown(self):
        path_msg = Path()
        path_msg.header.stamp = self.get_clock().now().to_msg()
        path_msg.header.frame_id = 'odom'  # 确保这个坐标系与你的定位系统一致

        # 创建一个从(0,0)到(5,0)的直线路径
        poses_list = []
        for i in range(51): # 5米长的路径，每0.1米一个点
            pose = PoseStamped()
            pose.header = path_msg.header
            pose.pose.position.x = float(i) * 0.1
            pose.pose.position.y = 0.0
            pose.pose.orientation.w = 1.0
            poses_list.append(pose)

        path_msg.poses = poses_list
        self.publisher_.publish(path_msg)
        self.get_logger().info('Path has been published successfully with %d poses.' % len(path_msg.poses))
        
        # 销毁定时器并关闭节点，以防止重复发布
        self.get_logger().info('Shutting down the path publisher node.')
        self.destroy_timer(self.timer)
        # rclpy.shutdown() # 或者直接让节点退出

def main(args=None):
    rclpy.init(args=args)
    path_publisher = PathPublisherOnce()
    # 我们只运行一次，所以用spin_once或者短暂spin后关闭
    try:
        # spin会让节点持续运行，直到Ctrl+C
        # 但因为我们的逻辑在定时器里，执行完后其实没事做了
        rclpy.spin(path_publisher)
    except KeyboardInterrupt:
        pass
    finally:
        path_publisher.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()