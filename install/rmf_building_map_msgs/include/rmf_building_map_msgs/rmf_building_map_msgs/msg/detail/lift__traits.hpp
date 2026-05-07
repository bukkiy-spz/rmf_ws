// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Lift.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/lift__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'doors'
#include "rmf_building_map_msgs/msg/detail/door__traits.hpp"
// Member 'wall_graph'
#include "rmf_building_map_msgs/msg/detail/graph__traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lift & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: levels
  {
    if (msg.levels.size() == 0) {
      out << "levels: []";
    } else {
      out << "levels: [";
      size_t pending_items = msg.levels.size();
      for (auto item : msg.levels) {
        rosidl_generator_traits::value_to_yaml(item, out);
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

  // member: wall_graph
  {
    out << "wall_graph: ";
    to_flow_style_yaml(msg.wall_graph, out);
    out << ", ";
  }

  // member: ref_x
  {
    out << "ref_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_x, out);
    out << ", ";
  }

  // member: ref_y
  {
    out << "ref_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_y, out);
    out << ", ";
  }

  // member: ref_yaw
  {
    out << "ref_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_yaw, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: depth
  {
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lift & msg,
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

  // member: levels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.levels.size() == 0) {
      out << "levels: []\n";
    } else {
      out << "levels:\n";
      for (auto item : msg.levels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
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

  // member: wall_graph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wall_graph:\n";
    to_block_style_yaml(msg.wall_graph, out, indentation + 2);
  }

  // member: ref_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_x: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_x, out);
    out << "\n";
  }

  // member: ref_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_y: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_y, out);
    out << "\n";
  }

  // member: ref_yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ref_yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.ref_yaw, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: depth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "depth: ";
    rosidl_generator_traits::value_to_yaml(msg.depth, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lift & msg, bool use_flow_style = false)
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
  const rmf_building_map_msgs::msg::Lift & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::Lift & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Lift>()
{
  return "rmf_building_map_msgs::msg::Lift";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Lift>()
{
  return "rmf_building_map_msgs/msg/Lift";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Lift>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Lift>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Lift>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__TRAITS_HPP_
