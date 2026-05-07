// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:srv/SubmitTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__TRAITS_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/srv/detail/submit_task__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'description'
#include "rmf_task_msgs/msg/detail/task_description__traits.hpp"

namespace rmf_task_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SubmitTask_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: requester
  {
    out << "requester: ";
    rosidl_generator_traits::value_to_yaml(msg.requester, out);
    out << ", ";
  }

  // member: description
  {
    out << "description: ";
    to_flow_style_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SubmitTask_Request & msg,
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

  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description:\n";
    to_block_style_yaml(msg.description, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SubmitTask_Request & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::srv::SubmitTask_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::srv::SubmitTask_Request & msg)
{
  return rmf_task_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::srv::SubmitTask_Request>()
{
  return "rmf_task_msgs::srv::SubmitTask_Request";
}

template<>
inline const char * name<rmf_task_msgs::srv::SubmitTask_Request>()
{
  return "rmf_task_msgs/srv/SubmitTask_Request";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::SubmitTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::SubmitTask_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::SubmitTask_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rmf_task_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const SubmitTask_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: task_id
  {
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
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
  const SubmitTask_Response & msg,
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

  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    rosidl_generator_traits::value_to_yaml(msg.task_id, out);
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

inline std::string to_yaml(const SubmitTask_Response & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::srv::SubmitTask_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::srv::SubmitTask_Response & msg)
{
  return rmf_task_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::srv::SubmitTask_Response>()
{
  return "rmf_task_msgs::srv::SubmitTask_Response";
}

template<>
inline const char * name<rmf_task_msgs::srv::SubmitTask_Response>()
{
  return "rmf_task_msgs/srv/SubmitTask_Response";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::SubmitTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::SubmitTask_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::SubmitTask_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::SubmitTask>()
{
  return "rmf_task_msgs::srv::SubmitTask";
}

template<>
inline const char * name<rmf_task_msgs::srv::SubmitTask>()
{
  return "rmf_task_msgs/srv/SubmitTask";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::SubmitTask>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_task_msgs::srv::SubmitTask_Request>::value &&
    has_fixed_size<rmf_task_msgs::srv::SubmitTask_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_task_msgs::srv::SubmitTask>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_task_msgs::srv::SubmitTask_Request>::value &&
    has_bounded_size<rmf_task_msgs::srv::SubmitTask_Response>::value
  >
{
};

template<>
struct is_service<rmf_task_msgs::srv::SubmitTask>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_task_msgs::srv::SubmitTask_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_task_msgs::srv::SubmitTask_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__TRAITS_HPP_
