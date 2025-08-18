// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "arise_slam_mid360_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__struct.h"
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__functions.h"
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

#include "sensor_msgs/msg/detail/point_cloud2__functions.h"  // cloud_corner, cloud_nodistortion, cloud_realsense, cloud_surface
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arise_slam_mid360_msgs
size_t get_serialized_size_sensor_msgs__msg__PointCloud2(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arise_slam_mid360_msgs
size_t max_serialized_size_sensor_msgs__msg__PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_arise_slam_mid360_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2)();
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


using _LaserFeature__ros_msg_type = arise_slam_mid360_msgs__msg__LaserFeature;

static bool _LaserFeature__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LaserFeature__ros_msg_type * ros_message = static_cast<const _LaserFeature__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sensor
  {
    cdr << ros_message->sensor;
  }

  // Field name: imu_available
  {
    cdr << ros_message->imu_available;
  }

  // Field name: odom_available
  {
    cdr << ros_message->odom_available;
  }

  // Field name: imu_quaternion_x
  {
    cdr << ros_message->imu_quaternion_x;
  }

  // Field name: imu_quaternion_y
  {
    cdr << ros_message->imu_quaternion_y;
  }

  // Field name: imu_quaternion_z
  {
    cdr << ros_message->imu_quaternion_z;
  }

  // Field name: imu_quaternion_w
  {
    cdr << ros_message->imu_quaternion_w;
  }

  // Field name: initial_pose_x
  {
    cdr << ros_message->initial_pose_x;
  }

  // Field name: initial_pose_y
  {
    cdr << ros_message->initial_pose_y;
  }

  // Field name: initial_pose_z
  {
    cdr << ros_message->initial_pose_z;
  }

  // Field name: initial_quaternion_x
  {
    cdr << ros_message->initial_quaternion_x;
  }

  // Field name: initial_quaternion_y
  {
    cdr << ros_message->initial_quaternion_y;
  }

  // Field name: initial_quaternion_z
  {
    cdr << ros_message->initial_quaternion_z;
  }

  // Field name: initial_quaternion_w
  {
    cdr << ros_message->initial_quaternion_w;
  }

  // Field name: imu_preintegration_reset_id
  {
    cdr << ros_message->imu_preintegration_reset_id;
  }

  // Field name: cloud_nodistortion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cloud_nodistortion, cdr))
    {
      return false;
    }
  }

  // Field name: cloud_corner
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cloud_corner, cdr))
    {
      return false;
    }
  }

  // Field name: cloud_surface
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cloud_surface, cdr))
    {
      return false;
    }
  }

  // Field name: cloud_realsense
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->cloud_realsense, cdr))
    {
      return false;
    }
  }

  return true;
}

static bool _LaserFeature__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LaserFeature__ros_msg_type * ros_message = static_cast<_LaserFeature__ros_msg_type *>(untyped_ros_message);
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

  // Field name: sensor
  {
    cdr >> ros_message->sensor;
  }

  // Field name: imu_available
  {
    cdr >> ros_message->imu_available;
  }

  // Field name: odom_available
  {
    cdr >> ros_message->odom_available;
  }

  // Field name: imu_quaternion_x
  {
    cdr >> ros_message->imu_quaternion_x;
  }

  // Field name: imu_quaternion_y
  {
    cdr >> ros_message->imu_quaternion_y;
  }

  // Field name: imu_quaternion_z
  {
    cdr >> ros_message->imu_quaternion_z;
  }

  // Field name: imu_quaternion_w
  {
    cdr >> ros_message->imu_quaternion_w;
  }

  // Field name: initial_pose_x
  {
    cdr >> ros_message->initial_pose_x;
  }

  // Field name: initial_pose_y
  {
    cdr >> ros_message->initial_pose_y;
  }

  // Field name: initial_pose_z
  {
    cdr >> ros_message->initial_pose_z;
  }

  // Field name: initial_quaternion_x
  {
    cdr >> ros_message->initial_quaternion_x;
  }

  // Field name: initial_quaternion_y
  {
    cdr >> ros_message->initial_quaternion_y;
  }

  // Field name: initial_quaternion_z
  {
    cdr >> ros_message->initial_quaternion_z;
  }

  // Field name: initial_quaternion_w
  {
    cdr >> ros_message->initial_quaternion_w;
  }

  // Field name: imu_preintegration_reset_id
  {
    cdr >> ros_message->imu_preintegration_reset_id;
  }

  // Field name: cloud_nodistortion
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cloud_nodistortion))
    {
      return false;
    }
  }

  // Field name: cloud_corner
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cloud_corner))
    {
      return false;
    }
  }

  // Field name: cloud_surface
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cloud_surface))
    {
      return false;
    }
  }

  // Field name: cloud_realsense
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, sensor_msgs, msg, PointCloud2
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->cloud_realsense))
    {
      return false;
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arise_slam_mid360_msgs
size_t get_serialized_size_arise_slam_mid360_msgs__msg__LaserFeature(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LaserFeature__ros_msg_type * ros_message = static_cast<const _LaserFeature__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name sensor
  {
    size_t item_size = sizeof(ros_message->sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_available
  {
    size_t item_size = sizeof(ros_message->imu_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name odom_available
  {
    size_t item_size = sizeof(ros_message->odom_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_quaternion_x
  {
    size_t item_size = sizeof(ros_message->imu_quaternion_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_quaternion_y
  {
    size_t item_size = sizeof(ros_message->imu_quaternion_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_quaternion_z
  {
    size_t item_size = sizeof(ros_message->imu_quaternion_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_quaternion_w
  {
    size_t item_size = sizeof(ros_message->imu_quaternion_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_pose_x
  {
    size_t item_size = sizeof(ros_message->initial_pose_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_pose_y
  {
    size_t item_size = sizeof(ros_message->initial_pose_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_pose_z
  {
    size_t item_size = sizeof(ros_message->initial_pose_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_quaternion_x
  {
    size_t item_size = sizeof(ros_message->initial_quaternion_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_quaternion_y
  {
    size_t item_size = sizeof(ros_message->initial_quaternion_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_quaternion_z
  {
    size_t item_size = sizeof(ros_message->initial_quaternion_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name initial_quaternion_w
  {
    size_t item_size = sizeof(ros_message->initial_quaternion_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name imu_preintegration_reset_id
  {
    size_t item_size = sizeof(ros_message->imu_preintegration_reset_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cloud_nodistortion

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->cloud_nodistortion), current_alignment);
  // field.name cloud_corner

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->cloud_corner), current_alignment);
  // field.name cloud_surface

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->cloud_surface), current_alignment);
  // field.name cloud_realsense

  current_alignment += get_serialized_size_sensor_msgs__msg__PointCloud2(
    &(ros_message->cloud_realsense), current_alignment);

  return current_alignment - initial_alignment;
}

static uint32_t _LaserFeature__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_arise_slam_mid360_msgs__msg__LaserFeature(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_arise_slam_mid360_msgs
size_t max_serialized_size_arise_slam_mid360_msgs__msg__LaserFeature(
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
  // member: sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: odom_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_quaternion_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_quaternion_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_quaternion_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_quaternion_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: initial_pose_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: initial_pose_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: initial_pose_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: initial_quaternion_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: initial_quaternion_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: initial_quaternion_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: initial_quaternion_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: imu_preintegration_reset_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cloud_nodistortion
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cloud_corner
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cloud_surface
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: cloud_realsense
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_sensor_msgs__msg__PointCloud2(
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
    using DataType = arise_slam_mid360_msgs__msg__LaserFeature;
    is_plain =
      (
      offsetof(DataType, cloud_realsense) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LaserFeature__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_arise_slam_mid360_msgs__msg__LaserFeature(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LaserFeature = {
  "arise_slam_mid360_msgs::msg",
  "LaserFeature",
  _LaserFeature__cdr_serialize,
  _LaserFeature__cdr_deserialize,
  _LaserFeature__get_serialized_size,
  _LaserFeature__max_serialized_size
};

static rosidl_message_type_support_t _LaserFeature__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LaserFeature,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, arise_slam_mid360_msgs, msg, LaserFeature)() {
  return &_LaserFeature__type_support;
}

#if defined(__cplusplus)
}
#endif
