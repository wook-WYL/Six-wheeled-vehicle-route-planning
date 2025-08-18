// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from osr_interfaces:msg/CommandCorner.idl
// generated code does not contain a copyright notice

#ifndef OSR_INTERFACES__MSG__DETAIL__COMMAND_CORNER__FUNCTIONS_H_
#define OSR_INTERFACES__MSG__DETAIL__COMMAND_CORNER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "osr_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "osr_interfaces/msg/detail/command_corner__struct.h"

/// Initialize msg/CommandCorner message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * osr_interfaces__msg__CommandCorner
 * )) before or use
 * osr_interfaces__msg__CommandCorner__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__CommandCorner__init(osr_interfaces__msg__CommandCorner * msg);

/// Finalize msg/CommandCorner message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
void
osr_interfaces__msg__CommandCorner__fini(osr_interfaces__msg__CommandCorner * msg);

/// Create msg/CommandCorner message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * osr_interfaces__msg__CommandCorner__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
osr_interfaces__msg__CommandCorner *
osr_interfaces__msg__CommandCorner__create();

/// Destroy msg/CommandCorner message.
/**
 * It calls
 * osr_interfaces__msg__CommandCorner__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
void
osr_interfaces__msg__CommandCorner__destroy(osr_interfaces__msg__CommandCorner * msg);

/// Check for msg/CommandCorner message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__CommandCorner__are_equal(const osr_interfaces__msg__CommandCorner * lhs, const osr_interfaces__msg__CommandCorner * rhs);

/// Copy a msg/CommandCorner message.
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
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__CommandCorner__copy(
  const osr_interfaces__msg__CommandCorner * input,
  osr_interfaces__msg__CommandCorner * output);

/// Initialize array of msg/CommandCorner messages.
/**
 * It allocates the memory for the number of elements and calls
 * osr_interfaces__msg__CommandCorner__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__CommandCorner__Sequence__init(osr_interfaces__msg__CommandCorner__Sequence * array, size_t size);

/// Finalize array of msg/CommandCorner messages.
/**
 * It calls
 * osr_interfaces__msg__CommandCorner__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
void
osr_interfaces__msg__CommandCorner__Sequence__fini(osr_interfaces__msg__CommandCorner__Sequence * array);

/// Create array of msg/CommandCorner messages.
/**
 * It allocates the memory for the array and calls
 * osr_interfaces__msg__CommandCorner__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
osr_interfaces__msg__CommandCorner__Sequence *
osr_interfaces__msg__CommandCorner__Sequence__create(size_t size);

/// Destroy array of msg/CommandCorner messages.
/**
 * It calls
 * osr_interfaces__msg__CommandCorner__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
void
osr_interfaces__msg__CommandCorner__Sequence__destroy(osr_interfaces__msg__CommandCorner__Sequence * array);

/// Check for msg/CommandCorner message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__CommandCorner__Sequence__are_equal(const osr_interfaces__msg__CommandCorner__Sequence * lhs, const osr_interfaces__msg__CommandCorner__Sequence * rhs);

/// Copy an array of msg/CommandCorner messages.
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
ROSIDL_GENERATOR_C_PUBLIC_osr_interfaces
bool
osr_interfaces__msg__CommandCorner__Sequence__copy(
  const osr_interfaces__msg__CommandCorner__Sequence * input,
  osr_interfaces__msg__CommandCorner__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // OSR_INTERFACES__MSG__DETAIL__COMMAND_CORNER__FUNCTIONS_H_
