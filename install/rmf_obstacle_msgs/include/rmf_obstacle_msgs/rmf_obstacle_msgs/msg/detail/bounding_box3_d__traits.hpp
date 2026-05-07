// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_obstacle_msgs:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice

#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__TRAITS_HPP_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'center'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'size'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rmf_obstacle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoundingBox3D & msg,
  std::ostream & out)
{
  out << "{";
  // member: center
  {
    out << "center: ";
    to_flow_style_yaml(msg.center, out);
    out << ", ";
  }

  // member: size
  {
    out << "size: ";
    to_flow_style_yaml(msg.size, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoundingBox3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: center
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "center:\n";
    to_block_style_yaml(msg.center, out, indentation + 2);
  }

  // member: size
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "size:\n";
    to_block_style_yaml(msg.size, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoundingBox3D & msg, bool use_flow_style = false)
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

}  // namespace rmf_obstacle_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_obstacle_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_obstacle_msgs::msg::BoundingBox3D & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_obstacle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_obstacle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_obstacle_msgs::msg::BoundingBox3D & msg)
{
  return rmf_obstacle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_obstacle_msgs::msg::BoundingBox3D>()
{
  return "rmf_obstacle_msgs::msg::BoundingBox3D";
}

template<>
inline const char * name<rmf_obstacle_msgs::msg::BoundingBox3D>()
{
  return "rmf_obstacle_msgs/msg/BoundingBox3D";
}

template<>
struct has_fixed_size<rmf_obstacle_msgs::msg::BoundingBox3D>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<rmf_obstacle_msgs::msg::BoundingBox3D>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<rmf_obstacle_msgs::msg::BoundingBox3D>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__TRAITS_HPP_
