// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupManualRelease.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/mutex_group_manual_release__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MutexGroupManualRelease & msg,
  std::ostream & out)
{
  out << "{";
  // member: release_mutex_groups
  {
    if (msg.release_mutex_groups.size() == 0) {
      out << "release_mutex_groups: []";
    } else {
      out << "release_mutex_groups: [";
      size_t pending_items = msg.release_mutex_groups.size();
      for (auto item : msg.release_mutex_groups) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: fleet
  {
    out << "fleet: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet, out);
    out << ", ";
  }

  // member: robot
  {
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MutexGroupManualRelease & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: release_mutex_groups
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.release_mutex_groups.size() == 0) {
      out << "release_mutex_groups: []\n";
    } else {
      out << "release_mutex_groups:\n";
      for (auto item : msg.release_mutex_groups) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: fleet
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet, out);
    out << "\n";
  }

  // member: robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot: ";
    rosidl_generator_traits::value_to_yaml(msg.robot, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MutexGroupManualRelease & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::MutexGroupManualRelease & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::MutexGroupManualRelease & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::MutexGroupManualRelease>()
{
  return "rmf_fleet_msgs::msg::MutexGroupManualRelease";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::MutexGroupManualRelease>()
{
  return "rmf_fleet_msgs/msg/MutexGroupManualRelease";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::MutexGroupManualRelease>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::MutexGroupManualRelease>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::MutexGroupManualRelease>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__TRAITS_HPP_
