// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationTreeNode.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'key'
#include "rmf_traffic_msgs/msg/detail/negotiation_key__traits.hpp"
// Member 'itinerary'
#include "rmf_traffic_msgs/msg/detail/route__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NegotiationTreeNode & msg,
  std::ostream & out)
{
  out << "{";
  // member: parent
  {
    out << "parent: ";
    rosidl_generator_traits::value_to_yaml(msg.parent, out);
    out << ", ";
  }

  // member: key
  {
    out << "key: ";
    to_flow_style_yaml(msg.key, out);
    out << ", ";
  }

  // member: rejected
  {
    out << "rejected: ";
    rosidl_generator_traits::value_to_yaml(msg.rejected, out);
    out << ", ";
  }

  // member: itinerary
  {
    if (msg.itinerary.size() == 0) {
      out << "itinerary: []";
    } else {
      out << "itinerary: [";
      size_t pending_items = msg.itinerary.size();
      for (auto item : msg.itinerary) {
        to_flow_style_yaml(item, out);
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
  const NegotiationTreeNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: parent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parent: ";
    rosidl_generator_traits::value_to_yaml(msg.parent, out);
    out << "\n";
  }

  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key:\n";
    to_block_style_yaml(msg.key, out, indentation + 2);
  }

  // member: rejected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rejected: ";
    rosidl_generator_traits::value_to_yaml(msg.rejected, out);
    out << "\n";
  }

  // member: itinerary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.itinerary.size() == 0) {
      out << "itinerary: []\n";
    } else {
      out << "itinerary:\n";
      for (auto item : msg.itinerary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NegotiationTreeNode & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::NegotiationTreeNode & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::NegotiationTreeNode & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::NegotiationTreeNode>()
{
  return "rmf_traffic_msgs::msg::NegotiationTreeNode";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::NegotiationTreeNode>()
{
  return "rmf_traffic_msgs/msg/NegotiationTreeNode";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::NegotiationTreeNode>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::NegotiationTreeNode>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::NegotiationTreeNode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__TRAITS_HPP_
