// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__BUILDER_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arise_slam_mid360_msgs/msg/detail/laser_feature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arise_slam_mid360_msgs
{

namespace msg
{

namespace builder
{

class Init_LaserFeature_cloud_realsense
{
public:
  explicit Init_LaserFeature_cloud_realsense(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  ::arise_slam_mid360_msgs::msg::LaserFeature cloud_realsense(::arise_slam_mid360_msgs::msg::LaserFeature::_cloud_realsense_type arg)
  {
    msg_.cloud_realsense = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_cloud_surface
{
public:
  explicit Init_LaserFeature_cloud_surface(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_cloud_realsense cloud_surface(::arise_slam_mid360_msgs::msg::LaserFeature::_cloud_surface_type arg)
  {
    msg_.cloud_surface = std::move(arg);
    return Init_LaserFeature_cloud_realsense(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_cloud_corner
{
public:
  explicit Init_LaserFeature_cloud_corner(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_cloud_surface cloud_corner(::arise_slam_mid360_msgs::msg::LaserFeature::_cloud_corner_type arg)
  {
    msg_.cloud_corner = std::move(arg);
    return Init_LaserFeature_cloud_surface(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_cloud_nodistortion
{
public:
  explicit Init_LaserFeature_cloud_nodistortion(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_cloud_corner cloud_nodistortion(::arise_slam_mid360_msgs::msg::LaserFeature::_cloud_nodistortion_type arg)
  {
    msg_.cloud_nodistortion = std::move(arg);
    return Init_LaserFeature_cloud_corner(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_imu_preintegration_reset_id
{
public:
  explicit Init_LaserFeature_imu_preintegration_reset_id(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_cloud_nodistortion imu_preintegration_reset_id(::arise_slam_mid360_msgs::msg::LaserFeature::_imu_preintegration_reset_id_type arg)
  {
    msg_.imu_preintegration_reset_id = std::move(arg);
    return Init_LaserFeature_cloud_nodistortion(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_initial_quaternion_w
{
public:
  explicit Init_LaserFeature_initial_quaternion_w(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_imu_preintegration_reset_id initial_quaternion_w(::arise_slam_mid360_msgs::msg::LaserFeature::_initial_quaternion_w_type arg)
  {
    msg_.initial_quaternion_w = std::move(arg);
    return Init_LaserFeature_imu_preintegration_reset_id(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_initial_quaternion_z
{
public:
  explicit Init_LaserFeature_initial_quaternion_z(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_initial_quaternion_w initial_quaternion_z(::arise_slam_mid360_msgs::msg::LaserFeature::_initial_quaternion_z_type arg)
  {
    msg_.initial_quaternion_z = std::move(arg);
    return Init_LaserFeature_initial_quaternion_w(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_initial_quaternion_y
{
public:
  explicit Init_LaserFeature_initial_quaternion_y(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_initial_quaternion_z initial_quaternion_y(::arise_slam_mid360_msgs::msg::LaserFeature::_initial_quaternion_y_type arg)
  {
    msg_.initial_quaternion_y = std::move(arg);
    return Init_LaserFeature_initial_quaternion_z(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_initial_quaternion_x
{
public:
  explicit Init_LaserFeature_initial_quaternion_x(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_initial_quaternion_y initial_quaternion_x(::arise_slam_mid360_msgs::msg::LaserFeature::_initial_quaternion_x_type arg)
  {
    msg_.initial_quaternion_x = std::move(arg);
    return Init_LaserFeature_initial_quaternion_y(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_initial_pose_z
{
public:
  explicit Init_LaserFeature_initial_pose_z(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_initial_quaternion_x initial_pose_z(::arise_slam_mid360_msgs::msg::LaserFeature::_initial_pose_z_type arg)
  {
    msg_.initial_pose_z = std::move(arg);
    return Init_LaserFeature_initial_quaternion_x(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_initial_pose_y
{
public:
  explicit Init_LaserFeature_initial_pose_y(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_initial_pose_z initial_pose_y(::arise_slam_mid360_msgs::msg::LaserFeature::_initial_pose_y_type arg)
  {
    msg_.initial_pose_y = std::move(arg);
    return Init_LaserFeature_initial_pose_z(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_initial_pose_x
{
public:
  explicit Init_LaserFeature_initial_pose_x(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_initial_pose_y initial_pose_x(::arise_slam_mid360_msgs::msg::LaserFeature::_initial_pose_x_type arg)
  {
    msg_.initial_pose_x = std::move(arg);
    return Init_LaserFeature_initial_pose_y(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_imu_quaternion_w
{
public:
  explicit Init_LaserFeature_imu_quaternion_w(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_initial_pose_x imu_quaternion_w(::arise_slam_mid360_msgs::msg::LaserFeature::_imu_quaternion_w_type arg)
  {
    msg_.imu_quaternion_w = std::move(arg);
    return Init_LaserFeature_initial_pose_x(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_imu_quaternion_z
{
public:
  explicit Init_LaserFeature_imu_quaternion_z(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_imu_quaternion_w imu_quaternion_z(::arise_slam_mid360_msgs::msg::LaserFeature::_imu_quaternion_z_type arg)
  {
    msg_.imu_quaternion_z = std::move(arg);
    return Init_LaserFeature_imu_quaternion_w(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_imu_quaternion_y
{
public:
  explicit Init_LaserFeature_imu_quaternion_y(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_imu_quaternion_z imu_quaternion_y(::arise_slam_mid360_msgs::msg::LaserFeature::_imu_quaternion_y_type arg)
  {
    msg_.imu_quaternion_y = std::move(arg);
    return Init_LaserFeature_imu_quaternion_z(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_imu_quaternion_x
{
public:
  explicit Init_LaserFeature_imu_quaternion_x(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_imu_quaternion_y imu_quaternion_x(::arise_slam_mid360_msgs::msg::LaserFeature::_imu_quaternion_x_type arg)
  {
    msg_.imu_quaternion_x = std::move(arg);
    return Init_LaserFeature_imu_quaternion_y(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_odom_available
{
public:
  explicit Init_LaserFeature_odom_available(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_imu_quaternion_x odom_available(::arise_slam_mid360_msgs::msg::LaserFeature::_odom_available_type arg)
  {
    msg_.odom_available = std::move(arg);
    return Init_LaserFeature_imu_quaternion_x(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_imu_available
{
public:
  explicit Init_LaserFeature_imu_available(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_odom_available imu_available(::arise_slam_mid360_msgs::msg::LaserFeature::_imu_available_type arg)
  {
    msg_.imu_available = std::move(arg);
    return Init_LaserFeature_odom_available(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_sensor
{
public:
  explicit Init_LaserFeature_sensor(::arise_slam_mid360_msgs::msg::LaserFeature & msg)
  : msg_(msg)
  {}
  Init_LaserFeature_imu_available sensor(::arise_slam_mid360_msgs::msg::LaserFeature::_sensor_type arg)
  {
    msg_.sensor = std::move(arg);
    return Init_LaserFeature_imu_available(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

class Init_LaserFeature_header
{
public:
  Init_LaserFeature_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaserFeature_sensor header(::arise_slam_mid360_msgs::msg::LaserFeature::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_LaserFeature_sensor(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::LaserFeature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arise_slam_mid360_msgs::msg::LaserFeature>()
{
  return arise_slam_mid360_msgs::msg::builder::Init_LaserFeature_header();
}

}  // namespace arise_slam_mid360_msgs

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__BUILDER_HPP_
