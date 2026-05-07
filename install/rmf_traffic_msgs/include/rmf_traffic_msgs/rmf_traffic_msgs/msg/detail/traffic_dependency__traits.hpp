// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/TrafficDependency.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/traffic_dependency__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficDependency & msg,
  std::ostream & out)
{
  out << "{";
  // member: dependent_checkpoint
  {
    out << "dependent_checkpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.dependent_checkpoint, out);
    out << ", ";
  }

  // member: on_participant
  {
    out << "on_participant: ";
    rosidl_generator_traits::value_to_yaml(msg.on_participant, out);
    out << ", ";
  }

  // member: on_plan
  {
    out << "on_plan: ";
    rosidl_generator_traits::value_to_yaml(msg.on_plan, out);
    out << ", ";
  }

  // member: on_route
  {
    out << "on_route: ";
    rosidl_generator_traits::value_to_yaml(msg.on_route, out);
    out << ", ";
  }

  // member: on_checkpoint
  {
    out << "on_checkpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.on_checkpoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficDependency & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: dependent_checkpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dependent_checkpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.dependent_checkpoint, out);
    out << "\n";
  }

  // member: on_participant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_participant: ";
    rosidl_generator_traits::value_to_yaml(msg.on_participant, out);
    out << "\n";
  }

  // member: on_plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_plan: ";
    rosidl_generator_traits::value_to_yaml(msg.on_plan, out);
    out << "\n";
  }

  // member: on_route
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_route: ";
    rosidl_generator_traits::value_to_yaml(msg.on_route, out);
    out << "\n";
  }

  // member: on_checkpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "on_checkpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.on_checkpoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficDependency & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::TrafficDependency & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::TrafficDependency & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::TrafficDependency>()
{
  return "rmf_traffic_msgs::msg::TrafficDependency";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::TrafficDependency>()
{
  return "rmf_traffic_msgs/msg/TrafficDependency";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::TrafficDependency>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::TrafficDependency>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::TrafficDependency>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__TRAITS_HPP_
