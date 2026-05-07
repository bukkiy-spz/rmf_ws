// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAdd.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_change_add__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'items'
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleChangeAdd & msg,
  std::ostream & out)
{
  out << "{";
  // member: plan_id
  {
    out << "plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_id, out);
    out << ", ";
  }

  // member: items
  {
    if (msg.items.size() == 0) {
      out << "items: []";
    } else {
      out << "items: [";
      size_t pending_items = msg.items.size();
      for (auto item : msg.items) {
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
  const ScheduleChangeAdd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: plan_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.plan_id, out);
    out << "\n";
  }

  // member: items
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.items.size() == 0) {
      out << "items: []\n";
    } else {
      out << "items:\n";
      for (auto item : msg.items) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScheduleChangeAdd & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ScheduleChangeAdd & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleChangeAdd & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleChangeAdd>()
{
  return "rmf_traffic_msgs::msg::ScheduleChangeAdd";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleChangeAdd>()
{
  return "rmf_traffic_msgs/msg/ScheduleChangeAdd";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleChangeAdd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleChangeAdd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleChangeAdd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__TRAITS_HPP_
