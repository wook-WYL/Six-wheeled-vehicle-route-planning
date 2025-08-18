// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__FUNCTIONS_H_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "arise_slam_mid360_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "arise_slam_mid360_msgs/msg/detail/laser_feature__struct.h"

/// Initialize msg/LaserFeature message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * arise_slam_mid360_msgs__msg__LaserFeature
 * )) before or use
 * arise_slam_mid360_msgs__msg__LaserFeature__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__LaserFeature__init(arise_slam_mid360_msgs__msg__LaserFeature * msg);

/// Finalize msg/LaserFeature message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
void
arise_slam_mid360_msgs__msg__LaserFeature__fini(arise_slam_mid360_msgs__msg__LaserFeature * msg);

/// Create msg/LaserFeature message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * arise_slam_mid360_msgs__msg__LaserFeature__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
arise_slam_mid360_msgs__msg__LaserFeature *
arise_slam_mid360_msgs__msg__LaserFeature__create();

/// Destroy msg/LaserFeature message.
/**
 * It calls
 * arise_slam_mid360_msgs__msg__LaserFeature__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
void
arise_slam_mid360_msgs__msg__LaserFeature__destroy(arise_slam_mid360_msgs__msg__LaserFeature * msg);

/// Check for msg/LaserFeature message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__LaserFeature__are_equal(const arise_slam_mid360_msgs__msg__LaserFeature * lhs, const arise_slam_mid360_msgs__msg__LaserFeature * rhs);

/// Copy a msg/LaserFeature message.
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
arise_slam_mid360_msgs__msg__LaserFeature__copy(
  const arise_slam_mid360_msgs__msg__LaserFeature * input,
  arise_slam_mid360_msgs__msg__LaserFeature * output);

/// Initialize array of msg/LaserFeature messages.
/**
 * It allocates the memory for the number of elements and calls
 * arise_slam_mid360_msgs__msg__LaserFeature__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__init(arise_slam_mid360_msgs__msg__LaserFeature__Sequence * array, size_t size);

/// Finalize array of msg/LaserFeature messages.
/**
 * It calls
 * arise_slam_mid360_msgs__msg__LaserFeature__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
void
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__fini(arise_slam_mid360_msgs__msg__LaserFeature__Sequence * array);

/// Create array of msg/LaserFeature messages.
/**
 * It allocates the memory for the array and calls
 * arise_slam_mid360_msgs__msg__LaserFeature__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
arise_slam_mid360_msgs__msg__LaserFeature__Sequence *
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__create(size_t size);

/// Destroy array of msg/LaserFeature messages.
/**
 * It calls
 * arise_slam_mid360_msgs__msg__LaserFeature__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
void
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__destroy(arise_slam_mid360_msgs__msg__LaserFeature__Sequence * array);

/// Check for msg/LaserFeature message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_arise_slam_mid360_msgs
bool
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__are_equal(const arise_slam_mid360_msgs__msg__LaserFeature__Sequence * lhs, const arise_slam_mid360_msgs__msg__LaserFeature__Sequence * rhs);

/// Copy an array of msg/LaserFeature messages.
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
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__copy(
  const arise_slam_mid360_msgs__msg__LaserFeature__Sequence * input,
  arise_slam_mid360_msgs__msg__LaserFeature__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__FUNCTIONS_H_
