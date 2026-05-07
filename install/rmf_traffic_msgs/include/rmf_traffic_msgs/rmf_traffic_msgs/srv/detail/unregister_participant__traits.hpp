// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:srv/UnregisterParticipant.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/srv/detail/unregister_participant__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_traffic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UnregisterParticipant_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: participant_id
  {
    out << "participant_id: ";
    rosidl_generator_traits::value_to_yaml(msg.participant_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UnregisterParticipant_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UnregisterParticipant_Request & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::srv::UnregisterParticipant_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::srv::UnregisterParticipant_Request & msg)
{
  return rmf_traffic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::srv::UnregisterParticipant_Request>()
{
  return "rmf_traffic_msgs::srv::UnregisterParticipant_Request";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::UnregisterParticipant_Request>()
{
  return "rmf_traffic_msgs/srv/UnregisterParticipant_Request";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_traffic_msgs::srv::UnregisterParticipant_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rmf_traffic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const UnregisterParticipant_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: confirmation
  {
    out << "confirmation: ";
    rosidl_generator_traits::value_to_yaml(msg.confirmation, out);
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
  const UnregisterParticipant_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: confirmation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirmation: ";
    rosidl_generator_traits::value_to_yaml(msg.confirmation, out);
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

inline std::string to_yaml(const UnregisterParticipant_Response & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::srv::UnregisterParticipant_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::srv::UnregisterParticipant_Response & msg)
{
  return rmf_traffic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::srv::UnregisterParticipant_Response>()
{
  return "rmf_traffic_msgs::srv::UnregisterParticipant_Response";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::UnregisterParticipant_Response>()
{
  return "rmf_traffic_msgs/srv/UnregisterParticipant_Response";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::srv::UnregisterParticipant_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::UnregisterParticipant>()
{
  return "rmf_traffic_msgs::srv::UnregisterParticipant";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::UnregisterParticipant>()
{
  return "rmf_traffic_msgs/srv/UnregisterParticipant";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant_Request>::value &&
    has_fixed_size<rmf_traffic_msgs::srv::UnregisterParticipant_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant_Request>::value &&
    has_bounded_size<rmf_traffic_msgs::srv::UnregisterParticipant_Response>::value
  >
{
};

template<>
struct is_service<rmf_traffic_msgs::srv::UnregisterParticipant>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_traffic_msgs::srv::UnregisterParticipant_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_traffic_msgs::srv::UnregisterParticipant_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__UNREGISTER_PARTICIPANT__TRAITS_HPP_
