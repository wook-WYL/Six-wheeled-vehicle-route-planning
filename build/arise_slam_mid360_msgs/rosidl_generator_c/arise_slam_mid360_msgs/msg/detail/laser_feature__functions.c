// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice
#include "arise_slam_mid360_msgs/msg/detail/laser_feature__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `cloud_nodistortion`
// Member `cloud_corner`
// Member `cloud_surface`
// Member `cloud_realsense`
#include "sensor_msgs/msg/detail/point_cloud2__functions.h"

bool
arise_slam_mid360_msgs__msg__LaserFeature__init(arise_slam_mid360_msgs__msg__LaserFeature * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    arise_slam_mid360_msgs__msg__LaserFeature__fini(msg);
    return false;
  }
  // sensor
  // imu_available
  // odom_available
  // imu_quaternion_x
  // imu_quaternion_y
  // imu_quaternion_z
  // imu_quaternion_w
  // initial_pose_x
  // initial_pose_y
  // initial_pose_z
  // initial_quaternion_x
  // initial_quaternion_y
  // initial_quaternion_z
  // initial_quaternion_w
  // imu_preintegration_reset_id
  // cloud_nodistortion
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_nodistortion)) {
    arise_slam_mid360_msgs__msg__LaserFeature__fini(msg);
    return false;
  }
  // cloud_corner
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_corner)) {
    arise_slam_mid360_msgs__msg__LaserFeature__fini(msg);
    return false;
  }
  // cloud_surface
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_surface)) {
    arise_slam_mid360_msgs__msg__LaserFeature__fini(msg);
    return false;
  }
  // cloud_realsense
  if (!sensor_msgs__msg__PointCloud2__init(&msg->cloud_realsense)) {
    arise_slam_mid360_msgs__msg__LaserFeature__fini(msg);
    return false;
  }
  return true;
}

void
arise_slam_mid360_msgs__msg__LaserFeature__fini(arise_slam_mid360_msgs__msg__LaserFeature * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // sensor
  // imu_available
  // odom_available
  // imu_quaternion_x
  // imu_quaternion_y
  // imu_quaternion_z
  // imu_quaternion_w
  // initial_pose_x
  // initial_pose_y
  // initial_pose_z
  // initial_quaternion_x
  // initial_quaternion_y
  // initial_quaternion_z
  // initial_quaternion_w
  // imu_preintegration_reset_id
  // cloud_nodistortion
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_nodistortion);
  // cloud_corner
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_corner);
  // cloud_surface
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_surface);
  // cloud_realsense
  sensor_msgs__msg__PointCloud2__fini(&msg->cloud_realsense);
}

bool
arise_slam_mid360_msgs__msg__LaserFeature__are_equal(const arise_slam_mid360_msgs__msg__LaserFeature * lhs, const arise_slam_mid360_msgs__msg__LaserFeature * rhs)
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
  // sensor
  if (lhs->sensor != rhs->sensor) {
    return false;
  }
  // imu_available
  if (lhs->imu_available != rhs->imu_available) {
    return false;
  }
  // odom_available
  if (lhs->odom_available != rhs->odom_available) {
    return false;
  }
  // imu_quaternion_x
  if (lhs->imu_quaternion_x != rhs->imu_quaternion_x) {
    return false;
  }
  // imu_quaternion_y
  if (lhs->imu_quaternion_y != rhs->imu_quaternion_y) {
    return false;
  }
  // imu_quaternion_z
  if (lhs->imu_quaternion_z != rhs->imu_quaternion_z) {
    return false;
  }
  // imu_quaternion_w
  if (lhs->imu_quaternion_w != rhs->imu_quaternion_w) {
    return false;
  }
  // initial_pose_x
  if (lhs->initial_pose_x != rhs->initial_pose_x) {
    return false;
  }
  // initial_pose_y
  if (lhs->initial_pose_y != rhs->initial_pose_y) {
    return false;
  }
  // initial_pose_z
  if (lhs->initial_pose_z != rhs->initial_pose_z) {
    return false;
  }
  // initial_quaternion_x
  if (lhs->initial_quaternion_x != rhs->initial_quaternion_x) {
    return false;
  }
  // initial_quaternion_y
  if (lhs->initial_quaternion_y != rhs->initial_quaternion_y) {
    return false;
  }
  // initial_quaternion_z
  if (lhs->initial_quaternion_z != rhs->initial_quaternion_z) {
    return false;
  }
  // initial_quaternion_w
  if (lhs->initial_quaternion_w != rhs->initial_quaternion_w) {
    return false;
  }
  // imu_preintegration_reset_id
  if (lhs->imu_preintegration_reset_id != rhs->imu_preintegration_reset_id) {
    return false;
  }
  // cloud_nodistortion
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_nodistortion), &(rhs->cloud_nodistortion)))
  {
    return false;
  }
  // cloud_corner
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_corner), &(rhs->cloud_corner)))
  {
    return false;
  }
  // cloud_surface
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_surface), &(rhs->cloud_surface)))
  {
    return false;
  }
  // cloud_realsense
  if (!sensor_msgs__msg__PointCloud2__are_equal(
      &(lhs->cloud_realsense), &(rhs->cloud_realsense)))
  {
    return false;
  }
  return true;
}

bool
arise_slam_mid360_msgs__msg__LaserFeature__copy(
  const arise_slam_mid360_msgs__msg__LaserFeature * input,
  arise_slam_mid360_msgs__msg__LaserFeature * output)
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
  // sensor
  output->sensor = input->sensor;
  // imu_available
  output->imu_available = input->imu_available;
  // odom_available
  output->odom_available = input->odom_available;
  // imu_quaternion_x
  output->imu_quaternion_x = input->imu_quaternion_x;
  // imu_quaternion_y
  output->imu_quaternion_y = input->imu_quaternion_y;
  // imu_quaternion_z
  output->imu_quaternion_z = input->imu_quaternion_z;
  // imu_quaternion_w
  output->imu_quaternion_w = input->imu_quaternion_w;
  // initial_pose_x
  output->initial_pose_x = input->initial_pose_x;
  // initial_pose_y
  output->initial_pose_y = input->initial_pose_y;
  // initial_pose_z
  output->initial_pose_z = input->initial_pose_z;
  // initial_quaternion_x
  output->initial_quaternion_x = input->initial_quaternion_x;
  // initial_quaternion_y
  output->initial_quaternion_y = input->initial_quaternion_y;
  // initial_quaternion_z
  output->initial_quaternion_z = input->initial_quaternion_z;
  // initial_quaternion_w
  output->initial_quaternion_w = input->initial_quaternion_w;
  // imu_preintegration_reset_id
  output->imu_preintegration_reset_id = input->imu_preintegration_reset_id;
  // cloud_nodistortion
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_nodistortion), &(output->cloud_nodistortion)))
  {
    return false;
  }
  // cloud_corner
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_corner), &(output->cloud_corner)))
  {
    return false;
  }
  // cloud_surface
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_surface), &(output->cloud_surface)))
  {
    return false;
  }
  // cloud_realsense
  if (!sensor_msgs__msg__PointCloud2__copy(
      &(input->cloud_realsense), &(output->cloud_realsense)))
  {
    return false;
  }
  return true;
}

arise_slam_mid360_msgs__msg__LaserFeature *
arise_slam_mid360_msgs__msg__LaserFeature__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__LaserFeature * msg = (arise_slam_mid360_msgs__msg__LaserFeature *)allocator.allocate(sizeof(arise_slam_mid360_msgs__msg__LaserFeature), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(arise_slam_mid360_msgs__msg__LaserFeature));
  bool success = arise_slam_mid360_msgs__msg__LaserFeature__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
arise_slam_mid360_msgs__msg__LaserFeature__destroy(arise_slam_mid360_msgs__msg__LaserFeature * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    arise_slam_mid360_msgs__msg__LaserFeature__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__init(arise_slam_mid360_msgs__msg__LaserFeature__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__LaserFeature * data = NULL;

  if (size) {
    data = (arise_slam_mid360_msgs__msg__LaserFeature *)allocator.zero_allocate(size, sizeof(arise_slam_mid360_msgs__msg__LaserFeature), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = arise_slam_mid360_msgs__msg__LaserFeature__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        arise_slam_mid360_msgs__msg__LaserFeature__fini(&data[i - 1]);
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
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__fini(arise_slam_mid360_msgs__msg__LaserFeature__Sequence * array)
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
      arise_slam_mid360_msgs__msg__LaserFeature__fini(&array->data[i]);
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

arise_slam_mid360_msgs__msg__LaserFeature__Sequence *
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  arise_slam_mid360_msgs__msg__LaserFeature__Sequence * array = (arise_slam_mid360_msgs__msg__LaserFeature__Sequence *)allocator.allocate(sizeof(arise_slam_mid360_msgs__msg__LaserFeature__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = arise_slam_mid360_msgs__msg__LaserFeature__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__destroy(arise_slam_mid360_msgs__msg__LaserFeature__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    arise_slam_mid360_msgs__msg__LaserFeature__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__are_equal(const arise_slam_mid360_msgs__msg__LaserFeature__Sequence * lhs, const arise_slam_mid360_msgs__msg__LaserFeature__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!arise_slam_mid360_msgs__msg__LaserFeature__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
arise_slam_mid360_msgs__msg__LaserFeature__Sequence__copy(
  const arise_slam_mid360_msgs__msg__LaserFeature__Sequence * input,
  arise_slam_mid360_msgs__msg__LaserFeature__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(arise_slam_mid360_msgs__msg__LaserFeature);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    arise_slam_mid360_msgs__msg__LaserFeature * data =
      (arise_slam_mid360_msgs__msg__LaserFeature *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!arise_slam_mid360_msgs__msg__LaserFeature__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          arise_slam_mid360_msgs__msg__LaserFeature__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!arise_slam_mid360_msgs__msg__LaserFeature__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
