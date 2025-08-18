// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arise_slam_mid360_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__struct.h"
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__functions.h"  // iterations
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_arise_slam_mid360_msgs__msg__IterationStats(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_arise_slam_mid360_msgs__msg__IterationStats(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arise_slam_mid360_msgs, msg, IterationStats)();
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arise_slam_mid360_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arise_slam_mid360_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arise_slam_mid360_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _OptimizationStats__ros_msg_type = arise_slam_mid360_msgs__msg__OptimizationStats;

static bool _OptimizationStats__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _OptimizationStats__ros_msg_type * ros_message = static_cast<const _OptimizationStats__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: laser_cloud_surf_from_map_num
  {
    cdr << ros_message->laser_cloud_surf_from_map_num;
  }

  // Field name: laser_cloud_corner_from_map_num
  {
    cdr << ros_message->laser_cloud_corner_from_map_num;
  }

  // Field name: laser_cloud_surf_stack_num
  {
    cdr << ros_message->laser_cloud_surf_stack_num;
  }

  // Field name: laser_cloud_corner_stack_num
  {
    cdr << ros_message->laser_cloud_corner_stack_num;
  }

  // Field name: total_translation
  {
    cdr << ros_message->total_translation;
  }

  // Field name: total_rotation
  {
    cdr << ros_message->total_rotation;
  }

  // Field name: translation_from_last
  {
    cdr << ros_message->translation_from_last;
  }

  // Field name: rotation_from_last
  {
    cdr << ros_message->rotation_from_last;
  }

  // Field name: time_elapsed
  {
    cdr << ros_message->time_elapsed;
  }

  // Field name: latency
  {
    cdr << ros_message->latency;
  }

  // Field name: n_iterations
  {
    cdr << ros_message->n_iterations;
  }

  // Field name: average_distance
  {
    cdr << ros_message->average_distance;
  }

  // Field name: uncertainty_x
  {
    cdr << ros_message->uncertainty_x;
  }

  // Field name: uncertainty_y
  {
    cdr << ros_message->uncertainty_y;
  }

  // Field name: uncertainty_z
  {
    cdr << ros_message->uncertainty_z;
  }

  // Field name: uncertainty_roll
  {
    cdr << ros_message->uncertainty_roll;
  }

  // Field name: uncertainty_pitch
  {
    cdr << ros_message->uncertainty_pitch;
  }

  // Field name: uncertainty_yaw
  {
    cdr << ros_message->uncertainty_yaw;
  }

  // Field name: plane_match_success
  {
    cdr << ros_message->plane_match_success;
  }

  // Field name: plane_no_enough_neighbor
  {
    cdr << ros_message->plane_no_enough_neighbor;
  }

  // Field name: plane_neighbor_too_far
  {
    cdr << ros_message->plane_neighbor_too_far;
  }

  // Field name: plane_badpca_structure
  {
    cdr << ros_message->plane_badpca_structure;
  }

  // Field name: plane_invalid_numerical
  {
    cdr << ros_message->plane_invalid_numerical;
  }

  // Field name: plane_mse_too_large
  {
    cdr << ros_message->plane_mse_too_large;
  }

  // Field name: plane_unknown
  {
    cdr << ros_message->plane_unknown;
  }

  // Field name: prediction_source
  {
    cdr << ros_message->prediction_source;
  }

  // Field name: iterations
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, arise_slam_mid360_msgs, msg, IterationStats
      )()->data);
    size_t size = ros_message->iterations.size;
    auto array_ptr = ros_message->iterations.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _OptimizationStats__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _OptimizationStats__ros_msg_type * ros_message = static_cast<_OptimizationStats__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: laser_cloud_surf_from_map_num
  {
    cdr >> ros_message->laser_cloud_surf_from_map_num;
  }

  // Field name: laser_cloud_corner_from_map_num
  {
    cdr >> ros_message->laser_cloud_corner_from_map_num;
  }

  // Field name: laser_cloud_surf_stack_num
  {
    cdr >> ros_message->laser_cloud_surf_stack_num;
  }

  // Field name: laser_cloud_corner_stack_num
  {
    cdr >> ros_message->laser_cloud_corner_stack_num;
  }

  // Field name: total_translation
  {
    cdr >> ros_message->total_translation;
  }

  // Field name: total_rotation
  {
    cdr >> ros_message->total_rotation;
  }

  // Field name: translation_from_last
  {
    cdr >> ros_message->translation_from_last;
  }

  // Field name: rotation_from_last
  {
    cdr >> ros_message->rotation_from_last;
  }

  // Field name: time_elapsed
  {
    cdr >> ros_message->time_elapsed;
  }

  // Field name: latency
  {
    cdr >> ros_message->latency;
  }

  // Field name: n_iterations
  {
    cdr >> ros_message->n_iterations;
  }

  // Field name: average_distance
  {
    cdr >> ros_message->average_distance;
  }

  // Field name: uncertainty_x
  {
    cdr >> ros_message->uncertainty_x;
  }

  // Field name: uncertainty_y
  {
    cdr >> ros_message->uncertainty_y;
  }

  // Field name: uncertainty_z
  {
    cdr >> ros_message->uncertainty_z;
  }

  // Field name: uncertainty_roll
  {
    cdr >> ros_message->uncertainty_roll;
  }

  // Field name: uncertainty_pitch
  {
    cdr >> ros_message->uncertainty_pitch;
  }

  // Field name: uncertainty_yaw
  {
    cdr >> ros_message->uncertainty_yaw;
  }

  // Field name: plane_match_success
  {
    cdr >> ros_message->plane_match_success;
  }

  // Field name: plane_no_enough_neighbor
  {
    cdr >> ros_message->plane_no_enough_neighbor;
  }

  // Field name: plane_neighbor_too_far
  {
    cdr >> ros_message->plane_neighbor_too_far;
  }

  // Field name: plane_badpca_structure
  {
    cdr >> ros_message->plane_badpca_structure;
  }

  // Field name: plane_invalid_numerical
  {
    cdr >> ros_message->plane_invalid_numerical;
  }

  // Field name: plane_mse_too_large
  {
    cdr >> ros_message->plane_mse_too_large;
  }

  // Field name: plane_unknown
  {
    cdr >> ros_message->plane_unknown;
  }

  // Field name: prediction_source
  {
    cdr >> ros_message->prediction_source;
  }

  // Field name: iterations
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, arise_slam_mid360_msgs, msg, IterationStats
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->iterations.data) {
      arise_slam_mid360_msgs__msg__IterationStats__Sequence__fini(&ros_message->iterations);
    }
    if (!arise_slam_mid360_msgs__msg__IterationStats__Sequence__init(&ros_message->iterations, size)) {
      fprintf(stderr, "failed to create array for field 'iterations'");
      return false;
    }
    auto array_ptr = ros_message->iterations.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arise_slam_mid360_msgs
size_t get_serialized_size_arise_slam_mid360_msgs__msg__OptimizationStats(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _OptimizationStats__ros_msg_type * ros_message = static_cast<const _OptimizationStats__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name laser_cloud_surf_from_map_num
  {
    size_t item_size = sizeof(ros_message->laser_cloud_surf_from_map_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_cloud_corner_from_map_num
  {
    size_t item_size = sizeof(ros_message->laser_cloud_corner_from_map_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_cloud_surf_stack_num
  {
    size_t item_size = sizeof(ros_message->laser_cloud_surf_stack_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name laser_cloud_corner_stack_num
  {
    size_t item_size = sizeof(ros_message->laser_cloud_corner_stack_num);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_translation
  {
    size_t item_size = sizeof(ros_message->total_translation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name total_rotation
  {
    size_t item_size = sizeof(ros_message->total_rotation);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name translation_from_last
  {
    size_t item_size = sizeof(ros_message->translation_from_last);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotation_from_last
  {
    size_t item_size = sizeof(ros_message->rotation_from_last);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_elapsed
  {
    size_t item_size = sizeof(ros_message->time_elapsed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latency
  {
    size_t item_size = sizeof(ros_message->latency);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name n_iterations
  {
    size_t item_size = sizeof(ros_message->n_iterations);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name average_distance
  {
    size_t item_size = sizeof(ros_message->average_distance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uncertainty_x
  {
    size_t item_size = sizeof(ros_message->uncertainty_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uncertainty_y
  {
    size_t item_size = sizeof(ros_message->uncertainty_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uncertainty_z
  {
    size_t item_size = sizeof(ros_message->uncertainty_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uncertainty_roll
  {
    size_t item_size = sizeof(ros_message->uncertainty_roll);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uncertainty_pitch
  {
    size_t item_size = sizeof(ros_message->uncertainty_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name uncertainty_yaw
  {
    size_t item_size = sizeof(ros_message->uncertainty_yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_match_success
  {
    size_t item_size = sizeof(ros_message->plane_match_success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_no_enough_neighbor
  {
    size_t item_size = sizeof(ros_message->plane_no_enough_neighbor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_neighbor_too_far
  {
    size_t item_size = sizeof(ros_message->plane_neighbor_too_far);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_badpca_structure
  {
    size_t item_size = sizeof(ros_message->plane_badpca_structure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_invalid_numerical
  {
    size_t item_size = sizeof(ros_message->plane_invalid_numerical);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_mse_too_large
  {
    size_t item_size = sizeof(ros_message->plane_mse_too_large);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name plane_unknown
  {
    size_t item_size = sizeof(ros_message->plane_unknown);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name prediction_source
  {
    size_t item_size = sizeof(ros_message->prediction_source);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name iterations
  {
    size_t array_size = ros_message->iterations.size;
    auto array_ptr = ros_message->iterations.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_arise_slam_mid360_msgs__msg__IterationStats(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _OptimizationStats__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arise_slam_mid360_msgs__msg__OptimizationStats(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arise_slam_mid360_msgs
size_t max_serialized_size_arise_slam_mid360_msgs__msg__OptimizationStats(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: laser_cloud_surf_from_map_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: laser_cloud_corner_from_map_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: laser_cloud_surf_stack_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: laser_cloud_corner_stack_num
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: total_translation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: total_rotation
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: translation_from_last
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: rotation_from_last
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: time_elapsed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: latency
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: n_iterations
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: average_distance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uncertainty_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uncertainty_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uncertainty_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uncertainty_roll
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uncertainty_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: uncertainty_yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: plane_match_success
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plane_no_enough_neighbor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plane_neighbor_too_far
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plane_badpca_structure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plane_invalid_numerical
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plane_mse_too_large
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: plane_unknown
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: prediction_source
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: iterations
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
      size_t inner_size;
      inner_size =
        max_serialized_size_arise_slam_mid360_msgs__msg__IterationStats(
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
    using DataType = arise_slam_mid360_msgs__msg__OptimizationStats;
    is_plain =
      (
      offsetof(DataType, iterations) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _OptimizationStats__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arise_slam_mid360_msgs__msg__OptimizationStats(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_OptimizationStats = {
  "arise_slam_mid360_msgs::msg",
  "OptimizationStats",
  _OptimizationStats__cdr_serialize,
  _OptimizationStats__cdr_deserialize,
  _OptimizationStats__get_serialized_size,
  _OptimizationStats__max_serialized_size
};

static rosidl_message_type_support_t _OptimizationStats__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_OptimizationStats,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arise_slam_mid360_msgs, msg, OptimizationStats)() {
  return &_OptimizationStats__type_support;
}

#if defined(__cplusplus)
}
#endif
