// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/GraphEdge.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/graph_edge__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'params'
#include "rmf_building_map_msgs/msg/detail/param__traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GraphEdge & msg,
  std::ostream & out)
{
  out << "{";
  // member: v1_idx
  {
    out << "v1_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.v1_idx, out);
    out << ", ";
  }

  // member: v2_idx
  {
    out << "v2_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.v2_idx, out);
    out << ", ";
  }

  // member: params
  {
    if (msg.params.size() == 0) {
      out << "params: []";
    } else {
      out << "params: [";
      size_t pending_items = msg.params.size();
      for (auto item : msg.params) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: edge_type
  {
    out << "edge_type: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GraphEdge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: v1_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v1_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.v1_idx, out);
    out << "\n";
  }

  // member: v2_idx
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v2_idx: ";
    rosidl_generator_traits::value_to_yaml(msg.v2_idx, out);
    out << "\n";
  }

  // member: params
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.params.size() == 0) {
      out << "params: []\n";
    } else {
      out << "params:\n";
      for (auto item : msg.params) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: edge_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "edge_type: ";
    rosidl_generator_traits::value_to_yaml(msg.edge_type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GraphEdge & msg, bool use_flow_style = false)
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

}  // namespace rmf_building_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_building_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_building_map_msgs::msg::GraphEdge & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::GraphEdge & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::GraphEdge>()
{
  return "rmf_building_map_msgs::msg::GraphEdge";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::GraphEdge>()
{
  return "rmf_building_map_msgs/msg/GraphEdge";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::GraphEdge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::GraphEdge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::GraphEdge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__TRAITS_HPP_
