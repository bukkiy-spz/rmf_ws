// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__BUILDER_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_door_msgs/msg/detail/supervisor_heartbeat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_door_msgs
{

namespace msg
{

namespace builder
{

class Init_SupervisorHeartbeat_all_sessions
{
public:
  Init_SupervisorHeartbeat_all_sessions()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_door_msgs::msg::SupervisorHeartbeat all_sessions(::rmf_door_msgs::msg::SupervisorHeartbeat::_all_sessions_type arg)
  {
    msg_.all_sessions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_door_msgs::msg::SupervisorHeartbeat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_door_msgs::msg::SupervisorHeartbeat>()
{
  return rmf_door_msgs::msg::builder::Init_SupervisorHeartbeat_all_sessions();
}

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__BUILDER_HPP_
