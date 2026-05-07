// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/Door.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/door__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_Door_motion_direction
{
public:
  explicit Init_Door_motion_direction(::rmf_building_map_msgs::msg::Door & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::Door motion_direction(::rmf_building_map_msgs::msg::Door::_motion_direction_type arg)
  {
    msg_.motion_direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Door msg_;
};

class Init_Door_motion_range
{
public:
  explicit Init_Door_motion_range(::rmf_building_map_msgs::msg::Door & msg)
  : msg_(msg)
  {}
  Init_Door_motion_direction motion_range(::rmf_building_map_msgs::msg::Door::_motion_range_type arg)
  {
    msg_.motion_range = std::move(arg);
    return Init_Door_motion_direction(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Door msg_;
};

class Init_Door_door_type
{
public:
  explicit Init_Door_door_type(::rmf_building_map_msgs::msg::Door & msg)
  : msg_(msg)
  {}
  Init_Door_motion_range door_type(::rmf_building_map_msgs::msg::Door::_door_type_type arg)
  {
    msg_.door_type = std::move(arg);
    return Init_Door_motion_range(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Door msg_;
};

class Init_Door_v2_y
{
public:
  explicit Init_Door_v2_y(::rmf_building_map_msgs::msg::Door & msg)
  : msg_(msg)
  {}
  Init_Door_door_type v2_y(::rmf_building_map_msgs::msg::Door::_v2_y_type arg)
  {
    msg_.v2_y = std::move(arg);
    return Init_Door_door_type(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Door msg_;
};

class Init_Door_v2_x
{
public:
  explicit Init_Door_v2_x(::rmf_building_map_msgs::msg::Door & msg)
  : msg_(msg)
  {}
  Init_Door_v2_y v2_x(::rmf_building_map_msgs::msg::Door::_v2_x_type arg)
  {
    msg_.v2_x = std::move(arg);
    return Init_Door_v2_y(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Door msg_;
};

class Init_Door_v1_y
{
public:
  explicit Init_Door_v1_y(::rmf_building_map_msgs::msg::Door & msg)
  : msg_(msg)
  {}
  Init_Door_v2_x v1_y(::rmf_building_map_msgs::msg::Door::_v1_y_type arg)
  {
    msg_.v1_y = std::move(arg);
    return Init_Door_v2_x(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Door msg_;
};

class Init_Door_v1_x
{
public:
  explicit Init_Door_v1_x(::rmf_building_map_msgs::msg::Door & msg)
  : msg_(msg)
  {}
  Init_Door_v1_y v1_x(::rmf_building_map_msgs::msg::Door::_v1_x_type arg)
  {
    msg_.v1_x = std::move(arg);
    return Init_Door_v1_y(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Door msg_;
};

class Init_Door_name
{
public:
  Init_Door_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Door_v1_x name(::rmf_building_map_msgs::msg::Door::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Door_v1_x(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Door msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::Door>()
{
  return rmf_building_map_msgs::msg::builder::Init_Door_name();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__DOOR__BUILDER_HPP_
