// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/LaneRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/lane_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaneRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: fleet_name
  {
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << ", ";
  }

  // member: open_lanes
  {
    if (msg.open_lanes.size() == 0) {
      out << "open_lanes: []";
    } else {
      out << "open_lanes: [";
      size_t pending_items = msg.open_lanes.size();
      for (auto item : msg.open_lanes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: close_lanes
  {
    if (msg.close_lanes.size() == 0) {
      out << "close_lanes: []";
    } else {
      out << "close_lanes: [";
      size_t pending_items = msg.close_lanes.size();
      for (auto item : msg.close_lanes) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const LaneRequest & msg,
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

  // member: open_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.open_lanes.size() == 0) {
      out << "open_lanes: []\n";
    } else {
      out << "open_lanes:\n";
      for (auto item : msg.open_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: close_lanes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.close_lanes.size() == 0) {
      out << "close_lanes: []\n";
    } else {
      out << "close_lanes:\n";
      for (auto item : msg.close_lanes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaneRequest & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::LaneRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::LaneRequest & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::LaneRequest>()
{
  return "rmf_fleet_msgs::msg::LaneRequest";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::LaneRequest>()
{
  return "rmf_fleet_msgs/msg/LaneRequest";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::LaneRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::LaneRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::LaneRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__TRAITS_HPP_
