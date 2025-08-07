#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped, Point
from visualization_msgs.msg import Marker
from std_srvs.srv import Empty

class RvizPathPublisher(Node):
    def __init__(self):
        super().__init__('rviz_path_publisher_node')
        
        # 订阅RViz "2D Nav Goal"工具发布的目标点
        self.goal_sub = self.create_subscription(
            PoseStamped,
            '/goal_pose',
            self.goal_callback,
            10)
        
        # 创建路径发布者
        self.path_pub = self.create_publisher(Path, '/path', 10)
        
        # 创建一个可视化标记的发布者，以便在RViz中看到我们点下的路径点
        self.marker_pub = self.create_publisher(Marker, '/path_waypoints', 10)
        
        # 创建一个服务，让我们可以通过命令行或按钮来触发“发布路径”和“清除路径”
        self.publish_path_service = self.create_service(Empty, 'publish_path', self.publish_path_callback)
        self.clear_path_service = self.create_service(Empty, 'clear_path', self.clear_path_callback)

        self.waypoints = []
        self.get_logger().info("Rviz Interactive Path Publisher is ready.")
        self.get_logger().info("Use the '2D Nav Goal' tool in RViz to add waypoints.")
        self.get_logger().info("Call '/publish_path' service to publish the path.")
        self.get_logger().info("Call '/clear_path' service to clear waypoints.")

    def goal_callback(self, msg: PoseStamped):
        """当在RViz中点击一个目标点时，此函数被调用"""
        self.waypoints.append(msg)
        self.get_logger().info(f"Waypoint {len(self.waypoints)} added at (x={msg.pose.position.x:.2f}, y={msg.pose.position.y:.2f})")
        self.visualize_waypoints()

    def publish_path_callback(self, request, response):
        """当'publish_path'服务被调用时，发布路径"""
        if not self.waypoints:
            self.get_logger().warn("No waypoints to publish.")
            return response

        path_msg = Path()
        path_msg.header.stamp = self.get_clock().now().to_msg()
        path_msg.header.frame_id = self.waypoints[0].header.frame_id # 使用第一个点的frame_id
        path_msg.poses = self.waypoints

        self.path_pub.publish(path_msg)
        self.get_logger().info(f"Published path with {len(self.waypoints)} waypoints.")
        return response

    def clear_path_callback(self, request, response):
        """当'clear_path'服务被调用时，清除路径点"""
        self.get_logger().info("Clearing all waypoints.")
        self.waypoints = []
        self.visualize_waypoints() # 清除可视化标记
        return response

    def visualize_waypoints(self):
        """在RViz中显示我们已经点击的路径点"""
        marker = Marker()
        marker.header.frame_id = "map" if not self.waypoints else self.waypoints[0].header.frame_id
        marker.header.stamp = self.get_clock().now().to_msg()
        marker.ns = "waypoints"
        marker.id = 0
        marker.type = Marker.SPHERE_LIST
        marker.action = Marker.ADD
        marker.scale.x = 0.2
        marker.scale.y = 0.2
        marker.scale.z = 0.2
        marker.color.a = 1.0
        marker.color.r = 1.0
        marker.color.g = 0.0
        marker.color.b = 1.0 # 紫色

        # 如果没有点了，发布一个空的marker来清除显示
        if not self.waypoints:
             marker.action = Marker.DELETEALL
        else:
            for pose_stamped in self.waypoints:
                marker.points.append(pose_stamped.pose.position)

        self.marker_pub.publish(marker)

def main(args=None):
    rclpy.init(args=args)
    node = RvizPathPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()