// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Param & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: value_int
  {
    out << "value_int: ";
    rosidl_generator_traits::value_to_yaml(msg.value_int, out);
    out << ", ";
  }

  // member: value_float
  {
    out << "value_float: ";
    rosidl_generator_traits::value_to_yaml(msg.value_float, out);
    out << ", ";
  }

  // member: value_string
  {
    out << "value_string: ";
    rosidl_generator_traits::value_to_yaml(msg.value_string, out);
    out << ", ";
  }

  // member: value_bool
  {
    out << "value_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.value_bool, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Param & msg,
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

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: value_int
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_int: ";
    rosidl_generator_traits::value_to_yaml(msg.value_int, out);
    out << "\n";
  }

  // member: value_float
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_float: ";
    rosidl_generator_traits::value_to_yaml(msg.value_float, out);
    out << "\n";
  }

  // member: value_string
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_string: ";
    rosidl_generator_traits::value_to_yaml(msg.value_string, out);
    out << "\n";
  }

  // member: value_bool
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value_bool: ";
    rosidl_generator_traits::value_to_yaml(msg.value_bool, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Param & msg, bool use_flow_style = false)
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

}  // namespace rmf_building_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_building_map_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_building_map_msgs::msg::Param & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::Param & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::Param>()
{
  return "rmf_building_map_msgs::msg::Param";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::Param>()
{
  return "rmf_building_map_msgs/msg/Param";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::Param>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::Param>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::Param>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__TRAITS_HPP_
