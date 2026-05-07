// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__TRAITS_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_dispenser_msgs/msg/detail/dispenser_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'items'
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__traits.hpp"

namespace rmf_dispenser_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DispenserRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
    out << ", ";
  }

  // member: request_guid
  {
    out << "request_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.request_guid, out);
    out << ", ";
  }

  // member: target_guid
  {
    out << "target_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.target_guid, out);
    out << ", ";
  }

  // member: transporter_type
  {
    out << "transporter_type: ";
    rosidl_generator_traits::value_to_yaml(msg.transporter_type, out);
    out << ", ";
  }

  // member: items
  {
    if (msg.items.size() == 0) {
      out << "items: []";
    } else {
      out << "items: [";
      size_t pending_items = msg.items.size();
      for (auto item : msg.items) {
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
  const DispenserRequest & msg,
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

  // member: request_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.request_guid, out);
    out << "\n";
  }

  // member: target_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.target_guid, out);
    out << "\n";
  }

  // member: transporter_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transporter_type: ";
    rosidl_generator_traits::value_to_yaml(msg.transporter_type, out);
    out << "\n";
  }

  // member: items
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.items.size() == 0) {
      out << "items: []\n";
    } else {
      out << "items:\n";
      for (auto item : msg.items) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DispenserRequest & msg, bool use_flow_style = false)
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
  const rmf_dispenser_msgs::msg::DispenserRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_dispenser_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_dispenser_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_dispenser_msgs::msg::DispenserRequest & msg)
{
  return rmf_dispenser_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_dispenser_msgs::msg::DispenserRequest>()
{
  return "rmf_dispenser_msgs::msg::DispenserRequest";
}

template<>
inline const char * name<rmf_dispenser_msgs::msg::DispenserRequest>()
{
  return "rmf_dispenser_msgs/msg/DispenserRequest";
}

template<>
struct has_fixed_size<rmf_dispenser_msgs::msg::DispenserRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_dispenser_msgs::msg::DispenserRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_dispenser_msgs::msg::DispenserRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__TRAITS_HPP_
