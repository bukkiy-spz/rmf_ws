// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationProposal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationProposal_itinerary
{
public:
  explicit Init_NegotiationProposal_itinerary(::rmf_traffic_msgs::msg::NegotiationProposal & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationProposal itinerary(::rmf_traffic_msgs::msg::NegotiationProposal::_itinerary_type arg)
  {
    msg_.itinerary = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationProposal msg_;
};

class Init_NegotiationProposal_plan_id
{
public:
  explicit Init_NegotiationProposal_plan_id(::rmf_traffic_msgs::msg::NegotiationProposal & msg)
  : msg_(msg)
  {}
  Init_NegotiationProposal_itinerary plan_id(::rmf_traffic_msgs::msg::NegotiationProposal::_plan_id_type arg)
  {
    msg_.plan_id = std::move(arg);
    return Init_NegotiationProposal_itinerary(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationProposal msg_;
};

class Init_NegotiationProposal_to_accommodate
{
public:
  explicit Init_NegotiationProposal_to_accommodate(::rmf_traffic_msgs::msg::NegotiationProposal & msg)
  : msg_(msg)
  {}
  Init_NegotiationProposal_plan_id to_accommodate(::rmf_traffic_msgs::msg::NegotiationProposal::_to_accommodate_type arg)
  {
    msg_.to_accommodate = std::move(arg);
    return Init_NegotiationProposal_plan_id(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationProposal msg_;
};

class Init_NegotiationProposal_for_participant
{
public:
  explicit Init_NegotiationProposal_for_participant(::rmf_traffic_msgs::msg::NegotiationProposal & msg)
  : msg_(msg)
  {}
  Init_NegotiationProposal_to_accommodate for_participant(::rmf_traffic_msgs::msg::NegotiationProposal::_for_participant_type arg)
  {
    msg_.for_participant = std::move(arg);
    return Init_NegotiationProposal_to_accommodate(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationProposal msg_;
};

class Init_NegotiationProposal_proposal_version
{
public:
  explicit Init_NegotiationProposal_proposal_version(::rmf_traffic_msgs::msg::NegotiationProposal & msg)
  : msg_(msg)
  {}
  Init_NegotiationProposal_for_participant proposal_version(::rmf_traffic_msgs::msg::NegotiationProposal::_proposal_version_type arg)
  {
    msg_.proposal_version = std::move(arg);
    return Init_NegotiationProposal_for_participant(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationProposal msg_;
};

class Init_NegotiationProposal_conflict_version
{
public:
  Init_NegotiationProposal_conflict_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationProposal_proposal_version conflict_version(::rmf_traffic_msgs::msg::NegotiationProposal::_conflict_version_type arg)
  {
    msg_.conflict_version = std::move(arg);
    return Init_NegotiationProposal_proposal_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationProposal msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationProposal>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationProposal_conflict_version();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PROPOSAL__BUILDER_HPP_
