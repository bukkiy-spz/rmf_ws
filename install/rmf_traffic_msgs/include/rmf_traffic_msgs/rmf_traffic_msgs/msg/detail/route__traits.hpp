// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory'
#include "rmf_traffic_msgs/msg/detail/trajectory__traits.hpp"
// Member 'dependencies'
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Route & msg,
  std::ostream & out)
{
  out << "{";
  // member: map
  {
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << ", ";
  }

  // member: trajectory
  {
    out << "trajectory: ";
    to_flow_style_yaml(msg.trajectory, out);
    out << ", ";
  }

  // member: checkpoints
  {
    if (msg.checkpoints.size() == 0) {
      out << "checkpoints: []";
    } else {
      out << "checkpoints: [";
      size_t pending_items = msg.checkpoints.size();
      for (auto item : msg.checkpoints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: dependencies
  {
    if (msg.dependencies.size() == 0) {
      out << "dependencies: []";
    } else {
      out << "dependencies: [";
      size_t pending_items = msg.dependencies.size();
      for (auto item : msg.dependencies) {
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
  const Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "map: ";
    rosidl_generator_traits::value_to_yaml(msg.map, out);
    out << "\n";
  }

  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trajectory:\n";
    to_block_style_yaml(msg.trajectory, out, indentation + 2);
  }

  // member: checkpoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.checkpoints.size() == 0) {
      out << "checkpoints: []\n";
    } else {
      out << "checkpoints:\n";
      for (auto item : msg.checkpoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: dependencies
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dependencies.size() == 0) {
      out << "dependencies: []\n";
    } else {
      out << "dependencies:\n";
      for (auto item : msg.dependencies) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Route & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::Route & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::Route & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Route>()
{
  return "rmf_traffic_msgs::msg::Route";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Route>()
{
  return "rmf_traffic_msgs/msg/Route";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Route>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Route>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__TRAITS_HPP_
