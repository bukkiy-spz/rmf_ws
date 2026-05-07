// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/DispatchStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/dispatch_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_DispatchStates_finished
{
public:
  explicit Init_DispatchStates_finished(::rmf_task_msgs::msg::DispatchStates & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::DispatchStates finished(::rmf_task_msgs::msg::DispatchStates::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchStates msg_;
};

class Init_DispatchStates_active
{
public:
  Init_DispatchStates_active()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispatchStates_finished active(::rmf_task_msgs::msg::DispatchStates::_active_type arg)
  {
    msg_.active = std::move(arg);
    return Init_DispatchStates_finished(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::DispatchStates>()
{
  return rmf_task_msgs::msg::builder::Init_DispatchStates_active();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__BUILDER_HPP_
