// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:msg/DeliveryAlert.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__TRAITS_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/msg/detail/delivery_alert__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'category'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_category__traits.hpp"
// Member 'tier'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__traits.hpp"
// Member 'action'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_action__traits.hpp"

namespace rmf_fleet_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DeliveryAlert & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: category
  {
    out << "category: ";
    to_flow_style_yaml(msg.category, out);
    out << ", ";
  }

  // member: tier
  {
    out << "tier: ";
    to_flow_style_yaml(msg.tier, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: action
  {
    out << "action: ";
    to_flow_style_yaml(msg.action, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DeliveryAlert & msg,
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

  // member: category
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "category:\n";
    to_block_style_yaml(msg.category, out, indentation + 2);
  }

  // member: tier
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tier:\n";
    to_block_style_yaml(msg.tier, out, indentation + 2);
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "action:\n";
    to_block_style_yaml(msg.action, out, indentation + 2);
  }

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DeliveryAlert & msg, bool use_flow_style = false)
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
  const rmf_fleet_msgs::msg::DeliveryAlert & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::msg::DeliveryAlert & msg)
{
  return rmf_fleet_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::msg::DeliveryAlert>()
{
  return "rmf_fleet_msgs::msg::DeliveryAlert";
}

template<>
inline const char * name<rmf_fleet_msgs::msg::DeliveryAlert>()
{
  return "rmf_fleet_msgs/msg/DeliveryAlert";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::msg::DeliveryAlert>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::msg::DeliveryAlert>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::msg::DeliveryAlert>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__TRAITS_HPP_
