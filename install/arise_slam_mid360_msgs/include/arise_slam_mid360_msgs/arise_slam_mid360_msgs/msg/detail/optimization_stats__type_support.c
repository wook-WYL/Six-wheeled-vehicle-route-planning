// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__rosidl_typesupport_introspection_c.h"
#include "arise_slam_mid360_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__functions.h"
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `iterations`
#include "arise_slam_mid360_msgs/msg/iteration_stats.h"
// Member `iterations`
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arise_slam_mid360_msgs__msg__OptimizationStats__init(message_memory);
}

void arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_fini_function(void * message_memory)
{
  arise_slam_mid360_msgs__msg__OptimizationStats__fini(message_memory);
}

size_t arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__size_function__OptimizationStats__iterations(
  const void * untyped_member)
{
  const arise_slam_mid360_msgs__msg__IterationStats__Sequence * member =
    (const arise_slam_mid360_msgs__msg__IterationStats__Sequence *)(untyped_member);
  return member->size;
}

const void * arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__get_const_function__OptimizationStats__iterations(
  const void * untyped_member, size_t index)
{
  const arise_slam_mid360_msgs__msg__IterationStats__Sequence * member =
    (const arise_slam_mid360_msgs__msg__IterationStats__Sequence *)(untyped_member);
  return &member->data[index];
}

void * arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__get_function__OptimizationStats__iterations(
  void * untyped_member, size_t index)
{
  arise_slam_mid360_msgs__msg__IterationStats__Sequence * member =
    (arise_slam_mid360_msgs__msg__IterationStats__Sequence *)(untyped_member);
  return &member->data[index];
}

void arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__fetch_function__OptimizationStats__iterations(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const arise_slam_mid360_msgs__msg__IterationStats * item =
    ((const arise_slam_mid360_msgs__msg__IterationStats *)
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__get_const_function__OptimizationStats__iterations(untyped_member, index));
  arise_slam_mid360_msgs__msg__IterationStats * value =
    (arise_slam_mid360_msgs__msg__IterationStats *)(untyped_value);
  *value = *item;
}

void arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__assign_function__OptimizationStats__iterations(
  void * untyped_member, size_t index, const void * untyped_value)
{
  arise_slam_mid360_msgs__msg__IterationStats * item =
    ((arise_slam_mid360_msgs__msg__IterationStats *)
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__get_function__OptimizationStats__iterations(untyped_member, index));
  const arise_slam_mid360_msgs__msg__IterationStats * value =
    (const arise_slam_mid360_msgs__msg__IterationStats *)(untyped_value);
  *item = *value;
}

bool arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__resize_function__OptimizationStats__iterations(
  void * untyped_member, size_t size)
{
  arise_slam_mid360_msgs__msg__IterationStats__Sequence * member =
    (arise_slam_mid360_msgs__msg__IterationStats__Sequence *)(untyped_member);
  arise_slam_mid360_msgs__msg__IterationStats__Sequence__fini(member);
  return arise_slam_mid360_msgs__msg__IterationStats__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_member_array[28] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_cloud_surf_from_map_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, laser_cloud_surf_from_map_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_cloud_corner_from_map_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, laser_cloud_corner_from_map_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_cloud_surf_stack_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, laser_cloud_surf_stack_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "laser_cloud_corner_stack_num",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, laser_cloud_corner_stack_num),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_translation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, total_translation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "total_rotation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, total_rotation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation_from_last",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, translation_from_last),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation_from_last",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, rotation_from_last),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_elapsed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, time_elapsed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "latency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, latency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_iterations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, n_iterations),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "average_distance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, average_distance),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uncertainty_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, uncertainty_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uncertainty_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, uncertainty_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uncertainty_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, uncertainty_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uncertainty_roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, uncertainty_roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uncertainty_pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, uncertainty_pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uncertainty_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, uncertainty_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_match_success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, plane_match_success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_no_enough_neighbor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, plane_no_enough_neighbor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_neighbor_too_far",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, plane_neighbor_too_far),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_badpca_structure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, plane_badpca_structure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_invalid_numerical",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, plane_invalid_numerical),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_mse_too_large",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, plane_mse_too_large),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plane_unknown",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, plane_unknown),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "prediction_source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, prediction_source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "iterations",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__OptimizationStats, iterations),  // bytes offset in struct
    NULL,  // default value
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__size_function__OptimizationStats__iterations,  // size() function pointer
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__get_const_function__OptimizationStats__iterations,  // get_const(index) function pointer
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__get_function__OptimizationStats__iterations,  // get(index) function pointer
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__fetch_function__OptimizationStats__iterations,  // fetch(index, &value) function pointer
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__assign_function__OptimizationStats__iterations,  // assign(index, value) function pointer
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__resize_function__OptimizationStats__iterations  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_members = {
  "arise_slam_mid360_msgs__msg",  // message namespace
  "OptimizationStats",  // message name
  28,  // number of fields
  sizeof(arise_slam_mid360_msgs__msg__OptimizationStats),
  arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_member_array,  // message members
  arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_init_function,  // function to initialize message memory (memory has to be allocated)
  arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_type_support_handle = {
  0,
  &arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arise_slam_mid360_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arise_slam_mid360_msgs, msg, OptimizationStats)() {
  arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_member_array[27].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arise_slam_mid360_msgs, msg, IterationStats)();
  if (!arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_type_support_handle.typesupport_identifier) {
    arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arise_slam_mid360_msgs__msg__OptimizationStats__rosidl_typesupport_introspection_c__OptimizationStats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
