// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationState_orphan_forfeits
{
public:
  explicit Init_NegotiationState_orphan_forfeits(::rmf_traffic_msgs::msg::NegotiationState & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationState orphan_forfeits(::rmf_traffic_msgs::msg::NegotiationState::_orphan_forfeits_type arg)
  {
    msg_.orphan_forfeits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationState msg_;
};

class Init_NegotiationState_orphan_rejections
{
public:
  explicit Init_NegotiationState_orphan_rejections(::rmf_traffic_msgs::msg::NegotiationState & msg)
  : msg_(msg)
  {}
  Init_NegotiationState_orphan_forfeits orphan_rejections(::rmf_traffic_msgs::msg::NegotiationState::_orphan_rejections_type arg)
  {
    msg_.orphan_rejections = std::move(arg);
    return Init_NegotiationState_orphan_forfeits(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationState msg_;
};

class Init_NegotiationState_orphan_proposals
{
public:
  explicit Init_NegotiationState_orphan_proposals(::rmf_traffic_msgs::msg::NegotiationState & msg)
  : msg_(msg)
  {}
  Init_NegotiationState_orphan_rejections orphan_proposals(::rmf_traffic_msgs::msg::NegotiationState::_orphan_proposals_type arg)
  {
    msg_.orphan_proposals = std::move(arg);
    return Init_NegotiationState_orphan_rejections(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationState msg_;
};

class Init_NegotiationState_tree
{
public:
  explicit Init_NegotiationState_tree(::rmf_traffic_msgs::msg::NegotiationState & msg)
  : msg_(msg)
  {}
  Init_NegotiationState_orphan_proposals tree(::rmf_traffic_msgs::msg::NegotiationState::_tree_type arg)
  {
    msg_.tree = std::move(arg);
    return Init_NegotiationState_orphan_proposals(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationState msg_;
};

class Init_NegotiationState_status
{
public:
  Init_NegotiationState_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationState_tree status(::rmf_traffic_msgs::msg::NegotiationState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_NegotiationState_tree(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationState>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationState_status();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__BUILDER_HPP_
