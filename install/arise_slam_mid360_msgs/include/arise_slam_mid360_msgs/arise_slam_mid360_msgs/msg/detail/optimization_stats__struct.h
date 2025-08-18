// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__STRUCT_H_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__STRUCT_H_

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
// Member 'iterations'
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__struct.h"

/// Struct defined in msg/OptimizationStats in the package arise_slam_mid360_msgs.
typedef struct arise_slam_mid360_msgs__msg__OptimizationStats
{
  std_msgs__msg__Header header;
  int32_t laser_cloud_surf_from_map_num;
  int32_t laser_cloud_corner_from_map_num;
  int32_t laser_cloud_surf_stack_num;
  int32_t laser_cloud_corner_stack_num;
  double total_translation;
  double total_rotation;
  double translation_from_last;
  double rotation_from_last;
  double time_elapsed;
  double latency;
  int32_t n_iterations;
  double average_distance;
  double uncertainty_x;
  double uncertainty_y;
  double uncertainty_z;
  double uncertainty_roll;
  double uncertainty_pitch;
  double uncertainty_yaw;
  int32_t plane_match_success;
  int32_t plane_no_enough_neighbor;
  int32_t plane_neighbor_too_far;
  int32_t plane_badpca_structure;
  int32_t plane_invalid_numerical;
  int32_t plane_mse_too_large;
  int32_t plane_unknown;
  int32_t prediction_source;
  arise_slam_mid360_msgs__msg__IterationStats__Sequence iterations;
} arise_slam_mid360_msgs__msg__OptimizationStats;

// Struct for a sequence of arise_slam_mid360_msgs__msg__OptimizationStats.
typedef struct arise_slam_mid360_msgs__msg__OptimizationStats__Sequence
{
  arise_slam_mid360_msgs__msg__OptimizationStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arise_slam_mid360_msgs__msg__OptimizationStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__STRUCT_H_
