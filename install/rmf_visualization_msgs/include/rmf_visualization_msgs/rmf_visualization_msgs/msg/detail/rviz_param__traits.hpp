// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice

#ifndef RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__TRAITS_HPP_
#define RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_visualization_msgs/msg/detail/rviz_param__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_visualization_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RvizParam & msg,
  std::ostream & out)
{
  out << "{";
  // member: map_name
  {
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << ", ";
  }

  // member: query_duration
  {
    out << "query_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.query_duration, out);
    out << ", ";
  }

  // member: start_duration
  {
    out << "start_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.start_duration, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RvizParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map_name: ";
    rosidl_generator_traits::value_to_yaml(msg.map_name, out);
    out << "\n";
  }

  // member: query_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.query_duration, out);
    out << "\n";
  }

  // member: start_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start_duration: ";
    rosidl_generator_traits::value_to_yaml(msg.start_duration, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RvizParam & msg, bool use_flow_style = false)
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

}  // namespace rmf_visualization_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_visualization_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_visualization_msgs::msg::RvizParam & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_visualization_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_visualization_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_visualization_msgs::msg::RvizParam & msg)
{
  return rmf_visualization_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_visualization_msgs::msg::RvizParam>()
{
  return "rmf_visualization_msgs::msg::RvizParam";
}

template<>
inline const char * name<rmf_visualization_msgs::msg::RvizParam>()
{
  return "rmf_visualization_msgs/msg/RvizParam";
}

template<>
struct has_fixed_size<rmf_visualization_msgs::msg::RvizParam>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_visualization_msgs::msg::RvizParam>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_visualization_msgs::msg::RvizParam>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__TRAITS_HPP_
