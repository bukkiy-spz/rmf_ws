// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationParticipantAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/negotiation_participant_ack__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_NegotiationParticipantAck_itinerary_version
{
public:
  explicit Init_NegotiationParticipantAck_itinerary_version(::rmf_traffic_msgs::msg::NegotiationParticipantAck & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::NegotiationParticipantAck itinerary_version(::rmf_traffic_msgs::msg::NegotiationParticipantAck::_itinerary_version_type arg)
  {
    msg_.itinerary_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationParticipantAck msg_;
};

class Init_NegotiationParticipantAck_updating
{
public:
  explicit Init_NegotiationParticipantAck_updating(::rmf_traffic_msgs::msg::NegotiationParticipantAck & msg)
  : msg_(msg)
  {}
  Init_NegotiationParticipantAck_itinerary_version updating(::rmf_traffic_msgs::msg::NegotiationParticipantAck::_updating_type arg)
  {
    msg_.updating = std::move(arg);
    return Init_NegotiationParticipantAck_itinerary_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationParticipantAck msg_;
};

class Init_NegotiationParticipantAck_participant
{
public:
  Init_NegotiationParticipantAck_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_NegotiationParticipantAck_updating participant(::rmf_traffic_msgs::msg::NegotiationParticipantAck::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_NegotiationParticipantAck_updating(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::NegotiationParticipantAck msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::NegotiationParticipantAck>()
{
  return rmf_traffic_msgs::msg::builder::Init_NegotiationParticipantAck_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__BUILDER_HPP_
