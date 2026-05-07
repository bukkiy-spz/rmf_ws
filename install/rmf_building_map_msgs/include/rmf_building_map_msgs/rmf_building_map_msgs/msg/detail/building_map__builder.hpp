// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/BuildingMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/building_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_BuildingMap_lifts
{
public:
  explicit Init_BuildingMap_lifts(::rmf_building_map_msgs::msg::BuildingMap & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::BuildingMap lifts(::rmf_building_map_msgs::msg::BuildingMap::_lifts_type arg)
  {
    msg_.lifts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::BuildingMap msg_;
};

class Init_BuildingMap_levels
{
public:
  explicit Init_BuildingMap_levels(::rmf_building_map_msgs::msg::BuildingMap & msg)
  : msg_(msg)
  {}
  Init_BuildingMap_lifts levels(::rmf_building_map_msgs::msg::BuildingMap::_levels_type arg)
  {
    msg_.levels = std::move(arg);
    return Init_BuildingMap_lifts(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::BuildingMap msg_;
};

class Init_BuildingMap_name
{
public:
  Init_BuildingMap_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BuildingMap_levels name(::rmf_building_map_msgs::msg::BuildingMap::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_BuildingMap_levels(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::BuildingMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::BuildingMap>()
{
  return rmf_building_map_msgs::msg::builder::Init_BuildingMap_name();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__BUILDING_MAP__BUILDER_HPP_
