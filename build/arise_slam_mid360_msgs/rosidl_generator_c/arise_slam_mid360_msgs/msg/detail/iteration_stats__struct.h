// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from arise_slam_mid360_msgs:msg/IterationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__STRUCT_H_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__STRUCT_H_

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

/// Struct defined in msg/IterationStats in the package arise_slam_mid360_msgs.
/**
  * float64 time_elapsed
 */
typedef struct arise_slam_mid360_msgs__msg__IterationStats
{
  std_msgs__msg__Header header;
  double translation_norm;
  double rotation_norm;
  double num_surf_from_scan;
  double num_corner_from_scan;
} arise_slam_mid360_msgs__msg__IterationStats;

// Struct for a sequence of arise_slam_mid360_msgs__msg__IterationStats.
typedef struct arise_slam_mid360_msgs__msg__IterationStats__Sequence
{
  arise_slam_mid360_msgs__msg__IterationStats * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} arise_slam_mid360_msgs__msg__IterationStats__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__STRUCT_H_
