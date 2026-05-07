// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationTreeNode.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationTreeNode_itinerary
{
public:
  explicit Init_NegotiationTreeNode_itinerary(::rmf_traffic_msgs::msg::NegotiationTreeNode & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationTreeNode itinerary(::rmf_traffic_msgs::msg::NegotiationTreeNode::_itinerary_type arg)
  {
    msg_.itinerary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationTreeNode msg_;
};

class Init_NegotiationTreeNode_rejected
{
public:
  explicit Init_NegotiationTreeNode_rejected(::rmf_traffic_msgs::msg::NegotiationTreeNode & msg)
  : msg_(msg)
  {}
  Init_NegotiationTreeNode_itinerary rejected(::rmf_traffic_msgs::msg::NegotiationTreeNode::_rejected_type arg)
  {
    msg_.rejected = std::move(arg);
    return Init_NegotiationTreeNode_itinerary(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationTreeNode msg_;
};

class Init_NegotiationTreeNode_key
{
public:
  explicit Init_NegotiationTreeNode_key(::rmf_traffic_msgs::msg::NegotiationTreeNode & msg)
  : msg_(msg)
  {}
  Init_NegotiationTreeNode_rejected key(::rmf_traffic_msgs::msg::NegotiationTreeNode::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_NegotiationTreeNode_rejected(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationTreeNode msg_;
};

class Init_NegotiationTreeNode_parent
{
public:
  Init_NegotiationTreeNode_parent()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationTreeNode_key parent(::rmf_traffic_msgs::msg::NegotiationTreeNode::_parent_type arg)
  {
    msg_.parent = std::move(arg);
    return Init_NegotiationTreeNode_key(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationTreeNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationTreeNode>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationTreeNode_parent();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__BUILDER_HPP_
