// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectoryWaypoint_velocity
{
public:
  explicit Init_TrajectoryWaypoint_velocity(::rmf_traffic_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::TrajectoryWaypoint velocity(::rmf_traffic_msgs::msg::TrajectoryWaypoint::_velocity_type arg)
  {
    msg_.velocity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_position
{
public:
  explicit Init_TrajectoryWaypoint_position(::rmf_traffic_msgs::msg::TrajectoryWaypoint & msg)
  : msg_(msg)
  {}
  Init_TrajectoryWaypoint_velocity position(::rmf_traffic_msgs::msg::TrajectoryWaypoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_TrajectoryWaypoint_velocity(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::TrajectoryWaypoint msg_;
};

class Init_TrajectoryWaypoint_time
{
public:
  Init_TrajectoryWaypoint_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryWaypoint_position time(::rmf_traffic_msgs::msg::TrajectoryWaypoint::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_TrajectoryWaypoint_position(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::TrajectoryWaypoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::TrajectoryWaypoint>()
{
  return rmf_traffic_msgs::msg::builder::Init_TrajectoryWaypoint_time();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__BUILDER_HPP_
