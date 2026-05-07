// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_charger_msgs:msg/ChargerState.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__BUILDER_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_charger_msgs/msg/detail/charger_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_charger_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargerState_time_to_fully_charged
{
public:
  explicit Init_ChargerState_time_to_fully_charged(::rmf_charger_msgs::msg::ChargerState & msg)
  : msg_(msg)
  {}
  ::rmf_charger_msgs::msg::ChargerState time_to_fully_charged(::rmf_charger_msgs::msg::ChargerState::_time_to_fully_charged_type arg)
  {
    msg_.time_to_fully_charged = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerState msg_;
};

class Init_ChargerState_robot_name
{
public:
  explicit Init_ChargerState_robot_name(::rmf_charger_msgs::msg::ChargerState & msg)
  : msg_(msg)
  {}
  Init_ChargerState_time_to_fully_charged robot_name(::rmf_charger_msgs::msg::ChargerState::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_ChargerState_time_to_fully_charged(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerState msg_;
};

class Init_ChargerState_robot_fleet
{
public:
  explicit Init_ChargerState_robot_fleet(::rmf_charger_msgs::msg::ChargerState & msg)
  : msg_(msg)
  {}
  Init_ChargerState_robot_name robot_fleet(::rmf_charger_msgs::msg::ChargerState::_robot_fleet_type arg)
  {
    msg_.robot_fleet = std::move(arg);
    return Init_ChargerState_robot_name(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerState msg_;
};

class Init_ChargerState_request_id
{
public:
  explicit Init_ChargerState_request_id(::rmf_charger_msgs::msg::ChargerState & msg)
  : msg_(msg)
  {}
  Init_ChargerState_robot_fleet request_id(::rmf_charger_msgs::msg::ChargerState::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return Init_ChargerState_robot_fleet(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerState msg_;
};

class Init_ChargerState_error_message
{
public:
  explicit Init_ChargerState_error_message(::rmf_charger_msgs::msg::ChargerState & msg)
  : msg_(msg)
  {}
  Init_ChargerState_request_id error_message(::rmf_charger_msgs::msg::ChargerState::_error_message_type arg)
  {
    msg_.error_message = std::move(arg);
    return Init_ChargerState_request_id(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerState msg_;
};

class Init_ChargerState_charger_name
{
public:
  explicit Init_ChargerState_charger_name(::rmf_charger_msgs::msg::ChargerState & msg)
  : msg_(msg)
  {}
  Init_ChargerState_error_message charger_name(::rmf_charger_msgs::msg::ChargerState::_charger_name_type arg)
  {
    msg_.charger_name = std::move(arg);
    return Init_ChargerState_error_message(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerState msg_;
};

class Init_ChargerState_state
{
public:
  explicit Init_ChargerState_state(::rmf_charger_msgs::msg::ChargerState & msg)
  : msg_(msg)
  {}
  Init_ChargerState_charger_name state(::rmf_charger_msgs::msg::ChargerState::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_ChargerState_charger_name(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerState msg_;
};

class Init_ChargerState_charger_time
{
public:
  Init_ChargerState_charger_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargerState_state charger_time(::rmf_charger_msgs::msg::ChargerState::_charger_time_type arg)
  {
    msg_.charger_time = std::move(arg);
    return Init_ChargerState_state(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_charger_msgs::msg::ChargerState>()
{
  return rmf_charger_msgs::msg::builder::Init_ChargerState_charger_time();
}

}  // namespace rmf_charger_msgs

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__BUILDER_HPP_
