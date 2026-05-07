// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryExtend.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/itinerary_extend__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'routes'
#include "rmf_traffic_msgs/msg/detail/route__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ItineraryExtend & msg,
  std::ostream & out)
{
  out << "{";
  // member: participant
  {
    out << "participant: ";
    rosidl_generator_traits::value_to_yaml(msg.participant, out);
    out << ", ";
  }

  // member: routes
  {
    if (msg.routes.size() == 0) {
      out << "routes: []";
    } else {
      out << "routes: [";
      size_t pending_items = msg.routes.size();
      for (auto item : msg.routes) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: itinerary_version
  {
    out << "itinerary_version: ";
    rosidl_generator_traits::value_to_yaml(msg.itinerary_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ItineraryExtend & msg,
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

  // member: routes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.routes.size() == 0) {
      out << "routes: []\n";
    } else {
      out << "routes:\n";
      for (auto item : msg.routes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: itinerary_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "itinerary_version: ";
    rosidl_generator_traits::value_to_yaml(msg.itinerary_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ItineraryExtend & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ItineraryExtend & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ItineraryExtend & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ItineraryExtend>()
{
  return "rmf_traffic_msgs::msg::ItineraryExtend";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ItineraryExtend>()
{
  return "rmf_traffic_msgs/msg/ItineraryExtend";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ItineraryExtend>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ItineraryExtend>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ItineraryExtend>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__TRAITS_HPP_
