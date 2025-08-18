// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__rosidl_typesupport_fastrtps_cpp.hpp"
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__struct.hpp"

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

namespace sensor_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const sensor_msgs::msg::PointCloud2 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  sensor_msgs::msg::PointCloud2 &);
size_t get_serialized_size(
  const sensor_msgs::msg::PointCloud2 &,
  size_t current_alignment);
size_t
max_serialized_size_PointCloud2(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace sensor_msgs

// functions for sensor_msgs::msg::PointCloud2 already declared above

// functions for sensor_msgs::msg::PointCloud2 already declared above

// functions for sensor_msgs::msg::PointCloud2 already declared above


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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: sensor
  cdr << ros_message.sensor;
  // Member: imu_available
  cdr << ros_message.imu_available;
  // Member: odom_available
  cdr << ros_message.odom_available;
  // Member: imu_quaternion_x
  cdr << ros_message.imu_quaternion_x;
  // Member: imu_quaternion_y
  cdr << ros_message.imu_quaternion_y;
  // Member: imu_quaternion_z
  cdr << ros_message.imu_quaternion_z;
  // Member: imu_quaternion_w
  cdr << ros_message.imu_quaternion_w;
  // Member: initial_pose_x
  cdr << ros_message.initial_pose_x;
  // Member: initial_pose_y
  cdr << ros_message.initial_pose_y;
  // Member: initial_pose_z
  cdr << ros_message.initial_pose_z;
  // Member: initial_quaternion_x
  cdr << ros_message.initial_quaternion_x;
  // Member: initial_quaternion_y
  cdr << ros_message.initial_quaternion_y;
  // Member: initial_quaternion_z
  cdr << ros_message.initial_quaternion_z;
  // Member: initial_quaternion_w
  cdr << ros_message.initial_quaternion_w;
  // Member: imu_preintegration_reset_id
  cdr << ros_message.imu_preintegration_reset_id;
  // Member: cloud_nodistortion
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cloud_nodistortion,
    cdr);
  // Member: cloud_corner
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cloud_corner,
    cdr);
  // Member: cloud_surface
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cloud_surface,
    cdr);
  // Member: cloud_realsense
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.cloud_realsense,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  arise_slam_mid360_msgs::msg::LaserFeature & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: sensor
  cdr >> ros_message.sensor;

  // Member: imu_available
  cdr >> ros_message.imu_available;

  // Member: odom_available
  cdr >> ros_message.odom_available;

  // Member: imu_quaternion_x
  cdr >> ros_message.imu_quaternion_x;

  // Member: imu_quaternion_y
  cdr >> ros_message.imu_quaternion_y;

  // Member: imu_quaternion_z
  cdr >> ros_message.imu_quaternion_z;

  // Member: imu_quaternion_w
  cdr >> ros_message.imu_quaternion_w;

  // Member: initial_pose_x
  cdr >> ros_message.initial_pose_x;

  // Member: initial_pose_y
  cdr >> ros_message.initial_pose_y;

  // Member: initial_pose_z
  cdr >> ros_message.initial_pose_z;

  // Member: initial_quaternion_x
  cdr >> ros_message.initial_quaternion_x;

  // Member: initial_quaternion_y
  cdr >> ros_message.initial_quaternion_y;

  // Member: initial_quaternion_z
  cdr >> ros_message.initial_quaternion_z;

  // Member: initial_quaternion_w
  cdr >> ros_message.initial_quaternion_w;

  // Member: imu_preintegration_reset_id
  cdr >> ros_message.imu_preintegration_reset_id;

  // Member: cloud_nodistortion
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cloud_nodistortion);

  // Member: cloud_corner
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cloud_corner);

  // Member: cloud_surface
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cloud_surface);

  // Member: cloud_realsense
  sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.cloud_realsense);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
get_serialized_size(
  const arise_slam_mid360_msgs::msg::LaserFeature & ros_message,
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
  // Member: sensor
  {
    size_t item_size = sizeof(ros_message.sensor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_available
  {
    size_t item_size = sizeof(ros_message.imu_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: odom_available
  {
    size_t item_size = sizeof(ros_message.odom_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_quaternion_x
  {
    size_t item_size = sizeof(ros_message.imu_quaternion_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_quaternion_y
  {
    size_t item_size = sizeof(ros_message.imu_quaternion_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_quaternion_z
  {
    size_t item_size = sizeof(ros_message.imu_quaternion_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_quaternion_w
  {
    size_t item_size = sizeof(ros_message.imu_quaternion_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_pose_x
  {
    size_t item_size = sizeof(ros_message.initial_pose_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_pose_y
  {
    size_t item_size = sizeof(ros_message.initial_pose_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_pose_z
  {
    size_t item_size = sizeof(ros_message.initial_pose_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_quaternion_x
  {
    size_t item_size = sizeof(ros_message.initial_quaternion_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_quaternion_y
  {
    size_t item_size = sizeof(ros_message.initial_quaternion_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_quaternion_z
  {
    size_t item_size = sizeof(ros_message.initial_quaternion_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: initial_quaternion_w
  {
    size_t item_size = sizeof(ros_message.initial_quaternion_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: imu_preintegration_reset_id
  {
    size_t item_size = sizeof(ros_message.imu_preintegration_reset_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cloud_nodistortion

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cloud_nodistortion, current_alignment);
  // Member: cloud_corner

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cloud_corner, current_alignment);
  // Member: cloud_surface

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cloud_surface, current_alignment);
  // Member: cloud_realsense

  current_alignment +=
    sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.cloud_realsense, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_arise_slam_mid360_msgs
max_serialized_size_LaserFeature(
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

  // Member: sensor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: odom_available
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_quaternion_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_quaternion_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_quaternion_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_quaternion_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: initial_pose_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: initial_pose_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: initial_pose_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: initial_quaternion_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: initial_quaternion_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: initial_quaternion_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: initial_quaternion_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: imu_preintegration_reset_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cloud_nodistortion
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cloud_corner
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cloud_surface
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: cloud_realsense
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        sensor_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PointCloud2(
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
    using DataType = arise_slam_mid360_msgs::msg::LaserFeature;
    is_plain =
      (
      offsetof(DataType, cloud_realsense) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _LaserFeature__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const arise_slam_mid360_msgs::msg::LaserFeature *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LaserFeature__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<arise_slam_mid360_msgs::msg::LaserFeature *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LaserFeature__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const arise_slam_mid360_msgs::msg::LaserFeature *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LaserFeature__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_LaserFeature(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _LaserFeature__callbacks = {
  "arise_slam_mid360_msgs::msg",
  "LaserFeature",
  _LaserFeature__cdr_serialize,
  _LaserFeature__cdr_deserialize,
  _LaserFeature__get_serialized_size,
  _LaserFeature__max_serialized_size
};

static rosidl_message_type_support_t _LaserFeature__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LaserFeature__callbacks,
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
get_message_type_support_handle<arise_slam_mid360_msgs::msg::LaserFeature>()
{
  return &arise_slam_mid360_msgs::msg::typesupport_fastrtps_cpp::_LaserFeature__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, arise_slam_mid360_msgs, msg, LaserFeature)() {
  return &arise_slam_mid360_msgs::msg::typesupport_fastrtps_cpp::_LaserFeature__handle;
}

#ifdef __cplusplus
}
#endif
