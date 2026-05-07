// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_ack__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationAck_acknowledgments
{
public:
  explicit Init_NegotiationAck_acknowledgments(::rmf_traffic_msgs::msg::NegotiationAck & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationAck acknowledgments(::rmf_traffic_msgs::msg::NegotiationAck::_acknowledgments_type arg)
  {
    msg_.acknowledgments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationAck msg_;
};

class Init_NegotiationAck_conflict_version
{
public:
  Init_NegotiationAck_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationAck_acknowledgments conflict_version(::rmf_traffic_msgs::msg::NegotiationAck::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return Init_NegotiationAck_acknowledgments(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationAck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationAck>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationAck_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__BUILDER_HPP_
