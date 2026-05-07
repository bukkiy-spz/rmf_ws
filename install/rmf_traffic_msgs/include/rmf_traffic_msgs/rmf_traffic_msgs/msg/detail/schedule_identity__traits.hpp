// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleIdentity.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_identity__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleIdentity & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_uuid
  {
    out << "node_uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.node_uuid, out);
    out << ", ";
  }

  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScheduleIdentity & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_uuid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_uuid: ";
    rosidl_generator_traits::value_to_yaml(msg.node_uuid, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScheduleIdentity & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ScheduleIdentity & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleIdentity & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleIdentity>()
{
  return "rmf_traffic_msgs::msg::ScheduleIdentity";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleIdentity>()
{
  return "rmf_traffic_msgs/msg/ScheduleIdentity";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleIdentity>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleIdentity>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleIdentity>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__TRAITS_HPP_
