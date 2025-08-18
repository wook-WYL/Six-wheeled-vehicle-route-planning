// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from arise_slam_mid360_msgs:msg/LaserFeature.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__STRUCT_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__STRUCT_HPP_

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
// Member 'cloud_nodistortion'
// Member 'cloud_corner'
// Member 'cloud_surface'
// Member 'cloud_realsense'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__arise_slam_mid360_msgs__msg__LaserFeature __attribute__((deprecated))
#else
# define DEPRECATED__arise_slam_mid360_msgs__msg__LaserFeature __declspec(deprecated)
#endif

namespace arise_slam_mid360_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaserFeature_
{
  using Type = LaserFeature_<ContainerAllocator>;

  explicit LaserFeature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    cloud_nodistortion(_init),
    cloud_corner(_init),
    cloud_surface(_init),
    cloud_realsense(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor = 0ll;
      this->imu_available = 0ll;
      this->odom_available = 0ll;
      this->imu_quaternion_x = 0.0;
      this->imu_quaternion_y = 0.0;
      this->imu_quaternion_z = 0.0;
      this->imu_quaternion_w = 0.0;
      this->initial_pose_x = 0.0;
      this->initial_pose_y = 0.0;
      this->initial_pose_z = 0.0;
      this->initial_quaternion_x = 0.0;
      this->initial_quaternion_y = 0.0;
      this->initial_quaternion_z = 0.0;
      this->initial_quaternion_w = 0.0;
      this->imu_preintegration_reset_id = 0ll;
    }
  }

  explicit LaserFeature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    cloud_nodistortion(_alloc, _init),
    cloud_corner(_alloc, _init),
    cloud_surface(_alloc, _init),
    cloud_realsense(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->sensor = 0ll;
      this->imu_available = 0ll;
      this->odom_available = 0ll;
      this->imu_quaternion_x = 0.0;
      this->imu_quaternion_y = 0.0;
      this->imu_quaternion_z = 0.0;
      this->imu_quaternion_w = 0.0;
      this->initial_pose_x = 0.0;
      this->initial_pose_y = 0.0;
      this->initial_pose_z = 0.0;
      this->initial_quaternion_x = 0.0;
      this->initial_quaternion_y = 0.0;
      this->initial_quaternion_z = 0.0;
      this->initial_quaternion_w = 0.0;
      this->imu_preintegration_reset_id = 0ll;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _sensor_type =
    int64_t;
  _sensor_type sensor;
  using _imu_available_type =
    int64_t;
  _imu_available_type imu_available;
  using _odom_available_type =
    int64_t;
  _odom_available_type odom_available;
  using _imu_quaternion_x_type =
    double;
  _imu_quaternion_x_type imu_quaternion_x;
  using _imu_quaternion_y_type =
    double;
  _imu_quaternion_y_type imu_quaternion_y;
  using _imu_quaternion_z_type =
    double;
  _imu_quaternion_z_type imu_quaternion_z;
  using _imu_quaternion_w_type =
    double;
  _imu_quaternion_w_type imu_quaternion_w;
  using _initial_pose_x_type =
    double;
  _initial_pose_x_type initial_pose_x;
  using _initial_pose_y_type =
    double;
  _initial_pose_y_type initial_pose_y;
  using _initial_pose_z_type =
    double;
  _initial_pose_z_type initial_pose_z;
  using _initial_quaternion_x_type =
    double;
  _initial_quaternion_x_type initial_quaternion_x;
  using _initial_quaternion_y_type =
    double;
  _initial_quaternion_y_type initial_quaternion_y;
  using _initial_quaternion_z_type =
    double;
  _initial_quaternion_z_type initial_quaternion_z;
  using _initial_quaternion_w_type =
    double;
  _initial_quaternion_w_type initial_quaternion_w;
  using _imu_preintegration_reset_id_type =
    int64_t;
  _imu_preintegration_reset_id_type imu_preintegration_reset_id;
  using _cloud_nodistortion_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_nodistortion_type cloud_nodistortion;
  using _cloud_corner_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_corner_type cloud_corner;
  using _cloud_surface_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_surface_type cloud_surface;
  using _cloud_realsense_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_realsense_type cloud_realsense;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__sensor(
    const int64_t & _arg)
  {
    this->sensor = _arg;
    return *this;
  }
  Type & set__imu_available(
    const int64_t & _arg)
  {
    this->imu_available = _arg;
    return *this;
  }
  Type & set__odom_available(
    const int64_t & _arg)
  {
    this->odom_available = _arg;
    return *this;
  }
  Type & set__imu_quaternion_x(
    const double & _arg)
  {
    this->imu_quaternion_x = _arg;
    return *this;
  }
  Type & set__imu_quaternion_y(
    const double & _arg)
  {
    this->imu_quaternion_y = _arg;
    return *this;
  }
  Type & set__imu_quaternion_z(
    const double & _arg)
  {
    this->imu_quaternion_z = _arg;
    return *this;
  }
  Type & set__imu_quaternion_w(
    const double & _arg)
  {
    this->imu_quaternion_w = _arg;
    return *this;
  }
  Type & set__initial_pose_x(
    const double & _arg)
  {
    this->initial_pose_x = _arg;
    return *this;
  }
  Type & set__initial_pose_y(
    const double & _arg)
  {
    this->initial_pose_y = _arg;
    return *this;
  }
  Type & set__initial_pose_z(
    const double & _arg)
  {
    this->initial_pose_z = _arg;
    return *this;
  }
  Type & set__initial_quaternion_x(
    const double & _arg)
  {
    this->initial_quaternion_x = _arg;
    return *this;
  }
  Type & set__initial_quaternion_y(
    const double & _arg)
  {
    this->initial_quaternion_y = _arg;
    return *this;
  }
  Type & set__initial_quaternion_z(
    const double & _arg)
  {
    this->initial_quaternion_z = _arg;
    return *this;
  }
  Type & set__initial_quaternion_w(
    const double & _arg)
  {
    this->initial_quaternion_w = _arg;
    return *this;
  }
  Type & set__imu_preintegration_reset_id(
    const int64_t & _arg)
  {
    this->imu_preintegration_reset_id = _arg;
    return *this;
  }
  Type & set__cloud_nodistortion(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_nodistortion = _arg;
    return *this;
  }
  Type & set__cloud_corner(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_corner = _arg;
    return *this;
  }
  Type & set__cloud_surface(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_surface = _arg;
    return *this;
  }
  Type & set__cloud_realsense(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_realsense = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator> *;
  using ConstRawPtr =
    const arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__arise_slam_mid360_msgs__msg__LaserFeature
    std::shared_ptr<arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__arise_slam_mid360_msgs__msg__LaserFeature
    std::shared_ptr<arise_slam_mid360_msgs::msg::LaserFeature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserFeature_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->sensor != other.sensor) {
      return false;
    }
    if (this->imu_available != other.imu_available) {
      return false;
    }
    if (this->odom_available != other.odom_available) {
      return false;
    }
    if (this->imu_quaternion_x != other.imu_quaternion_x) {
      return false;
    }
    if (this->imu_quaternion_y != other.imu_quaternion_y) {
      return false;
    }
    if (this->imu_quaternion_z != other.imu_quaternion_z) {
      return false;
    }
    if (this->imu_quaternion_w != other.imu_quaternion_w) {
      return false;
    }
    if (this->initial_pose_x != other.initial_pose_x) {
      return false;
    }
    if (this->initial_pose_y != other.initial_pose_y) {
      return false;
    }
    if (this->initial_pose_z != other.initial_pose_z) {
      return false;
    }
    if (this->initial_quaternion_x != other.initial_quaternion_x) {
      return false;
    }
    if (this->initial_quaternion_y != other.initial_quaternion_y) {
      return false;
    }
    if (this->initial_quaternion_z != other.initial_quaternion_z) {
      return false;
    }
    if (this->initial_quaternion_w != other.initial_quaternion_w) {
      return false;
    }
    if (this->imu_preintegration_reset_id != other.imu_preintegration_reset_id) {
      return false;
    }
    if (this->cloud_nodistortion != other.cloud_nodistortion) {
      return false;
    }
    if (this->cloud_corner != other.cloud_corner) {
      return false;
    }
    if (this->cloud_surface != other.cloud_surface) {
      return false;
    }
    if (this->cloud_realsense != other.cloud_realsense) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserFeature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserFeature_

// alias to use template instance with default allocator
using LaserFeature =
  arise_slam_mid360_msgs::msg::LaserFeature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace arise_slam_mid360_msgs

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__LASER_FEATURE__STRUCT_HPP_
