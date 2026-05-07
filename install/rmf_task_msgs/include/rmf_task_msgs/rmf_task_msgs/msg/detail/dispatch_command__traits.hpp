// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/DispatchCommand.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/dispatch_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DispatchCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: fleet_name
  {
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: dispatch_id
  {
    out << "dispatch_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dispatch_id, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DispatchCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fleet_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << "\n";
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: dispatch_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dispatch_id: ";
    rosidl_generator_traits::value_to_yaml(msg.dispatch_id, out);
    out << "\n";
  }

  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DispatchCommand & msg, bool use_flow_style = false)
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

}  // namespace rmf_task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_task_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_task_msgs::msg::DispatchCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::DispatchCommand & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::DispatchCommand>()
{
  return "rmf_task_msgs::msg::DispatchCommand";
}

template<>
inline const char * name<rmf_task_msgs::msg::DispatchCommand>()
{
  return "rmf_task_msgs/msg/DispatchCommand";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::DispatchCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::DispatchCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::DispatchCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__TRAITS_HPP_
