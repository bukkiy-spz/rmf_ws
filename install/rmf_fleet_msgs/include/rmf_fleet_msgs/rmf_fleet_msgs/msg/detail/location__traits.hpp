// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 't'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Location & msg,
  std::ostream & out)
{
  out << "{";
  // member: t
  {
    out << "t: ";
    to_flow_style_yaml(msg.t, out);
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

  // member: obey_approach_speed_limit
  {
    out << "obey_approach_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.obey_approach_speed_limit, out);
    out << ", ";
  }

  // member: approach_speed_limit
  {
    out << "approach_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.approach_speed_limit, out);
    out << ", ";
  }

  // member: level_name
  {
    out << "level_name: ";
    rosidl_generator_traits::value_to_yaml(msg.level_name, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t:\n";
    to_block_style_yaml(msg.t, out, indentation + 2);
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

  // member: obey_approach_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "obey_approach_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.obey_approach_speed_limit, out);
    out << "\n";
  }

  // member: approach_speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "approach_speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.approach_speed_limit, out);
    out << "\n";
  }

  // member: level_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level_name: ";
    rosidl_generator_traits::value_to_yaml(msg.level_name, out);
    out << "\n";
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index: ";
    rosidl_generator_traits::value_to_yaml(msg.index, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Location & msg, bool use_flow_style = false)
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

}  // namespace rmf_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_fleet_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_fleet_msgs::msg::Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::Location & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::Location>()
{
  return "rmf_fleet_msgs::msg::Location";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::Location>()
{
  return "rmf_fleet_msgs/msg/Location";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::Location>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::Location>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::Location>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__TRAITS_HPP_
