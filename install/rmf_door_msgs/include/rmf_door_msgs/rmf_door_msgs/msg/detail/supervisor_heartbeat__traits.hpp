// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__TRAITS_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_door_msgs/msg/detail/supervisor_heartbeat__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'all_sessions'
#include "rmf_door_msgs/msg/detail/door_sessions__traits.hpp"

namespace rmf_door_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SupervisorHeartbeat & msg,
  std::ostream & out)
{
  out << "{";
  // member: all_sessions
  {
    if (msg.all_sessions.size() == 0) {
      out << "all_sessions: []";
    } else {
      out << "all_sessions: [";
      size_t pending_items = msg.all_sessions.size();
      for (auto item : msg.all_sessions) {
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
  const SupervisorHeartbeat & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: all_sessions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.all_sessions.size() == 0) {
      out << "all_sessions: []\n";
    } else {
      out << "all_sessions:\n";
      for (auto item : msg.all_sessions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SupervisorHeartbeat & msg, bool use_flow_style = false)
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

}  // namespace rmf_door_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_door_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_door_msgs::msg::SupervisorHeartbeat & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_door_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_door_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_door_msgs::msg::SupervisorHeartbeat & msg)
{
  return rmf_door_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_door_msgs::msg::SupervisorHeartbeat>()
{
  return "rmf_door_msgs::msg::SupervisorHeartbeat";
}

template<>
inline const char * name<rmf_door_msgs::msg::SupervisorHeartbeat>()
{
  return "rmf_door_msgs/msg/SupervisorHeartbeat";
}

template<>
struct has_fixed_size<rmf_door_msgs::msg::SupervisorHeartbeat>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_door_msgs::msg::SupervisorHeartbeat>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_door_msgs::msg::SupervisorHeartbeat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__SUPERVISOR_HEARTBEAT__TRAITS_HPP_
