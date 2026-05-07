// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/robot_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: mode_request_id
  {
    out << "mode_request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_request_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RobotMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: mode_request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode_request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.mode_request_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotMode & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::RobotMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::RobotMode & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::RobotMode>()
{
  return "rmf_fleet_msgs::msg::RobotMode";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::RobotMode>()
{
  return "rmf_fleet_msgs/msg/RobotMode";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::RobotMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::RobotMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_fleet_msgs::msg::RobotMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__TRAITS_HPP_
