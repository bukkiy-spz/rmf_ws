// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_task_msgs:srv/GetDispatchStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__TRAITS_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_task_msgs/srv/detail/get_dispatch_states__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_task_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDispatchStates_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: task_ids
  {
    if (msg.task_ids.size() == 0) {
      out << "task_ids: []";
    } else {
      out << "task_ids: [";
      size_t pending_items = msg.task_ids.size();
      for (auto item : msg.task_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const GetDispatchStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.task_ids.size() == 0) {
      out << "task_ids: []\n";
    } else {
      out << "task_ids:\n";
      for (auto item : msg.task_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDispatchStates_Request & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::srv::GetDispatchStates_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::srv::GetDispatchStates_Request & msg)
{
  return rmf_task_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::srv::GetDispatchStates_Request>()
{
  return "rmf_task_msgs::srv::GetDispatchStates_Request";
}

template<>
inline const char * name<rmf_task_msgs::srv::GetDispatchStates_Request>()
{
  return "rmf_task_msgs/srv/GetDispatchStates_Request";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::GetDispatchStates_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::GetDispatchStates_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_task_msgs::srv::GetDispatchStates_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'states'
#include "rmf_task_msgs/msg/detail/dispatch_states__traits.hpp"

namespace rmf_task_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetDispatchStates_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: states
  {
    out << "states: ";
    to_flow_style_yaml(msg.states, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetDispatchStates_Response & msg,
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

  // member: states
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "states:\n";
    to_block_style_yaml(msg.states, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetDispatchStates_Response & msg, bool use_flow_style = false)
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
  const rmf_task_msgs::srv::GetDispatchStates_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_task_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_task_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_task_msgs::srv::GetDispatchStates_Response & msg)
{
  return rmf_task_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_task_msgs::srv::GetDispatchStates_Response>()
{
  return "rmf_task_msgs::srv::GetDispatchStates_Response";
}

template<>
inline const char * name<rmf_task_msgs::srv::GetDispatchStates_Response>()
{
  return "rmf_task_msgs/srv/GetDispatchStates_Response";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::GetDispatchStates_Response>
  : std::integral_constant<bool, has_fixed_size<rmf_task_msgs::msg::DispatchStates>::value> {};

template<>
struct has_bounded_size<rmf_task_msgs::srv::GetDispatchStates_Response>
  : std::integral_constant<bool, has_bounded_size<rmf_task_msgs::msg::DispatchStates>::value> {};

template<>
struct is_message<rmf_task_msgs::srv::GetDispatchStates_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_task_msgs::srv::GetDispatchStates>()
{
  return "rmf_task_msgs::srv::GetDispatchStates";
}

template<>
inline const char * name<rmf_task_msgs::srv::GetDispatchStates>()
{
  return "rmf_task_msgs/srv/GetDispatchStates";
}

template<>
struct has_fixed_size<rmf_task_msgs::srv::GetDispatchStates>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_task_msgs::srv::GetDispatchStates_Request>::value &&
    has_fixed_size<rmf_task_msgs::srv::GetDispatchStates_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_task_msgs::srv::GetDispatchStates>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_task_msgs::srv::GetDispatchStates_Request>::value &&
    has_bounded_size<rmf_task_msgs::srv::GetDispatchStates_Response>::value
  >
{
};

template<>
struct is_service<rmf_task_msgs::srv::GetDispatchStates>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_task_msgs::srv::GetDispatchStates_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_task_msgs::srv::GetDispatchStates_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TASK_MSGS__SRV__DETAIL__GET_DISPATCH_STATES__TRAITS_HPP_
