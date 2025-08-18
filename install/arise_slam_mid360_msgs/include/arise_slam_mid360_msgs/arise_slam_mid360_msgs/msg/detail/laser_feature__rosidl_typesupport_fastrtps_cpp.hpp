// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "arise_slam_mid360_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace arise_slam_mid360_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
cdr_serialize(
  const arise_slam_mid360_msgs::msg::LaserFeature & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arise_slam_mid360_msgs::msg::LaserFeature & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
get_serialized_size(
  const arise_slam_mid360_msgs::msg::LaserFeature & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
max_serialized_size_LaserFeature(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace arise_slam_mid360_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arise_slam_mid360_msgs, msg, LaserFeature)();

#ifdef __cplusplus
}
#endif

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
