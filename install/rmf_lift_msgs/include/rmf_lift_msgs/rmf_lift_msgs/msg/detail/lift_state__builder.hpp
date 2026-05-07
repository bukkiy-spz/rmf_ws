// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice

#ifndef RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__BUILDER_HPP_
#define RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_lift_msgs/msg/detail/lift_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_lift_msgs
{

namespace msg
{

namespace builder
{

class Init_LiftState_session_id
{
public:
  explicit Init_LiftState_session_id(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  ::rmf_lift_msgs::msg::LiftState session_id(::rmf_lift_msgs::msg::LiftState::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_current_mode
{
public:
  explicit Init_LiftState_current_mode(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  Init_LiftState_session_id current_mode(::rmf_lift_msgs::msg::LiftState::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return Init_LiftState_session_id(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_available_modes
{
public:
  explicit Init_LiftState_available_modes(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  Init_LiftState_current_mode available_modes(::rmf_lift_msgs::msg::LiftState::_available_modes_type arg)
  {
    msg_.available_modes = std::move(arg);
    return Init_LiftState_current_mode(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_motion_state
{
public:
  explicit Init_LiftState_motion_state(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  Init_LiftState_available_modes motion_state(::rmf_lift_msgs::msg::LiftState::_motion_state_type arg)
  {
    msg_.motion_state = std::move(arg);
    return Init_LiftState_available_modes(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_door_state
{
public:
  explicit Init_LiftState_door_state(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  Init_LiftState_motion_state door_state(::rmf_lift_msgs::msg::LiftState::_door_state_type arg)
  {
    msg_.door_state = std::move(arg);
    return Init_LiftState_motion_state(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_destination_floor
{
public:
  explicit Init_LiftState_destination_floor(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  Init_LiftState_door_state destination_floor(::rmf_lift_msgs::msg::LiftState::_destination_floor_type arg)
  {
    msg_.destination_floor = std::move(arg);
    return Init_LiftState_door_state(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_current_floor
{
public:
  explicit Init_LiftState_current_floor(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  Init_LiftState_destination_floor current_floor(::rmf_lift_msgs::msg::LiftState::_current_floor_type arg)
  {
    msg_.current_floor = std::move(arg);
    return Init_LiftState_destination_floor(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_available_floors
{
public:
  explicit Init_LiftState_available_floors(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  Init_LiftState_current_floor available_floors(::rmf_lift_msgs::msg::LiftState::_available_floors_type arg)
  {
    msg_.available_floors = std::move(arg);
    return Init_LiftState_current_floor(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_lift_name
{
public:
  explicit Init_LiftState_lift_name(::rmf_lift_msgs::msg::LiftState & msg)
  : msg_(msg)
  {}
  Init_LiftState_available_floors lift_name(::rmf_lift_msgs::msg::LiftState::_lift_name_type arg)
  {
    msg_.lift_name = std::move(arg);
    return Init_LiftState_available_floors(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

class Init_LiftState_lift_time
{
public:
  Init_LiftState_lift_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftState_lift_name lift_time(::rmf_lift_msgs::msg::LiftState::_lift_time_type arg)
  {
    msg_.lift_time = std::move(arg);
    return Init_LiftState_lift_name(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_lift_msgs::msg::LiftState>()
{
  return rmf_lift_msgs::msg::builder::Init_LiftState_lift_time();
}

}  // namespace rmf_lift_msgs

#endif  // RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__BUILDER_HPP_
