// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/BidProposal.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/bid_proposal__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'finish_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const BidProposal & msg,
  std::ostream & out)
{
  out << "{";
  // member: fleet_name
  {
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << ", ";
  }

  // member: expected_robot_name
  {
    out << "expected_robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_robot_name, out);
    out << ", ";
  }

  // member: prev_cost
  {
    out << "prev_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.prev_cost, out);
    out << ", ";
  }

  // member: new_cost
  {
    out << "new_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.new_cost, out);
    out << ", ";
  }

  // member: finish_time
  {
    out << "finish_time: ";
    to_flow_style_yaml(msg.finish_time, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BidProposal & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: fleet_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fleet_name: ";
    rosidl_generator_traits::value_to_yaml(msg.fleet_name, out);
    out << "\n";
  }

  // member: expected_robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "expected_robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.expected_robot_name, out);
    out << "\n";
  }

  // member: prev_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "prev_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.prev_cost, out);
    out << "\n";
  }

  // member: new_cost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_cost: ";
    rosidl_generator_traits::value_to_yaml(msg.new_cost, out);
    out << "\n";
  }

  // member: finish_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finish_time:\n";
    to_block_style_yaml(msg.finish_time, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BidProposal & msg, bool use_flow_style = false)
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

}  // namespace rmf_task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_task_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_task_msgs::msg::BidProposal & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::BidProposal & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::BidProposal>()
{
  return "rmf_task_msgs::msg::BidProposal";
}

template<>
inline const char * name<rmf_task_msgs::msg::BidProposal>()
{
  return "rmf_task_msgs/msg/BidProposal";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::BidProposal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::BidProposal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::BidProposal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_PROPOSAL__TRAITS_HPP_
