// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__STRUCT_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'iterations'
#include "arise_slam_mid360_msgs/msg/detail/iteration_stats__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arise_slam_mid360_msgs__msg__OptimizationStats __attribute__((deprecated))
#else
# define DEPRECATED__arise_slam_mid360_msgs__msg__OptimizationStats __declspec(deprecated)
#endif

namespace arise_slam_mid360_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct OptimizationStats_
{
  using Type = OptimizationStats_<ContainerAllocator>;

  explicit OptimizationStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laser_cloud_surf_from_map_num = 0l;
      this->laser_cloud_corner_from_map_num = 0l;
      this->laser_cloud_surf_stack_num = 0l;
      this->laser_cloud_corner_stack_num = 0l;
      this->total_translation = 0.0;
      this->total_rotation = 0.0;
      this->translation_from_last = 0.0;
      this->rotation_from_last = 0.0;
      this->time_elapsed = 0.0;
      this->latency = 0.0;
      this->n_iterations = 0l;
      this->average_distance = 0.0;
      this->uncertainty_x = 0.0;
      this->uncertainty_y = 0.0;
      this->uncertainty_z = 0.0;
      this->uncertainty_roll = 0.0;
      this->uncertainty_pitch = 0.0;
      this->uncertainty_yaw = 0.0;
      this->plane_match_success = 0l;
      this->plane_no_enough_neighbor = 0l;
      this->plane_neighbor_too_far = 0l;
      this->plane_badpca_structure = 0l;
      this->plane_invalid_numerical = 0l;
      this->plane_mse_too_large = 0l;
      this->plane_unknown = 0l;
      this->prediction_source = 0l;
    }
  }

  explicit OptimizationStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->laser_cloud_surf_from_map_num = 0l;
      this->laser_cloud_corner_from_map_num = 0l;
      this->laser_cloud_surf_stack_num = 0l;
      this->laser_cloud_corner_stack_num = 0l;
      this->total_translation = 0.0;
      this->total_rotation = 0.0;
      this->translation_from_last = 0.0;
      this->rotation_from_last = 0.0;
      this->time_elapsed = 0.0;
      this->latency = 0.0;
      this->n_iterations = 0l;
      this->average_distance = 0.0;
      this->uncertainty_x = 0.0;
      this->uncertainty_y = 0.0;
      this->uncertainty_z = 0.0;
      this->uncertainty_roll = 0.0;
      this->uncertainty_pitch = 0.0;
      this->uncertainty_yaw = 0.0;
      this->plane_match_success = 0l;
      this->plane_no_enough_neighbor = 0l;
      this->plane_neighbor_too_far = 0l;
      this->plane_badpca_structure = 0l;
      this->plane_invalid_numerical = 0l;
      this->plane_mse_too_large = 0l;
      this->plane_unknown = 0l;
      this->prediction_source = 0l;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _laser_cloud_surf_from_map_num_type =
    int32_t;
  _laser_cloud_surf_from_map_num_type laser_cloud_surf_from_map_num;
  using _laser_cloud_corner_from_map_num_type =
    int32_t;
  _laser_cloud_corner_from_map_num_type laser_cloud_corner_from_map_num;
  using _laser_cloud_surf_stack_num_type =
    int32_t;
  _laser_cloud_surf_stack_num_type laser_cloud_surf_stack_num;
  using _laser_cloud_corner_stack_num_type =
    int32_t;
  _laser_cloud_corner_stack_num_type laser_cloud_corner_stack_num;
  using _total_translation_type =
    double;
  _total_translation_type total_translation;
  using _total_rotation_type =
    double;
  _total_rotation_type total_rotation;
  using _translation_from_last_type =
    double;
  _translation_from_last_type translation_from_last;
  using _rotation_from_last_type =
    double;
  _rotation_from_last_type rotation_from_last;
  using _time_elapsed_type =
    double;
  _time_elapsed_type time_elapsed;
  using _latency_type =
    double;
  _latency_type latency;
  using _n_iterations_type =
    int32_t;
  _n_iterations_type n_iterations;
  using _average_distance_type =
    double;
  _average_distance_type average_distance;
  using _uncertainty_x_type =
    double;
  _uncertainty_x_type uncertainty_x;
  using _uncertainty_y_type =
    double;
  _uncertainty_y_type uncertainty_y;
  using _uncertainty_z_type =
    double;
  _uncertainty_z_type uncertainty_z;
  using _uncertainty_roll_type =
    double;
  _uncertainty_roll_type uncertainty_roll;
  using _uncertainty_pitch_type =
    double;
  _uncertainty_pitch_type uncertainty_pitch;
  using _uncertainty_yaw_type =
    double;
  _uncertainty_yaw_type uncertainty_yaw;
  using _plane_match_success_type =
    int32_t;
  _plane_match_success_type plane_match_success;
  using _plane_no_enough_neighbor_type =
    int32_t;
  _plane_no_enough_neighbor_type plane_no_enough_neighbor;
  using _plane_neighbor_too_far_type =
    int32_t;
  _plane_neighbor_too_far_type plane_neighbor_too_far;
  using _plane_badpca_structure_type =
    int32_t;
  _plane_badpca_structure_type plane_badpca_structure;
  using _plane_invalid_numerical_type =
    int32_t;
  _plane_invalid_numerical_type plane_invalid_numerical;
  using _plane_mse_too_large_type =
    int32_t;
  _plane_mse_too_large_type plane_mse_too_large;
  using _plane_unknown_type =
    int32_t;
  _plane_unknown_type plane_unknown;
  using _prediction_source_type =
    int32_t;
  _prediction_source_type prediction_source;
  using _iterations_type =
    std::vector<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>>>;
  _iterations_type iterations;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__laser_cloud_surf_from_map_num(
    const int32_t & _arg)
  {
    this->laser_cloud_surf_from_map_num = _arg;
    return *this;
  }
  Type & set__laser_cloud_corner_from_map_num(
    const int32_t & _arg)
  {
    this->laser_cloud_corner_from_map_num = _arg;
    return *this;
  }
  Type & set__laser_cloud_surf_stack_num(
    const int32_t & _arg)
  {
    this->laser_cloud_surf_stack_num = _arg;
    return *this;
  }
  Type & set__laser_cloud_corner_stack_num(
    const int32_t & _arg)
  {
    this->laser_cloud_corner_stack_num = _arg;
    return *this;
  }
  Type & set__total_translation(
    const double & _arg)
  {
    this->total_translation = _arg;
    return *this;
  }
  Type & set__total_rotation(
    const double & _arg)
  {
    this->total_rotation = _arg;
    return *this;
  }
  Type & set__translation_from_last(
    const double & _arg)
  {
    this->translation_from_last = _arg;
    return *this;
  }
  Type & set__rotation_from_last(
    const double & _arg)
  {
    this->rotation_from_last = _arg;
    return *this;
  }
  Type & set__time_elapsed(
    const double & _arg)
  {
    this->time_elapsed = _arg;
    return *this;
  }
  Type & set__latency(
    const double & _arg)
  {
    this->latency = _arg;
    return *this;
  }
  Type & set__n_iterations(
    const int32_t & _arg)
  {
    this->n_iterations = _arg;
    return *this;
  }
  Type & set__average_distance(
    const double & _arg)
  {
    this->average_distance = _arg;
    return *this;
  }
  Type & set__uncertainty_x(
    const double & _arg)
  {
    this->uncertainty_x = _arg;
    return *this;
  }
  Type & set__uncertainty_y(
    const double & _arg)
  {
    this->uncertainty_y = _arg;
    return *this;
  }
  Type & set__uncertainty_z(
    const double & _arg)
  {
    this->uncertainty_z = _arg;
    return *this;
  }
  Type & set__uncertainty_roll(
    const double & _arg)
  {
    this->uncertainty_roll = _arg;
    return *this;
  }
  Type & set__uncertainty_pitch(
    const double & _arg)
  {
    this->uncertainty_pitch = _arg;
    return *this;
  }
  Type & set__uncertainty_yaw(
    const double & _arg)
  {
    this->uncertainty_yaw = _arg;
    return *this;
  }
  Type & set__plane_match_success(
    const int32_t & _arg)
  {
    this->plane_match_success = _arg;
    return *this;
  }
  Type & set__plane_no_enough_neighbor(
    const int32_t & _arg)
  {
    this->plane_no_enough_neighbor = _arg;
    return *this;
  }
  Type & set__plane_neighbor_too_far(
    const int32_t & _arg)
  {
    this->plane_neighbor_too_far = _arg;
    return *this;
  }
  Type & set__plane_badpca_structure(
    const int32_t & _arg)
  {
    this->plane_badpca_structure = _arg;
    return *this;
  }
  Type & set__plane_invalid_numerical(
    const int32_t & _arg)
  {
    this->plane_invalid_numerical = _arg;
    return *this;
  }
  Type & set__plane_mse_too_large(
    const int32_t & _arg)
  {
    this->plane_mse_too_large = _arg;
    return *this;
  }
  Type & set__plane_unknown(
    const int32_t & _arg)
  {
    this->plane_unknown = _arg;
    return *this;
  }
  Type & set__prediction_source(
    const int32_t & _arg)
  {
    this->prediction_source = _arg;
    return *this;
  }
  Type & set__iterations(
    const std::vector<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>>> & _arg)
  {
    this->iterations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arise_slam_mid360_msgs__msg__OptimizationStats
    std::shared_ptr<arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arise_slam_mid360_msgs__msg__OptimizationStats
    std::shared_ptr<arise_slam_mid360_msgs::msg::OptimizationStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const OptimizationStats_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->laser_cloud_surf_from_map_num != other.laser_cloud_surf_from_map_num) {
      return false;
    }
    if (this->laser_cloud_corner_from_map_num != other.laser_cloud_corner_from_map_num) {
      return false;
    }
    if (this->laser_cloud_surf_stack_num != other.laser_cloud_surf_stack_num) {
      return false;
    }
    if (this->laser_cloud_corner_stack_num != other.laser_cloud_corner_stack_num) {
      return false;
    }
    if (this->total_translation != other.total_translation) {
      return false;
    }
    if (this->total_rotation != other.total_rotation) {
      return false;
    }
    if (this->translation_from_last != other.translation_from_last) {
      return false;
    }
    if (this->rotation_from_last != other.rotation_from_last) {
      return false;
    }
    if (this->time_elapsed != other.time_elapsed) {
      return false;
    }
    if (this->latency != other.latency) {
      return false;
    }
    if (this->n_iterations != other.n_iterations) {
      return false;
    }
    if (this->average_distance != other.average_distance) {
      return false;
    }
    if (this->uncertainty_x != other.uncertainty_x) {
      return false;
    }
    if (this->uncertainty_y != other.uncertainty_y) {
      return false;
    }
    if (this->uncertainty_z != other.uncertainty_z) {
      return false;
    }
    if (this->uncertainty_roll != other.uncertainty_roll) {
      return false;
    }
    if (this->uncertainty_pitch != other.uncertainty_pitch) {
      return false;
    }
    if (this->uncertainty_yaw != other.uncertainty_yaw) {
      return false;
    }
    if (this->plane_match_success != other.plane_match_success) {
      return false;
    }
    if (this->plane_no_enough_neighbor != other.plane_no_enough_neighbor) {
      return false;
    }
    if (this->plane_neighbor_too_far != other.plane_neighbor_too_far) {
      return false;
    }
    if (this->plane_badpca_structure != other.plane_badpca_structure) {
      return false;
    }
    if (this->plane_invalid_numerical != other.plane_invalid_numerical) {
      return false;
    }
    if (this->plane_mse_too_large != other.plane_mse_too_large) {
      return false;
    }
    if (this->plane_unknown != other.plane_unknown) {
      return false;
    }
    if (this->prediction_source != other.prediction_source) {
      return false;
    }
    if (this->iterations != other.iterations) {
      return false;
    }
    return true;
  }
  bool operator!=(const OptimizationStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct OptimizationStats_

// alias to use template instance with default allocator
using OptimizationStats =
  arise_slam_mid360_msgs::msg::OptimizationStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arise_slam_mid360_msgs

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__STRUCT_HPP_
