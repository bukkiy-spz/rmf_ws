// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_charger_msgs:msg/ChargerState.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__TRAITS_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_charger_msgs/msg/detail/charger_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'charger_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'time_to_fully_charged'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rmf_charger_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChargerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: charger_time
  {
    out << "charger_time: ";
    to_flow_style_yaml(msg.charger_time, out);
    out << ", ";
  }

  // member: state
  {
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << ", ";
  }

  // member: charger_name
  {
    out << "charger_name: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_name, out);
    out << ", ";
  }

  // member: error_message
  {
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << ", ";
  }

  // member: robot_fleet
  {
    out << "robot_fleet: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_fleet, out);
    out << ", ";
  }

  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: time_to_fully_charged
  {
    out << "time_to_fully_charged: ";
    to_flow_style_yaml(msg.time_to_fully_charged, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: charger_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger_time:\n";
    to_block_style_yaml(msg.charger_time, out, indentation + 2);
  }

  // member: state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "state: ";
    rosidl_generator_traits::value_to_yaml(msg.state, out);
    out << "\n";
  }

  // member: charger_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger_name: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_name, out);
    out << "\n";
  }

  // member: error_message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error_message: ";
    rosidl_generator_traits::value_to_yaml(msg.error_message, out);
    out << "\n";
  }

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << "\n";
  }

  // member: robot_fleet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_fleet: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_fleet, out);
    out << "\n";
  }

  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
  }

  // member: time_to_fully_charged
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_to_fully_charged:\n";
    to_block_style_yaml(msg.time_to_fully_charged, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargerState & msg, bool use_flow_style = false)
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

}  // namespace rmf_charger_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_charger_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_charger_msgs::msg::ChargerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_charger_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_charger_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_charger_msgs::msg::ChargerState & msg)
{
  return rmf_charger_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_charger_msgs::msg::ChargerState>()
{
  return "rmf_charger_msgs::msg::ChargerState";
}

template<>
inline const char * name<rmf_charger_msgs::msg::ChargerState>()
{
  return "rmf_charger_msgs/msg/ChargerState";
}

template<>
struct has_fixed_size<rmf_charger_msgs::msg::ChargerState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_charger_msgs::msg::ChargerState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_charger_msgs::msg::ChargerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_STATE__TRAITS_HPP_
