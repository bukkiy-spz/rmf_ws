// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationStatus.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUS__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationStatus_last_response_time
{
public:
  explicit Init_NegotiationStatus_last_response_time(::rmf_traffic_msgs::msg::NegotiationStatus & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationStatus last_response_time(::rmf_traffic_msgs::msg::NegotiationStatus::_last_response_time_type arg)
  {
    msg_.last_response_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationStatus msg_;
};

class Init_NegotiationStatus_start_time
{
public:
  explicit Init_NegotiationStatus_start_time(::rmf_traffic_msgs::msg::NegotiationStatus & msg)
  : msg_(msg)
  {}
  Init_NegotiationStatus_last_response_time start_time(::rmf_traffic_msgs::msg::NegotiationStatus::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_NegotiationStatus_last_response_time(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationStatus msg_;
};

class Init_NegotiationStatus_participants
{
public:
  explicit Init_NegotiationStatus_participants(::rmf_traffic_msgs::msg::NegotiationStatus & msg)
  : msg_(msg)
  {}
  Init_NegotiationStatus_start_time participants(::rmf_traffic_msgs::msg::NegotiationStatus::_participants_type arg)
  {
    msg_.participants = std::move(arg);
    return Init_NegotiationStatus_start_time(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationStatus msg_;
};

class Init_NegotiationStatus_conflict_version
{
public:
  Init_NegotiationStatus_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationStatus_participants conflict_version(::rmf_traffic_msgs::msg::NegotiationStatus::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return Init_NegotiationStatus_participants(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationStatus>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationStatus_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUS__BUILDER_HPP_
