// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_workcell_msgs:msg/WorkcellRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__TRAITS_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_workcell_msgs/msg/detail/workcell_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_workcell_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorkcellRequest & msg,
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WorkcellRequest & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorkcellRequest & msg, bool use_flow_style = false)
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

}  // namespace rmf_workcell_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_workcell_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_workcell_msgs::msg::WorkcellRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_workcell_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_workcell_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_workcell_msgs::msg::WorkcellRequest & msg)
{
  return rmf_workcell_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_workcell_msgs::msg::WorkcellRequest>()
{
  return "rmf_workcell_msgs::msg::WorkcellRequest";
}

template<>
inline const char * name<rmf_workcell_msgs::msg::WorkcellRequest>()
{
  return "rmf_workcell_msgs/msg/WorkcellRequest";
}

template<>
struct has_fixed_size<rmf_workcell_msgs::msg::WorkcellRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_workcell_msgs::msg::WorkcellRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_workcell_msgs::msg::WorkcellRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__TRAITS_HPP_
