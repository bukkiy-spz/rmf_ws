// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/DispatchStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/dispatch_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'active'
// Member 'finished'
#include "rmf_task_msgs/msg/detail/dispatch_state__traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DispatchStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: active
  {
    if (msg.active.size() == 0) {
      out << "active: []";
    } else {
      out << "active: [";
      size_t pending_items = msg.active.size();
      for (auto item : msg.active) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: finished
  {
    if (msg.finished.size() == 0) {
      out << "finished: []";
    } else {
      out << "finished: [";
      size_t pending_items = msg.finished.size();
      for (auto item : msg.finished) {
        to_flow_style_yaml(item, out);
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
  const DispatchStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: active
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.active.size() == 0) {
      out << "active: []\n";
    } else {
      out << "active:\n";
      for (auto item : msg.active) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: finished
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.finished.size() == 0) {
      out << "finished: []\n";
    } else {
      out << "finished:\n";
      for (auto item : msg.finished) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DispatchStates & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::msg::DispatchStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::DispatchStates & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::DispatchStates>()
{
  return "rmf_task_msgs::msg::DispatchStates";
}

template<>
inline const char * name<rmf_task_msgs::msg::DispatchStates>()
{
  return "rmf_task_msgs/msg/DispatchStates";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::DispatchStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::DispatchStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::DispatchStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_STATES__TRAITS_HPP_
