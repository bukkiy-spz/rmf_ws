// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:srv/RegisterParticipant.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/srv/detail/register_participant__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'description'
#include "rmf_traffic_msgs/msg/detail/participant_description__traits.hpp"

namespace rmf_traffic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RegisterParticipant_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: description
  {
    out << "description: ";
    to_flow_style_yaml(msg.description, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RegisterParticipant_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: description
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "description:\n";
    to_block_style_yaml(msg.description, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RegisterParticipant_Request & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::srv::RegisterParticipant_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::srv::RegisterParticipant_Request & msg)
{
  return rmf_traffic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterParticipant_Request>()
{
  return "rmf_traffic_msgs::srv::RegisterParticipant_Request";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterParticipant_Request>()
{
  return "rmf_traffic_msgs/srv/RegisterParticipant_Request";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterParticipant_Request>
  : std::integral_constant<bool, has_fixed_size<rmf_traffic_msgs::msg::ParticipantDescription>::value> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterParticipant_Request>
  : std::integral_constant<bool, has_bounded_size<rmf_traffic_msgs::msg::ParticipantDescription>::value> {};

template<>
struct is_message<rmf_traffic_msgs::srv::RegisterParticipant_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rmf_traffic_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const RegisterParticipant_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: participant_id
  {
    out << "participant_id: ";
    rosidl_generator_traits::value_to_yaml(msg.participant_id, out);
    out << ", ";
  }

  // member: last_itinerary_version
  {
    out << "last_itinerary_version: ";
    rosidl_generator_traits::value_to_yaml(msg.last_itinerary_version, out);
    out << ", ";
  }

  // member: last_plan_id
  {
    out << "last_plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.last_plan_id, out);
    out << ", ";
  }

  // member: next_storage_base
  {
    out << "next_storage_base: ";
    rosidl_generator_traits::value_to_yaml(msg.next_storage_base, out);
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
  const RegisterParticipant_Response & msg,
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

  // member: last_itinerary_version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_itinerary_version: ";
    rosidl_generator_traits::value_to_yaml(msg.last_itinerary_version, out);
    out << "\n";
  }

  // member: last_plan_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "last_plan_id: ";
    rosidl_generator_traits::value_to_yaml(msg.last_plan_id, out);
    out << "\n";
  }

  // member: next_storage_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "next_storage_base: ";
    rosidl_generator_traits::value_to_yaml(msg.next_storage_base, out);
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

inline std::string to_yaml(const RegisterParticipant_Response & msg, bool use_flow_style = false)
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
  const rmf_traffic_msgs::srv::RegisterParticipant_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::srv::RegisterParticipant_Response & msg)
{
  return rmf_traffic_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterParticipant_Response>()
{
  return "rmf_traffic_msgs::srv::RegisterParticipant_Response";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterParticipant_Response>()
{
  return "rmf_traffic_msgs/srv/RegisterParticipant_Response";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterParticipant_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterParticipant_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::srv::RegisterParticipant_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_traffic_msgs::srv::RegisterParticipant>()
{
  return "rmf_traffic_msgs::srv::RegisterParticipant";
}

template<>
inline const char * name<rmf_traffic_msgs::srv::RegisterParticipant>()
{
  return "rmf_traffic_msgs/srv/RegisterParticipant";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::srv::RegisterParticipant>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_traffic_msgs::srv::RegisterParticipant_Request>::value &&
    has_fixed_size<rmf_traffic_msgs::srv::RegisterParticipant_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_traffic_msgs::srv::RegisterParticipant>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_traffic_msgs::srv::RegisterParticipant_Request>::value &&
    has_bounded_size<rmf_traffic_msgs::srv::RegisterParticipant_Response>::value
  >
{
};

template<>
struct is_service<rmf_traffic_msgs::srv::RegisterParticipant>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_traffic_msgs::srv::RegisterParticipant_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_traffic_msgs::srv::RegisterParticipant_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_PARTICIPANT__TRAITS_HPP_
