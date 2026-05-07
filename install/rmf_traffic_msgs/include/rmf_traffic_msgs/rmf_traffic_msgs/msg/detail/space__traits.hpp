// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Space.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/space__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'shape'
#include "rmf_traffic_msgs/msg/detail/shape__traits.hpp"
// Member 'pose'
#include "geometry_msgs/msg/detail/pose2_d__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Space & msg,
  std::ostream & out)
{
  out << "{";
  // member: shape
  {
    out << "shape: ";
    to_flow_style_yaml(msg.shape, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Space & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape:\n";
    to_block_style_yaml(msg.shape, out, indentation + 2);
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Space & msg, bool use_flow_style = false)
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

}  // namespace rmf_traffic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_traffic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_traffic_msgs::msg::Space & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::Space & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Space>()
{
  return "rmf_traffic_msgs::msg::Space";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Space>()
{
  return "rmf_traffic_msgs/msg/Space";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Space>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose2D>::value && has_fixed_size<rmf_traffic_msgs::msg::Shape>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Space>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose2D>::value && has_bounded_size<rmf_traffic_msgs::msg::Shape>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Space>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__TRAITS_HPP_
