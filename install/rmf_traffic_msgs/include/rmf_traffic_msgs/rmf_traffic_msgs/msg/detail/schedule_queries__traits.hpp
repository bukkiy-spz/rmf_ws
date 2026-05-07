// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQueries.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__TRAITS_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_traffic_msgs/msg/detail/schedule_queries__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'node_id'
#include "rmf_traffic_msgs/msg/detail/schedule_identity__traits.hpp"
// Member 'queries'
#include "rmf_traffic_msgs/msg/detail/schedule_query__traits.hpp"

namespace rmf_traffic_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ScheduleQueries & msg,
  std::ostream & out)
{
  out << "{";
  // member: node_id
  {
    out << "node_id: ";
    to_flow_style_yaml(msg.node_id, out);
    out << ", ";
  }

  // member: queries
  {
    if (msg.queries.size() == 0) {
      out << "queries: []";
    } else {
      out << "queries: [";
      size_t pending_items = msg.queries.size();
      for (auto item : msg.queries) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: query_ids
  {
    if (msg.query_ids.size() == 0) {
      out << "query_ids: []";
    } else {
      out << "query_ids: [";
      size_t pending_items = msg.query_ids.size();
      for (auto item : msg.query_ids) {
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
  const ScheduleQueries & msg,
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

  // member: queries
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.queries.size() == 0) {
      out << "queries: []\n";
    } else {
      out << "queries:\n";
      for (auto item : msg.queries) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: query_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.query_ids.size() == 0) {
      out << "query_ids: []\n";
    } else {
      out << "query_ids:\n";
      for (auto item : msg.query_ids) {
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

inline std::string to_yaml(const ScheduleQueries & msg, bool use_flow_style = false)
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

}  // namespace rmf_traffic_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_traffic_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_traffic_msgs::msg::ScheduleQueries & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_traffic_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_traffic_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const rmf_traffic_msgs::msg::ScheduleQueries & msg)
{
  return rmf_traffic_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_traffic_msgs::msg::ScheduleQueries>()
{
  return "rmf_traffic_msgs::msg::ScheduleQueries";
}

template<>
inline const char * name<rmf_traffic_msgs::msg::ScheduleQueries>()
{
  return "rmf_traffic_msgs/msg/ScheduleQueries";
}

template<>
struct has_fixed_size<rmf_traffic_msgs::msg::ScheduleQueries>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rmf_traffic_msgs::msg::ScheduleQueries>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rmf_traffic_msgs::msg::ScheduleQueries>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__TRAITS_HPP_
