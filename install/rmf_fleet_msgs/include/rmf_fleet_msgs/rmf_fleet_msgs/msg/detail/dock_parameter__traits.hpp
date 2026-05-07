// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/DockParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/dock_parameter__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'path'
#include "rmf_fleet_msgs/msg/detail/location__traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DockParameter & msg,
  std::ostream & out)
{
  out << "{";
  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << ", ";
  }

  // member: finish
  {
    out << "finish: ";
    rosidl_generator_traits::value_to_yaml(msg.finish, out);
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
  const DockParameter & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }

  // member: finish
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finish: ";
    rosidl_generator_traits::value_to_yaml(msg.finish, out);
    out << "\n";
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

inline std::string to_yaml(const DockParameter & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::DockParameter & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::DockParameter & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::DockParameter>()
{
  return "rmf_fleet_msgs::msg::DockParameter";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::DockParameter>()
{
  return "rmf_fleet_msgs/msg/DockParameter";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::DockParameter>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::DockParameter>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::DockParameter>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__TRAITS_HPP_
