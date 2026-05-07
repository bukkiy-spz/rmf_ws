// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__TRAITS_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/msg/detail/delivery__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'items'
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__traits.hpp"
// Member 'pickup_behavior'
// Member 'dropoff_behavior'
#include "rmf_task_msgs/msg/detail/behavior__traits.hpp"

namespace rmf_task_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Delivery & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << ", ";
  }

  // member: items
  {
    if (msg.items.size() == 0) {
      out << "items: []";
    } else {
      out << "items: [";
      size_t pending_items = msg.items.size();
      for (auto item : msg.items) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: pickup_place_name
  {
    out << "pickup_place_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_place_name, out);
    out << ", ";
  }

  // member: pickup_dispenser
  {
    out << "pickup_dispenser: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_dispenser, out);
    out << ", ";
  }

  // member: pickup_behavior
  {
    out << "pickup_behavior: ";
    to_flow_style_yaml(msg.pickup_behavior, out);
    out << ", ";
  }

  // member: dropoff_place_name
  {
    out << "dropoff_place_name: ";
    rosidl_generator_traits::value_to_yaml(msg.dropoff_place_name, out);
    out << ", ";
  }

  // member: dropoff_ingestor
  {
    out << "dropoff_ingestor: ";
    rosidl_generator_traits::value_to_yaml(msg.dropoff_ingestor, out);
    out << ", ";
  }

  // member: dropoff_behavior
  {
    out << "dropoff_behavior: ";
    to_flow_style_yaml(msg.dropoff_behavior, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Delivery & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }

  // member: items
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.items.size() == 0) {
      out << "items: []\n";
    } else {
      out << "items:\n";
      for (auto item : msg.items) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: pickup_place_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup_place_name: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_place_name, out);
    out << "\n";
  }

  // member: pickup_dispenser
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup_dispenser: ";
    rosidl_generator_traits::value_to_yaml(msg.pickup_dispenser, out);
    out << "\n";
  }

  // member: pickup_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pickup_behavior:\n";
    to_block_style_yaml(msg.pickup_behavior, out, indentation + 2);
  }

  // member: dropoff_place_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropoff_place_name: ";
    rosidl_generator_traits::value_to_yaml(msg.dropoff_place_name, out);
    out << "\n";
  }

  // member: dropoff_ingestor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropoff_ingestor: ";
    rosidl_generator_traits::value_to_yaml(msg.dropoff_ingestor, out);
    out << "\n";
  }

  // member: dropoff_behavior
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropoff_behavior:\n";
    to_block_style_yaml(msg.dropoff_behavior, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Delivery & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::msg::Delivery & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::msg::Delivery & msg)
{
  return rmf_task_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::msg::Delivery>()
{
  return "rmf_task_msgs::msg::Delivery";
}

template<>
inline const char * name<rmf_task_msgs::msg::Delivery>()
{
  return "rmf_task_msgs/msg/Delivery";
}

template<>
struct has_fixed_size<rmf_task_msgs::msg::Delivery>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::msg::Delivery>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::msg::Delivery>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__TRAITS_HPP_
