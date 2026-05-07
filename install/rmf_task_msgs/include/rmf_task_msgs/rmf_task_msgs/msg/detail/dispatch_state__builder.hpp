// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/DispatchState.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/dispatch_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_DispatchState_errors
{
public:
  explicit Init_DispatchState_errors(::rmf_task_msgs::msg::DispatchState & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::DispatchState errors(::rmf_task_msgs::msg::DispatchState::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchState msg_;
};

class Init_DispatchState_assignment
{
public:
  explicit Init_DispatchState_assignment(::rmf_task_msgs::msg::DispatchState & msg)
  : msg_(msg)
  {}
  Init_DispatchState_errors assignment(::rmf_task_msgs::msg::DispatchState::_assignment_type arg)
  {
    msg_.assignment = std::move(arg);
    return Init_DispatchState_errors(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchState msg_;
};

class Init_DispatchState_status
{
public:
  explicit Init_DispatchState_status(::rmf_task_msgs::msg::DispatchState & msg)
  : msg_(msg)
  {}
  Init_DispatchState_assignment status(::rmf_task_msgs::msg::DispatchState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_DispatchState_assignment(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchState msg_;
};

class Init_DispatchState_task_id
{
public:
  Init_DispatchState_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispatchState_status task_id(::rmf_task_msgs::msg::DispatchState::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_DispatchState_status(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::DispatchState>()
{
  return rmf_task_msgs::msg::builder::Init_DispatchState_task_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__BUILDER_HPP_
