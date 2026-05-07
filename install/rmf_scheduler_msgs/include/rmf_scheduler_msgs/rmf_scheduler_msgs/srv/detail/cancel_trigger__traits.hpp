// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_scheduler_msgs:srv/CancelTrigger.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__TRAITS_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_scheduler_msgs/srv/detail/cancel_trigger__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_scheduler_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CancelTrigger_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CancelTrigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CancelTrigger_Request & msg, bool use_flow_style = false)
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

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::srv::CancelTrigger_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::srv::CancelTrigger_Request & msg)
{
  return rmf_scheduler_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::CancelTrigger_Request>()
{
  return "rmf_scheduler_msgs::srv::CancelTrigger_Request";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::CancelTrigger_Request>()
{
  return "rmf_scheduler_msgs/srv/CancelTrigger_Request";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::CancelTrigger_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::CancelTrigger_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_scheduler_msgs::srv::CancelTrigger_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rmf_scheduler_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const CancelTrigger_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
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
  const CancelTrigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
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

inline std::string to_yaml(const CancelTrigger_Response & msg, bool use_flow_style = false)
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

}  // namespace rmf_scheduler_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_scheduler_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_scheduler_msgs::srv::CancelTrigger_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_scheduler_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_scheduler_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_scheduler_msgs::srv::CancelTrigger_Response & msg)
{
  return rmf_scheduler_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::CancelTrigger_Response>()
{
  return "rmf_scheduler_msgs::srv::CancelTrigger_Response";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::CancelTrigger_Response>()
{
  return "rmf_scheduler_msgs/srv/CancelTrigger_Response";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::CancelTrigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::CancelTrigger_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_scheduler_msgs::srv::CancelTrigger_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_scheduler_msgs::srv::CancelTrigger>()
{
  return "rmf_scheduler_msgs::srv::CancelTrigger";
}

template<>
inline const char * name<rmf_scheduler_msgs::srv::CancelTrigger>()
{
  return "rmf_scheduler_msgs/srv/CancelTrigger";
}

template<>
struct has_fixed_size<rmf_scheduler_msgs::srv::CancelTrigger>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_scheduler_msgs::srv::CancelTrigger_Request>::value &&
    has_fixed_size<rmf_scheduler_msgs::srv::CancelTrigger_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_scheduler_msgs::srv::CancelTrigger>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_scheduler_msgs::srv::CancelTrigger_Request>::value &&
    has_bounded_size<rmf_scheduler_msgs::srv::CancelTrigger_Response>::value
  >
{
};

template<>
struct is_service<rmf_scheduler_msgs::srv::CancelTrigger>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_scheduler_msgs::srv::CancelTrigger_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_scheduler_msgs::srv::CancelTrigger_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__TRAITS_HPP_
