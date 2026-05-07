// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationConclusion.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_CONCLUSION__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_CONCLUSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_conclusion__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationConclusion_table
{
public:
  explicit Init_NegotiationConclusion_table(::rmf_traffic_msgs::msg::NegotiationConclusion & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationConclusion table(::rmf_traffic_msgs::msg::NegotiationConclusion::_table_type arg)
  {
    msg_.table = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationConclusion msg_;
};

class Init_NegotiationConclusion_resolved
{
public:
  explicit Init_NegotiationConclusion_resolved(::rmf_traffic_msgs::msg::NegotiationConclusion & msg)
  : msg_(msg)
  {}
  Init_NegotiationConclusion_table resolved(::rmf_traffic_msgs::msg::NegotiationConclusion::_resolved_type arg)
  {
    msg_.resolved = std::move(arg);
    return Init_NegotiationConclusion_table(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationConclusion msg_;
};

class Init_NegotiationConclusion_conflict_version
{
public:
  Init_NegotiationConclusion_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationConclusion_resolved conflict_version(::rmf_traffic_msgs::msg::NegotiationConclusion::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return Init_NegotiationConclusion_resolved(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationConclusion msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationConclusion>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationConclusion_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_CONCLUSION__BUILDER_HPP_
