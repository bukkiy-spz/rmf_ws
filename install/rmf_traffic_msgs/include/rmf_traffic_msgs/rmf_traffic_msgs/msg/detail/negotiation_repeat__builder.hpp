// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationRepeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_repeat__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationRepeat_table
{
public:
  explicit Init_NegotiationRepeat_table(::rmf_traffic_msgs::msg::NegotiationRepeat & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationRepeat table(::rmf_traffic_msgs::msg::NegotiationRepeat::_table_type arg)
  {
    msg_.table = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationRepeat msg_;
};

class Init_NegotiationRepeat_conflict_version
{
public:
  Init_NegotiationRepeat_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationRepeat_table conflict_version(::rmf_traffic_msgs::msg::NegotiationRepeat::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return Init_NegotiationRepeat_table(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationRepeat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationRepeat>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationRepeat_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__BUILDER_HPP_
