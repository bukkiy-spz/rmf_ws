// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__TRAITS_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_workcell_msgs/msg/detail/workcell_configuration__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'assets'
#include "rmf_workcell_msgs/msg/detail/asset__traits.hpp"
// Member 'traits'
#include "rmf_workcell_msgs/msg/detail/trait__traits.hpp"

namespace rmf_workcell_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WorkcellConfiguration & msg,
  std::ostream & out)
{
  out << "{";
  // member: time
  {
    out << "time: ";
    to_flow_style_yaml(msg.time, out);
    out << ", ";
  }

  // member: guid
  {
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: assets
  {
    if (msg.assets.size() == 0) {
      out << "assets: []";
    } else {
      out << "assets: [";
      size_t pending_items = msg.assets.size();
      for (auto item : msg.assets) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traits
  {
    if (msg.traits.size() == 0) {
      out << "traits: []";
    } else {
      out << "traits: [";
      size_t pending_items = msg.traits.size();
      for (auto item : msg.traits) {
        to_flow_style_yaml(item, out);
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
  const WorkcellConfiguration & msg,
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

  // member: guid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "guid: ";
    rosidl_generator_traits::value_to_yaml(msg.guid, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: assets
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.assets.size() == 0) {
      out << "assets: []\n";
    } else {
      out << "assets:\n";
      for (auto item : msg.assets) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: traits
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.traits.size() == 0) {
      out << "traits: []\n";
    } else {
      out << "traits:\n";
      for (auto item : msg.traits) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WorkcellConfiguration & msg, bool use_flow_style = false)
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
  const rmf_workcell_msgs::msg::WorkcellConfiguration & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_workcell_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_workcell_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_workcell_msgs::msg::WorkcellConfiguration & msg)
{
  return rmf_workcell_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_workcell_msgs::msg::WorkcellConfiguration>()
{
  return "rmf_workcell_msgs::msg::WorkcellConfiguration";
}

template<>
inline const char * name<rmf_workcell_msgs::msg::WorkcellConfiguration>()
{
  return "rmf_workcell_msgs/msg/WorkcellConfiguration";
}

template<>
struct has_fixed_size<rmf_workcell_msgs::msg::WorkcellConfiguration>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_workcell_msgs::msg::WorkcellConfiguration>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_workcell_msgs::msg::WorkcellConfiguration>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__TRAITS_HPP_
