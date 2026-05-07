// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/level__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'images'
#include "rmf_building_map_msgs/msg/detail/affine_image__traits.hpp"
// Member 'places'
#include "rmf_building_map_msgs/msg/detail/place__traits.hpp"
// Member 'doors'
#include "rmf_building_map_msgs/msg/detail/door__traits.hpp"
// Member 'nav_graphs'
// Member 'wall_graph'
#include "rmf_building_map_msgs/msg/detail/graph__traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Level & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: elevation
  {
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << ", ";
  }

  // member: images
  {
    if (msg.images.size() == 0) {
      out << "images: []";
    } else {
      out << "images: [";
      size_t pending_items = msg.images.size();
      for (auto item : msg.images) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: places
  {
    if (msg.places.size() == 0) {
      out << "places: []";
    } else {
      out << "places: [";
      size_t pending_items = msg.places.size();
      for (auto item : msg.places) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: doors
  {
    if (msg.doors.size() == 0) {
      out << "doors: []";
    } else {
      out << "doors: [";
      size_t pending_items = msg.doors.size();
      for (auto item : msg.doors) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: nav_graphs
  {
    if (msg.nav_graphs.size() == 0) {
      out << "nav_graphs: []";
    } else {
      out << "nav_graphs: [";
      size_t pending_items = msg.nav_graphs.size();
      for (auto item : msg.nav_graphs) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wall_graph
  {
    out << "wall_graph: ";
    to_flow_style_yaml(msg.wall_graph, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Level & msg,
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

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "elevation: ";
    rosidl_generator_traits::value_to_yaml(msg.elevation, out);
    out << "\n";
  }

  // member: images
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.images.size() == 0) {
      out << "images: []\n";
    } else {
      out << "images:\n";
      for (auto item : msg.images) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: places
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.places.size() == 0) {
      out << "places: []\n";
    } else {
      out << "places:\n";
      for (auto item : msg.places) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: doors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.doors.size() == 0) {
      out << "doors: []\n";
    } else {
      out << "doors:\n";
      for (auto item : msg.doors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: nav_graphs
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.nav_graphs.size() == 0) {
      out << "nav_graphs: []\n";
    } else {
      out << "nav_graphs:\n";
      for (auto item : msg.nav_graphs) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: wall_graph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wall_graph:\n";
    to_block_style_yaml(msg.wall_graph, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Level & msg, bool use_flow_style = false)
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
  const rmf_building_map_msgs::msg::Level & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::Level & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Level>()
{
  return "rmf_building_map_msgs::msg::Level";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Level>()
{
  return "rmf_building_map_msgs/msg/Level";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Level>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Level>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Level>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__TRAITS_HPP_
