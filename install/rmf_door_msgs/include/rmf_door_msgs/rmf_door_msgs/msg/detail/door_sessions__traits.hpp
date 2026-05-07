// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_door_msgs:msg/DoorSessions.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__TRAITS_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_door_msgs/msg/detail/door_sessions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'sessions'
#include "rmf_door_msgs/msg/detail/session__traits.hpp"

namespace rmf_door_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DoorSessions & msg,
  std::ostream & out)
{
  out << "{";
  // member: door_name
  {
    out << "door_name: ";
    rosidl_generator_traits::value_to_yaml(msg.door_name, out);
    out << ", ";
  }

  // member: sessions
  {
    if (msg.sessions.size() == 0) {
      out << "sessions: []";
    } else {
      out << "sessions: [";
      size_t pending_items = msg.sessions.size();
      for (auto item : msg.sessions) {
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
  const DoorSessions & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: door_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_name: ";
    rosidl_generator_traits::value_to_yaml(msg.door_name, out);
    out << "\n";
  }

  // member: sessions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.sessions.size() == 0) {
      out << "sessions: []\n";
    } else {
      out << "sessions:\n";
      for (auto item : msg.sessions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DoorSessions & msg, bool use_flow_style = false)
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
  const rmf_door_msgs::msg::DoorSessions & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_door_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_door_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_door_msgs::msg::DoorSessions & msg)
{
  return rmf_door_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_door_msgs::msg::DoorSessions>()
{
  return "rmf_door_msgs::msg::DoorSessions";
}

template<>
inline const char * name<rmf_door_msgs::msg::DoorSessions>()
{
  return "rmf_door_msgs/msg/DoorSessions";
}

template<>
struct has_fixed_size<rmf_door_msgs::msg::DoorSessions>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_door_msgs::msg::DoorSessions>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_door_msgs::msg::DoorSessions>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_SESSIONS__TRAITS_HPP_
