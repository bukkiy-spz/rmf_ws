// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_obstacle_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_obstacle_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'bbox'
#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__traits.hpp"
// Member 'lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace rmf_obstacle_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Obstacle & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: source
  {
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << ", ";
  }

  // member: level_name
  {
    out << "level_name: ";
    rosidl_generator_traits::value_to_yaml(msg.level_name, out);
    out << ", ";
  }

  // member: classification
  {
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << ", ";
  }

  // member: bbox
  {
    out << "bbox: ";
    to_flow_style_yaml(msg.bbox, out);
    out << ", ";
  }

  // member: data_resolution
  {
    out << "data_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.data_resolution, out);
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
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    to_flow_style_yaml(msg.lifetime, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source: ";
    rosidl_generator_traits::value_to_yaml(msg.source, out);
    out << "\n";
  }

  // member: level_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level_name: ";
    rosidl_generator_traits::value_to_yaml(msg.level_name, out);
    out << "\n";
  }

  // member: classification
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "classification: ";
    rosidl_generator_traits::value_to_yaml(msg.classification, out);
    out << "\n";
  }

  // member: bbox
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bbox:\n";
    to_block_style_yaml(msg.bbox, out, indentation + 2);
  }

  // member: data_resolution
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_resolution: ";
    rosidl_generator_traits::value_to_yaml(msg.data_resolution, out);
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

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime:\n";
    to_block_style_yaml(msg.lifetime, out, indentation + 2);
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action: ";
    rosidl_generator_traits::value_to_yaml(msg.action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Obstacle & msg, bool use_flow_style = false)
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
  const rmf_obstacle_msgs::msg::Obstacle & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_obstacle_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_obstacle_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_obstacle_msgs::msg::Obstacle & msg)
{
  return rmf_obstacle_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_obstacle_msgs::msg::Obstacle>()
{
  return "rmf_obstacle_msgs::msg::Obstacle";
}

template<>
inline const char * name<rmf_obstacle_msgs::msg::Obstacle>()
{
  return "rmf_obstacle_msgs/msg/Obstacle";
}

template<>
struct has_fixed_size<rmf_obstacle_msgs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_obstacle_msgs::msg::Obstacle>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_obstacle_msgs::msg::Obstacle>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__TRAITS_HPP_
