// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_notice__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationNotice_participants
{
public:
  explicit Init_NegotiationNotice_participants(::rmf_traffic_msgs::msg::NegotiationNotice & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationNotice participants(::rmf_traffic_msgs::msg::NegotiationNotice::_participants_type arg)
  {
    msg_.participants = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationNotice msg_;
};

class Init_NegotiationNotice_conflict_version
{
public:
  Init_NegotiationNotice_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationNotice_participants conflict_version(::rmf_traffic_msgs::msg::NegotiationNotice::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return Init_NegotiationNotice_participants(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationNotice msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationNotice>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationNotice_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__BUILDER_HPP_
