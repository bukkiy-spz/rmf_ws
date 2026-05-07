// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__BUILDER_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_door_msgs/msg/detail/door_sessions__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_door_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorSessions_sessions
{
public:
  explicit Init_DoorSessions_sessions(::rmf_door_msgs::msg::DoorSessions & msg)
  : msg_(msg)
  {}
  ::rmf_door_msgs::msg::DoorSessions sessions(::rmf_door_msgs::msg::DoorSessions::_sessions_type arg)
  {
    msg_.sessions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorSessions msg_;
};

class Init_DoorSessions_door_name
{
public:
  Init_DoorSessions_door_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorSessions_sessions door_name(::rmf_door_msgs::msg::DoorSessions::_door_name_type arg)
  {
    msg_.door_name = std::move(arg);
    return Init_DoorSessions_sessions(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorSessions msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_door_msgs::msg::DoorSessions>()
{
  return rmf_door_msgs::msg::builder::Init_DoorSessions_door_name();
}

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__BUILDER_HPP_
