// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Door.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/door__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Door & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: v1_x
  {
    out << "v1_x: ";
    rosidl_generator_traits::value_to_yaml(msg.v1_x, out);
    out << ", ";
  }

  // member: v1_y
  {
    out << "v1_y: ";
    rosidl_generator_traits::value_to_yaml(msg.v1_y, out);
    out << ", ";
  }

  // member: v2_x
  {
    out << "v2_x: ";
    rosidl_generator_traits::value_to_yaml(msg.v2_x, out);
    out << ", ";
  }

  // member: v2_y
  {
    out << "v2_y: ";
    rosidl_generator_traits::value_to_yaml(msg.v2_y, out);
    out << ", ";
  }

  // member: door_type
  {
    out << "door_type: ";
    rosidl_generator_traits::value_to_yaml(msg.door_type, out);
    out << ", ";
  }

  // member: motion_range
  {
    out << "motion_range: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_range, out);
    out << ", ";
  }

  // member: motion_direction
  {
    out << "motion_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Door & msg,
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

  // member: v1_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v1_x: ";
    rosidl_generator_traits::value_to_yaml(msg.v1_x, out);
    out << "\n";
  }

  // member: v1_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v1_y: ";
    rosidl_generator_traits::value_to_yaml(msg.v1_y, out);
    out << "\n";
  }

  // member: v2_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v2_x: ";
    rosidl_generator_traits::value_to_yaml(msg.v2_x, out);
    out << "\n";
  }

  // member: v2_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v2_y: ";
    rosidl_generator_traits::value_to_yaml(msg.v2_y, out);
    out << "\n";
  }

  // member: door_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_type: ";
    rosidl_generator_traits::value_to_yaml(msg.door_type, out);
    out << "\n";
  }

  // member: motion_range
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_range: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_range, out);
    out << "\n";
  }

  // member: motion_direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_direction: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_direction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Door & msg, bool use_flow_style = false)
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
  const rmf_building_map_msgs::msg::Door & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::Door & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Door>()
{
  return "rmf_building_map_msgs::msg::Door";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Door>()
{
  return "rmf_building_map_msgs/msg/Door";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Door>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Door>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Door>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__TRAITS_HPP_
