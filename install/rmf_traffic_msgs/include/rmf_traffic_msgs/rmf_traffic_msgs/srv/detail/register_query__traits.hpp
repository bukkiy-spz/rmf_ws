// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:srv/RegisterQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/srv/detail/register_query__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'query'
#include "rmf_traffic_msgs/msg/detail/schedule_query__traits.hpp"

namespace rmf_traffic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RegisterQuery_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: query
  {
    out << "query: ";
    to_flow_style_yaml(msg.query, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegisterQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: query
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query:\n";
    to_block_style_yaml(msg.query, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegisterQuery_Request & msg, bool use_flow_style = false)
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

}  // namespace rmf_traffic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_traffic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_traffic_msgs::srv::RegisterQuery_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::srv::RegisterQuery_Request & msg)
{
  return rmf_traffic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterQuery_Request>()
{
  return "rmf_traffic_msgs::srv::RegisterQuery_Request";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterQuery_Request>()
{
  return "rmf_traffic_msgs/srv/RegisterQuery_Request";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery_Request>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ScheduleQuery>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery_Request>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ScheduleQuery>::value> {};

template<>
struct is_message<rmf_traffic_msgs::srv::RegisterQuery_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__traits.hpp"

namespace rmf_traffic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RegisterQuery_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    to_flow_style_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: query_id
  {
    out << "query_id: ";
    rosidl_generator_traits::value_to_yaml(msg.query_id, out);
    out << ", ";
  }

  // member: error
  {
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegisterQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: node_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "node_id:\n";
    to_block_style_yaml(msg.node_id, out, indentation + 2);
  }

  // member: query_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "query_id: ";
    rosidl_generator_traits::value_to_yaml(msg.query_id, out);
    out << "\n";
  }

  // member: error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "error: ";
    rosidl_generator_traits::value_to_yaml(msg.error, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegisterQuery_Response & msg, bool use_flow_style = false)
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

}  // namespace rmf_traffic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_traffic_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_traffic_msgs::srv::RegisterQuery_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::srv::RegisterQuery_Response & msg)
{
  return rmf_traffic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterQuery_Response>()
{
  return "rmf_traffic_msgs::srv::RegisterQuery_Response";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterQuery_Response>()
{
  return "rmf_traffic_msgs/srv/RegisterQuery_Response";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::srv::RegisterQuery_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterQuery>()
{
  return "rmf_traffic_msgs::srv::RegisterQuery";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterQuery>()
{
  return "rmf_traffic_msgs/srv/RegisterQuery";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery_Request>::value &&
    has_fixed_size<rmf_traffic_msgs::srv::RegisterQuery_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery_Request>::value &&
    has_bounded_size<rmf_traffic_msgs::srv::RegisterQuery_Response>::value
  >
{
};

template<>
struct is_service<rmf_traffic_msgs::srv::RegisterQuery>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_traffic_msgs::srv::RegisterQuery_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_traffic_msgs::srv::RegisterQuery_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__TRAITS_HPP_
