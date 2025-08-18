// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arise_slam_mid360_msgs:msg/IterationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__BUILDER_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arise_slam_mid360_msgs
{

namespace msg
{

namespace builder
{

class Init_IterationStats_num_corner_from_scan
{
public:
  explicit Init_IterationStats_num_corner_from_scan(::arise_slam_mid360_msgs::msg::IterationStats & msg)
  : msg_(msg)
  {}
  ::arise_slam_mid360_msgs::msg::IterationStats num_corner_from_scan(::arise_slam_mid360_msgs::msg::IterationStats::_num_corner_from_scan_type arg)
  {
    msg_.num_corner_from_scan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::IterationStats msg_;
};

class Init_IterationStats_num_surf_from_scan
{
public:
  explicit Init_IterationStats_num_surf_from_scan(::arise_slam_mid360_msgs::msg::IterationStats & msg)
  : msg_(msg)
  {}
  Init_IterationStats_num_corner_from_scan num_surf_from_scan(::arise_slam_mid360_msgs::msg::IterationStats::_num_surf_from_scan_type arg)
  {
    msg_.num_surf_from_scan = std::move(arg);
    return Init_IterationStats_num_corner_from_scan(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::IterationStats msg_;
};

class Init_IterationStats_rotation_norm
{
public:
  explicit Init_IterationStats_rotation_norm(::arise_slam_mid360_msgs::msg::IterationStats & msg)
  : msg_(msg)
  {}
  Init_IterationStats_num_surf_from_scan rotation_norm(::arise_slam_mid360_msgs::msg::IterationStats::_rotation_norm_type arg)
  {
    msg_.rotation_norm = std::move(arg);
    return Init_IterationStats_num_surf_from_scan(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::IterationStats msg_;
};

class Init_IterationStats_translation_norm
{
public:
  explicit Init_IterationStats_translation_norm(::arise_slam_mid360_msgs::msg::IterationStats & msg)
  : msg_(msg)
  {}
  Init_IterationStats_rotation_norm translation_norm(::arise_slam_mid360_msgs::msg::IterationStats::_translation_norm_type arg)
  {
    msg_.translation_norm = std::move(arg);
    return Init_IterationStats_rotation_norm(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::IterationStats msg_;
};

class Init_IterationStats_header
{
public:
  Init_IterationStats_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IterationStats_translation_norm header(::arise_slam_mid360_msgs::msg::IterationStats::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_IterationStats_translation_norm(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::IterationStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arise_slam_mid360_msgs::msg::IterationStats>()
{
  return arise_slam_mid360_msgs::msg::builder::Init_IterationStats_header();
}

}  // namespace arise_slam_mid360_msgs

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__BUILDER_HPP_
