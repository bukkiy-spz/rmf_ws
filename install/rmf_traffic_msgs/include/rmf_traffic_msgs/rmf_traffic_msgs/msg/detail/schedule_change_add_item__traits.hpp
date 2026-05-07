// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAddItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'route'
#include "rmf_traffic_msgs/msg/detail/route__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleChangeAddItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: route_id
  {
    out << "route_id: ";
    rosidl_generator_traits::value_to_yaml(msg.route_id, out);
    out << ", ";
  }

  // member: storage_id
  {
    out << "storage_id: ";
    rosidl_generator_traits::value_to_yaml(msg.storage_id, out);
    out << ", ";
  }

  // member: route
  {
    out << "route: ";
    to_flow_style_yaml(msg.route, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScheduleChangeAddItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: route_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route_id: ";
    rosidl_generator_traits::value_to_yaml(msg.route_id, out);
    out << "\n";
  }

  // member: storage_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "storage_id: ";
    rosidl_generator_traits::value_to_yaml(msg.storage_id, out);
    out << "\n";
  }

  // member: route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "route:\n";
    to_block_style_yaml(msg.route, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScheduleChangeAddItem & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ScheduleChangeAddItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleChangeAddItem & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleChangeAddItem>()
{
  return "rmf_traffic_msgs::msg::ScheduleChangeAddItem";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleChangeAddItem>()
{
  return "rmf_traffic_msgs/msg/ScheduleChangeAddItem";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleChangeAddItem>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::Route>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleChangeAddItem>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::Route>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleChangeAddItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__TRAITS_HPP_
