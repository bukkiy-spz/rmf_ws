// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/Itinerary.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/itinerary__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'routes'
#include "rmf_traffic_msgs/msg/detail/route__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Itinerary & msg,
  std::ostream & out)
{
  out << "{";
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
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Itinerary & msg,
  std::ostream & out, size_t indentation = 0)
{
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Itinerary & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::Itinerary & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::Itinerary & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::Itinerary>()
{
  return "rmf_traffic_msgs::msg::Itinerary";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::Itinerary>()
{
  return "rmf_traffic_msgs/msg/Itinerary";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::Itinerary>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::Itinerary>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::Itinerary>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY__TRAITS_HPP_
