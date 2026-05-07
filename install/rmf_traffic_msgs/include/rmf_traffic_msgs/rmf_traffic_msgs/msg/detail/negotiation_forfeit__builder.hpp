// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationForfeit.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_FORFEIT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_FORFEIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_forfeit__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationForfeit_table
{
public:
  explicit Init_NegotiationForfeit_table(::rmf_traffic_msgs::msg::NegotiationForfeit & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationForfeit table(::rmf_traffic_msgs::msg::NegotiationForfeit::_table_type arg)
  {
    msg_.table = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationForfeit msg_;
};

class Init_NegotiationForfeit_conflict_version
{
public:
  Init_NegotiationForfeit_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationForfeit_table conflict_version(::rmf_traffic_msgs::msg::NegotiationForfeit::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return Init_NegotiationForfeit_table(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationForfeit msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationForfeit>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationForfeit_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_FORFEIT__BUILDER_HPP_
