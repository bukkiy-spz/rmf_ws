// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/negotiation_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'status'
#include "rmf_traffic_msgs/msg/detail/negotiation_status__traits.hpp"
// Member 'tree'
#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__traits.hpp"
// Member 'orphan_proposals'
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__traits.hpp"
// Member 'orphan_rejections'
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__traits.hpp"
// Member 'orphan_forfeits'
#include "rmf_traffic_msgs/msg/detail/negotiation_forfeit__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NegotiationState & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    to_flow_style_yaml(msg.status, out);
    out << ", ";
  }

  // member: tree
  {
    if (msg.tree.size() == 0) {
      out << "tree: []";
    } else {
      out << "tree: [";
      size_t pending_items = msg.tree.size();
      for (auto item : msg.tree) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orphan_proposals
  {
    if (msg.orphan_proposals.size() == 0) {
      out << "orphan_proposals: []";
    } else {
      out << "orphan_proposals: [";
      size_t pending_items = msg.orphan_proposals.size();
      for (auto item : msg.orphan_proposals) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orphan_rejections
  {
    if (msg.orphan_rejections.size() == 0) {
      out << "orphan_rejections: []";
    } else {
      out << "orphan_rejections: [";
      size_t pending_items = msg.orphan_rejections.size();
      for (auto item : msg.orphan_rejections) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: orphan_forfeits
  {
    if (msg.orphan_forfeits.size() == 0) {
      out << "orphan_forfeits: []";
    } else {
      out << "orphan_forfeits: [";
      size_t pending_items = msg.orphan_forfeits.size();
      for (auto item : msg.orphan_forfeits) {
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
  const NegotiationState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status:\n";
    to_block_style_yaml(msg.status, out, indentation + 2);
  }

  // member: tree
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tree.size() == 0) {
      out << "tree: []\n";
    } else {
      out << "tree:\n";
      for (auto item : msg.tree) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orphan_proposals
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orphan_proposals.size() == 0) {
      out << "orphan_proposals: []\n";
    } else {
      out << "orphan_proposals:\n";
      for (auto item : msg.orphan_proposals) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orphan_rejections
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orphan_rejections.size() == 0) {
      out << "orphan_rejections: []\n";
    } else {
      out << "orphan_rejections:\n";
      for (auto item : msg.orphan_rejections) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: orphan_forfeits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orphan_forfeits.size() == 0) {
      out << "orphan_forfeits: []\n";
    } else {
      out << "orphan_forfeits:\n";
      for (auto item : msg.orphan_forfeits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NegotiationState & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::NegotiationState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::NegotiationState & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::NegotiationState>()
{
  return "rmf_traffic_msgs::msg::NegotiationState";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::NegotiationState>()
{
  return "rmf_traffic_msgs/msg/NegotiationState";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::NegotiationState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::NegotiationState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::NegotiationState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__TRAITS_HPP_
