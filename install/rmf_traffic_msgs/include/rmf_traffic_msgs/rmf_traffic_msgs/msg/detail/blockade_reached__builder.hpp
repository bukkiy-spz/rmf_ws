// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeReached.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/blockade_reached__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockadeReached_checkpoint
{
public:
  explicit Init_BlockadeReached_checkpoint(::rmf_traffic_msgs::msg::BlockadeReached & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::BlockadeReached checkpoint(::rmf_traffic_msgs::msg::BlockadeReached::_checkpoint_type arg)
  {
    msg_.checkpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeReached msg_;
};

class Init_BlockadeReached_reservation
{
public:
  explicit Init_BlockadeReached_reservation(::rmf_traffic_msgs::msg::BlockadeReached & msg)
  : msg_(msg)
  {}
  Init_BlockadeReached_checkpoint reservation(::rmf_traffic_msgs::msg::BlockadeReached::_reservation_type arg)
  {
    msg_.reservation = std::move(arg);
    return Init_BlockadeReached_checkpoint(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeReached msg_;
};

class Init_BlockadeReached_participant
{
public:
  Init_BlockadeReached_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockadeReached_reservation participant(::rmf_traffic_msgs::msg::BlockadeReached::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_BlockadeReached_reservation(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeReached msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::BlockadeReached>()
{
  return rmf_traffic_msgs::msg::builder::Init_BlockadeReached_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__BUILDER_HPP_
