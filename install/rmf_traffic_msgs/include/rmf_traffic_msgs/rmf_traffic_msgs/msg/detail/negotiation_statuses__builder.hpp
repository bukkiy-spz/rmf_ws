// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationStatuses.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUSES__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUSES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_statuses__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationStatuses_negotiations
{
public:
  Init_NegotiationStatuses_negotiations()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::msg::NegotiationStatuses negotiations(::rmf_traffic_msgs::msg::NegotiationStatuses::_negotiations_type arg)
  {
    msg_.negotiations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationStatuses msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationStatuses>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationStatuses_negotiations();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUSES__BUILDER_HPP_
