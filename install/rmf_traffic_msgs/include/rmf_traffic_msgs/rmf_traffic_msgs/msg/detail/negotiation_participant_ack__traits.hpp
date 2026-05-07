// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationParticipantAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/negotiation_participant_ack__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NegotiationParticipantAck & msg,
  std::ostream & out)
{
  out << "{";
  // member: participant
  {
    out << "participant: ";
    rosidl_generator_traits::value_to_yaml(msg.participant, out);
    out << ", ";
  }

  // member: updating
  {
    out << "updating: ";
    rosidl_generator_traits::value_to_yaml(msg.updating, out);
    out << ", ";
  }

  // member: itinerary_version
  {
    out << "itinerary_version: ";
    rosidl_generator_traits::value_to_yaml(msg.itinerary_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NegotiationParticipantAck & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: participant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "participant: ";
    rosidl_generator_traits::value_to_yaml(msg.participant, out);
    out << "\n";
  }

  // member: updating
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "updating: ";
    rosidl_generator_traits::value_to_yaml(msg.updating, out);
    out << "\n";
  }

  // member: itinerary_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "itinerary_version: ";
    rosidl_generator_traits::value_to_yaml(msg.itinerary_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NegotiationParticipantAck & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rmf_traffic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_traffic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_traffic_msgs::msg::NegotiationParticipantAck & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::NegotiationParticipantAck & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::NegotiationParticipantAck>()
{
  return "rmf_traffic_msgs::msg::NegotiationParticipantAck";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::NegotiationParticipantAck>()
{
  return "rmf_traffic_msgs/msg/NegotiationParticipantAck";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::NegotiationParticipantAck>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::NegotiationParticipantAck>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::NegotiationParticipantAck>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_PARTICIPANT_ACK__TRAITS_HPP_
