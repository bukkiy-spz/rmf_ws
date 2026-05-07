// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'spacetime'
#include "rmf_traffic_msgs/msg/detail/schedule_query_spacetime__traits.hpp"
// Member 'participants'
#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleQuery & msg,
  std::ostream & out)
{
  out << "{";
  // member: spacetime
  {
    out << "spacetime: ";
    to_flow_style_yaml(msg.spacetime, out);
    out << ", ";
  }

  // member: participants
  {
    out << "participants: ";
    to_flow_style_yaml(msg.participants, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScheduleQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: spacetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spacetime:\n";
    to_block_style_yaml(msg.spacetime, out, indentation + 2);
  }

  // member: participants
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "participants:\n";
    to_block_style_yaml(msg.participants, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScheduleQuery & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ScheduleQuery & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleQuery & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleQuery>()
{
  return "rmf_traffic_msgs::msg::ScheduleQuery";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleQuery>()
{
  return "rmf_traffic_msgs/msg/ScheduleQuery";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleQuery>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ScheduleQueryParticipants>::value && has_fixed_size<rmf_traffic_msgs::msg::ScheduleQuerySpacetime>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleQuery>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ScheduleQueryParticipants>::value && has_bounded_size<rmf_traffic_msgs::msg::ScheduleQuerySpacetime>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleQuery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__TRAITS_HPP_
