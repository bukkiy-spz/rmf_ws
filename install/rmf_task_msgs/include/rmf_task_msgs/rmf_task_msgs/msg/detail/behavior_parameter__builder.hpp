// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/BehaviorParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/behavior_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_BehaviorParameter_value
{
public:
  explicit Init_BehaviorParameter_value(::rmf_task_msgs::msg::BehaviorParameter & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::BehaviorParameter value(::rmf_task_msgs::msg::BehaviorParameter::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::BehaviorParameter msg_;
};

class Init_BehaviorParameter_name
{
public:
  Init_BehaviorParameter_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BehaviorParameter_value name(::rmf_task_msgs::msg::BehaviorParameter::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BehaviorParameter_value(msg_);
  }

private:
  ::rmf_task_msgs::msg::BehaviorParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::BehaviorParameter>()
{
  return rmf_task_msgs::msg::builder::Init_BehaviorParameter_name();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BEHAVIOR_PARAMETER__BUILDER_HPP_
