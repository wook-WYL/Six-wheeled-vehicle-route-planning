// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__rosidl_typesupport_fastrtps_cpp.hpp"
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace arise_slam_mid360_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const arise_slam_mid360_msgs::msg::IterationStats &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  arise_slam_mid360_msgs::msg::IterationStats &);
size_t get_serialized_size(
  const arise_slam_mid360_msgs::msg::IterationStats &,
  size_t current_alignment);
size_t
max_serialized_size_IterationStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace arise_slam_mid360_msgs


namespace arise_slam_mid360_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
cdr_serialize(
  const arise_slam_mid360_msgs::msg::OptimizationStats & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: laser_cloud_surf_from_map_num
  cdr << ros_message.laser_cloud_surf_from_map_num;
  // Member: laser_cloud_corner_from_map_num
  cdr << ros_message.laser_cloud_corner_from_map_num;
  // Member: laser_cloud_surf_stack_num
  cdr << ros_message.laser_cloud_surf_stack_num;
  // Member: laser_cloud_corner_stack_num
  cdr << ros_message.laser_cloud_corner_stack_num;
  // Member: total_translation
  cdr << ros_message.total_translation;
  // Member: total_rotation
  cdr << ros_message.total_rotation;
  // Member: translation_from_last
  cdr << ros_message.translation_from_last;
  // Member: rotation_from_last
  cdr << ros_message.rotation_from_last;
  // Member: time_elapsed
  cdr << ros_message.time_elapsed;
  // Member: latency
  cdr << ros_message.latency;
  // Member: n_iterations
  cdr << ros_message.n_iterations;
  // Member: average_distance
  cdr << ros_message.average_distance;
  // Member: uncertainty_x
  cdr << ros_message.uncertainty_x;
  // Member: uncertainty_y
  cdr << ros_message.uncertainty_y;
  // Member: uncertainty_z
  cdr << ros_message.uncertainty_z;
  // Member: uncertainty_roll
  cdr << ros_message.uncertainty_roll;
  // Member: uncertainty_pitch
  cdr << ros_message.uncertainty_pitch;
  // Member: uncertainty_yaw
  cdr << ros_message.uncertainty_yaw;
  // Member: plane_match_success
  cdr << ros_message.plane_match_success;
  // Member: plane_no_enough_neighbor
  cdr << ros_message.plane_no_enough_neighbor;
  // Member: plane_neighbor_too_far
  cdr << ros_message.plane_neighbor_too_far;
  // Member: plane_badpca_structure
  cdr << ros_message.plane_badpca_structure;
  // Member: plane_invalid_numerical
  cdr << ros_message.plane_invalid_numerical;
  // Member: plane_mse_too_large
  cdr << ros_message.plane_mse_too_large;
  // Member: plane_unknown
  cdr << ros_message.plane_unknown;
  // Member: prediction_source
  cdr << ros_message.prediction_source;
  // Member: iterations
  {
    size_t size = ros_message.iterations.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      arise_slam_mid360_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.iterations[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arise_slam_mid360_msgs::msg::OptimizationStats & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: laser_cloud_surf_from_map_num
  cdr >> ros_message.laser_cloud_surf_from_map_num;

  // Member: laser_cloud_corner_from_map_num
  cdr >> ros_message.laser_cloud_corner_from_map_num;

  // Member: laser_cloud_surf_stack_num
  cdr >> ros_message.laser_cloud_surf_stack_num;

  // Member: laser_cloud_corner_stack_num
  cdr >> ros_message.laser_cloud_corner_stack_num;

  // Member: total_translation
  cdr >> ros_message.total_translation;

  // Member: total_rotation
  cdr >> ros_message.total_rotation;

  // Member: translation_from_last
  cdr >> ros_message.translation_from_last;

  // Member: rotation_from_last
  cdr >> ros_message.rotation_from_last;

  // Member: time_elapsed
  cdr >> ros_message.time_elapsed;

  // Member: latency
  cdr >> ros_message.latency;

  // Member: n_iterations
  cdr >> ros_message.n_iterations;

  // Member: average_distance
  cdr >> ros_message.average_distance;

  // Member: uncertainty_x
  cdr >> ros_message.uncertainty_x;

  // Member: uncertainty_y
  cdr >> ros_message.uncertainty_y;

  // Member: uncertainty_z
  cdr >> ros_message.uncertainty_z;

  // Member: uncertainty_roll
  cdr >> ros_message.uncertainty_roll;

  // Member: uncertainty_pitch
  cdr >> ros_message.uncertainty_pitch;

  // Member: uncertainty_yaw
  cdr >> ros_message.uncertainty_yaw;

  // Member: plane_match_success
  cdr >> ros_message.plane_match_success;

  // Member: plane_no_enough_neighbor
  cdr >> ros_message.plane_no_enough_neighbor;

  // Member: plane_neighbor_too_far
  cdr >> ros_message.plane_neighbor_too_far;

  // Member: plane_badpca_structure
  cdr >> ros_message.plane_badpca_structure;

  // Member: plane_invalid_numerical
  cdr >> ros_message.plane_invalid_numerical;

  // Member: plane_mse_too_large
  cdr >> ros_message.plane_mse_too_large;

  // Member: plane_unknown
  cdr >> ros_message.plane_unknown;

  // Member: prediction_source
  cdr >> ros_message.prediction_source;

  // Member: iterations
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.iterations.resize(size);
    for (size_t i = 0; i < size; i++) {
      arise_slam_mid360_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.iterations[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
get_serialized_size(
  const arise_slam_mid360_msgs::msg::OptimizationStats & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: laser_cloud_surf_from_map_num
  {
    size_t item_size = sizeof(ros_message.laser_cloud_surf_from_map_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: laser_cloud_corner_from_map_num
  {
    size_t item_size = sizeof(ros_message.laser_cloud_corner_from_map_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: laser_cloud_surf_stack_num
  {
    size_t item_size = sizeof(ros_message.laser_cloud_surf_stack_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: laser_cloud_corner_stack_num
  {
    size_t item_size = sizeof(ros_message.laser_cloud_corner_stack_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_translation
  {
    size_t item_size = sizeof(ros_message.total_translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: total_rotation
  {
    size_t item_size = sizeof(ros_message.total_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: translation_from_last
  {
    size_t item_size = sizeof(ros_message.translation_from_last);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rotation_from_last
  {
    size_t item_size = sizeof(ros_message.rotation_from_last);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: time_elapsed
  {
    size_t item_size = sizeof(ros_message.time_elapsed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: latency
  {
    size_t item_size = sizeof(ros_message.latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: n_iterations
  {
    size_t item_size = sizeof(ros_message.n_iterations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: average_distance
  {
    size_t item_size = sizeof(ros_message.average_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uncertainty_x
  {
    size_t item_size = sizeof(ros_message.uncertainty_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uncertainty_y
  {
    size_t item_size = sizeof(ros_message.uncertainty_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uncertainty_z
  {
    size_t item_size = sizeof(ros_message.uncertainty_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uncertainty_roll
  {
    size_t item_size = sizeof(ros_message.uncertainty_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uncertainty_pitch
  {
    size_t item_size = sizeof(ros_message.uncertainty_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: uncertainty_yaw
  {
    size_t item_size = sizeof(ros_message.uncertainty_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_match_success
  {
    size_t item_size = sizeof(ros_message.plane_match_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_no_enough_neighbor
  {
    size_t item_size = sizeof(ros_message.plane_no_enough_neighbor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_neighbor_too_far
  {
    size_t item_size = sizeof(ros_message.plane_neighbor_too_far);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_badpca_structure
  {
    size_t item_size = sizeof(ros_message.plane_badpca_structure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_invalid_numerical
  {
    size_t item_size = sizeof(ros_message.plane_invalid_numerical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_mse_too_large
  {
    size_t item_size = sizeof(ros_message.plane_mse_too_large);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plane_unknown
  {
    size_t item_size = sizeof(ros_message.plane_unknown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: prediction_source
  {
    size_t item_size = sizeof(ros_message.prediction_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: iterations
  {
    size_t array_size = ros_message.iterations.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        arise_slam_mid360_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.iterations[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
max_serialized_size_OptimizationStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: laser_cloud_surf_from_map_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: laser_cloud_corner_from_map_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: laser_cloud_surf_stack_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: laser_cloud_corner_stack_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: total_translation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: total_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: translation_from_last
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: rotation_from_last
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: time_elapsed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: latency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: n_iterations
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: average_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uncertainty_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uncertainty_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uncertainty_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uncertainty_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uncertainty_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: uncertainty_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: plane_match_success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plane_no_enough_neighbor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plane_neighbor_too_far
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plane_badpca_structure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plane_invalid_numerical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plane_mse_too_large
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: plane_unknown
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: prediction_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: iterations
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        arise_slam_mid360_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_IterationStats(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = arise_slam_mid360_msgs::msg::OptimizationStats;
    is_plain =
      (
      offsetof(DataType, iterations) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _OptimizationStats__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const arise_slam_mid360_msgs::msg::OptimizationStats *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OptimizationStats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arise_slam_mid360_msgs::msg::OptimizationStats *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OptimizationStats__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arise_slam_mid360_msgs::msg::OptimizationStats *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OptimizationStats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_OptimizationStats(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _OptimizationStats__callbacks = {
  "arise_slam_mid360_msgs::msg",
  "OptimizationStats",
  _OptimizationStats__cdr_serialize,
  _OptimizationStats__cdr_deserialize,
  _OptimizationStats__get_serialized_size,
  _OptimizationStats__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationStats__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OptimizationStats__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace arise_slam_mid360_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_arise_slam_mid360_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<arise_slam_mid360_msgs::msg::OptimizationStats>()
{
  return &arise_slam_mid360_msgs::msg::typesupport_fastrtps_cpp::_OptimizationStats__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arise_slam_mid360_msgs, msg, OptimizationStats)() {
  return &arise_slam_mid360_msgs::msg::typesupport_fastrtps_cpp::_OptimizationStats__handle;
}

#ifdef __cplusplus
}
#endif
