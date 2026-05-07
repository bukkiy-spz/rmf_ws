// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/SpeedLimitedLane.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SpeedLimitedLane & msg,
  std::ostream & out)
{
  out << "{";
  // member: lane_index
  {
    out << "lane_index: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_index, out);
    out << ", ";
  }

  // member: speed_limit
  {
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SpeedLimitedLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lane_index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lane_index: ";
    rosidl_generator_traits::value_to_yaml(msg.lane_index, out);
    out << "\n";
  }

  // member: speed_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.speed_limit, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SpeedLimitedLane & msg, bool use_flow_style = false)
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

}  // namespace rmf_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_fleet_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_fleet_msgs::msg::SpeedLimitedLane & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::SpeedLimitedLane & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::SpeedLimitedLane>()
{
  return "rmf_fleet_msgs::msg::SpeedLimitedLane";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::SpeedLimitedLane>()
{
  return "rmf_fleet_msgs/msg/SpeedLimitedLane";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::SpeedLimitedLane>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::SpeedLimitedLane>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_fleet_msgs::msg::SpeedLimitedLane>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__TRAITS_HPP_
