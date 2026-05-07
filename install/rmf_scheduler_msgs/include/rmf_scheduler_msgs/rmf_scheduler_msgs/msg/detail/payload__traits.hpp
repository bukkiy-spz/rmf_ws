// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_scheduler_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__TRAITS_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_scheduler_msgs/msg/detail/payload__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_scheduler_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Payload & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: topic
  {
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << ", ";
  }

  // member: message_type
  {
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
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
  const Payload & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: topic
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "topic: ";
    rosidl_generator_traits::value_to_yaml(msg.topic, out);
    out << "\n";
  }

  // member: message_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message_type: ";
    rosidl_generator_traits::value_to_yaml(msg.message_type, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
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

inline std::string to_yaml(const Payload & msg, bool use_flow_style = false)
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

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::msg::Payload & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::msg::Payload & msg)
{
  return rmf_scheduler_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::msg::Payload>()
{
  return "rmf_scheduler_msgs::msg::Payload";
}

template<>
inline const char * name<rmf_scheduler_msgs::msg::Payload>()
{
  return "rmf_scheduler_msgs/msg/Payload";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::msg::Payload>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::msg::Payload>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_scheduler_msgs::msg::Payload>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__TRAITS_HPP_
