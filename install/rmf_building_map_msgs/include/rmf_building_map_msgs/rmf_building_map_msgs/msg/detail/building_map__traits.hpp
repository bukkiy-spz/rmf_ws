// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/BuildingMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/building_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'levels'
#include "rmf_building_map_msgs/msg/detail/level__traits.hpp"
// Member 'lifts'
#include "rmf_building_map_msgs/msg/detail/lift__traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BuildingMap & msg,
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
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lifts
  {
    if (msg.lifts.size() == 0) {
      out << "lifts: []";
    } else {
      out << "lifts: [";
      size_t pending_items = msg.lifts.size();
      for (auto item : msg.lifts) {
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
  const BuildingMap & msg,
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
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: lifts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lifts.size() == 0) {
      out << "lifts: []\n";
    } else {
      out << "lifts:\n";
      for (auto item : msg.lifts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BuildingMap & msg, bool use_flow_style = false)
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
  const rmf_building_map_msgs::msg::BuildingMap & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::BuildingMap & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::BuildingMap>()
{
  return "rmf_building_map_msgs::msg::BuildingMap";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::BuildingMap>()
{
  return "rmf_building_map_msgs/msg/BuildingMap";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::BuildingMap>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::BuildingMap>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::BuildingMap>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__TRAITS_HPP_
