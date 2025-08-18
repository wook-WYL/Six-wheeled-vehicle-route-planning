// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__FUNCTIONS_H_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "arise_slam_mid360_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__struct.h"

/// Initialize msg/OptimizationStats message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arise_slam_mid360_msgs__msg__OptimizationStats
 * )) before or use
 * arise_slam_mid360_msgs__msg__OptimizationStats__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__OptimizationStats__init(arise_slam_mid360_msgs__msg__OptimizationStats * msg);

/// Finalize msg/OptimizationStats message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
void
arise_slam_mid360_msgs__msg__OptimizationStats__fini(arise_slam_mid360_msgs__msg__OptimizationStats * msg);

/// Create msg/OptimizationStats message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arise_slam_mid360_msgs__msg__OptimizationStats__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
arise_slam_mid360_msgs__msg__OptimizationStats *
arise_slam_mid360_msgs__msg__OptimizationStats__create();

/// Destroy msg/OptimizationStats message.
/**
 * It calls
 * arise_slam_mid360_msgs__msg__OptimizationStats__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
void
arise_slam_mid360_msgs__msg__OptimizationStats__destroy(arise_slam_mid360_msgs__msg__OptimizationStats * msg);

/// Check for msg/OptimizationStats message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__OptimizationStats__are_equal(const arise_slam_mid360_msgs__msg__OptimizationStats * lhs, const arise_slam_mid360_msgs__msg__OptimizationStats * rhs);

/// Copy a msg/OptimizationStats message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__OptimizationStats__copy(
  const arise_slam_mid360_msgs__msg__OptimizationStats * input,
  arise_slam_mid360_msgs__msg__OptimizationStats * output);

/// Initialize array of msg/OptimizationStats messages.
/**
 * It allocates the memory for the number of elements and calls
 * arise_slam_mid360_msgs__msg__OptimizationStats__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__init(arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * array, size_t size);

/// Finalize array of msg/OptimizationStats messages.
/**
 * It calls
 * arise_slam_mid360_msgs__msg__OptimizationStats__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
void
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__fini(arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * array);

/// Create array of msg/OptimizationStats messages.
/**
 * It allocates the memory for the array and calls
 * arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence *
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__create(size_t size);

/// Destroy array of msg/OptimizationStats messages.
/**
 * It calls
 * arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
void
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__destroy(arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * array);

/// Check for msg/OptimizationStats message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__are_equal(const arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * lhs, const arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * rhs);

/// Copy an array of msg/OptimizationStats messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__copy(
  const arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * input,
  arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__FUNCTIONS_H_
