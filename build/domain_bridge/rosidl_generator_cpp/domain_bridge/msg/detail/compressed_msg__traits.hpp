// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from domain_bridge:msg/CompressedMsg.idl
// generated code does not contain a copyright notice

#ifndef DOMAIN_BRIDGE__MSG__DETAIL__COMPRESSED_MSG__TRAITS_HPP_
#define DOMAIN_BRIDGE__MSG__DETAIL__COMPRESSED_MSG__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "domain_bridge/msg/detail/compressed_msg__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace domain_bridge
{

namespace msg
{

inline void to_flow_style_yaml(
  const CompressedMsg & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::character_value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CompressedMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::character_value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CompressedMsg & msg, bool use_flow_style = false)
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

}  // namespace domain_bridge

namespace rosidl_generator_traits
{

[[deprecated("use domain_bridge::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const domain_bridge::msg::CompressedMsg & msg,
  std::ostream & out, size_t indentation = 0)
{
  domain_bridge::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use domain_bridge::msg::to_yaml() instead")]]
inline std::string to_yaml(const domain_bridge::msg::CompressedMsg & msg)
{
  return domain_bridge::msg::to_yaml(msg);
}

template<>
inline const char * data_type<domain_bridge::msg::CompressedMsg>()
{
  return "domain_bridge::msg::CompressedMsg";
}

template<>
inline const char * name<domain_bridge::msg::CompressedMsg>()
{
  return "domain_bridge/msg/CompressedMsg";
}

template<>
struct has_fixed_size<domain_bridge::msg::CompressedMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<domain_bridge::msg::CompressedMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<domain_bridge::msg::CompressedMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // DOMAIN_BRIDGE__MSG__DETAIL__COMPRESSED_MSG__TRAITS_HPP_
