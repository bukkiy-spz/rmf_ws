// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/ChargingAssignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/charging_assignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargingAssignment_mode
{
public:
  explicit Init_ChargingAssignment_mode(::rmf_fleet_msgs::msg::ChargingAssignment & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::ChargingAssignment mode(::rmf_fleet_msgs::msg::ChargingAssignment::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ChargingAssignment msg_;
};

class Init_ChargingAssignment_waypoint_name
{
public:
  explicit Init_ChargingAssignment_waypoint_name(::rmf_fleet_msgs::msg::ChargingAssignment & msg)
  : msg_(msg)
  {}
  Init_ChargingAssignment_mode waypoint_name(::rmf_fleet_msgs::msg::ChargingAssignment::_waypoint_name_type arg)
  {
    msg_.waypoint_name = std::move(arg);
    return Init_ChargingAssignment_mode(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ChargingAssignment msg_;
};

class Init_ChargingAssignment_robot_name
{
public:
  Init_ChargingAssignment_robot_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargingAssignment_waypoint_name robot_name(::rmf_fleet_msgs::msg::ChargingAssignment::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_ChargingAssignment_waypoint_name(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ChargingAssignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::ChargingAssignment>()
{
  return rmf_fleet_msgs::msg::builder::Init_ChargingAssignment_robot_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__BUILDER_HPP_
