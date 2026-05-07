// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__TRAITS_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_ingestor_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const IngestorRequestItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: type_guid
  {
    out << "type_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.type_guid, out);
    out << ", ";
  }

  // member: quantity
  {
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << ", ";
  }

  // member: compartment_name
  {
    out << "compartment_name: ";
    rosidl_generator_traits::value_to_yaml(msg.compartment_name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const IngestorRequestItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type_guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type_guid: ";
    rosidl_generator_traits::value_to_yaml(msg.type_guid, out);
    out << "\n";
  }

  // member: quantity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quantity: ";
    rosidl_generator_traits::value_to_yaml(msg.quantity, out);
    out << "\n";
  }

  // member: compartment_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "compartment_name: ";
    rosidl_generator_traits::value_to_yaml(msg.compartment_name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const IngestorRequestItem & msg, bool use_flow_style = false)
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
  const rmf_ingestor_msgs::msg::IngestorRequestItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_ingestor_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_ingestor_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_ingestor_msgs::msg::IngestorRequestItem & msg)
{
  return rmf_ingestor_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_ingestor_msgs::msg::IngestorRequestItem>()
{
  return "rmf_ingestor_msgs::msg::IngestorRequestItem";
}

template<>
inline const char * name<rmf_ingestor_msgs::msg::IngestorRequestItem>()
{
  return "rmf_ingestor_msgs/msg/IngestorRequestItem";
}

template<>
struct has_fixed_size<rmf_ingestor_msgs::msg::IngestorRequestItem>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_ingestor_msgs::msg::IngestorRequestItem>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_ingestor_msgs::msg::IngestorRequestItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__TRAITS_HPP_
