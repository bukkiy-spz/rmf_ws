// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__TRAITS_HPP_
#define RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rmf_building_map_msgs/srv/detail/get_building_map__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rmf_building_map_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBuildingMap_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBuildingMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBuildingMap_Request & msg, bool use_flow_style = false)
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

}  // namespace rmf_building_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_building_map_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_building_map_msgs::srv::GetBuildingMap_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::srv::GetBuildingMap_Request & msg)
{
  return rmf_building_map_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::srv::GetBuildingMap_Request>()
{
  return "rmf_building_map_msgs::srv::GetBuildingMap_Request";
}

template<>
inline const char * name<rmf_building_map_msgs::srv::GetBuildingMap_Request>()
{
  return "rmf_building_map_msgs/srv/GetBuildingMap_Request";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rmf_building_map_msgs::srv::GetBuildingMap_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'building_map'
#include "rmf_building_map_msgs/msg/detail/building_map__traits.hpp"

namespace rmf_building_map_msgs
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetBuildingMap_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: building_map
  {
    out << "building_map: ";
    to_flow_style_yaml(msg.building_map, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetBuildingMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: building_map
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "building_map:\n";
    to_block_style_yaml(msg.building_map, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetBuildingMap_Response & msg, bool use_flow_style = false)
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

}  // namespace rmf_building_map_msgs

namespace rosidl_generator_traits
{

[[deprecated("use rmf_building_map_msgs::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rmf_building_map_msgs::srv::GetBuildingMap_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rmf_building_map_msgs::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rmf_building_map_msgs::srv::to_yaml() instead")]]
inline std::string to_yaml(const rmf_building_map_msgs::srv::GetBuildingMap_Response & msg)
{
  return rmf_building_map_msgs::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rmf_building_map_msgs::srv::GetBuildingMap_Response>()
{
  return "rmf_building_map_msgs::srv::GetBuildingMap_Response";
}

template<>
inline const char * name<rmf_building_map_msgs::srv::GetBuildingMap_Response>()
{
  return "rmf_building_map_msgs/srv/GetBuildingMap_Response";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap_Response>
  : std::integral_constant<bool, has_fixed_size<rmf_building_map_msgs::msg::BuildingMap>::value> {};

template<>
struct has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap_Response>
  : std::integral_constant<bool, has_bounded_size<rmf_building_map_msgs::msg::BuildingMap>::value> {};

template<>
struct is_message<rmf_building_map_msgs::srv::GetBuildingMap_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rmf_building_map_msgs::srv::GetBuildingMap>()
{
  return "rmf_building_map_msgs::srv::GetBuildingMap";
}

template<>
inline const char * name<rmf_building_map_msgs::srv::GetBuildingMap>()
{
  return "rmf_building_map_msgs/srv/GetBuildingMap";
}

template<>
struct has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap>
  : std::integral_constant<
    bool,
    has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap_Request>::value &&
    has_fixed_size<rmf_building_map_msgs::srv::GetBuildingMap_Response>::value
  >
{
};

template<>
struct has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap>
  : std::integral_constant<
    bool,
    has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap_Request>::value &&
    has_bounded_size<rmf_building_map_msgs::srv::GetBuildingMap_Response>::value
  >
{
};

template<>
struct is_service<rmf_building_map_msgs::srv::GetBuildingMap>
  : std::true_type
{
};

template<>
struct is_service_request<rmf_building_map_msgs::srv::GetBuildingMap_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rmf_building_map_msgs::srv::GetBuildingMap_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RMF_BUILDING_MAP_MSGS__SRV__DETAIL__GET_BUILDING_MAP__TRAITS_HPP_
