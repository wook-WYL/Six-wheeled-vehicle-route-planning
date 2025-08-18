// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arise_slam_mid360_msgs:msg/IterationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__TRAITS_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace arise_slam_mid360_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IterationStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: translation_norm
  {
    out << "translation_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_norm, out);
    out << ", ";
  }

  // member: rotation_norm
  {
    out << "rotation_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_norm, out);
    out << ", ";
  }

  // member: num_surf_from_scan
  {
    out << "num_surf_from_scan: ";
    rosidl_generator_traits::value_to_yaml(msg.num_surf_from_scan, out);
    out << ", ";
  }

  // member: num_corner_from_scan
  {
    out << "num_corner_from_scan: ";
    rosidl_generator_traits::value_to_yaml(msg.num_corner_from_scan, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IterationStats & msg,
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

  // member: translation_norm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_norm, out);
    out << "\n";
  }

  // member: rotation_norm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_norm: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_norm, out);
    out << "\n";
  }

  // member: num_surf_from_scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_surf_from_scan: ";
    rosidl_generator_traits::value_to_yaml(msg.num_surf_from_scan, out);
    out << "\n";
  }

  // member: num_corner_from_scan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_corner_from_scan: ";
    rosidl_generator_traits::value_to_yaml(msg.num_corner_from_scan, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IterationStats & msg, bool use_flow_style = false)
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
  const arise_slam_mid360_msgs::msg::IterationStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  arise_slam_mid360_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arise_slam_mid360_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arise_slam_mid360_msgs::msg::IterationStats & msg)
{
  return arise_slam_mid360_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arise_slam_mid360_msgs::msg::IterationStats>()
{
  return "arise_slam_mid360_msgs::msg::IterationStats";
}

template<>
inline const char * name<arise_slam_mid360_msgs::msg::IterationStats>()
{
  return "arise_slam_mid360_msgs/msg/IterationStats";
}

template<>
struct has_fixed_size<arise_slam_mid360_msgs::msg::IterationStats>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<arise_slam_mid360_msgs::msg::IterationStats>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<arise_slam_mid360_msgs::msg::IterationStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__TRAITS_HPP_
