// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:msg/AffineImage.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/msg/detail/affine_image__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_building_map_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const AffineImage & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: x_offset
  {
    out << "x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_offset, out);
    out << ", ";
  }

  // member: y_offset
  {
    out << "y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_offset, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: scale
  {
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
    out << ", ";
  }

  // member: encoding
  {
    out << "encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.encoding, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const AffineImage & msg,
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

  // member: x_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.x_offset, out);
    out << "\n";
  }

  // member: y_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.y_offset, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: scale
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scale: ";
    rosidl_generator_traits::value_to_yaml(msg.scale, out);
    out << "\n";
  }

  // member: encoding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "encoding: ";
    rosidl_generator_traits::value_to_yaml(msg.encoding, out);
    out << "\n";
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const AffineImage & msg, bool use_flow_style = false)
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
  const rmf_building_map_msgs::msg::AffineImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::msg::AffineImage & msg)
{
  return rmf_building_map_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::msg::AffineImage>()
{
  return "rmf_building_map_msgs::msg::AffineImage";
}

template<>
inline const char * name<rmf_building_map_msgs::msg::AffineImage>()
{
  return "rmf_building_map_msgs/msg/AffineImage";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::msg::AffineImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::msg::AffineImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_building_map_msgs::msg::AffineImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__TRAITS_HPP_
