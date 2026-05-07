// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Region.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/region__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'spaces'
#include "rmf_traffic_msgs/msg/detail/space__traits.hpp"
// Member 'timespan'
#include "rmf_traffic_msgs/msg/detail/timespan__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Region & msg,
  std::ostream & out)
{
  out << "{";
  // member: map
  {
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << ", ";
  }

  // member: spaces
  {
    if (msg.spaces.size() == 0) {
      out << "spaces: []";
    } else {
      out << "spaces: [";
      size_t pending_items = msg.spaces.size();
      for (auto item : msg.spaces) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: timespan
  {
    out << "timespan: ";
    to_flow_style_yaml(msg.timespan, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Region & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << "\n";
  }

  // member: spaces
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.spaces.size() == 0) {
      out << "spaces: []\n";
    } else {
      out << "spaces:\n";
      for (auto item : msg.spaces) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: timespan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timespan:\n";
    to_block_style_yaml(msg.timespan, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Region & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::Region & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::Region & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Region>()
{
  return "rmf_traffic_msgs::msg::Region";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Region>()
{
  return "rmf_traffic_msgs/msg/Region";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Region>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Region>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Region>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__TRAITS_HPP_
