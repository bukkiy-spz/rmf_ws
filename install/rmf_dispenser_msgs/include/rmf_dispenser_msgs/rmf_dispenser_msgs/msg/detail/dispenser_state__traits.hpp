// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserState.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__TRAITS_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_dispenser_msgs/msg/detail/dispenser_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_dispenser_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DispenserState & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
    out << ", ";
  }

  // member: guid
  {
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << ", ";
  }

  // member: request_guid_queue
  {
    if (msg.request_guid_queue.size() == 0) {
      out << "request_guid_queue: []";
    } else {
      out << "request_guid_queue: [";
      size_t pending_items = msg.request_guid_queue.size();
      for (auto item : msg.request_guid_queue) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: seconds_remaining
  {
    out << "seconds_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.seconds_remaining, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DispenserState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }

  // member: guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << "\n";
  }

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: request_guid_queue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request_guid_queue.size() == 0) {
      out << "request_guid_queue: []\n";
    } else {
      out << "request_guid_queue:\n";
      for (auto item : msg.request_guid_queue) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: seconds_remaining
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seconds_remaining: ";
    rosidl_generator_traits::value_to_yaml(msg.seconds_remaining, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DispenserState & msg, bool use_flow_style = false)
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

}  // namespace rmf_dispenser_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_dispenser_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_dispenser_msgs::msg::DispenserState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_dispenser_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_dispenser_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_dispenser_msgs::msg::DispenserState & msg)
{
  return rmf_dispenser_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_dispenser_msgs::msg::DispenserState>()
{
  return "rmf_dispenser_msgs::msg::DispenserState";
}

template<>
inline const char * name<rmf_dispenser_msgs::msg::DispenserState>()
{
  return "rmf_dispenser_msgs/msg/DispenserState";
}

template<>
struct has_fixed_size<rmf_dispenser_msgs::msg::DispenserState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_dispenser_msgs::msg::DispenserState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_dispenser_msgs::msg::DispenserState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__TRAITS_HPP_
