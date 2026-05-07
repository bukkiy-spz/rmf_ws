// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/graph__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'vertices'
#include "rmf_building_map_msgs/msg/detail/graph_node__traits.hpp"
// Member 'edges'
#include "rmf_building_map_msgs/msg/detail/graph_edge__traits.hpp"
// Member 'params'
#include "rmf_building_map_msgs/msg/detail/param__traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Graph & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: vertices
  {
    if (msg.vertices.size() == 0) {
      out << "vertices: []";
    } else {
      out << "vertices: [";
      size_t pending_items = msg.vertices.size();
      for (auto item : msg.vertices) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: edges
  {
    if (msg.edges.size() == 0) {
      out << "edges: []";
    } else {
      out << "edges: [";
      size_t pending_items = msg.edges.size();
      for (auto item : msg.edges) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Graph & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: vertices
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.vertices.size() == 0) {
      out << "vertices: []\n";
    } else {
      out << "vertices:\n";
      for (auto item : msg.vertices) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: edges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.edges.size() == 0) {
      out << "edges: []\n";
    } else {
      out << "edges:\n";
      for (auto item : msg.edges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Graph & msg, bool use_flow_style = false)
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
  const rmf_building_map_msgs::msg::Graph & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::Graph & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Graph>()
{
  return "rmf_building_map_msgs::msg::Graph";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Graph>()
{
  return "rmf_building_map_msgs/msg/Graph";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Graph>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Graph>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Graph>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__TRAITS_HPP_
