// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ception_msgs:msg/IMUEuler.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ception_msgs/msg/detail/imu_euler__rosidl_typesupport_introspection_c.h"
#include "ception_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ception_msgs/msg/detail/imu_euler__functions.h"
#include "ception_msgs/msg/detail/imu_euler__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ception_msgs__msg__IMUEuler__init(message_memory);
}

void ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_fini_function(void * message_memory)
{
  ception_msgs__msg__IMUEuler__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_member_array[4] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ception_msgs__msg__IMUEuler, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ception_msgs__msg__IMUEuler, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ception_msgs__msg__IMUEuler, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ception_msgs__msg__IMUEuler, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_members = {
  "ception_msgs__msg",  // message namespace
  "IMUEuler",  // message name
  4,  // number of fields
  sizeof(ception_msgs__msg__IMUEuler),
  ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_member_array,  // message members
  ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_init_function,  // function to initialize message memory (memory has to be allocated)
  ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_type_support_handle = {
  0,
  &ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ception_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ception_msgs, msg, IMUEuler)() {
  ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_type_support_handle.typesupport_identifier) {
    ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ception_msgs__msg__IMUEuler__rosidl_typesupport_introspection_c__IMUEuler_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
