// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from motion_msgs:msg/MovementCtrlMode.idl
// generated code does not contain a copyright notice

#ifndef MOTION_MSGS__MSG__DETAIL__MOVEMENT_CTRL_MODE__FUNCTIONS_H_
#define MOTION_MSGS__MSG__DETAIL__MOVEMENT_CTRL_MODE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "motion_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "motion_msgs/msg/detail/movement_ctrl_mode__struct.h"

/// Initialize msg/MovementCtrlMode message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * motion_msgs__msg__MovementCtrlMode
 * )) before or use
 * motion_msgs__msg__MovementCtrlMode__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
bool
motion_msgs__msg__MovementCtrlMode__init(motion_msgs__msg__MovementCtrlMode * msg);

/// Finalize msg/MovementCtrlMode message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
void
motion_msgs__msg__MovementCtrlMode__fini(motion_msgs__msg__MovementCtrlMode * msg);

/// Create msg/MovementCtrlMode message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * motion_msgs__msg__MovementCtrlMode__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
motion_msgs__msg__MovementCtrlMode *
motion_msgs__msg__MovementCtrlMode__create();

/// Destroy msg/MovementCtrlMode message.
/**
 * It calls
 * motion_msgs__msg__MovementCtrlMode__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
void
motion_msgs__msg__MovementCtrlMode__destroy(motion_msgs__msg__MovementCtrlMode * msg);

/// Check for msg/MovementCtrlMode message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
bool
motion_msgs__msg__MovementCtrlMode__are_equal(const motion_msgs__msg__MovementCtrlMode * lhs, const motion_msgs__msg__MovementCtrlMode * rhs);

/// Copy a msg/MovementCtrlMode message.
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
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
bool
motion_msgs__msg__MovementCtrlMode__copy(
  const motion_msgs__msg__MovementCtrlMode * input,
  motion_msgs__msg__MovementCtrlMode * output);

/// Initialize array of msg/MovementCtrlMode messages.
/**
 * It allocates the memory for the number of elements and calls
 * motion_msgs__msg__MovementCtrlMode__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
bool
motion_msgs__msg__MovementCtrlMode__Sequence__init(motion_msgs__msg__MovementCtrlMode__Sequence * array, size_t size);

/// Finalize array of msg/MovementCtrlMode messages.
/**
 * It calls
 * motion_msgs__msg__MovementCtrlMode__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
void
motion_msgs__msg__MovementCtrlMode__Sequence__fini(motion_msgs__msg__MovementCtrlMode__Sequence * array);

/// Create array of msg/MovementCtrlMode messages.
/**
 * It allocates the memory for the array and calls
 * motion_msgs__msg__MovementCtrlMode__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
motion_msgs__msg__MovementCtrlMode__Sequence *
motion_msgs__msg__MovementCtrlMode__Sequence__create(size_t size);

/// Destroy array of msg/MovementCtrlMode messages.
/**
 * It calls
 * motion_msgs__msg__MovementCtrlMode__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
void
motion_msgs__msg__MovementCtrlMode__Sequence__destroy(motion_msgs__msg__MovementCtrlMode__Sequence * array);

/// Check for msg/MovementCtrlMode message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
bool
motion_msgs__msg__MovementCtrlMode__Sequence__are_equal(const motion_msgs__msg__MovementCtrlMode__Sequence * lhs, const motion_msgs__msg__MovementCtrlMode__Sequence * rhs);

/// Copy an array of msg/MovementCtrlMode messages.
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
ROSIDL_GENERATOR_C_PUBLIC_motion_msgs
bool
motion_msgs__msg__MovementCtrlMode__Sequence__copy(
  const motion_msgs__msg__MovementCtrlMode__Sequence * input,
  motion_msgs__msg__MovementCtrlMode__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MOTION_MSGS__MSG__DETAIL__MOVEMENT_CTRL_MODE__FUNCTIONS_H_
