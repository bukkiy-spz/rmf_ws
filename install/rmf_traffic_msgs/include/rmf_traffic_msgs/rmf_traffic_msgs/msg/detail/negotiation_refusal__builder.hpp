// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationRefusal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REFUSAL__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REFUSAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_refusal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationRefusal_conflict_version
{
public:
  Init_NegotiationRefusal_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::msg::NegotiationRefusal conflict_version(::rmf_traffic_msgs::msg::NegotiationRefusal::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationRefusal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationRefusal>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationRefusal_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REFUSAL__BUILDER_HPP_
