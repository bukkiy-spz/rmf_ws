// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/dispatch_ack__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_DispatchAck_errors
{
public:
  explicit Init_DispatchAck_errors(::rmf_task_msgs::msg::DispatchAck & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::DispatchAck errors(::rmf_task_msgs::msg::DispatchAck::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchAck msg_;
};

class Init_DispatchAck_success
{
public:
  explicit Init_DispatchAck_success(::rmf_task_msgs::msg::DispatchAck & msg)
  : msg_(msg)
  {}
  Init_DispatchAck_errors success(::rmf_task_msgs::msg::DispatchAck::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_DispatchAck_errors(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchAck msg_;
};

class Init_DispatchAck_dispatch_id
{
public:
  Init_DispatchAck_dispatch_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispatchAck_success dispatch_id(::rmf_task_msgs::msg::DispatchAck::_dispatch_id_type arg)
  {
    msg_.dispatch_id = std::move(arg);
    return Init_DispatchAck_success(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchAck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::DispatchAck>()
{
  return rmf_task_msgs::msg::builder::Init_DispatchAck_dispatch_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__BUILDER_HPP_
