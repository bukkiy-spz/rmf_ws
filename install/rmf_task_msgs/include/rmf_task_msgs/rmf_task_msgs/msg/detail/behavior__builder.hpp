// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/Behavior.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/behavior__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_Behavior_parameters
{
public:
  explicit Init_Behavior_parameters(::rmf_task_msgs::msg::Behavior & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::Behavior parameters(::rmf_task_msgs::msg::Behavior::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::Behavior msg_;
};

class Init_Behavior_name
{
public:
  Init_Behavior_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Behavior_parameters name(::rmf_task_msgs::msg::Behavior::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Behavior_parameters(msg_);
  }

private:
  ::rmf_task_msgs::msg::Behavior msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::Behavior>()
{
  return rmf_task_msgs::msg::builder::Init_Behavior_name();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR__BUILDER_HPP_
