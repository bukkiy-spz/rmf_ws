// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeProgress.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleChangeProgress & msg,
  std::ostream & out)
{
  out << "{";
  // member: has_progress
  {
    out << "has_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.has_progress, out);
    out << ", ";
  }

  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: checkpoints
  {
    if (msg.checkpoints.size() == 0) {
      out << "checkpoints: []";
    } else {
      out << "checkpoints: [";
      size_t pending_items = msg.checkpoints.size();
      for (auto item : msg.checkpoints) {
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
  const ScheduleChangeProgress & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: has_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.has_progress, out);
    out << "\n";
  }

  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: checkpoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.checkpoints.size() == 0) {
      out << "checkpoints: []\n";
    } else {
      out << "checkpoints:\n";
      for (auto item : msg.checkpoints) {
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

inline std::string to_yaml(const ScheduleChangeProgress & msg, bool use_flow_style = false)
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

}  // namespace rmf_traffic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_traffic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_traffic_msgs::msg::ScheduleChangeProgress & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleChangeProgress & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleChangeProgress>()
{
  return "rmf_traffic_msgs::msg::ScheduleChangeProgress";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleChangeProgress>()
{
  return "rmf_traffic_msgs/msg/ScheduleChangeProgress";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleChangeProgress>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleChangeProgress>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleChangeProgress>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__TRAITS_HPP_
