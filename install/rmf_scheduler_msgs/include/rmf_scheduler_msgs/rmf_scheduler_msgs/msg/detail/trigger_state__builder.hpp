// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:msg/TriggerState.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/msg/detail/trigger_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace msg
{

namespace builder
{

class Init_TriggerState_status
{
public:
  explicit Init_TriggerState_status(::rmf_scheduler_msgs::msg::TriggerState & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::msg::TriggerState status(::rmf_scheduler_msgs::msg::TriggerState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::TriggerState msg_;
};

class Init_TriggerState_last_ran
{
public:
  explicit Init_TriggerState_last_ran(::rmf_scheduler_msgs::msg::TriggerState & msg)
  : msg_(msg)
  {}
  Init_TriggerState_status last_ran(::rmf_scheduler_msgs::msg::TriggerState::_last_ran_type arg)
  {
    msg_.last_ran = std::move(arg);
    return Init_TriggerState_status(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::TriggerState msg_;
};

class Init_TriggerState_last_modified
{
public:
  explicit Init_TriggerState_last_modified(::rmf_scheduler_msgs::msg::TriggerState & msg)
  : msg_(msg)
  {}
  Init_TriggerState_last_ran last_modified(::rmf_scheduler_msgs::msg::TriggerState::_last_modified_type arg)
  {
    msg_.last_modified = std::move(arg);
    return Init_TriggerState_last_ran(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::TriggerState msg_;
};

class Init_TriggerState_name
{
public:
  Init_TriggerState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TriggerState_last_modified name(::rmf_scheduler_msgs::msg::TriggerState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_TriggerState_last_modified(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::TriggerState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::msg::TriggerState>()
{
  return rmf_scheduler_msgs::msg::builder::Init_TriggerState_name();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__BUILDER_HPP_
