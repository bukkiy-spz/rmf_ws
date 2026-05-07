// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/ChargingAssignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/charging_assignment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChargingAssignment & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: waypoint_name
  {
    out << "waypoint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_name, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargingAssignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: waypoint_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_name: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_name, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargingAssignment & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::ChargingAssignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::ChargingAssignment & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::ChargingAssignment>()
{
  return "rmf_fleet_msgs::msg::ChargingAssignment";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::ChargingAssignment>()
{
  return "rmf_fleet_msgs/msg/ChargingAssignment";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::ChargingAssignment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::ChargingAssignment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::ChargingAssignment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__CHARGING_ASSIGNMENT__TRAITS_HPP_
