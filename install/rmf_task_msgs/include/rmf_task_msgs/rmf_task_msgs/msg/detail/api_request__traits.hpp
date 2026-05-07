// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/ApiRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/api_request__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ApiRequest & msg,
  std::ostream & out)
{
  out << "{";
  // member: json_msg
  {
    out << "json_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.json_msg, out);
    out << ", ";
  }

  // member: request_id
  {
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApiRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: json_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "json_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.json_msg, out);
    out << "\n";
  }

  // member: request_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_id: ";
    rosidl_generator_traits::value_to_yaml(msg.request_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApiRequest & msg, bool use_flow_style = false)
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

}  // namespace rmf_task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_task_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_task_msgs::msg::ApiRequest & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::ApiRequest & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::ApiRequest>()
{
  return "rmf_task_msgs::msg::ApiRequest";
}

template<>
inline const char * name<rmf_task_msgs::msg::ApiRequest>()
{
  return "rmf_task_msgs/msg/ApiRequest";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::ApiRequest>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::ApiRequest>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::ApiRequest>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__TRAITS_HPP_
