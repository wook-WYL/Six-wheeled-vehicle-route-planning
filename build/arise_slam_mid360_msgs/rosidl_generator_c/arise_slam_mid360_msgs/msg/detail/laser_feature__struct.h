// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__STRUCT_H_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'cloud_nodistortion'
// Member 'cloud_corner'
// Member 'cloud_surface'
// Member 'cloud_realsense'
#include "sensor_msgs/msg/detail/point_cloud2__struct.h"

/// Struct defined in msg/LaserFeature in the package arise_slam_mid360_msgs.
/**
  * feature Info
 */
typedef struct arise_slam_mid360_msgs__msg__LaserFeature
{
  std_msgs__msg__Header header;
  int64_t sensor;
  int64_t imu_available;
  int64_t odom_available;
  /// IMU initial guess for laser mapping
  double imu_quaternion_x;
  double imu_quaternion_y;
  double imu_quaternion_z;
  double imu_quaternion_w;
  /// Odometry initial guess for laser mapping
  double initial_pose_x;
  double initial_pose_y;
  double initial_pose_z;
  double initial_quaternion_x;
  double initial_quaternion_y;
  double initial_quaternion_z;
  double initial_quaternion_w;
  /// Preintegration reset ID
  int64_t imu_preintegration_reset_id;
  /// Point cloud messages
  /// original cloud remove distortion
  sensor_msgs__msg__PointCloud2 cloud_nodistortion;
  /// extracted corner feature
  sensor_msgs__msg__PointCloud2 cloud_corner;
  /// extracted surface feature
  sensor_msgs__msg__PointCloud2 cloud_surface;
  /// extracted surface feature from realsense
  sensor_msgs__msg__PointCloud2 cloud_realsense;
} arise_slam_mid360_msgs__msg__LaserFeature;

// Struct for a sequence of arise_slam_mid360_msgs__msg__LaserFeature.
typedef struct arise_slam_mid360_msgs__msg__LaserFeature__Sequence
{
  arise_slam_mid360_msgs__msg__LaserFeature * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arise_slam_mid360_msgs__msg__LaserFeature__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__STRUCT_H_
