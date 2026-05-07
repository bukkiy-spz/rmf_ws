// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice

#ifndef RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__TRAITS_HPP_
#define RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_lift_msgs/msg/detail/lift_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'lift_time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_lift_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const LiftState & msg,
  std::ostream & out)
{
  out << "{";
  // member: lift_time
  {
    out << "lift_time: ";
    to_flow_style_yaml(msg.lift_time, out);
    out << ", ";
  }

  // member: lift_name
  {
    out << "lift_name: ";
    rosidl_generator_traits::value_to_yaml(msg.lift_name, out);
    out << ", ";
  }

  // member: available_floors
  {
    if (msg.available_floors.size() == 0) {
      out << "available_floors: []";
    } else {
      out << "available_floors: [";
      size_t pending_items = msg.available_floors.size();
      for (auto item : msg.available_floors) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_floor
  {
    out << "current_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.current_floor, out);
    out << ", ";
  }

  // member: destination_floor
  {
    out << "destination_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_floor, out);
    out << ", ";
  }

  // member: door_state
  {
    out << "door_state: ";
    rosidl_generator_traits::value_to_yaml(msg.door_state, out);
    out << ", ";
  }

  // member: motion_state
  {
    out << "motion_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_state, out);
    out << ", ";
  }

  // member: available_modes
  {
    if (msg.available_modes.size() == 0) {
      out << "available_modes: []";
    } else {
      out << "available_modes: [";
      size_t pending_items = msg.available_modes.size();
      for (auto item : msg.available_modes) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: current_mode
  {
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << ", ";
  }

  // member: session_id
  {
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LiftState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lift_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lift_time:\n";
    to_block_style_yaml(msg.lift_time, out, indentation + 2);
  }

  // member: lift_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lift_name: ";
    rosidl_generator_traits::value_to_yaml(msg.lift_name, out);
    out << "\n";
  }

  // member: available_floors
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_floors.size() == 0) {
      out << "available_floors: []\n";
    } else {
      out << "available_floors:\n";
      for (auto item : msg.available_floors) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_floor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.current_floor, out);
    out << "\n";
  }

  // member: destination_floor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_floor: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_floor, out);
    out << "\n";
  }

  // member: door_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "door_state: ";
    rosidl_generator_traits::value_to_yaml(msg.door_state, out);
    out << "\n";
  }

  // member: motion_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion_state: ";
    rosidl_generator_traits::value_to_yaml(msg.motion_state, out);
    out << "\n";
  }

  // member: available_modes
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.available_modes.size() == 0) {
      out << "available_modes: []\n";
    } else {
      out << "available_modes:\n";
      for (auto item : msg.available_modes) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: current_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "current_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.current_mode, out);
    out << "\n";
  }

  // member: session_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "session_id: ";
    rosidl_generator_traits::value_to_yaml(msg.session_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LiftState & msg, bool use_flow_style = false)
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

}  // namespace rmf_lift_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_lift_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_lift_msgs::msg::LiftState & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_lift_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_lift_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_lift_msgs::msg::LiftState & msg)
{
  return rmf_lift_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_lift_msgs::msg::LiftState>()
{
  return "rmf_lift_msgs::msg::LiftState";
}

template<>
inline const char * name<rmf_lift_msgs::msg::LiftState>()
{
  return "rmf_lift_msgs/msg/LiftState";
}

template<>
struct has_fixed_size<rmf_lift_msgs::msg::LiftState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_lift_msgs::msg::LiftState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_lift_msgs::msg::LiftState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__TRAITS_HPP_
