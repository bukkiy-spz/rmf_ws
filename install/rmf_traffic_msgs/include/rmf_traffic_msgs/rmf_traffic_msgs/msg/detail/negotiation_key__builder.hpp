// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationKey.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_KEY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_KEY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_key__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationKey_version
{
public:
  explicit Init_NegotiationKey_version(::rmf_traffic_msgs::msg::NegotiationKey & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationKey version(::rmf_traffic_msgs::msg::NegotiationKey::_version_type arg)
  {
    msg_.version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationKey msg_;
};

class Init_NegotiationKey_participant
{
public:
  Init_NegotiationKey_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationKey_version participant(::rmf_traffic_msgs::msg::NegotiationKey::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_NegotiationKey_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationKey msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationKey>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationKey_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_KEY__BUILDER_HPP_
