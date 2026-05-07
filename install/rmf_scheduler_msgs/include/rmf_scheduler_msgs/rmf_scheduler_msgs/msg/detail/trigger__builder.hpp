// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:msg/Trigger.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/msg/detail/trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace msg
{

namespace builder
{

class Init_Trigger_payload
{
public:
  explicit Init_Trigger_payload(::rmf_scheduler_msgs::msg::Trigger & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::msg::Trigger payload(::rmf_scheduler_msgs::msg::Trigger::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Trigger msg_;
};

class Init_Trigger_group
{
public:
  explicit Init_Trigger_group(::rmf_scheduler_msgs::msg::Trigger & msg)
  : msg_(msg)
  {}
  Init_Trigger_payload group(::rmf_scheduler_msgs::msg::Trigger::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_Trigger_payload(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Trigger msg_;
};

class Init_Trigger_at
{
public:
  explicit Init_Trigger_at(::rmf_scheduler_msgs::msg::Trigger & msg)
  : msg_(msg)
  {}
  Init_Trigger_group at(::rmf_scheduler_msgs::msg::Trigger::_at_type arg)
  {
    msg_.at = std::move(arg);
    return Init_Trigger_group(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Trigger msg_;
};

class Init_Trigger_created_at
{
public:
  explicit Init_Trigger_created_at(::rmf_scheduler_msgs::msg::Trigger & msg)
  : msg_(msg)
  {}
  Init_Trigger_at created_at(::rmf_scheduler_msgs::msg::Trigger::_created_at_type arg)
  {
    msg_.created_at = std::move(arg);
    return Init_Trigger_at(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Trigger msg_;
};

class Init_Trigger_name
{
public:
  Init_Trigger_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trigger_created_at name(::rmf_scheduler_msgs::msg::Trigger::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Trigger_created_at(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Trigger msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::msg::Trigger>()
{
  return rmf_scheduler_msgs::msg::builder::Init_Trigger_name();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER__BUILDER_HPP_
