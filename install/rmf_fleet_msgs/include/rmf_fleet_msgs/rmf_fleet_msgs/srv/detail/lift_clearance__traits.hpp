// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__TRAITS_HPP_
#define RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_fleet_msgs/srv/detail/lift_clearance__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_fleet_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LiftClearance_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: robot_name
  {
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << ", ";
  }

  // member: lift_name
  {
    out << "lift_name: ";
    rosidl_generator_traits::value_to_yaml(msg.lift_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LiftClearance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_name: ";
    rosidl_generator_traits::value_to_yaml(msg.robot_name, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LiftClearance_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rmf_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_fleet_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_fleet_msgs::srv::LiftClearance_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::srv::LiftClearance_Request & msg)
{
  return rmf_fleet_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::srv::LiftClearance_Request>()
{
  return "rmf_fleet_msgs::srv::LiftClearance_Request";
}

template<>
inline const char * name<rmf_fleet_msgs::srv::LiftClearance_Request>()
{
  return "rmf_fleet_msgs/srv/LiftClearance_Request";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::srv::LiftClearance_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::srv::LiftClearance_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_fleet_msgs::srv::LiftClearance_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rmf_fleet_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const LiftClearance_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: decision
  {
    out << "decision: ";
    rosidl_generator_traits::value_to_yaml(msg.decision, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LiftClearance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: decision
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "decision: ";
    rosidl_generator_traits::value_to_yaml(msg.decision, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LiftClearance_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rmf_fleet_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_fleet_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_fleet_msgs::srv::LiftClearance_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_fleet_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_fleet_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_fleet_msgs::srv::LiftClearance_Response & msg)
{
  return rmf_fleet_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_fleet_msgs::srv::LiftClearance_Response>()
{
  return "rmf_fleet_msgs::srv::LiftClearance_Response";
}

template<>
inline const char * name<rmf_fleet_msgs::srv::LiftClearance_Response>()
{
  return "rmf_fleet_msgs/srv/LiftClearance_Response";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::srv::LiftClearance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_fleet_msgs::srv::LiftClearance_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_fleet_msgs::srv::LiftClearance_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_fleet_msgs::srv::LiftClearance>()
{
  return "rmf_fleet_msgs::srv::LiftClearance";
}

template<>
inline const char * name<rmf_fleet_msgs::srv::LiftClearance>()
{
  return "rmf_fleet_msgs/srv/LiftClearance";
}

template<>
struct has_fixed_size<rmf_fleet_msgs::srv::LiftClearance>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_fleet_msgs::srv::LiftClearance_Request>::value &&
    has_fixed_size<rmf_fleet_msgs::srv::LiftClearance_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_fleet_msgs::srv::LiftClearance>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_fleet_msgs::srv::LiftClearance_Request>::value &&
    has_bounded_size<rmf_fleet_msgs::srv::LiftClearance_Response>::value
  >
{
};

template<>
struct is_service<rmf_fleet_msgs::srv::LiftClearance>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_fleet_msgs::srv::LiftClearance_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_fleet_msgs::srv::LiftClearance_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_FLEET_MSGS__SRV__DETAIL__LIFT_CLEARANCE__TRAITS_HPP_
