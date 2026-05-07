// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/profile__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'footprint'
// Member 'vicinity'
#include "rmf_traffic_msgs/msg/detail/convex_shape__traits.hpp"
// Member 'shape_context'
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Profile & msg,
  std::ostream & out)
{
  out << "{";
  // member: footprint
  {
    out << "footprint: ";
    to_flow_style_yaml(msg.footprint, out);
    out << ", ";
  }

  // member: vicinity
  {
    out << "vicinity: ";
    to_flow_style_yaml(msg.vicinity, out);
    out << ", ";
  }

  // member: shape_context
  {
    out << "shape_context: ";
    to_flow_style_yaml(msg.shape_context, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Profile & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: footprint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "footprint:\n";
    to_block_style_yaml(msg.footprint, out, indentation + 2);
  }

  // member: vicinity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vicinity:\n";
    to_block_style_yaml(msg.vicinity, out, indentation + 2);
  }

  // member: shape_context
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape_context:\n";
    to_block_style_yaml(msg.shape_context, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Profile & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::Profile & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::Profile & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Profile>()
{
  return "rmf_traffic_msgs::msg::Profile";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Profile>()
{
  return "rmf_traffic_msgs/msg/Profile";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Profile>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ConvexShape>::value && has_fixed_size<rmf_traffic_msgs::msg::ConvexShapeContext>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Profile>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ConvexShape>::value && has_bounded_size<rmf_traffic_msgs::msg::ConvexShapeContext>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Profile>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__TRAITS_HPP_
