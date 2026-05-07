// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryWaypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << ", ";
  }

  // member: position
  {
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: velocity
  {
    if (msg.velocity.size() == 0) {
      out << "velocity: []";
    } else {
      out << "velocity: [";
      size_t pending_items = msg.velocity.size();
      for (auto item : msg.velocity) {
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
  const TrajectoryWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time: ";
    rosidl_generator_traits::value_to_yaml(msg.time, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.velocity.size() == 0) {
      out << "velocity: []\n";
    } else {
      out << "velocity:\n";
      for (auto item : msg.velocity) {
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

inline std::string to_yaml(const TrajectoryWaypoint & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::TrajectoryWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::TrajectoryWaypoint & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::TrajectoryWaypoint>()
{
  return "rmf_traffic_msgs::msg::TrajectoryWaypoint";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::TrajectoryWaypoint>()
{
  return "rmf_traffic_msgs/msg/TrajectoryWaypoint";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::TrajectoryWaypoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::TrajectoryWaypoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::TrajectoryWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAJECTORY_WAYPOINT__TRAITS_HPP_
