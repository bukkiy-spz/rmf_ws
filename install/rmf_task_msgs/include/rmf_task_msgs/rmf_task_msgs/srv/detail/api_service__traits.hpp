// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:srv/ApiService.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__TRAITS_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/srv/detail/api_service__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_task_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApiService_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: json_msg
  {
    out << "json_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.json_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApiService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: json_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "json_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.json_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApiService_Request & msg, bool use_flow_style = false)
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

}  // namespace rmf_task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_task_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_task_msgs::srv::ApiService_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::srv::ApiService_Request & msg)
{
  return rmf_task_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::srv::ApiService_Request>()
{
  return "rmf_task_msgs::srv::ApiService_Request";
}

template<>
inline const char * name<rmf_task_msgs::srv::ApiService_Request>()
{
  return "rmf_task_msgs/srv/ApiService_Request";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::ApiService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::ApiService_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::ApiService_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rmf_task_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ApiService_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: json_msg
  {
    out << "json_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.json_msg, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ApiService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: json_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "json_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.json_msg, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ApiService_Response & msg, bool use_flow_style = false)
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

}  // namespace rmf_task_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_task_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_task_msgs::srv::ApiService_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::srv::ApiService_Response & msg)
{
  return rmf_task_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::srv::ApiService_Response>()
{
  return "rmf_task_msgs::srv::ApiService_Response";
}

template<>
inline const char * name<rmf_task_msgs::srv::ApiService_Response>()
{
  return "rmf_task_msgs/srv/ApiService_Response";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::ApiService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::ApiService_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::ApiService_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::ApiService>()
{
  return "rmf_task_msgs::srv::ApiService";
}

template<>
inline const char * name<rmf_task_msgs::srv::ApiService>()
{
  return "rmf_task_msgs/srv/ApiService";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::ApiService>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_task_msgs::srv::ApiService_Request>::value &&
    has_fixed_size<rmf_task_msgs::srv::ApiService_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_task_msgs::srv::ApiService>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_task_msgs::srv::ApiService_Request>::value &&
    has_bounded_size<rmf_task_msgs::srv::ApiService_Response>::value
  >
{
};

template<>
struct is_service<rmf_task_msgs::srv::ApiService>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_task_msgs::srv::ApiService_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_task_msgs::srv::ApiService_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__SRV__DETAIL__API_SERVICE__TRAITS_HPP_
