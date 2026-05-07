// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/DispatchState.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/dispatch_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'assignment'
#include "rmf_task_msgs/msg/detail/assignment__traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DispatchState & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: assignment
  {
    out << "assignment: ";
    to_flow_style_yaml(msg.assignment, out);
    out << ", ";
  }

  // member: errors
  {
    if (msg.errors.size() == 0) {
      out << "errors: []";
    } else {
      out << "errors: [";
      size_t pending_items = msg.errors.size();
      for (auto item : msg.errors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DispatchState & msg,
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

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: assignment
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assignment:\n";
    to_block_style_yaml(msg.assignment, out, indentation + 2);
  }

  // member: errors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.errors.size() == 0) {
      out << "errors: []\n";
    } else {
      out << "errors:\n";
      for (auto item : msg.errors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DispatchState & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::msg::DispatchState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::DispatchState & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::DispatchState>()
{
  return "rmf_task_msgs::msg::DispatchState";
}

template<>
inline const char * name<rmf_task_msgs::msg::DispatchState>()
{
  return "rmf_task_msgs/msg/DispatchState";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::DispatchState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::DispatchState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::DispatchState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATE__TRAITS_HPP_
