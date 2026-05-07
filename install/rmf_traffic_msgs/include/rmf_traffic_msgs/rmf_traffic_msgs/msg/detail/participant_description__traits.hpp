// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ParticipantDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/participant_description__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'profile'
#include "rmf_traffic_msgs/msg/detail/profile__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ParticipantDescription & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: owner
  {
    out << "owner: ";
    rosidl_generator_traits::value_to_yaml(msg.owner, out);
    out << ", ";
  }

  // member: responsiveness
  {
    out << "responsiveness: ";
    rosidl_generator_traits::value_to_yaml(msg.responsiveness, out);
    out << ", ";
  }

  // member: profile
  {
    out << "profile: ";
    to_flow_style_yaml(msg.profile, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ParticipantDescription & msg,
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

  // member: owner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "owner: ";
    rosidl_generator_traits::value_to_yaml(msg.owner, out);
    out << "\n";
  }

  // member: responsiveness
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "responsiveness: ";
    rosidl_generator_traits::value_to_yaml(msg.responsiveness, out);
    out << "\n";
  }

  // member: profile
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "profile:\n";
    to_block_style_yaml(msg.profile, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ParticipantDescription & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ParticipantDescription & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ParticipantDescription & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ParticipantDescription>()
{
  return "rmf_traffic_msgs::msg::ParticipantDescription";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ParticipantDescription>()
{
  return "rmf_traffic_msgs/msg/ParticipantDescription";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ParticipantDescription>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ParticipantDescription>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ParticipantDescription>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__TRAITS_HPP_
