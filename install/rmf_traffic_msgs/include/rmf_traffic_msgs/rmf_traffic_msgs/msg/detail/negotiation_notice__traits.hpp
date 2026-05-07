// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/negotiation_notice__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NegotiationNotice & msg,
  std::ostream & out)
{
  out << "{";
  // member: conflict_version
  {
    out << "conflict_version: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_version, out);
    out << ", ";
  }

  // member: participants
  {
    if (msg.participants.size() == 0) {
      out << "participants: []";
    } else {
      out << "participants: [";
      size_t pending_items = msg.participants.size();
      for (auto item : msg.participants) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NegotiationNotice & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: conflict_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "conflict_version: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_version, out);
    out << "\n";
  }

  // member: participants
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.participants.size() == 0) {
      out << "participants: []\n";
    } else {
      out << "participants:\n";
      for (auto item : msg.participants) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NegotiationNotice & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::NegotiationNotice & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::NegotiationNotice & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::NegotiationNotice>()
{
  return "rmf_traffic_msgs::msg::NegotiationNotice";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::NegotiationNotice>()
{
  return "rmf_traffic_msgs/msg/NegotiationNotice";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::NegotiationNotice>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::NegotiationNotice>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::NegotiationNotice>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__TRAITS_HPP_
