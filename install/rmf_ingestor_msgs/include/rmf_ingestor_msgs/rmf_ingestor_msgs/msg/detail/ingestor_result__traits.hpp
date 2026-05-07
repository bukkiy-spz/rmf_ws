// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__TRAITS_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_ingestor_msgs/msg/detail/ingestor_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rmf_ingestor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IngestorResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
    out << ", ";
  }

  // member: request_guid
  {
    out << "request_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.request_guid, out);
    out << ", ";
  }

  // member: source_guid
  {
    out << "source_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.source_guid, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IngestorResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time:\n";
    to_block_style_yaml(msg.time, out, indentation + 2);
  }

  // member: request_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "request_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.request_guid, out);
    out << "\n";
  }

  // member: source_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.source_guid, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IngestorResult & msg, bool use_flow_style = false)
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

}  // namespace rmf_ingestor_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_ingestor_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_ingestor_msgs::msg::IngestorResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_ingestor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_ingestor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_ingestor_msgs::msg::IngestorResult & msg)
{
  return rmf_ingestor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_ingestor_msgs::msg::IngestorResult>()
{
  return "rmf_ingestor_msgs::msg::IngestorResult";
}

template<>
inline const char * name<rmf_ingestor_msgs::msg::IngestorResult>()
{
  return "rmf_ingestor_msgs/msg/IngestorResult";
}

template<>
struct has_fixed_size<rmf_ingestor_msgs::msg::IngestorResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_ingestor_msgs::msg::IngestorResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_ingestor_msgs::msg::IngestorResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__TRAITS_HPP_
