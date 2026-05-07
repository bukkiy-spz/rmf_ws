// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/blockade_heartbeat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockadeHeartbeat_has_gridlock
{
public:
  explicit Init_BlockadeHeartbeat_has_gridlock(::rmf_traffic_msgs::msg::BlockadeHeartbeat & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::BlockadeHeartbeat has_gridlock(::rmf_traffic_msgs::msg::BlockadeHeartbeat::_has_gridlock_type arg)
  {
    msg_.has_gridlock = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeHeartbeat msg_;
};

class Init_BlockadeHeartbeat_statuses
{
public:
  Init_BlockadeHeartbeat_statuses()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockadeHeartbeat_has_gridlock statuses(::rmf_traffic_msgs::msg::BlockadeHeartbeat::_statuses_type arg)
  {
    msg_.statuses = std::move(arg);
    return Init_BlockadeHeartbeat_has_gridlock(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeHeartbeat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::BlockadeHeartbeat>()
{
  return rmf_traffic_msgs::msg::builder::Init_BlockadeHeartbeat_statuses();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_HEARTBEAT__BUILDER_HPP_
