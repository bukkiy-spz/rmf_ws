// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_door_msgs:msg/DoorState.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__BUILDER_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_door_msgs/msg/detail/door_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_door_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorState_current_mode
{
public:
  explicit Init_DoorState_current_mode(::rmf_door_msgs::msg::DoorState & msg)
  : msg_(msg)
  {}
  ::rmf_door_msgs::msg::DoorState current_mode(::rmf_door_msgs::msg::DoorState::_current_mode_type arg)
  {
    msg_.current_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorState msg_;
};

class Init_DoorState_door_name
{
public:
  explicit Init_DoorState_door_name(::rmf_door_msgs::msg::DoorState & msg)
  : msg_(msg)
  {}
  Init_DoorState_current_mode door_name(::rmf_door_msgs::msg::DoorState::_door_name_type arg)
  {
    msg_.door_name = std::move(arg);
    return Init_DoorState_current_mode(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorState msg_;
};

class Init_DoorState_door_time
{
public:
  Init_DoorState_door_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorState_door_name door_time(::rmf_door_msgs::msg::DoorState::_door_time_type arg)
  {
    msg_.door_time = std::move(arg);
    return Init_DoorState_door_name(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_door_msgs::msg::DoorState>()
{
  return rmf_door_msgs::msg::builder::Init_DoorState_door_time();
}

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__BUILDER_HPP_
