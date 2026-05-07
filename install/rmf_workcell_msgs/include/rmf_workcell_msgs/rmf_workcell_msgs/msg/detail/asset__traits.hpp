// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_workcell_msgs:msg/Asset.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__TRAITS_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_workcell_msgs/msg/detail/asset__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_workcell_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Asset & msg,
  std::ostream & out)
{
  out << "{";
  // member: guid
  {
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Asset & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Asset & msg, bool use_flow_style = false)
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
  const rmf_workcell_msgs::msg::Asset & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_workcell_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_workcell_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_workcell_msgs::msg::Asset & msg)
{
  return rmf_workcell_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_workcell_msgs::msg::Asset>()
{
  return "rmf_workcell_msgs::msg::Asset";
}

template<>
inline const char * name<rmf_workcell_msgs::msg::Asset>()
{
  return "rmf_workcell_msgs/msg/Asset";
}

template<>
struct has_fixed_size<rmf_workcell_msgs::msg::Asset>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_workcell_msgs::msg::Asset>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_workcell_msgs::msg::Asset>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__TRAITS_HPP_
