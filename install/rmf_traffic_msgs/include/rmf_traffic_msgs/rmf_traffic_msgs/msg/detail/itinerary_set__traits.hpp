// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ItinerarySet.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/itinerary_set__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'itinerary'
#include "rmf_traffic_msgs/msg/detail/route__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ItinerarySet & msg,
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

  // member: itinerary
  {
    if (msg.itinerary.size() == 0) {
      out << "itinerary: []";
    } else {
      out << "itinerary: [";
      size_t pending_items = msg.itinerary.size();
      for (auto item : msg.itinerary) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: storage_base
  {
    out << "storage_base: ";
    rosidl_generator_traits::value_to_yaml(msg.storage_base, out);
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
  const ItinerarySet & msg,
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

  // member: itinerary
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.itinerary.size() == 0) {
      out << "itinerary: []\n";
    } else {
      out << "itinerary:\n";
      for (auto item : msg.itinerary) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: storage_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "storage_base: ";
    rosidl_generator_traits::value_to_yaml(msg.storage_base, out);
    out << "\n";
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

inline std::string to_yaml(const ItinerarySet & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ItinerarySet & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ItinerarySet & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ItinerarySet>()
{
  return "rmf_traffic_msgs::msg::ItinerarySet";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ItinerarySet>()
{
  return "rmf_traffic_msgs/msg/ItinerarySet";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ItinerarySet>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ItinerarySet>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ItinerarySet>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__TRAITS_HPP_
