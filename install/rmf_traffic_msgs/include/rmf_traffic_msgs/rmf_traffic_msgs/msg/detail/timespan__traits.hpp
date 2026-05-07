// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/timespan__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Timespan & msg,
  std::ostream & out)
{
  out << "{";
  // member: maps
  {
    if (msg.maps.size() == 0) {
      out << "maps: []";
    } else {
      out << "maps: [";
      size_t pending_items = msg.maps.size();
      for (auto item : msg.maps) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: has_lower_bound
  {
    out << "has_lower_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.has_lower_bound, out);
    out << ", ";
  }

  // member: lower_bound
  {
    out << "lower_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_bound, out);
    out << ", ";
  }

  // member: has_upper_bound
  {
    out << "has_upper_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.has_upper_bound, out);
    out << ", ";
  }

  // member: upper_bound
  {
    out << "upper_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_bound, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Timespan & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: maps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.maps.size() == 0) {
      out << "maps: []\n";
    } else {
      out << "maps:\n";
      for (auto item : msg.maps) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: has_lower_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_lower_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.has_lower_bound, out);
    out << "\n";
  }

  // member: lower_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lower_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.lower_bound, out);
    out << "\n";
  }

  // member: has_upper_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_upper_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.has_upper_bound, out);
    out << "\n";
  }

  // member: upper_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "upper_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.upper_bound, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Timespan & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::Timespan & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::Timespan & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Timespan>()
{
  return "rmf_traffic_msgs::msg::Timespan";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Timespan>()
{
  return "rmf_traffic_msgs/msg/Timespan";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Timespan>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Timespan>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Timespan>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__TRAITS_HPP_
