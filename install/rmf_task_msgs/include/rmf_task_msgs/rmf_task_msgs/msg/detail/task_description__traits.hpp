// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/task_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'start_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'priority'
#include "rmf_task_msgs/msg/detail/priority__traits.hpp"
// Member 'task_type'
#include "rmf_task_msgs/msg/detail/task_type__traits.hpp"
// Member 'station'
#include "rmf_task_msgs/msg/detail/station__traits.hpp"
// Member 'loop'
#include "rmf_task_msgs/msg/detail/loop__traits.hpp"
// Member 'delivery'
#include "rmf_task_msgs/msg/detail/delivery__traits.hpp"
// Member 'clean'
#include "rmf_task_msgs/msg/detail/clean__traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TaskDescription & msg,
  std::ostream & out)
{
  out << "{";
  // member: start_time
  {
    out << "start_time: ";
    to_flow_style_yaml(msg.start_time, out);
    out << ", ";
  }

  // member: priority
  {
    out << "priority: ";
    to_flow_style_yaml(msg.priority, out);
    out << ", ";
  }

  // member: task_type
  {
    out << "task_type: ";
    to_flow_style_yaml(msg.task_type, out);
    out << ", ";
  }

  // member: station
  {
    out << "station: ";
    to_flow_style_yaml(msg.station, out);
    out << ", ";
  }

  // member: loop
  {
    out << "loop: ";
    to_flow_style_yaml(msg.loop, out);
    out << ", ";
  }

  // member: delivery
  {
    out << "delivery: ";
    to_flow_style_yaml(msg.delivery, out);
    out << ", ";
  }

  // member: clean
  {
    out << "clean: ";
    to_flow_style_yaml(msg.clean, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TaskDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_time:\n";
    to_block_style_yaml(msg.start_time, out, indentation + 2);
  }

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority:\n";
    to_block_style_yaml(msg.priority, out, indentation + 2);
  }

  // member: task_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_type:\n";
    to_block_style_yaml(msg.task_type, out, indentation + 2);
  }

  // member: station
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station:\n";
    to_block_style_yaml(msg.station, out, indentation + 2);
  }

  // member: loop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loop:\n";
    to_block_style_yaml(msg.loop, out, indentation + 2);
  }

  // member: delivery
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delivery:\n";
    to_block_style_yaml(msg.delivery, out, indentation + 2);
  }

  // member: clean
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "clean:\n";
    to_block_style_yaml(msg.clean, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TaskDescription & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::msg::TaskDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::TaskDescription & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::TaskDescription>()
{
  return "rmf_task_msgs::msg::TaskDescription";
}

template<>
inline const char * name<rmf_task_msgs::msg::TaskDescription>()
{
  return "rmf_task_msgs/msg/TaskDescription";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::TaskDescription>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<rmf_task_msgs::msg::Clean>::value && has_fixed_size<rmf_task_msgs::msg::Delivery>::value && has_fixed_size<rmf_task_msgs::msg::Loop>::value && has_fixed_size<rmf_task_msgs::msg::Priority>::value && has_fixed_size<rmf_task_msgs::msg::Station>::value && has_fixed_size<rmf_task_msgs::msg::TaskType>::value> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::TaskDescription>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<rmf_task_msgs::msg::Clean>::value && has_bounded_size<rmf_task_msgs::msg::Delivery>::value && has_bounded_size<rmf_task_msgs::msg::Loop>::value && has_bounded_size<rmf_task_msgs::msg::Priority>::value && has_bounded_size<rmf_task_msgs::msg::Station>::value && has_bounded_size<rmf_task_msgs::msg::TaskType>::value> {};

template<>
struct is_message<rmf_task_msgs::msg::TaskDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__TRAITS_HPP_
