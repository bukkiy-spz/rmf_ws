// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/Place.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/place__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_Place_yaw_tolerance
{
public:
  explicit Init_Place_yaw_tolerance(::rmf_building_map_msgs::msg::Place & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::Place yaw_tolerance(::rmf_building_map_msgs::msg::Place::_yaw_tolerance_type arg)
  {
    msg_.yaw_tolerance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Place msg_;
};

class Init_Place_position_tolerance
{
public:
  explicit Init_Place_position_tolerance(::rmf_building_map_msgs::msg::Place & msg)
  : msg_(msg)
  {}
  Init_Place_yaw_tolerance position_tolerance(::rmf_building_map_msgs::msg::Place::_position_tolerance_type arg)
  {
    msg_.position_tolerance = std::move(arg);
    return Init_Place_yaw_tolerance(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Place msg_;
};

class Init_Place_yaw
{
public:
  explicit Init_Place_yaw(::rmf_building_map_msgs::msg::Place & msg)
  : msg_(msg)
  {}
  Init_Place_position_tolerance yaw(::rmf_building_map_msgs::msg::Place::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Place_position_tolerance(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Place msg_;
};

class Init_Place_y
{
public:
  explicit Init_Place_y(::rmf_building_map_msgs::msg::Place & msg)
  : msg_(msg)
  {}
  Init_Place_yaw y(::rmf_building_map_msgs::msg::Place::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Place_yaw(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Place msg_;
};

class Init_Place_x
{
public:
  explicit Init_Place_x(::rmf_building_map_msgs::msg::Place & msg)
  : msg_(msg)
  {}
  Init_Place_y x(::rmf_building_map_msgs::msg::Place::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Place_y(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Place msg_;
};

class Init_Place_name
{
public:
  Init_Place_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Place_x name(::rmf_building_map_msgs::msg::Place::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Place_x(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Place msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::Place>()
{
  return rmf_building_map_msgs::msg::builder::Init_Place_name();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PLACE__BUILDER_HPP_
