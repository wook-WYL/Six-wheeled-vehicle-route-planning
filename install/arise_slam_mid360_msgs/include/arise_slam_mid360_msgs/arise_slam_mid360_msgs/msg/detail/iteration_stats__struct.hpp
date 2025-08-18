// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arise_slam_mid360_msgs:msg/IterationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__STRUCT_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__STRUCT_HPP_

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

#ifndef _WIN32
# define DEPRECATED__arise_slam_mid360_msgs__msg__IterationStats __attribute__((deprecated))
#else
# define DEPRECATED__arise_slam_mid360_msgs__msg__IterationStats __declspec(deprecated)
#endif

namespace arise_slam_mid360_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct IterationStats_
{
  using Type = IterationStats_<ContainerAllocator>;

  explicit IterationStats_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->translation_norm = 0.0;
      this->rotation_norm = 0.0;
      this->num_surf_from_scan = 0.0;
      this->num_corner_from_scan = 0.0;
    }
  }

  explicit IterationStats_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->translation_norm = 0.0;
      this->rotation_norm = 0.0;
      this->num_surf_from_scan = 0.0;
      this->num_corner_from_scan = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _translation_norm_type =
    double;
  _translation_norm_type translation_norm;
  using _rotation_norm_type =
    double;
  _rotation_norm_type rotation_norm;
  using _num_surf_from_scan_type =
    double;
  _num_surf_from_scan_type num_surf_from_scan;
  using _num_corner_from_scan_type =
    double;
  _num_corner_from_scan_type num_corner_from_scan;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__translation_norm(
    const double & _arg)
  {
    this->translation_norm = _arg;
    return *this;
  }
  Type & set__rotation_norm(
    const double & _arg)
  {
    this->rotation_norm = _arg;
    return *this;
  }
  Type & set__num_surf_from_scan(
    const double & _arg)
  {
    this->num_surf_from_scan = _arg;
    return *this;
  }
  Type & set__num_corner_from_scan(
    const double & _arg)
  {
    this->num_corner_from_scan = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator> *;
  using ConstRawPtr =
    const arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arise_slam_mid360_msgs__msg__IterationStats
    std::shared_ptr<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arise_slam_mid360_msgs__msg__IterationStats
    std::shared_ptr<arise_slam_mid360_msgs::msg::IterationStats_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const IterationStats_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->translation_norm != other.translation_norm) {
      return false;
    }
    if (this->rotation_norm != other.rotation_norm) {
      return false;
    }
    if (this->num_surf_from_scan != other.num_surf_from_scan) {
      return false;
    }
    if (this->num_corner_from_scan != other.num_corner_from_scan) {
      return false;
    }
    return true;
  }
  bool operator!=(const IterationStats_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct IterationStats_

// alias to use template instance with default allocator
using IterationStats =
  arise_slam_mid360_msgs::msg::IterationStats_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arise_slam_mid360_msgs

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__ITERATION_STATS__STRUCT_HPP_
