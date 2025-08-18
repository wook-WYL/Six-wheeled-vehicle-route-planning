// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from arise_slam_mid360_msgs:msg/OptimizationStats.idl
// generated code does not contain a copyright notice

#ifndef ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__BUILDER_HPP_
#define ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "arise_slam_mid360_msgs/msg/detail/optimization_stats__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace arise_slam_mid360_msgs
{

namespace msg
{

namespace builder
{

class Init_OptimizationStats_iterations
{
public:
  explicit Init_OptimizationStats_iterations(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  ::arise_slam_mid360_msgs::msg::OptimizationStats iterations(::arise_slam_mid360_msgs::msg::OptimizationStats::_iterations_type arg)
  {
    msg_.iterations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_prediction_source
{
public:
  explicit Init_OptimizationStats_prediction_source(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_iterations prediction_source(::arise_slam_mid360_msgs::msg::OptimizationStats::_prediction_source_type arg)
  {
    msg_.prediction_source = std::move(arg);
    return Init_OptimizationStats_iterations(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_plane_unknown
{
public:
  explicit Init_OptimizationStats_plane_unknown(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_prediction_source plane_unknown(::arise_slam_mid360_msgs::msg::OptimizationStats::_plane_unknown_type arg)
  {
    msg_.plane_unknown = std::move(arg);
    return Init_OptimizationStats_prediction_source(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_plane_mse_too_large
{
public:
  explicit Init_OptimizationStats_plane_mse_too_large(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_plane_unknown plane_mse_too_large(::arise_slam_mid360_msgs::msg::OptimizationStats::_plane_mse_too_large_type arg)
  {
    msg_.plane_mse_too_large = std::move(arg);
    return Init_OptimizationStats_plane_unknown(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_plane_invalid_numerical
{
public:
  explicit Init_OptimizationStats_plane_invalid_numerical(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_plane_mse_too_large plane_invalid_numerical(::arise_slam_mid360_msgs::msg::OptimizationStats::_plane_invalid_numerical_type arg)
  {
    msg_.plane_invalid_numerical = std::move(arg);
    return Init_OptimizationStats_plane_mse_too_large(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_plane_badpca_structure
{
public:
  explicit Init_OptimizationStats_plane_badpca_structure(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_plane_invalid_numerical plane_badpca_structure(::arise_slam_mid360_msgs::msg::OptimizationStats::_plane_badpca_structure_type arg)
  {
    msg_.plane_badpca_structure = std::move(arg);
    return Init_OptimizationStats_plane_invalid_numerical(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_plane_neighbor_too_far
{
public:
  explicit Init_OptimizationStats_plane_neighbor_too_far(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_plane_badpca_structure plane_neighbor_too_far(::arise_slam_mid360_msgs::msg::OptimizationStats::_plane_neighbor_too_far_type arg)
  {
    msg_.plane_neighbor_too_far = std::move(arg);
    return Init_OptimizationStats_plane_badpca_structure(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_plane_no_enough_neighbor
{
public:
  explicit Init_OptimizationStats_plane_no_enough_neighbor(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_plane_neighbor_too_far plane_no_enough_neighbor(::arise_slam_mid360_msgs::msg::OptimizationStats::_plane_no_enough_neighbor_type arg)
  {
    msg_.plane_no_enough_neighbor = std::move(arg);
    return Init_OptimizationStats_plane_neighbor_too_far(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_plane_match_success
{
public:
  explicit Init_OptimizationStats_plane_match_success(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_plane_no_enough_neighbor plane_match_success(::arise_slam_mid360_msgs::msg::OptimizationStats::_plane_match_success_type arg)
  {
    msg_.plane_match_success = std::move(arg);
    return Init_OptimizationStats_plane_no_enough_neighbor(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_uncertainty_yaw
{
public:
  explicit Init_OptimizationStats_uncertainty_yaw(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_plane_match_success uncertainty_yaw(::arise_slam_mid360_msgs::msg::OptimizationStats::_uncertainty_yaw_type arg)
  {
    msg_.uncertainty_yaw = std::move(arg);
    return Init_OptimizationStats_plane_match_success(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_uncertainty_pitch
{
public:
  explicit Init_OptimizationStats_uncertainty_pitch(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_uncertainty_yaw uncertainty_pitch(::arise_slam_mid360_msgs::msg::OptimizationStats::_uncertainty_pitch_type arg)
  {
    msg_.uncertainty_pitch = std::move(arg);
    return Init_OptimizationStats_uncertainty_yaw(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_uncertainty_roll
{
public:
  explicit Init_OptimizationStats_uncertainty_roll(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_uncertainty_pitch uncertainty_roll(::arise_slam_mid360_msgs::msg::OptimizationStats::_uncertainty_roll_type arg)
  {
    msg_.uncertainty_roll = std::move(arg);
    return Init_OptimizationStats_uncertainty_pitch(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_uncertainty_z
{
public:
  explicit Init_OptimizationStats_uncertainty_z(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_uncertainty_roll uncertainty_z(::arise_slam_mid360_msgs::msg::OptimizationStats::_uncertainty_z_type arg)
  {
    msg_.uncertainty_z = std::move(arg);
    return Init_OptimizationStats_uncertainty_roll(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_uncertainty_y
{
public:
  explicit Init_OptimizationStats_uncertainty_y(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_uncertainty_z uncertainty_y(::arise_slam_mid360_msgs::msg::OptimizationStats::_uncertainty_y_type arg)
  {
    msg_.uncertainty_y = std::move(arg);
    return Init_OptimizationStats_uncertainty_z(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_uncertainty_x
{
public:
  explicit Init_OptimizationStats_uncertainty_x(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_uncertainty_y uncertainty_x(::arise_slam_mid360_msgs::msg::OptimizationStats::_uncertainty_x_type arg)
  {
    msg_.uncertainty_x = std::move(arg);
    return Init_OptimizationStats_uncertainty_y(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_average_distance
{
public:
  explicit Init_OptimizationStats_average_distance(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_uncertainty_x average_distance(::arise_slam_mid360_msgs::msg::OptimizationStats::_average_distance_type arg)
  {
    msg_.average_distance = std::move(arg);
    return Init_OptimizationStats_uncertainty_x(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_n_iterations
{
public:
  explicit Init_OptimizationStats_n_iterations(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_average_distance n_iterations(::arise_slam_mid360_msgs::msg::OptimizationStats::_n_iterations_type arg)
  {
    msg_.n_iterations = std::move(arg);
    return Init_OptimizationStats_average_distance(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_latency
{
public:
  explicit Init_OptimizationStats_latency(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_n_iterations latency(::arise_slam_mid360_msgs::msg::OptimizationStats::_latency_type arg)
  {
    msg_.latency = std::move(arg);
    return Init_OptimizationStats_n_iterations(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_time_elapsed
{
public:
  explicit Init_OptimizationStats_time_elapsed(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_latency time_elapsed(::arise_slam_mid360_msgs::msg::OptimizationStats::_time_elapsed_type arg)
  {
    msg_.time_elapsed = std::move(arg);
    return Init_OptimizationStats_latency(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_rotation_from_last
{
public:
  explicit Init_OptimizationStats_rotation_from_last(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_time_elapsed rotation_from_last(::arise_slam_mid360_msgs::msg::OptimizationStats::_rotation_from_last_type arg)
  {
    msg_.rotation_from_last = std::move(arg);
    return Init_OptimizationStats_time_elapsed(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_translation_from_last
{
public:
  explicit Init_OptimizationStats_translation_from_last(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_rotation_from_last translation_from_last(::arise_slam_mid360_msgs::msg::OptimizationStats::_translation_from_last_type arg)
  {
    msg_.translation_from_last = std::move(arg);
    return Init_OptimizationStats_rotation_from_last(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_total_rotation
{
public:
  explicit Init_OptimizationStats_total_rotation(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_translation_from_last total_rotation(::arise_slam_mid360_msgs::msg::OptimizationStats::_total_rotation_type arg)
  {
    msg_.total_rotation = std::move(arg);
    return Init_OptimizationStats_translation_from_last(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_total_translation
{
public:
  explicit Init_OptimizationStats_total_translation(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_total_rotation total_translation(::arise_slam_mid360_msgs::msg::OptimizationStats::_total_translation_type arg)
  {
    msg_.total_translation = std::move(arg);
    return Init_OptimizationStats_total_rotation(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_laser_cloud_corner_stack_num
{
public:
  explicit Init_OptimizationStats_laser_cloud_corner_stack_num(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_total_translation laser_cloud_corner_stack_num(::arise_slam_mid360_msgs::msg::OptimizationStats::_laser_cloud_corner_stack_num_type arg)
  {
    msg_.laser_cloud_corner_stack_num = std::move(arg);
    return Init_OptimizationStats_total_translation(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_laser_cloud_surf_stack_num
{
public:
  explicit Init_OptimizationStats_laser_cloud_surf_stack_num(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_laser_cloud_corner_stack_num laser_cloud_surf_stack_num(::arise_slam_mid360_msgs::msg::OptimizationStats::_laser_cloud_surf_stack_num_type arg)
  {
    msg_.laser_cloud_surf_stack_num = std::move(arg);
    return Init_OptimizationStats_laser_cloud_corner_stack_num(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_laser_cloud_corner_from_map_num
{
public:
  explicit Init_OptimizationStats_laser_cloud_corner_from_map_num(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_laser_cloud_surf_stack_num laser_cloud_corner_from_map_num(::arise_slam_mid360_msgs::msg::OptimizationStats::_laser_cloud_corner_from_map_num_type arg)
  {
    msg_.laser_cloud_corner_from_map_num = std::move(arg);
    return Init_OptimizationStats_laser_cloud_surf_stack_num(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_laser_cloud_surf_from_map_num
{
public:
  explicit Init_OptimizationStats_laser_cloud_surf_from_map_num(::arise_slam_mid360_msgs::msg::OptimizationStats & msg)
  : msg_(msg)
  {}
  Init_OptimizationStats_laser_cloud_corner_from_map_num laser_cloud_surf_from_map_num(::arise_slam_mid360_msgs::msg::OptimizationStats::_laser_cloud_surf_from_map_num_type arg)
  {
    msg_.laser_cloud_surf_from_map_num = std::move(arg);
    return Init_OptimizationStats_laser_cloud_corner_from_map_num(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

class Init_OptimizationStats_header
{
public:
  Init_OptimizationStats_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OptimizationStats_laser_cloud_surf_from_map_num header(::arise_slam_mid360_msgs::msg::OptimizationStats::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_OptimizationStats_laser_cloud_surf_from_map_num(msg_);
  }

private:
  ::arise_slam_mid360_msgs::msg::OptimizationStats msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::arise_slam_mid360_msgs::msg::OptimizationStats>()
{
  return arise_slam_mid360_msgs::msg::builder::Init_OptimizationStats_header();
}

}  // namespace arise_slam_mid360_msgs

#endif  // ARISE_SLAM_MID360_MSGS__MSG__DETAIL__OPTIMIZATION_STATS__BUILDER_HPP_
