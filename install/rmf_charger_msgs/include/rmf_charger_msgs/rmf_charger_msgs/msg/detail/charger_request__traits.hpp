// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__TRAITS_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_charger_msgs/msg/detail/charger_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_timeout'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rmf_charger_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ChargerRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: charger_name
  {
    out << "charger_name: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_name, out);
    out << ", ";
  }

  // member: fleet_name
  {
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << ", ";
  }

  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: start_timeout
  {
    out << "start_timeout: ";
    to_flow_style_yaml(msg.start_timeout, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChargerRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: charger_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "charger_name: ";
    rosidl_generator_traits::value_to_yaml(msg.charger_name, out);
    out << "\n";
  }

  // member: fleet_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
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

  // member: start_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_timeout:\n";
    to_block_style_yaml(msg.start_timeout, out, indentation + 2);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChargerRequest & msg, bool use_flow_style = false)
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
  const rmf_charger_msgs::msg::ChargerRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_charger_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_charger_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_charger_msgs::msg::ChargerRequest & msg)
{
  return rmf_charger_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_charger_msgs::msg::ChargerRequest>()
{
  return "rmf_charger_msgs::msg::ChargerRequest";
}

template<>
inline const char * name<rmf_charger_msgs::msg::ChargerRequest>()
{
  return "rmf_charger_msgs/msg/ChargerRequest";
}

template<>
struct has_fixed_size<rmf_charger_msgs::msg::ChargerRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_charger_msgs::msg::ChargerRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_charger_msgs::msg::ChargerRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__TRAITS_HPP_
