// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/msg/detail/payload__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace msg
{

namespace builder
{

class Init_Payload_data
{
public:
  explicit Init_Payload_data(::rmf_scheduler_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::msg::Payload data(::rmf_scheduler_msgs::msg::Payload::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Payload msg_;
};

class Init_Payload_message_type
{
public:
  explicit Init_Payload_message_type(::rmf_scheduler_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_data message_type(::rmf_scheduler_msgs::msg::Payload::_message_type_type arg)
  {
    msg_.message_type = std::move(arg);
    return Init_Payload_data(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Payload msg_;
};

class Init_Payload_topic
{
public:
  explicit Init_Payload_topic(::rmf_scheduler_msgs::msg::Payload & msg)
  : msg_(msg)
  {}
  Init_Payload_message_type topic(::rmf_scheduler_msgs::msg::Payload::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return Init_Payload_message_type(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Payload msg_;
};

class Init_Payload_type
{
public:
  Init_Payload_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Payload_topic type(::rmf_scheduler_msgs::msg::Payload::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Payload_topic(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Payload msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::msg::Payload>()
{
  return rmf_scheduler_msgs::msg::builder::Init_Payload_type();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__BUILDER_HPP_
