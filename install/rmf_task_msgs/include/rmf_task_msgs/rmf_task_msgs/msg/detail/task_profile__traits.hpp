// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/TaskProfile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/task_profile__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'submission_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'description'
#include "rmf_task_msgs/msg/detail/task_description__traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskProfile & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: submission_time
  {
    out << "submission_time: ";
    to_flow_style_yaml(msg.submission_time, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    to_flow_style_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskProfile & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: submission_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "submission_time:\n";
    to_block_style_yaml(msg.submission_time, out, indentation + 2);
  }

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description:\n";
    to_block_style_yaml(msg.description, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskProfile & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::msg::TaskProfile & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::TaskProfile & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::TaskProfile>()
{
  return "rmf_task_msgs::msg::TaskProfile";
}

template<>
inline const char * name<rmf_task_msgs::msg::TaskProfile>()
{
  return "rmf_task_msgs/msg/TaskProfile";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::TaskProfile>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::TaskProfile>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::TaskProfile>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__TRAITS_HPP_
