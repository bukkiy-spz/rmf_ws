// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeReached.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/blockade_reached__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BlockadeReached & msg,
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

  // member: checkpoint
  {
    out << "checkpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.checkpoint, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BlockadeReached & msg,
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

  // member: checkpoint
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "checkpoint: ";
    rosidl_generator_traits::value_to_yaml(msg.checkpoint, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BlockadeReached & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::BlockadeReached & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::BlockadeReached & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::BlockadeReached>()
{
  return "rmf_traffic_msgs::msg::BlockadeReached";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::BlockadeReached>()
{
  return "rmf_traffic_msgs/msg/BlockadeReached";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::BlockadeReached>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::BlockadeReached>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::msg::BlockadeReached>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_REACHED__TRAITS_HPP_
