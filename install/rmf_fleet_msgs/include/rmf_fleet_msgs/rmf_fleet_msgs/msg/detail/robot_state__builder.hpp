// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotState_path
{
public:
  explicit Init_RobotState_path(::rmf_fleet_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::RobotState path(::rmf_fleet_msgs::msg::RobotState::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotState msg_;
};

class Init_RobotState_location
{
public:
  explicit Init_RobotState_location(::rmf_fleet_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_path location(::rmf_fleet_msgs::msg::RobotState::_location_type arg)
  {
    msg_.location = std::move(arg);
    return Init_RobotState_path(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotState msg_;
};

class Init_RobotState_battery_percent
{
public:
  explicit Init_RobotState_battery_percent(::rmf_fleet_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_location battery_percent(::rmf_fleet_msgs::msg::RobotState::_battery_percent_type arg)
  {
    msg_.battery_percent = std::move(arg);
    return Init_RobotState_location(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotState msg_;
};

class Init_RobotState_mode
{
public:
  explicit Init_RobotState_mode(::rmf_fleet_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_battery_percent mode(::rmf_fleet_msgs::msg::RobotState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RobotState_battery_percent(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotState msg_;
};

class Init_RobotState_seq
{
public:
  explicit Init_RobotState_seq(::rmf_fleet_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_mode seq(::rmf_fleet_msgs::msg::RobotState::_seq_type arg)
  {
    msg_.seq = std::move(arg);
    return Init_RobotState_mode(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotState msg_;
};

class Init_RobotState_task_id
{
public:
  explicit Init_RobotState_task_id(::rmf_fleet_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_seq task_id(::rmf_fleet_msgs::msg::RobotState::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_RobotState_seq(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotState msg_;
};

class Init_RobotState_model
{
public:
  explicit Init_RobotState_model(::rmf_fleet_msgs::msg::RobotState & msg)
  : msg_(msg)
  {}
  Init_RobotState_task_id model(::rmf_fleet_msgs::msg::RobotState::_model_type arg)
  {
    msg_.model = std::move(arg);
    return Init_RobotState_task_id(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotState msg_;
};

class Init_RobotState_name
{
public:
  Init_RobotState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotState_model name(::rmf_fleet_msgs::msg::RobotState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_RobotState_model(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::RobotState>()
{
  return rmf_fleet_msgs::msg::builder::Init_RobotState_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__BUILDER_HPP_
