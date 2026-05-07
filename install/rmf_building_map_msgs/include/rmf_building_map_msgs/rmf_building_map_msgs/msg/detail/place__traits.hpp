// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Place.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/place__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Place & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: position_tolerance
  {
    out << "position_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.position_tolerance, out);
    out << ", ";
  }

  // member: yaw_tolerance
  {
    out << "yaw_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_tolerance, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Place & msg,
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

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: position_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.position_tolerance, out);
    out << "\n";
  }

  // member: yaw_tolerance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_tolerance: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_tolerance, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Place & msg, bool use_flow_style = false)
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
  const rmf_building_map_msgs::msg::Place & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::Place & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Place>()
{
  return "rmf_building_map_msgs::msg::Place";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Place>()
{
  return "rmf_building_map_msgs/msg/Place";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Place>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Place>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Place>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__TRAITS_HPP_
