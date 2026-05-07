// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/ChargingAssignments.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/charging_assignments__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargingAssignments_assignments
{
public:
  explicit Init_ChargingAssignments_assignments(::rmf_fleet_msgs::msg::ChargingAssignments & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::ChargingAssignments assignments(::rmf_fleet_msgs::msg::ChargingAssignments::_assignments_type arg)
  {
    msg_.assignments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ChargingAssignments msg_;
};

class Init_ChargingAssignments_fleet_name
{
public:
  Init_ChargingAssignments_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargingAssignments_assignments fleet_name(::rmf_fleet_msgs::msg::ChargingAssignments::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_ChargingAssignments_assignments(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ChargingAssignments msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::ChargingAssignments>()
{
  return rmf_fleet_msgs::msg::builder::Init_ChargingAssignments_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENTS__BUILDER_HPP_
