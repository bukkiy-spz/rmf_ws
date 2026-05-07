// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationRejection.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationRejection_alternatives
{
public:
  explicit Init_NegotiationRejection_alternatives(::rmf_traffic_msgs::msg::NegotiationRejection & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationRejection alternatives(::rmf_traffic_msgs::msg::NegotiationRejection::_alternatives_type arg)
  {
    msg_.alternatives = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationRejection msg_;
};

class Init_NegotiationRejection_rejected_by
{
public:
  explicit Init_NegotiationRejection_rejected_by(::rmf_traffic_msgs::msg::NegotiationRejection & msg)
  : msg_(msg)
  {}
  Init_NegotiationRejection_alternatives rejected_by(::rmf_traffic_msgs::msg::NegotiationRejection::_rejected_by_type arg)
  {
    msg_.rejected_by = std::move(arg);
    return Init_NegotiationRejection_alternatives(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationRejection msg_;
};

class Init_NegotiationRejection_table
{
public:
  explicit Init_NegotiationRejection_table(::rmf_traffic_msgs::msg::NegotiationRejection & msg)
  : msg_(msg)
  {}
  Init_NegotiationRejection_rejected_by table(::rmf_traffic_msgs::msg::NegotiationRejection::_table_type arg)
  {
    msg_.table = std::move(arg);
    return Init_NegotiationRejection_rejected_by(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationRejection msg_;
};

class Init_NegotiationRejection_conflict_version
{
public:
  Init_NegotiationRejection_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationRejection_table conflict_version(::rmf_traffic_msgs::msg::NegotiationRejection::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return Init_NegotiationRejection_table(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationRejection msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationRejection>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationRejection_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__BUILDER_HPP_
