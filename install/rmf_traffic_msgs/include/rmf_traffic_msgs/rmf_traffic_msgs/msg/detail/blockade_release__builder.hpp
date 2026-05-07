// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeRelease.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_RELEASE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_RELEASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/blockade_release__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockadeRelease_checkpoint
{
public:
  explicit Init_BlockadeRelease_checkpoint(::rmf_traffic_msgs::msg::BlockadeRelease & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::BlockadeRelease checkpoint(::rmf_traffic_msgs::msg::BlockadeRelease::_checkpoint_type arg)
  {
    msg_.checkpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeRelease msg_;
};

class Init_BlockadeRelease_reservation
{
public:
  explicit Init_BlockadeRelease_reservation(::rmf_traffic_msgs::msg::BlockadeRelease & msg)
  : msg_(msg)
  {}
  Init_BlockadeRelease_checkpoint reservation(::rmf_traffic_msgs::msg::BlockadeRelease::_reservation_type arg)
  {
    msg_.reservation = std::move(arg);
    return Init_BlockadeRelease_checkpoint(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeRelease msg_;
};

class Init_BlockadeRelease_participant
{
public:
  Init_BlockadeRelease_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockadeRelease_reservation participant(::rmf_traffic_msgs::msg::BlockadeRelease::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_BlockadeRelease_reservation(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeRelease msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::BlockadeRelease>()
{
  return rmf_traffic_msgs::msg::builder::Init_BlockadeRelease_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_RELEASE__BUILDER_HPP_
