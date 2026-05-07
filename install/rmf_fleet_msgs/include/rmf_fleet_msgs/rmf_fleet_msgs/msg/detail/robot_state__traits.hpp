// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/robot_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'mode'
#include "rmf_fleet_msgs/msg/detail/robot_mode__traits.hpp"
// Member 'location'
// Member 'path'
#include "rmf_fleet_msgs/msg/detail/location__traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RobotState & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: model
  {
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: seq
  {
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    to_flow_style_yaml(msg.mode, out);
    out << ", ";
  }

  // member: battery_percent
  {
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << ", ";
  }

  // member: location
  {
    out << "location: ";
    to_flow_style_yaml(msg.location, out);
    out << ", ";
  }

  // member: path
  {
    if (msg.path.size() == 0) {
      out << "path: []";
    } else {
      out << "path: [";
      size_t pending_items = msg.path.size();
      for (auto item : msg.path) {
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
  const RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: model
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "model: ";
    rosidl_generator_traits::value_to_yaml(msg.model, out);
    out << "\n";
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: seq
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seq: ";
    rosidl_generator_traits::value_to_yaml(msg.seq, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode:\n";
    to_block_style_yaml(msg.mode, out, indentation + 2);
  }

  // member: battery_percent
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_percent: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_percent, out);
    out << "\n";
  }

  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location:\n";
    to_block_style_yaml(msg.location, out, indentation + 2);
  }

  // member: path
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.path.size() == 0) {
      out << "path: []\n";
    } else {
      out << "path:\n";
      for (auto item : msg.path) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RobotState & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::RobotState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::RobotState & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::RobotState>()
{
  return "rmf_fleet_msgs::msg::RobotState";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::RobotState>()
{
  return "rmf_fleet_msgs/msg/RobotState";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::RobotState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::RobotState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_STATE__TRAITS_HPP_
