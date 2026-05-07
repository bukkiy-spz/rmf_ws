// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_scheduler_msgs:msg/TriggerState.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__TRAITS_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_scheduler_msgs/msg/detail/trigger_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_scheduler_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TriggerState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: last_modified
  {
    out << "last_modified: ";
    rosidl_generator_traits::value_to_yaml(msg.last_modified, out);
    out << ", ";
  }

  // member: last_ran
  {
    out << "last_ran: ";
    rosidl_generator_traits::value_to_yaml(msg.last_ran, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TriggerState & msg,
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

  // member: last_modified
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_modified: ";
    rosidl_generator_traits::value_to_yaml(msg.last_modified, out);
    out << "\n";
  }

  // member: last_ran
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_ran: ";
    rosidl_generator_traits::value_to_yaml(msg.last_ran, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TriggerState & msg, bool use_flow_style = false)
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

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::msg::TriggerState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::msg::TriggerState & msg)
{
  return rmf_scheduler_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::msg::TriggerState>()
{
  return "rmf_scheduler_msgs::msg::TriggerState";
}

template<>
inline const char * name<rmf_scheduler_msgs::msg::TriggerState>()
{
  return "rmf_scheduler_msgs/msg/TriggerState";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::msg::TriggerState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::msg::TriggerState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_scheduler_msgs::msg::TriggerState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__TRIGGER_STATE__TRAITS_HPP_
