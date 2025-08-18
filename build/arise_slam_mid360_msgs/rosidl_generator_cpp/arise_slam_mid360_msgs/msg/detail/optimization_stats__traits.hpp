// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__TRAITS_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'iterations'
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__traits.hpp"

namespace arise_slam_mid360_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OptimizationStats & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: laser_cloud_surf_from_map_num
  {
    out << "laser_cloud_surf_from_map_num: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_cloud_surf_from_map_num, out);
    out << ", ";
  }

  // member: laser_cloud_corner_from_map_num
  {
    out << "laser_cloud_corner_from_map_num: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_cloud_corner_from_map_num, out);
    out << ", ";
  }

  // member: laser_cloud_surf_stack_num
  {
    out << "laser_cloud_surf_stack_num: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_cloud_surf_stack_num, out);
    out << ", ";
  }

  // member: laser_cloud_corner_stack_num
  {
    out << "laser_cloud_corner_stack_num: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_cloud_corner_stack_num, out);
    out << ", ";
  }

  // member: total_translation
  {
    out << "total_translation: ";
    rosidl_generator_traits::value_to_yaml(msg.total_translation, out);
    out << ", ";
  }

  // member: total_rotation
  {
    out << "total_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.total_rotation, out);
    out << ", ";
  }

  // member: translation_from_last
  {
    out << "translation_from_last: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_from_last, out);
    out << ", ";
  }

  // member: rotation_from_last
  {
    out << "rotation_from_last: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_from_last, out);
    out << ", ";
  }

  // member: time_elapsed
  {
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << ", ";
  }

  // member: latency
  {
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << ", ";
  }

  // member: n_iterations
  {
    out << "n_iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.n_iterations, out);
    out << ", ";
  }

  // member: average_distance
  {
    out << "average_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.average_distance, out);
    out << ", ";
  }

  // member: uncertainty_x
  {
    out << "uncertainty_x: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_x, out);
    out << ", ";
  }

  // member: uncertainty_y
  {
    out << "uncertainty_y: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_y, out);
    out << ", ";
  }

  // member: uncertainty_z
  {
    out << "uncertainty_z: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_z, out);
    out << ", ";
  }

  // member: uncertainty_roll
  {
    out << "uncertainty_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_roll, out);
    out << ", ";
  }

  // member: uncertainty_pitch
  {
    out << "uncertainty_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_pitch, out);
    out << ", ";
  }

  // member: uncertainty_yaw
  {
    out << "uncertainty_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_yaw, out);
    out << ", ";
  }

  // member: plane_match_success
  {
    out << "plane_match_success: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_match_success, out);
    out << ", ";
  }

  // member: plane_no_enough_neighbor
  {
    out << "plane_no_enough_neighbor: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_no_enough_neighbor, out);
    out << ", ";
  }

  // member: plane_neighbor_too_far
  {
    out << "plane_neighbor_too_far: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_neighbor_too_far, out);
    out << ", ";
  }

  // member: plane_badpca_structure
  {
    out << "plane_badpca_structure: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_badpca_structure, out);
    out << ", ";
  }

  // member: plane_invalid_numerical
  {
    out << "plane_invalid_numerical: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_invalid_numerical, out);
    out << ", ";
  }

  // member: plane_mse_too_large
  {
    out << "plane_mse_too_large: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_mse_too_large, out);
    out << ", ";
  }

  // member: plane_unknown
  {
    out << "plane_unknown: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_unknown, out);
    out << ", ";
  }

  // member: prediction_source
  {
    out << "prediction_source: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_source, out);
    out << ", ";
  }

  // member: iterations
  {
    if (msg.iterations.size() == 0) {
      out << "iterations: []";
    } else {
      out << "iterations: [";
      size_t pending_items = msg.iterations.size();
      for (auto item : msg.iterations) {
        to_flow_style_yaml(item, out);
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
  const OptimizationStats & msg,
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

  // member: laser_cloud_surf_from_map_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_cloud_surf_from_map_num: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_cloud_surf_from_map_num, out);
    out << "\n";
  }

  // member: laser_cloud_corner_from_map_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_cloud_corner_from_map_num: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_cloud_corner_from_map_num, out);
    out << "\n";
  }

  // member: laser_cloud_surf_stack_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_cloud_surf_stack_num: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_cloud_surf_stack_num, out);
    out << "\n";
  }

  // member: laser_cloud_corner_stack_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "laser_cloud_corner_stack_num: ";
    rosidl_generator_traits::value_to_yaml(msg.laser_cloud_corner_stack_num, out);
    out << "\n";
  }

  // member: total_translation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_translation: ";
    rosidl_generator_traits::value_to_yaml(msg.total_translation, out);
    out << "\n";
  }

  // member: total_rotation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "total_rotation: ";
    rosidl_generator_traits::value_to_yaml(msg.total_rotation, out);
    out << "\n";
  }

  // member: translation_from_last
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "translation_from_last: ";
    rosidl_generator_traits::value_to_yaml(msg.translation_from_last, out);
    out << "\n";
  }

  // member: rotation_from_last
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rotation_from_last: ";
    rosidl_generator_traits::value_to_yaml(msg.rotation_from_last, out);
    out << "\n";
  }

  // member: time_elapsed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_elapsed: ";
    rosidl_generator_traits::value_to_yaml(msg.time_elapsed, out);
    out << "\n";
  }

  // member: latency
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latency: ";
    rosidl_generator_traits::value_to_yaml(msg.latency, out);
    out << "\n";
  }

  // member: n_iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n_iterations: ";
    rosidl_generator_traits::value_to_yaml(msg.n_iterations, out);
    out << "\n";
  }

  // member: average_distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "average_distance: ";
    rosidl_generator_traits::value_to_yaml(msg.average_distance, out);
    out << "\n";
  }

  // member: uncertainty_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty_x: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_x, out);
    out << "\n";
  }

  // member: uncertainty_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty_y: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_y, out);
    out << "\n";
  }

  // member: uncertainty_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty_z: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_z, out);
    out << "\n";
  }

  // member: uncertainty_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_roll, out);
    out << "\n";
  }

  // member: uncertainty_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_pitch, out);
    out << "\n";
  }

  // member: uncertainty_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncertainty_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.uncertainty_yaw, out);
    out << "\n";
  }

  // member: plane_match_success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_match_success: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_match_success, out);
    out << "\n";
  }

  // member: plane_no_enough_neighbor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_no_enough_neighbor: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_no_enough_neighbor, out);
    out << "\n";
  }

  // member: plane_neighbor_too_far
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_neighbor_too_far: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_neighbor_too_far, out);
    out << "\n";
  }

  // member: plane_badpca_structure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_badpca_structure: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_badpca_structure, out);
    out << "\n";
  }

  // member: plane_invalid_numerical
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_invalid_numerical: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_invalid_numerical, out);
    out << "\n";
  }

  // member: plane_mse_too_large
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_mse_too_large: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_mse_too_large, out);
    out << "\n";
  }

  // member: plane_unknown
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plane_unknown: ";
    rosidl_generator_traits::value_to_yaml(msg.plane_unknown, out);
    out << "\n";
  }

  // member: prediction_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prediction_source: ";
    rosidl_generator_traits::value_to_yaml(msg.prediction_source, out);
    out << "\n";
  }

  // member: iterations
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.iterations.size() == 0) {
      out << "iterations: []\n";
    } else {
      out << "iterations:\n";
      for (auto item : msg.iterations) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OptimizationStats & msg, bool use_flow_style = false)
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
  const arise_slam_mid360_msgs::msg::OptimizationStats & msg,
  std::ostream & out, size_t indentation = 0)
{
  arise_slam_mid360_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use arise_slam_mid360_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const arise_slam_mid360_msgs::msg::OptimizationStats & msg)
{
  return arise_slam_mid360_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<arise_slam_mid360_msgs::msg::OptimizationStats>()
{
  return "arise_slam_mid360_msgs::msg::OptimizationStats";
}

template<>
inline const char * name<arise_slam_mid360_msgs::msg::OptimizationStats>()
{
  return "arise_slam_mid360_msgs/msg/OptimizationStats";
}

template<>
struct has_fixed_size<arise_slam_mid360_msgs::msg::OptimizationStats>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<arise_slam_mid360_msgs::msg::OptimizationStats>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<arise_slam_mid360_msgs::msg::OptimizationStats>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__TRAITS_HPP_
