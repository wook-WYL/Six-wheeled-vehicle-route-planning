// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arise_slam_mid360_msgs:msg/IterationStats.idl
// generated code does not contain a copyright notice
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
arise_slam_mid360_msgs__msg__IterationStats__init(arise_slam_mid360_msgs__msg__IterationStats * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    arise_slam_mid360_msgs__msg__IterationStats__fini(msg);
    return false;
  }
  // translation_norm
  // rotation_norm
  // num_surf_from_scan
  // num_corner_from_scan
  return true;
}

void
arise_slam_mid360_msgs__msg__IterationStats__fini(arise_slam_mid360_msgs__msg__IterationStats * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // translation_norm
  // rotation_norm
  // num_surf_from_scan
  // num_corner_from_scan
}

bool
arise_slam_mid360_msgs__msg__IterationStats__are_equal(const arise_slam_mid360_msgs__msg__IterationStats * lhs, const arise_slam_mid360_msgs__msg__IterationStats * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // translation_norm
  if (lhs->translation_norm != rhs->translation_norm) {
    return false;
  }
  // rotation_norm
  if (lhs->rotation_norm != rhs->rotation_norm) {
    return false;
  }
  // num_surf_from_scan
  if (lhs->num_surf_from_scan != rhs->num_surf_from_scan) {
    return false;
  }
  // num_corner_from_scan
  if (lhs->num_corner_from_scan != rhs->num_corner_from_scan) {
    return false;
  }
  return true;
}

bool
arise_slam_mid360_msgs__msg__IterationStats__copy(
  const arise_slam_mid360_msgs__msg__IterationStats * input,
  arise_slam_mid360_msgs__msg__IterationStats * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // translation_norm
  output->translation_norm = input->translation_norm;
  // rotation_norm
  output->rotation_norm = input->rotation_norm;
  // num_surf_from_scan
  output->num_surf_from_scan = input->num_surf_from_scan;
  // num_corner_from_scan
  output->num_corner_from_scan = input->num_corner_from_scan;
  return true;
}

arise_slam_mid360_msgs__msg__IterationStats *
arise_slam_mid360_msgs__msg__IterationStats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__IterationStats * msg = (arise_slam_mid360_msgs__msg__IterationStats *)allocator.allocate(sizeof(arise_slam_mid360_msgs__msg__IterationStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arise_slam_mid360_msgs__msg__IterationStats));
  bool success = arise_slam_mid360_msgs__msg__IterationStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arise_slam_mid360_msgs__msg__IterationStats__destroy(arise_slam_mid360_msgs__msg__IterationStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arise_slam_mid360_msgs__msg__IterationStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arise_slam_mid360_msgs__msg__IterationStats__Sequence__init(arise_slam_mid360_msgs__msg__IterationStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__IterationStats * data = NULL;

  if (size) {
    data = (arise_slam_mid360_msgs__msg__IterationStats *)allocator.zero_allocate(size, sizeof(arise_slam_mid360_msgs__msg__IterationStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arise_slam_mid360_msgs__msg__IterationStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arise_slam_mid360_msgs__msg__IterationStats__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
arise_slam_mid360_msgs__msg__IterationStats__Sequence__fini(arise_slam_mid360_msgs__msg__IterationStats__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      arise_slam_mid360_msgs__msg__IterationStats__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

arise_slam_mid360_msgs__msg__IterationStats__Sequence *
arise_slam_mid360_msgs__msg__IterationStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__IterationStats__Sequence * array = (arise_slam_mid360_msgs__msg__IterationStats__Sequence *)allocator.allocate(sizeof(arise_slam_mid360_msgs__msg__IterationStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arise_slam_mid360_msgs__msg__IterationStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arise_slam_mid360_msgs__msg__IterationStats__Sequence__destroy(arise_slam_mid360_msgs__msg__IterationStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arise_slam_mid360_msgs__msg__IterationStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arise_slam_mid360_msgs__msg__IterationStats__Sequence__are_equal(const arise_slam_mid360_msgs__msg__IterationStats__Sequence * lhs, const arise_slam_mid360_msgs__msg__IterationStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arise_slam_mid360_msgs__msg__IterationStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arise_slam_mid360_msgs__msg__IterationStats__Sequence__copy(
  const arise_slam_mid360_msgs__msg__IterationStats__Sequence * input,
  arise_slam_mid360_msgs__msg__IterationStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arise_slam_mid360_msgs__msg__IterationStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arise_slam_mid360_msgs__msg__IterationStats * data =
      (arise_slam_mid360_msgs__msg__IterationStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arise_slam_mid360_msgs__msg__IterationStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arise_slam_mid360_msgs__msg__IterationStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arise_slam_mid360_msgs__msg__IterationStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
