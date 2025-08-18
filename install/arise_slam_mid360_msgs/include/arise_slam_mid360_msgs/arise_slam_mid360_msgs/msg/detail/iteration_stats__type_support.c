// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from arise_slam_mid360_msgs:msg/IterationStats.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__rosidl_typesupport_introspection_c.h"
#include "arise_slam_mid360_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__functions.h"
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  arise_slam_mid360_msgs__msg__IterationStats__init(message_memory);
}

void arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_fini_function(void * message_memory)
{
  arise_slam_mid360_msgs__msg__IterationStats__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_member_array[5] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__IterationStats, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "translation_norm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__IterationStats, translation_norm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rotation_norm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__IterationStats, rotation_norm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_surf_from_scan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__IterationStats, num_surf_from_scan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_corner_from_scan",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(arise_slam_mid360_msgs__msg__IterationStats, num_corner_from_scan),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_members = {
  "arise_slam_mid360_msgs__msg",  // message namespace
  "IterationStats",  // message name
  5,  // number of fields
  sizeof(arise_slam_mid360_msgs__msg__IterationStats),
  arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_member_array,  // message members
  arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_init_function,  // function to initialize message memory (memory has to be allocated)
  arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_type_support_handle = {
  0,
  &arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_arise_slam_mid360_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, arise_slam_mid360_msgs, msg, IterationStats)() {
  arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_type_support_handle.typesupport_identifier) {
    arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &arise_slam_mid360_msgs__msg__IterationStats__rosidl_typesupport_introspection_c__IterationStats_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
