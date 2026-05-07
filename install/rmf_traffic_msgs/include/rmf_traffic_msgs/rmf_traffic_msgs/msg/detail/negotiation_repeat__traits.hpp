// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationRepeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/negotiation_repeat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NegotiationRepeat & msg,
  std::ostream & out)
{
  out << "{";
  // member: conflict_version
  {
    out << "conflict_version: ";
    rosidl_generator_traits::value_to_yaml(msg.conflict_version, out);
    out << ", ";
  }

  // member: table
  {
    if (msg.table.size() == 0) {
      out << "table: []";
    } else {
      out << "table: [";
      size_t pending_items = msg.table.size();
      for (auto item : msg.table) {
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
  const NegotiationRepeat & msg,
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

  // member: table
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.table.size() == 0) {
      out << "table: []\n";
    } else {
      out << "table:\n";
      for (auto item : msg.table) {
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

inline std::string to_yaml(const NegotiationRepeat & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::NegotiationRepeat & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::NegotiationRepeat & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::NegotiationRepeat>()
{
  return "rmf_traffic_msgs::msg::NegotiationRepeat";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::NegotiationRepeat>()
{
  return "rmf_traffic_msgs/msg/NegotiationRepeat";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::NegotiationRepeat>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::NegotiationRepeat>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::NegotiationRepeat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__TRAITS_HPP_
