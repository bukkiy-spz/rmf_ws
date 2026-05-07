// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeReady.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_READY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_READY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/blockade_ready__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockadeReady_checkpoint
{
public:
  explicit Init_BlockadeReady_checkpoint(::rmf_traffic_msgs::msg::BlockadeReady & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::BlockadeReady checkpoint(::rmf_traffic_msgs::msg::BlockadeReady::_checkpoint_type arg)
  {
    msg_.checkpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeReady msg_;
};

class Init_BlockadeReady_reservation
{
public:
  explicit Init_BlockadeReady_reservation(::rmf_traffic_msgs::msg::BlockadeReady & msg)
  : msg_(msg)
  {}
  Init_BlockadeReady_checkpoint reservation(::rmf_traffic_msgs::msg::BlockadeReady::_reservation_type arg)
  {
    msg_.reservation = std::move(arg);
    return Init_BlockadeReady_checkpoint(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeReady msg_;
};

class Init_BlockadeReady_participant
{
public:
  Init_BlockadeReady_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockadeReady_reservation participant(::rmf_traffic_msgs::msg::BlockadeReady::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_BlockadeReady_reservation(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeReady msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::BlockadeReady>()
{
  return rmf_traffic_msgs::msg::builder::Init_BlockadeReady_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_READY__BUILDER_HPP_
