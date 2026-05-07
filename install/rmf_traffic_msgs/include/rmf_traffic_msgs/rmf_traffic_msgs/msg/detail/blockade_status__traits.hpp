// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeStatus.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/blockade_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlockadeStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: participant
  {
    out << "participant: ";
    rosidl_generator_traits::value_to_yaml(msg.participant, out);
    out << ", ";
  }

  // member: reservation
  {
    out << "reservation: ";
    rosidl_generator_traits::value_to_yaml(msg.reservation, out);
    out << ", ";
  }

  // member: any_ready
  {
    out << "any_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.any_ready, out);
    out << ", ";
  }

  // member: last_ready
  {
    out << "last_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.last_ready, out);
    out << ", ";
  }

  // member: last_reached
  {
    out << "last_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.last_reached, out);
    out << ", ";
  }

  // member: assignment_begin
  {
    out << "assignment_begin: ";
    rosidl_generator_traits::value_to_yaml(msg.assignment_begin, out);
    out << ", ";
  }

  // member: assignment_end
  {
    out << "assignment_end: ";
    rosidl_generator_traits::value_to_yaml(msg.assignment_end, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlockadeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: participant
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "participant: ";
    rosidl_generator_traits::value_to_yaml(msg.participant, out);
    out << "\n";
  }

  // member: reservation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "reservation: ";
    rosidl_generator_traits::value_to_yaml(msg.reservation, out);
    out << "\n";
  }

  // member: any_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "any_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.any_ready, out);
    out << "\n";
  }

  // member: last_ready
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_ready: ";
    rosidl_generator_traits::value_to_yaml(msg.last_ready, out);
    out << "\n";
  }

  // member: last_reached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_reached: ";
    rosidl_generator_traits::value_to_yaml(msg.last_reached, out);
    out << "\n";
  }

  // member: assignment_begin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assignment_begin: ";
    rosidl_generator_traits::value_to_yaml(msg.assignment_begin, out);
    out << "\n";
  }

  // member: assignment_end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assignment_end: ";
    rosidl_generator_traits::value_to_yaml(msg.assignment_end, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockadeStatus & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::BlockadeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::BlockadeStatus & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::BlockadeStatus>()
{
  return "rmf_traffic_msgs::msg::BlockadeStatus";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::BlockadeStatus>()
{
  return "rmf_traffic_msgs/msg/BlockadeStatus";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::BlockadeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::BlockadeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::BlockadeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_STATUS__TRAITS_HPP_
