// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/LaneStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/lane_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'speed_limits'
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneStates & msg,
  std::ostream & out)
{
  out << "{";
  // member: fleet_name
  {
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << ", ";
  }

  // member: closed_lanes
  {
    if (msg.closed_lanes.size() == 0) {
      out << "closed_lanes: []";
    } else {
      out << "closed_lanes: [";
      size_t pending_items = msg.closed_lanes.size();
      for (auto item : msg.closed_lanes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: speed_limits
  {
    if (msg.speed_limits.size() == 0) {
      out << "speed_limits: []";
    } else {
      out << "speed_limits: [";
      size_t pending_items = msg.speed_limits.size();
      for (auto item : msg.speed_limits) {
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
  const LaneStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fleet_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << "\n";
  }

  // member: closed_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.closed_lanes.size() == 0) {
      out << "closed_lanes: []\n";
    } else {
      out << "closed_lanes:\n";
      for (auto item : msg.closed_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: speed_limits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.speed_limits.size() == 0) {
      out << "speed_limits: []\n";
    } else {
      out << "speed_limits:\n";
      for (auto item : msg.speed_limits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneStates & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::LaneStates & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::LaneStates & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::LaneStates>()
{
  return "rmf_fleet_msgs::msg::LaneStates";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::LaneStates>()
{
  return "rmf_fleet_msgs/msg/LaneStates";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::LaneStates>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::LaneStates>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::LaneStates>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LANE_STATES__TRAITS_HPP_
