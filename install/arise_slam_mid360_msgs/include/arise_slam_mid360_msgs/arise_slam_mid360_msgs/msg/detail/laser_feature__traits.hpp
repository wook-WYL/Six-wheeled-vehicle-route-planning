// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__TRAITS_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arise_slam_mid360_msgs/msg/detail/laser_feature__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'cloud_nodistortion'
// Member 'cloud_corner'
// Member 'cloud_surface'
// Member 'cloud_realsense'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"

namespace arise_slam_mid360_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaserFeature & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: sensor
  {
    out << "sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor, out);
    out << ", ";
  }

  // member: imu_available
  {
    out << "imu_available: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_available, out);
    out << ", ";
  }

  // member: odom_available
  {
    out << "odom_available: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_available, out);
    out << ", ";
  }

  // member: imu_quaternion_x
  {
    out << "imu_quaternion_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_quaternion_x, out);
    out << ", ";
  }

  // member: imu_quaternion_y
  {
    out << "imu_quaternion_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_quaternion_y, out);
    out << ", ";
  }

  // member: imu_quaternion_z
  {
    out << "imu_quaternion_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_quaternion_z, out);
    out << ", ";
  }

  // member: imu_quaternion_w
  {
    out << "imu_quaternion_w: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_quaternion_w, out);
    out << ", ";
  }

  // member: initial_pose_x
  {
    out << "initial_pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_pose_x, out);
    out << ", ";
  }

  // member: initial_pose_y
  {
    out << "initial_pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_pose_y, out);
    out << ", ";
  }

  // member: initial_pose_z
  {
    out << "initial_pose_z: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_pose_z, out);
    out << ", ";
  }

  // member: initial_quaternion_x
  {
    out << "initial_quaternion_x: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_quaternion_x, out);
    out << ", ";
  }

  // member: initial_quaternion_y
  {
    out << "initial_quaternion_y: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_quaternion_y, out);
    out << ", ";
  }

  // member: initial_quaternion_z
  {
    out << "initial_quaternion_z: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_quaternion_z, out);
    out << ", ";
  }

  // member: initial_quaternion_w
  {
    out << "initial_quaternion_w: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_quaternion_w, out);
    out << ", ";
  }

  // member: imu_preintegration_reset_id
  {
    out << "imu_preintegration_reset_id: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_preintegration_reset_id, out);
    out << ", ";
  }

  // member: cloud_nodistortion
  {
    out << "cloud_nodistortion: ";
    to_flow_style_yaml(msg.cloud_nodistortion, out);
    out << ", ";
  }

  // member: cloud_corner
  {
    out << "cloud_corner: ";
    to_flow_style_yaml(msg.cloud_corner, out);
    out << ", ";
  }

  // member: cloud_surface
  {
    out << "cloud_surface: ";
    to_flow_style_yaml(msg.cloud_surface, out);
    out << ", ";
  }

  // member: cloud_realsense
  {
    out << "cloud_realsense: ";
    to_flow_style_yaml(msg.cloud_realsense, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaserFeature & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: sensor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor, out);
    out << "\n";
  }

  // member: imu_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_available: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_available, out);
    out << "\n";
  }

  // member: odom_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_available: ";
    rosidl_generator_traits::value_to_yaml(msg.odom_available, out);
    out << "\n";
  }

  // member: imu_quaternion_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_quaternion_x: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_quaternion_x, out);
    out << "\n";
  }

  // member: imu_quaternion_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_quaternion_y: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_quaternion_y, out);
    out << "\n";
  }

  // member: imu_quaternion_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_quaternion_z: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_quaternion_z, out);
    out << "\n";
  }

  // member: imu_quaternion_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_quaternion_w: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_quaternion_w, out);
    out << "\n";
  }

  // member: initial_pose_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_pose_x: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_pose_x, out);
    out << "\n";
  }

  // member: initial_pose_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_pose_y: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_pose_y, out);
    out << "\n";
  }

  // member: initial_pose_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_pose_z: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_pose_z, out);
    out << "\n";
  }

  // member: initial_quaternion_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_quaternion_x: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_quaternion_x, out);
    out << "\n";
  }

  // member: initial_quaternion_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_quaternion_y: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_quaternion_y, out);
    out << "\n";
  }

  // member: initial_quaternion_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_quaternion_z: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_quaternion_z, out);
    out << "\n";
  }

  // member: initial_quaternion_w
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "initial_quaternion_w: ";
    rosidl_generator_traits::value_to_yaml(msg.initial_quaternion_w, out);
    out << "\n";
  }

  // member: imu_preintegration_reset_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_preintegration_reset_id: ";
    rosidl_generator_traits::value_to_yaml(msg.imu_preintegration_reset_id, out);
    out << "\n";
  }

  // member: cloud_nodistortion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud_nodistortion:\n";
    to_block_style_yaml(msg.cloud_nodistortion, out, indentation + 2);
  }

  // member: cloud_corner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud_corner:\n";
    to_block_style_yaml(msg.cloud_corner, out, indentation + 2);
  }

  // member: cloud_surface
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud_surface:\n";
    to_block_style_yaml(msg.cloud_surface, out, indentation + 2);
  }

  // member: cloud_realsense
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud_realsense:\n";
    to_block_style_yaml(msg.cloud_realsense, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaserFeature & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace arise_slam_mid360_msgs

namespace rosidl_generator_traits
{

[[deprecated("use arise_slam_mid360_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const arise_slam_mid360_msgs::msg::LaserFeature & msg,
  std::ostream & out, size_t indentation = 0)
{
  arise_slam_mid360_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arise_slam_mid360_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arise_slam_mid360_msgs::msg::LaserFeature & msg)
{
  return arise_slam_mid360_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arise_slam_mid360_msgs::msg::LaserFeature>()
{
  return "arise_slam_mid360_msgs::msg::LaserFeature";
}

template<>
inline const char * name<arise_slam_mid360_msgs::msg::LaserFeature>()
{
  return "arise_slam_mid360_msgs/msg/LaserFeature";
}

template<>
struct has_fixed_size<arise_slam_mid360_msgs::msg::LaserFeature>
  : std::integral_constant<bool, has_fixed_size<sensor_msgs::msg::PointCloud2>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<arise_slam_mid360_msgs::msg::LaserFeature>
  : std::integral_constant<bool, has_bounded_size<sensor_msgs::msg::PointCloud2>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<arise_slam_mid360_msgs::msg::LaserFeature>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__TRAITS_HPP_
