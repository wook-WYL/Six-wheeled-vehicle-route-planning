// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice
#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `iterations`
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__functions.h"

bool
arise_slam_mid360_msgs__msg__OptimizationStats__init(arise_slam_mid360_msgs__msg__OptimizationStats * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    arise_slam_mid360_msgs__msg__OptimizationStats__fini(msg);
    return false;
  }
  // laser_cloud_surf_from_map_num
  // laser_cloud_corner_from_map_num
  // laser_cloud_surf_stack_num
  // laser_cloud_corner_stack_num
  // total_translation
  // total_rotation
  // translation_from_last
  // rotation_from_last
  // time_elapsed
  // latency
  // n_iterations
  // average_distance
  // uncertainty_x
  // uncertainty_y
  // uncertainty_z
  // uncertainty_roll
  // uncertainty_pitch
  // uncertainty_yaw
  // plane_match_success
  // plane_no_enough_neighbor
  // plane_neighbor_too_far
  // plane_badpca_structure
  // plane_invalid_numerical
  // plane_mse_too_large
  // plane_unknown
  // prediction_source
  // iterations
  if (!arise_slam_mid360_msgs__msg__IterationStats__Sequence__init(&msg->iterations, 0)) {
    arise_slam_mid360_msgs__msg__OptimizationStats__fini(msg);
    return false;
  }
  return true;
}

void
arise_slam_mid360_msgs__msg__OptimizationStats__fini(arise_slam_mid360_msgs__msg__OptimizationStats * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // laser_cloud_surf_from_map_num
  // laser_cloud_corner_from_map_num
  // laser_cloud_surf_stack_num
  // laser_cloud_corner_stack_num
  // total_translation
  // total_rotation
  // translation_from_last
  // rotation_from_last
  // time_elapsed
  // latency
  // n_iterations
  // average_distance
  // uncertainty_x
  // uncertainty_y
  // uncertainty_z
  // uncertainty_roll
  // uncertainty_pitch
  // uncertainty_yaw
  // plane_match_success
  // plane_no_enough_neighbor
  // plane_neighbor_too_far
  // plane_badpca_structure
  // plane_invalid_numerical
  // plane_mse_too_large
  // plane_unknown
  // prediction_source
  // iterations
  arise_slam_mid360_msgs__msg__IterationStats__Sequence__fini(&msg->iterations);
}

bool
arise_slam_mid360_msgs__msg__OptimizationStats__are_equal(const arise_slam_mid360_msgs__msg__OptimizationStats * lhs, const arise_slam_mid360_msgs__msg__OptimizationStats * rhs)
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
  // laser_cloud_surf_from_map_num
  if (lhs->laser_cloud_surf_from_map_num != rhs->laser_cloud_surf_from_map_num) {
    return false;
  }
  // laser_cloud_corner_from_map_num
  if (lhs->laser_cloud_corner_from_map_num != rhs->laser_cloud_corner_from_map_num) {
    return false;
  }
  // laser_cloud_surf_stack_num
  if (lhs->laser_cloud_surf_stack_num != rhs->laser_cloud_surf_stack_num) {
    return false;
  }
  // laser_cloud_corner_stack_num
  if (lhs->laser_cloud_corner_stack_num != rhs->laser_cloud_corner_stack_num) {
    return false;
  }
  // total_translation
  if (lhs->total_translation != rhs->total_translation) {
    return false;
  }
  // total_rotation
  if (lhs->total_rotation != rhs->total_rotation) {
    return false;
  }
  // translation_from_last
  if (lhs->translation_from_last != rhs->translation_from_last) {
    return false;
  }
  // rotation_from_last
  if (lhs->rotation_from_last != rhs->rotation_from_last) {
    return false;
  }
  // time_elapsed
  if (lhs->time_elapsed != rhs->time_elapsed) {
    return false;
  }
  // latency
  if (lhs->latency != rhs->latency) {
    return false;
  }
  // n_iterations
  if (lhs->n_iterations != rhs->n_iterations) {
    return false;
  }
  // average_distance
  if (lhs->average_distance != rhs->average_distance) {
    return false;
  }
  // uncertainty_x
  if (lhs->uncertainty_x != rhs->uncertainty_x) {
    return false;
  }
  // uncertainty_y
  if (lhs->uncertainty_y != rhs->uncertainty_y) {
    return false;
  }
  // uncertainty_z
  if (lhs->uncertainty_z != rhs->uncertainty_z) {
    return false;
  }
  // uncertainty_roll
  if (lhs->uncertainty_roll != rhs->uncertainty_roll) {
    return false;
  }
  // uncertainty_pitch
  if (lhs->uncertainty_pitch != rhs->uncertainty_pitch) {
    return false;
  }
  // uncertainty_yaw
  if (lhs->uncertainty_yaw != rhs->uncertainty_yaw) {
    return false;
  }
  // plane_match_success
  if (lhs->plane_match_success != rhs->plane_match_success) {
    return false;
  }
  // plane_no_enough_neighbor
  if (lhs->plane_no_enough_neighbor != rhs->plane_no_enough_neighbor) {
    return false;
  }
  // plane_neighbor_too_far
  if (lhs->plane_neighbor_too_far != rhs->plane_neighbor_too_far) {
    return false;
  }
  // plane_badpca_structure
  if (lhs->plane_badpca_structure != rhs->plane_badpca_structure) {
    return false;
  }
  // plane_invalid_numerical
  if (lhs->plane_invalid_numerical != rhs->plane_invalid_numerical) {
    return false;
  }
  // plane_mse_too_large
  if (lhs->plane_mse_too_large != rhs->plane_mse_too_large) {
    return false;
  }
  // plane_unknown
  if (lhs->plane_unknown != rhs->plane_unknown) {
    return false;
  }
  // prediction_source
  if (lhs->prediction_source != rhs->prediction_source) {
    return false;
  }
  // iterations
  if (!arise_slam_mid360_msgs__msg__IterationStats__Sequence__are_equal(
      &(lhs->iterations), &(rhs->iterations)))
  {
    return false;
  }
  return true;
}

bool
arise_slam_mid360_msgs__msg__OptimizationStats__copy(
  const arise_slam_mid360_msgs__msg__OptimizationStats * input,
  arise_slam_mid360_msgs__msg__OptimizationStats * output)
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
  // laser_cloud_surf_from_map_num
  output->laser_cloud_surf_from_map_num = input->laser_cloud_surf_from_map_num;
  // laser_cloud_corner_from_map_num
  output->laser_cloud_corner_from_map_num = input->laser_cloud_corner_from_map_num;
  // laser_cloud_surf_stack_num
  output->laser_cloud_surf_stack_num = input->laser_cloud_surf_stack_num;
  // laser_cloud_corner_stack_num
  output->laser_cloud_corner_stack_num = input->laser_cloud_corner_stack_num;
  // total_translation
  output->total_translation = input->total_translation;
  // total_rotation
  output->total_rotation = input->total_rotation;
  // translation_from_last
  output->translation_from_last = input->translation_from_last;
  // rotation_from_last
  output->rotation_from_last = input->rotation_from_last;
  // time_elapsed
  output->time_elapsed = input->time_elapsed;
  // latency
  output->latency = input->latency;
  // n_iterations
  output->n_iterations = input->n_iterations;
  // average_distance
  output->average_distance = input->average_distance;
  // uncertainty_x
  output->uncertainty_x = input->uncertainty_x;
  // uncertainty_y
  output->uncertainty_y = input->uncertainty_y;
  // uncertainty_z
  output->uncertainty_z = input->uncertainty_z;
  // uncertainty_roll
  output->uncertainty_roll = input->uncertainty_roll;
  // uncertainty_pitch
  output->uncertainty_pitch = input->uncertainty_pitch;
  // uncertainty_yaw
  output->uncertainty_yaw = input->uncertainty_yaw;
  // plane_match_success
  output->plane_match_success = input->plane_match_success;
  // plane_no_enough_neighbor
  output->plane_no_enough_neighbor = input->plane_no_enough_neighbor;
  // plane_neighbor_too_far
  output->plane_neighbor_too_far = input->plane_neighbor_too_far;
  // plane_badpca_structure
  output->plane_badpca_structure = input->plane_badpca_structure;
  // plane_invalid_numerical
  output->plane_invalid_numerical = input->plane_invalid_numerical;
  // plane_mse_too_large
  output->plane_mse_too_large = input->plane_mse_too_large;
  // plane_unknown
  output->plane_unknown = input->plane_unknown;
  // prediction_source
  output->prediction_source = input->prediction_source;
  // iterations
  if (!arise_slam_mid360_msgs__msg__IterationStats__Sequence__copy(
      &(input->iterations), &(output->iterations)))
  {
    return false;
  }
  return true;
}

arise_slam_mid360_msgs__msg__OptimizationStats *
arise_slam_mid360_msgs__msg__OptimizationStats__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__OptimizationStats * msg = (arise_slam_mid360_msgs__msg__OptimizationStats *)allocator.allocate(sizeof(arise_slam_mid360_msgs__msg__OptimizationStats), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arise_slam_mid360_msgs__msg__OptimizationStats));
  bool success = arise_slam_mid360_msgs__msg__OptimizationStats__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arise_slam_mid360_msgs__msg__OptimizationStats__destroy(arise_slam_mid360_msgs__msg__OptimizationStats * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arise_slam_mid360_msgs__msg__OptimizationStats__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__init(arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__OptimizationStats * data = NULL;

  if (size) {
    data = (arise_slam_mid360_msgs__msg__OptimizationStats *)allocator.zero_allocate(size, sizeof(arise_slam_mid360_msgs__msg__OptimizationStats), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arise_slam_mid360_msgs__msg__OptimizationStats__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arise_slam_mid360_msgs__msg__OptimizationStats__fini(&data[i - 1]);
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
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__fini(arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * array)
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
      arise_slam_mid360_msgs__msg__OptimizationStats__fini(&array->data[i]);
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

arise_slam_mid360_msgs__msg__OptimizationStats__Sequence *
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * array = (arise_slam_mid360_msgs__msg__OptimizationStats__Sequence *)allocator.allocate(sizeof(arise_slam_mid360_msgs__msg__OptimizationStats__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__destroy(arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__are_equal(const arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * lhs, const arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arise_slam_mid360_msgs__msg__OptimizationStats__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arise_slam_mid360_msgs__msg__OptimizationStats__Sequence__copy(
  const arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * input,
  arise_slam_mid360_msgs__msg__OptimizationStats__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arise_slam_mid360_msgs__msg__OptimizationStats);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arise_slam_mid360_msgs__msg__OptimizationStats * data =
      (arise_slam_mid360_msgs__msg__OptimizationStats *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arise_slam_mid360_msgs__msg__OptimizationStats__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arise_slam_mid360_msgs__msg__OptimizationStats__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arise_slam_mid360_msgs__msg__OptimizationStats__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
