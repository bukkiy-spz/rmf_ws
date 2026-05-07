// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_patch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'participants'
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__traits.hpp"
// Member 'cull'
#include "rmf_traffic_msgs/msg/detail/schedule_change_cull__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SchedulePatch & msg,
  std::ostream & out)
{
  out << "{";
  // member: participants
  {
    if (msg.participants.size() == 0) {
      out << "participants: []";
    } else {
      out << "participants: [";
      size_t pending_items = msg.participants.size();
      for (auto item : msg.participants) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: cull
  {
    if (msg.cull.size() == 0) {
      out << "cull: []";
    } else {
      out << "cull: [";
      size_t pending_items = msg.cull.size();
      for (auto item : msg.cull) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: has_base_version
  {
    out << "has_base_version: ";
    rosidl_generator_traits::value_to_yaml(msg.has_base_version, out);
    out << ", ";
  }

  // member: base_version
  {
    out << "base_version: ";
    rosidl_generator_traits::value_to_yaml(msg.base_version, out);
    out << ", ";
  }

  // member: latest_version
  {
    out << "latest_version: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_version, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SchedulePatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: participants
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.participants.size() == 0) {
      out << "participants: []\n";
    } else {
      out << "participants:\n";
      for (auto item : msg.participants) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: cull
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.cull.size() == 0) {
      out << "cull: []\n";
    } else {
      out << "cull:\n";
      for (auto item : msg.cull) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: has_base_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "has_base_version: ";
    rosidl_generator_traits::value_to_yaml(msg.has_base_version, out);
    out << "\n";
  }

  // member: base_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "base_version: ";
    rosidl_generator_traits::value_to_yaml(msg.base_version, out);
    out << "\n";
  }

  // member: latest_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latest_version: ";
    rosidl_generator_traits::value_to_yaml(msg.latest_version, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SchedulePatch & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::SchedulePatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::SchedulePatch & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::SchedulePatch>()
{
  return "rmf_traffic_msgs::msg::SchedulePatch";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::SchedulePatch>()
{
  return "rmf_traffic_msgs/msg/SchedulePatch";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::SchedulePatch>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::SchedulePatch>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::SchedulePatch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__TRAITS_HPP_
