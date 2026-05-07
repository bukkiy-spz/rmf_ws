// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistencyRange.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleInconsistencyRange & msg,
  std::ostream & out)
{
  out << "{";
  // member: lower
  {
    out << "lower: ";
    rosidl_generator_traits::value_to_yaml(msg.lower, out);
    out << ", ";
  }

  // member: upper
  {
    out << "upper: ";
    rosidl_generator_traits::value_to_yaml(msg.upper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScheduleInconsistencyRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lower
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower: ";
    rosidl_generator_traits::value_to_yaml(msg.lower, out);
    out << "\n";
  }

  // member: upper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper: ";
    rosidl_generator_traits::value_to_yaml(msg.upper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScheduleInconsistencyRange & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ScheduleInconsistencyRange & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleInconsistencyRange & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>()
{
  return "rmf_traffic_msgs::msg::ScheduleInconsistencyRange";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>()
{
  return "rmf_traffic_msgs/msg/ScheduleInconsistencyRange";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__TRAITS_HPP_
