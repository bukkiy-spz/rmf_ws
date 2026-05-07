// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'ranges'
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleInconsistency & msg,
  std::ostream & out)
{
  out << "{";
  // member: participant
  {
    out << "participant: ";
    rosidl_generator_traits::value_to_yaml(msg.participant, out);
    out << ", ";
  }

  // member: ranges
  {
    if (msg.ranges.size() == 0) {
      out << "ranges: []";
    } else {
      out << "ranges: [";
      size_t pending_items = msg.ranges.size();
      for (auto item : msg.ranges) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: last_known_itinerary
  {
    out << "last_known_itinerary: ";
    rosidl_generator_traits::value_to_yaml(msg.last_known_itinerary, out);
    out << ", ";
  }

  // member: last_known_progress
  {
    out << "last_known_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.last_known_progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScheduleInconsistency & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: participant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "participant: ";
    rosidl_generator_traits::value_to_yaml(msg.participant, out);
    out << "\n";
  }

  // member: ranges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ranges.size() == 0) {
      out << "ranges: []\n";
    } else {
      out << "ranges:\n";
      for (auto item : msg.ranges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: last_known_itinerary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_known_itinerary: ";
    rosidl_generator_traits::value_to_yaml(msg.last_known_itinerary, out);
    out << "\n";
  }

  // member: last_known_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_known_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.last_known_progress, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScheduleInconsistency & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ScheduleInconsistency & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleInconsistency & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleInconsistency>()
{
  return "rmf_traffic_msgs::msg::ScheduleInconsistency";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleInconsistency>()
{
  return "rmf_traffic_msgs/msg/ScheduleInconsistency";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleInconsistency>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleInconsistency>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleInconsistency>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY__TRAITS_HPP_
