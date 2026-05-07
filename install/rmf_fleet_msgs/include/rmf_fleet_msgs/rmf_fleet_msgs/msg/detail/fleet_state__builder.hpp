// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/FleetState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/fleet_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_FleetState_robots
{
public:
  explicit Init_FleetState_robots(::rmf_fleet_msgs::msg::FleetState & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::FleetState robots(::rmf_fleet_msgs::msg::FleetState::_robots_type arg)
  {
    msg_.robots = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::FleetState msg_;
};

class Init_FleetState_name
{
public:
  Init_FleetState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FleetState_robots name(::rmf_fleet_msgs::msg::FleetState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_FleetState_robots(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::FleetState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::FleetState>()
{
  return rmf_fleet_msgs::msg::builder::Init_FleetState_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__FLEET_STATE__BUILDER_HPP_
