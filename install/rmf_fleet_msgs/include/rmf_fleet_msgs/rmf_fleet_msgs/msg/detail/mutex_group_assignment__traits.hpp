// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupAssignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/mutex_group_assignment__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'claim_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MutexGroupAssignment & msg,
  std::ostream & out)
{
  out << "{";
  // member: group
  {
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << ", ";
  }

  // member: claimant
  {
    out << "claimant: ";
    rosidl_generator_traits::value_to_yaml(msg.claimant, out);
    out << ", ";
  }

  // member: claim_time
  {
    out << "claim_time: ";
    to_flow_style_yaml(msg.claim_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MutexGroupAssignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: group
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group: ";
    rosidl_generator_traits::value_to_yaml(msg.group, out);
    out << "\n";
  }

  // member: claimant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "claimant: ";
    rosidl_generator_traits::value_to_yaml(msg.claimant, out);
    out << "\n";
  }

  // member: claim_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "claim_time:\n";
    to_block_style_yaml(msg.claim_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MutexGroupAssignment & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::MutexGroupAssignment & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::MutexGroupAssignment & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::MutexGroupAssignment>()
{
  return "rmf_fleet_msgs::msg::MutexGroupAssignment";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::MutexGroupAssignment>()
{
  return "rmf_fleet_msgs/msg/MutexGroupAssignment";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::MutexGroupAssignment>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::MutexGroupAssignment>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::MutexGroupAssignment>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__TRAITS_HPP_
