// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ShapeContext.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/shape_context__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'convex_shapes'
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ShapeContext & msg,
  std::ostream & out)
{
  out << "{";
  // member: convex_shapes
  {
    out << "convex_shapes: ";
    to_flow_style_yaml(msg.convex_shapes, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ShapeContext & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: convex_shapes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "convex_shapes:\n";
    to_block_style_yaml(msg.convex_shapes, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ShapeContext & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ShapeContext & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ShapeContext & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ShapeContext>()
{
  return "rmf_traffic_msgs::msg::ShapeContext";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ShapeContext>()
{
  return "rmf_traffic_msgs/msg/ShapeContext";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ShapeContext>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ConvexShapeContext>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ShapeContext>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ConvexShapeContext>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ShapeContext>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__TRAITS_HPP_
