// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'delays'
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__traits.hpp"
// Member 'additions'
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__traits.hpp"
// Member 'progress'
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleParticipantPatch & msg,
  std::ostream & out)
{
  out << "{";
  // member: participant_id
  {
    out << "participant_id: ";
    rosidl_generator_traits::value_to_yaml(msg.participant_id, out);
    out << ", ";
  }

  // member: itinerary_version
  {
    out << "itinerary_version: ";
    rosidl_generator_traits::value_to_yaml(msg.itinerary_version, out);
    out << ", ";
  }

  // member: erasures
  {
    if (msg.erasures.size() == 0) {
      out << "erasures: []";
    } else {
      out << "erasures: [";
      size_t pending_items = msg.erasures.size();
      for (auto item : msg.erasures) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: delays
  {
    if (msg.delays.size() == 0) {
      out << "delays: []";
    } else {
      out << "delays: [";
      size_t pending_items = msg.delays.size();
      for (auto item : msg.delays) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: additions
  {
    out << "additions: ";
    to_flow_style_yaml(msg.additions, out);
    out << ", ";
  }

  // member: progress
  {
    out << "progress: ";
    to_flow_style_yaml(msg.progress, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ScheduleParticipantPatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: participant_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "participant_id: ";
    rosidl_generator_traits::value_to_yaml(msg.participant_id, out);
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

  // member: erasures
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.erasures.size() == 0) {
      out << "erasures: []\n";
    } else {
      out << "erasures:\n";
      for (auto item : msg.erasures) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: delays
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.delays.size() == 0) {
      out << "delays: []\n";
    } else {
      out << "delays:\n";
      for (auto item : msg.delays) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: additions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "additions:\n";
    to_block_style_yaml(msg.additions, out, indentation + 2);
  }

  // member: progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "progress:\n";
    to_block_style_yaml(msg.progress, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ScheduleParticipantPatch & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::msg::ScheduleParticipantPatch & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleParticipantPatch & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleParticipantPatch>()
{
  return "rmf_traffic_msgs::msg::ScheduleParticipantPatch";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleParticipantPatch>()
{
  return "rmf_traffic_msgs/msg/ScheduleParticipantPatch";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleParticipantPatch>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleParticipantPatch>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleParticipantPatch>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__TRAITS_HPP_
