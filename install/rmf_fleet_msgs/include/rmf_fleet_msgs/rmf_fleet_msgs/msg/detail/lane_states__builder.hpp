// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/LaneStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/lane_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneStates_speed_limits
{
public:
  explicit Init_LaneStates_speed_limits(::rmf_fleet_msgs::msg::LaneStates & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::LaneStates speed_limits(::rmf_fleet_msgs::msg::LaneStates::_speed_limits_type arg)
  {
    msg_.speed_limits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::LaneStates msg_;
};

class Init_LaneStates_closed_lanes
{
public:
  explicit Init_LaneStates_closed_lanes(::rmf_fleet_msgs::msg::LaneStates & msg)
  : msg_(msg)
  {}
  Init_LaneStates_speed_limits closed_lanes(::rmf_fleet_msgs::msg::LaneStates::_closed_lanes_type arg)
  {
    msg_.closed_lanes = std::move(arg);
    return Init_LaneStates_speed_limits(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::LaneStates msg_;
};

class Init_LaneStates_fleet_name
{
public:
  Init_LaneStates_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneStates_closed_lanes fleet_name(::rmf_fleet_msgs::msg::LaneStates::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_LaneStates_closed_lanes(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::LaneStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::LaneStates>()
{
  return rmf_fleet_msgs::msg::builder::Init_LaneStates_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__BUILDER_HPP_
