// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/level__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_Level_wall_graph
{
public:
  explicit Init_Level_wall_graph(::rmf_building_map_msgs::msg::Level & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::Level wall_graph(::rmf_building_map_msgs::msg::Level::_wall_graph_type arg)
  {
    msg_.wall_graph = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Level msg_;
};

class Init_Level_nav_graphs
{
public:
  explicit Init_Level_nav_graphs(::rmf_building_map_msgs::msg::Level & msg)
  : msg_(msg)
  {}
  Init_Level_wall_graph nav_graphs(::rmf_building_map_msgs::msg::Level::_nav_graphs_type arg)
  {
    msg_.nav_graphs = std::move(arg);
    return Init_Level_wall_graph(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Level msg_;
};

class Init_Level_doors
{
public:
  explicit Init_Level_doors(::rmf_building_map_msgs::msg::Level & msg)
  : msg_(msg)
  {}
  Init_Level_nav_graphs doors(::rmf_building_map_msgs::msg::Level::_doors_type arg)
  {
    msg_.doors = std::move(arg);
    return Init_Level_nav_graphs(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Level msg_;
};

class Init_Level_places
{
public:
  explicit Init_Level_places(::rmf_building_map_msgs::msg::Level & msg)
  : msg_(msg)
  {}
  Init_Level_doors places(::rmf_building_map_msgs::msg::Level::_places_type arg)
  {
    msg_.places = std::move(arg);
    return Init_Level_doors(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Level msg_;
};

class Init_Level_images
{
public:
  explicit Init_Level_images(::rmf_building_map_msgs::msg::Level & msg)
  : msg_(msg)
  {}
  Init_Level_places images(::rmf_building_map_msgs::msg::Level::_images_type arg)
  {
    msg_.images = std::move(arg);
    return Init_Level_places(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Level msg_;
};

class Init_Level_elevation
{
public:
  explicit Init_Level_elevation(::rmf_building_map_msgs::msg::Level & msg)
  : msg_(msg)
  {}
  Init_Level_images elevation(::rmf_building_map_msgs::msg::Level::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_Level_images(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Level msg_;
};

class Init_Level_name
{
public:
  Init_Level_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Level_elevation name(::rmf_building_map_msgs::msg::Level::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Level_elevation(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Level msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::Level>()
{
  return rmf_building_map_msgs::msg::builder::Init_Level_name();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__LEVEL__BUILDER_HPP_
