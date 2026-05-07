// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/mirror_update__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__traits.hpp"
// Member 'patch'
#include "rmf_traffic_msgs/msg/detail/schedule_patch__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MirrorUpdate & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    to_flow_style_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: database_version
  {
    out << "database_version: ";
    rosidl_generator_traits::value_to_yaml(msg.database_version, out);
    out << ", ";
  }

  // member: patch
  {
    out << "patch: ";
    to_flow_style_yaml(msg.patch, out);
    out << ", ";
  }

  // member: is_remedial_update
  {
    out << "is_remedial_update: ";
    rosidl_generator_traits::value_to_yaml(msg.is_remedial_update, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MirrorUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id:\n";
    to_block_style_yaml(msg.node_id, out, indentation + 2);
  }

  // member: database_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "database_version: ";
    rosidl_generator_traits::value_to_yaml(msg.database_version, out);
    out << "\n";
  }

  // member: patch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "patch:\n";
    to_block_style_yaml(msg.patch, out, indentation + 2);
  }

  // member: is_remedial_update
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_remedial_update: ";
    rosidl_generator_traits::value_to_yaml(msg.is_remedial_update, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MirrorUpdate & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::MirrorUpdate & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::MirrorUpdate & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::MirrorUpdate>()
{
  return "rmf_traffic_msgs::msg::MirrorUpdate";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::MirrorUpdate>()
{
  return "rmf_traffic_msgs/msg/MirrorUpdate";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::MirrorUpdate>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ScheduleIdentity>::value && has_fixed_size<rmf_traffic_msgs::msg::SchedulePatch>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::MirrorUpdate>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ScheduleIdentity>::value && has_bounded_size<rmf_traffic_msgs::msg::SchedulePatch>::value> {};

template<>
struct is_message<rmf_traffic_msgs::msg::MirrorUpdate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__MIRROR_UPDATE__TRAITS_HPP_
