// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/BeaconState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/beacon_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BeaconState & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: online
  {
    out << "online: ";
    rosidl_generator_traits::value_to_yaml(msg.online, out);
    out << ", ";
  }

  // member: category
  {
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << ", ";
  }

  // member: activated
  {
    out << "activated: ";
    rosidl_generator_traits::value_to_yaml(msg.activated, out);
    out << ", ";
  }

  // member: level
  {
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BeaconState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: online
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "online: ";
    rosidl_generator_traits::value_to_yaml(msg.online, out);
    out << "\n";
  }

  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category: ";
    rosidl_generator_traits::value_to_yaml(msg.category, out);
    out << "\n";
  }

  // member: activated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "activated: ";
    rosidl_generator_traits::value_to_yaml(msg.activated, out);
    out << "\n";
  }

  // member: level
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "level: ";
    rosidl_generator_traits::value_to_yaml(msg.level, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BeaconState & msg, bool use_flow_style = false)
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

}  // namespace rmf_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_fleet_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_fleet_msgs::msg::BeaconState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::BeaconState & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::BeaconState>()
{
  return "rmf_fleet_msgs::msg::BeaconState";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::BeaconState>()
{
  return "rmf_fleet_msgs/msg/BeaconState";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::BeaconState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::BeaconState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::BeaconState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__TRAITS_HPP_
