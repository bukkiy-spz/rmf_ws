// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/ClosedLanes.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__CLOSED_LANES__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__CLOSED_LANES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/closed_lanes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_ClosedLanes_closed_lanes
{
public:
  explicit Init_ClosedLanes_closed_lanes(::rmf_fleet_msgs::msg::ClosedLanes & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::ClosedLanes closed_lanes(::rmf_fleet_msgs::msg::ClosedLanes::_closed_lanes_type arg)
  {
    msg_.closed_lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ClosedLanes msg_;
};

class Init_ClosedLanes_fleet_name
{
public:
  Init_ClosedLanes_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ClosedLanes_closed_lanes fleet_name(::rmf_fleet_msgs::msg::ClosedLanes::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_ClosedLanes_closed_lanes(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ClosedLanes msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::ClosedLanes>()
{
  return rmf_fleet_msgs::msg::builder::Init_ClosedLanes_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__CLOSED_LANES__BUILDER_HPP_
