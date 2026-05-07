// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/Clean.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__CLEAN__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__CLEAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/clean__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Clean & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_waypoint
  {
    out << "start_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.start_waypoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Clean & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_waypoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_waypoint: ";
    rosidl_generator_traits::value_to_yaml(msg.start_waypoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Clean & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::msg::Clean & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::Clean & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::Clean>()
{
  return "rmf_task_msgs::msg::Clean";
}

template<>
inline const char * name<rmf_task_msgs::msg::Clean>()
{
  return "rmf_task_msgs/msg/Clean";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::Clean>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::Clean>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::Clean>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__CLEAN__TRAITS_HPP_
