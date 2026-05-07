// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/blockade_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockadeStatus_assignment_end
{
public:
  explicit Init_BlockadeStatus_assignment_end(::rmf_traffic_msgs::msg::BlockadeStatus & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::BlockadeStatus assignment_end(::rmf_traffic_msgs::msg::BlockadeStatus::_assignment_end_type arg)
  {
    msg_.assignment_end = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeStatus msg_;
};

class Init_BlockadeStatus_assignment_begin
{
public:
  explicit Init_BlockadeStatus_assignment_begin(::rmf_traffic_msgs::msg::BlockadeStatus & msg)
  : msg_(msg)
  {}
  Init_BlockadeStatus_assignment_end assignment_begin(::rmf_traffic_msgs::msg::BlockadeStatus::_assignment_begin_type arg)
  {
    msg_.assignment_begin = std::move(arg);
    return Init_BlockadeStatus_assignment_end(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeStatus msg_;
};

class Init_BlockadeStatus_last_reached
{
public:
  explicit Init_BlockadeStatus_last_reached(::rmf_traffic_msgs::msg::BlockadeStatus & msg)
  : msg_(msg)
  {}
  Init_BlockadeStatus_assignment_begin last_reached(::rmf_traffic_msgs::msg::BlockadeStatus::_last_reached_type arg)
  {
    msg_.last_reached = std::move(arg);
    return Init_BlockadeStatus_assignment_begin(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeStatus msg_;
};

class Init_BlockadeStatus_last_ready
{
public:
  explicit Init_BlockadeStatus_last_ready(::rmf_traffic_msgs::msg::BlockadeStatus & msg)
  : msg_(msg)
  {}
  Init_BlockadeStatus_last_reached last_ready(::rmf_traffic_msgs::msg::BlockadeStatus::_last_ready_type arg)
  {
    msg_.last_ready = std::move(arg);
    return Init_BlockadeStatus_last_reached(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeStatus msg_;
};

class Init_BlockadeStatus_any_ready
{
public:
  explicit Init_BlockadeStatus_any_ready(::rmf_traffic_msgs::msg::BlockadeStatus & msg)
  : msg_(msg)
  {}
  Init_BlockadeStatus_last_ready any_ready(::rmf_traffic_msgs::msg::BlockadeStatus::_any_ready_type arg)
  {
    msg_.any_ready = std::move(arg);
    return Init_BlockadeStatus_last_ready(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeStatus msg_;
};

class Init_BlockadeStatus_reservation
{
public:
  explicit Init_BlockadeStatus_reservation(::rmf_traffic_msgs::msg::BlockadeStatus & msg)
  : msg_(msg)
  {}
  Init_BlockadeStatus_any_ready reservation(::rmf_traffic_msgs::msg::BlockadeStatus::_reservation_type arg)
  {
    msg_.reservation = std::move(arg);
    return Init_BlockadeStatus_any_ready(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeStatus msg_;
};

class Init_BlockadeStatus_participant
{
public:
  Init_BlockadeStatus_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockadeStatus_reservation participant(::rmf_traffic_msgs::msg::BlockadeStatus::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_BlockadeStatus_reservation(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::BlockadeStatus>()
{
  return rmf_traffic_msgs::msg::builder::Init_BlockadeStatus_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__BUILDER_HPP_
