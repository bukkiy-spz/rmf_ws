// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_door_msgs:msg/DoorState.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__TRAITS_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_door_msgs/msg/detail/door_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'door_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'current_mode'
#include "rmf_door_msgs/msg/detail/door_mode__traits.hpp"

namespace rmf_door_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoorState & msg,
  std::ostream & out)
{
  out << "{";
  // member: door_time
  {
    out << "door_time: ";
    to_flow_style_yaml(msg.door_time, out);
    out << ", ";
  }

  // member: door_name
  {
    out << "door_name: ";
    rosidl_generator_traits::value_to_yaml(msg.door_name, out);
    out << ", ";
  }

  // member: current_mode
  {
    out << "current_mode: ";
    to_flow_style_yaml(msg.current_mode, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DoorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: door_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_time:\n";
    to_block_style_yaml(msg.door_time, out, indentation + 2);
  }

  // member: door_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_name: ";
    rosidl_generator_traits::value_to_yaml(msg.door_name, out);
    out << "\n";
  }

  // member: current_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_mode:\n";
    to_block_style_yaml(msg.current_mode, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoorState & msg, bool use_flow_style = false)
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

}  // namespace rmf_door_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_door_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_door_msgs::msg::DoorState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_door_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_door_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_door_msgs::msg::DoorState & msg)
{
  return rmf_door_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_door_msgs::msg::DoorState>()
{
  return "rmf_door_msgs::msg::DoorState";
}

template<>
inline const char * name<rmf_door_msgs::msg::DoorState>()
{
  return "rmf_door_msgs/msg/DoorState";
}

template<>
struct has_fixed_size<rmf_door_msgs::msg::DoorState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_door_msgs::msg::DoorState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_door_msgs::msg::DoorState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_STATE__TRAITS_HPP_
