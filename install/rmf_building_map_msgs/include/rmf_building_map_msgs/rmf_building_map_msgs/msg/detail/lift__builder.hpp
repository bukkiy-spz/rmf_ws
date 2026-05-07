// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/Lift.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/lift__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_Lift_depth
{
public:
  explicit Init_Lift_depth(::rmf_building_map_msgs::msg::Lift & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::Lift depth(::rmf_building_map_msgs::msg::Lift::_depth_type arg)
  {
    msg_.depth = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

class Init_Lift_width
{
public:
  explicit Init_Lift_width(::rmf_building_map_msgs::msg::Lift & msg)
  : msg_(msg)
  {}
  Init_Lift_depth width(::rmf_building_map_msgs::msg::Lift::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Lift_depth(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

class Init_Lift_ref_yaw
{
public:
  explicit Init_Lift_ref_yaw(::rmf_building_map_msgs::msg::Lift & msg)
  : msg_(msg)
  {}
  Init_Lift_width ref_yaw(::rmf_building_map_msgs::msg::Lift::_ref_yaw_type arg)
  {
    msg_.ref_yaw = std::move(arg);
    return Init_Lift_width(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

class Init_Lift_ref_y
{
public:
  explicit Init_Lift_ref_y(::rmf_building_map_msgs::msg::Lift & msg)
  : msg_(msg)
  {}
  Init_Lift_ref_yaw ref_y(::rmf_building_map_msgs::msg::Lift::_ref_y_type arg)
  {
    msg_.ref_y = std::move(arg);
    return Init_Lift_ref_yaw(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

class Init_Lift_ref_x
{
public:
  explicit Init_Lift_ref_x(::rmf_building_map_msgs::msg::Lift & msg)
  : msg_(msg)
  {}
  Init_Lift_ref_y ref_x(::rmf_building_map_msgs::msg::Lift::_ref_x_type arg)
  {
    msg_.ref_x = std::move(arg);
    return Init_Lift_ref_y(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

class Init_Lift_wall_graph
{
public:
  explicit Init_Lift_wall_graph(::rmf_building_map_msgs::msg::Lift & msg)
  : msg_(msg)
  {}
  Init_Lift_ref_x wall_graph(::rmf_building_map_msgs::msg::Lift::_wall_graph_type arg)
  {
    msg_.wall_graph = std::move(arg);
    return Init_Lift_ref_x(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

class Init_Lift_doors
{
public:
  explicit Init_Lift_doors(::rmf_building_map_msgs::msg::Lift & msg)
  : msg_(msg)
  {}
  Init_Lift_wall_graph doors(::rmf_building_map_msgs::msg::Lift::_doors_type arg)
  {
    msg_.doors = std::move(arg);
    return Init_Lift_wall_graph(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

class Init_Lift_levels
{
public:
  explicit Init_Lift_levels(::rmf_building_map_msgs::msg::Lift & msg)
  : msg_(msg)
  {}
  Init_Lift_doors levels(::rmf_building_map_msgs::msg::Lift::_levels_type arg)
  {
    msg_.levels = std::move(arg);
    return Init_Lift_doors(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

class Init_Lift_name
{
public:
  Init_Lift_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lift_levels name(::rmf_building_map_msgs::msg::Lift::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Lift_levels(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Lift msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::Lift>()
{
  return rmf_building_map_msgs::msg::builder::Init_Lift_name();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LIFT__BUILDER_HPP_
