// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/graph__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_Graph_params
{
public:
  explicit Init_Graph_params(::rmf_building_map_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::Graph params(::rmf_building_map_msgs::msg::Graph::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Graph msg_;
};

class Init_Graph_edges
{
public:
  explicit Init_Graph_edges(::rmf_building_map_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_params edges(::rmf_building_map_msgs::msg::Graph::_edges_type arg)
  {
    msg_.edges = std::move(arg);
    return Init_Graph_params(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Graph msg_;
};

class Init_Graph_vertices
{
public:
  explicit Init_Graph_vertices(::rmf_building_map_msgs::msg::Graph & msg)
  : msg_(msg)
  {}
  Init_Graph_edges vertices(::rmf_building_map_msgs::msg::Graph::_vertices_type arg)
  {
    msg_.vertices = std::move(arg);
    return Init_Graph_edges(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Graph msg_;
};

class Init_Graph_name
{
public:
  Init_Graph_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Graph_vertices name(::rmf_building_map_msgs::msg::Graph::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Graph_vertices(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Graph msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::Graph>()
{
  return rmf_building_map_msgs::msg::builder::Init_Graph_name();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH__BUILDER_HPP_
