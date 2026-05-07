// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeCheckpoint.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockadeCheckpoint_can_hold
{
public:
  explicit Init_BlockadeCheckpoint_can_hold(::rmf_traffic_msgs::msg::BlockadeCheckpoint & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::BlockadeCheckpoint can_hold(::rmf_traffic_msgs::msg::BlockadeCheckpoint::_can_hold_type arg)
  {
    msg_.can_hold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeCheckpoint msg_;
};

class Init_BlockadeCheckpoint_map_name
{
public:
  explicit Init_BlockadeCheckpoint_map_name(::rmf_traffic_msgs::msg::BlockadeCheckpoint & msg)
  : msg_(msg)
  {}
  Init_BlockadeCheckpoint_can_hold map_name(::rmf_traffic_msgs::msg::BlockadeCheckpoint::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_BlockadeCheckpoint_can_hold(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeCheckpoint msg_;
};

class Init_BlockadeCheckpoint_position
{
public:
  Init_BlockadeCheckpoint_position()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockadeCheckpoint_map_name position(::rmf_traffic_msgs::msg::BlockadeCheckpoint::_position_type arg)
  {
    msg_.position = std::move(arg);
    return Init_BlockadeCheckpoint_map_name(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeCheckpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::BlockadeCheckpoint>()
{
  return rmf_traffic_msgs::msg::builder::Init_BlockadeCheckpoint_position();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CHECKPOINT__BUILDER_HPP_
