// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_workcell_msgs:msg/Trait.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__TRAITS_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_workcell_msgs/msg/detail/trait__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_workcell_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Trait & msg,
  std::ostream & out)
{
  out << "{";
  // member: key
  {
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << ", ";
  }

  // member: value
  {
    if (msg.value.size() == 0) {
      out << "value: []";
    } else {
      out << "value: [";
      size_t pending_items = msg.value.size();
      for (auto item : msg.value) {
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
  const Trait & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: key
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "key: ";
    rosidl_generator_traits::value_to_yaml(msg.key, out);
    out << "\n";
  }

  // member: value
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.value.size() == 0) {
      out << "value: []\n";
    } else {
      out << "value:\n";
      for (auto item : msg.value) {
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

inline std::string to_yaml(const Trait & msg, bool use_flow_style = false)
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

}  // namespace rmf_workcell_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_workcell_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_workcell_msgs::msg::Trait & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_workcell_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_workcell_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_workcell_msgs::msg::Trait & msg)
{
  return rmf_workcell_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_workcell_msgs::msg::Trait>()
{
  return "rmf_workcell_msgs::msg::Trait";
}

template<>
inline const char * name<rmf_workcell_msgs::msg::Trait>()
{
  return "rmf_workcell_msgs/msg/Trait";
}

template<>
struct has_fixed_size<rmf_workcell_msgs::msg::Trait>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_workcell_msgs::msg::Trait>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_workcell_msgs::msg::Trait>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__TRAITS_HPP_
