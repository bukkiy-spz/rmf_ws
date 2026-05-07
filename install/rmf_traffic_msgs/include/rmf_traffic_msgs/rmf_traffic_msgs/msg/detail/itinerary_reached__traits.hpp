// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryReached.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/itinerary_reached__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ItineraryReached & msg,
  std::ostream & out)
{
  out << "{";
  // member: participant
  {
    out << "participant: ";
    rosidl_generator_traits::value_to_yaml(msg.participant, out);
    out << ", ";
  }

  // member: plan
  {
    out << "plan: ";
    rosidl_generator_traits::value_to_yaml(msg.plan, out);
    out << ", ";
  }

  // member: reached_checkpoints
  {
    if (msg.reached_checkpoints.size() == 0) {
      out << "reached_checkpoints: []";
    } else {
      out << "reached_checkpoints: [";
      size_t pending_items = msg.reached_checkpoints.size();
      for (auto item : msg.reached_checkpoints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: progress_version
  {
    out << "progress_version: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ItineraryReached & msg,
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

  // member: plan
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "plan: ";
    rosidl_generator_traits::value_to_yaml(msg.plan, out);
    out << "\n";
  }

  // member: reached_checkpoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.reached_checkpoints.size() == 0) {
      out << "reached_checkpoints: []\n";
    } else {
      out << "reached_checkpoints:\n";
      for (auto item : msg.reached_checkpoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: progress_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress_version: ";
    rosidl_generator_traits::value_to_yaml(msg.progress_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ItineraryReached & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ItineraryReached & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ItineraryReached & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ItineraryReached>()
{
  return "rmf_traffic_msgs::msg::ItineraryReached";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ItineraryReached>()
{
  return "rmf_traffic_msgs/msg/ItineraryReached";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ItineraryReached>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ItineraryReached>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ItineraryReached>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__TRAITS_HPP_
