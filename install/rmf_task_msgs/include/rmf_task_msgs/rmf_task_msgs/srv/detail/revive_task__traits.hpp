// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:srv/ReviveTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__TRAITS_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/srv/detail/revive_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_task_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReviveTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: requester
  {
    out << "requester: ";
    rosidl_generator_traits::value_to_yaml(msg.requester, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReviveTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: requester
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "requester: ";
    rosidl_generator_traits::value_to_yaml(msg.requester, out);
    out << "\n";
  }

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReviveTask_Request & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::srv::ReviveTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::srv::ReviveTask_Request & msg)
{
  return rmf_task_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::srv::ReviveTask_Request>()
{
  return "rmf_task_msgs::srv::ReviveTask_Request";
}

template<>
inline const char * name<rmf_task_msgs::srv::ReviveTask_Request>()
{
  return "rmf_task_msgs/srv/ReviveTask_Request";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::ReviveTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::ReviveTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::ReviveTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rmf_task_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReviveTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReviveTask_Response & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReviveTask_Response & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::srv::ReviveTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::srv::ReviveTask_Response & msg)
{
  return rmf_task_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::srv::ReviveTask_Response>()
{
  return "rmf_task_msgs::srv::ReviveTask_Response";
}

template<>
inline const char * name<rmf_task_msgs::srv::ReviveTask_Response>()
{
  return "rmf_task_msgs/srv/ReviveTask_Response";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::ReviveTask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::ReviveTask_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_task_msgs::srv::ReviveTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::ReviveTask>()
{
  return "rmf_task_msgs::srv::ReviveTask";
}

template<>
inline const char * name<rmf_task_msgs::srv::ReviveTask>()
{
  return "rmf_task_msgs/srv/ReviveTask";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::ReviveTask>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_task_msgs::srv::ReviveTask_Request>::value &&
    has_fixed_size<rmf_task_msgs::srv::ReviveTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_task_msgs::srv::ReviveTask>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_task_msgs::srv::ReviveTask_Request>::value &&
    has_bounded_size<rmf_task_msgs::srv::ReviveTask_Response>::value
  >
{
};

template<>
struct is_service<rmf_task_msgs::srv::ReviveTask>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_task_msgs::srv::ReviveTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_task_msgs::srv::ReviveTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__SRV__DETAIL__REVIVE_TASK__TRAITS_HPP_
