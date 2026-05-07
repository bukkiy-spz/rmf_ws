// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/GraphEdge.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/graph_edge__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphEdge_edge_type
{
public:
  explicit Init_GraphEdge_edge_type(::rmf_building_map_msgs::msg::GraphEdge & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::GraphEdge edge_type(::rmf_building_map_msgs::msg::GraphEdge::_edge_type_type arg)
  {
    msg_.edge_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::GraphEdge msg_;
};

class Init_GraphEdge_params
{
public:
  explicit Init_GraphEdge_params(::rmf_building_map_msgs::msg::GraphEdge & msg)
  : msg_(msg)
  {}
  Init_GraphEdge_edge_type params(::rmf_building_map_msgs::msg::GraphEdge::_params_type arg)
  {
    msg_.params = std::move(arg);
    return Init_GraphEdge_edge_type(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::GraphEdge msg_;
};

class Init_GraphEdge_v2_idx
{
public:
  explicit Init_GraphEdge_v2_idx(::rmf_building_map_msgs::msg::GraphEdge & msg)
  : msg_(msg)
  {}
  Init_GraphEdge_params v2_idx(::rmf_building_map_msgs::msg::GraphEdge::_v2_idx_type arg)
  {
    msg_.v2_idx = std::move(arg);
    return Init_GraphEdge_params(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::GraphEdge msg_;
};

class Init_GraphEdge_v1_idx
{
public:
  Init_GraphEdge_v1_idx()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphEdge_v2_idx v1_idx(::rmf_building_map_msgs::msg::GraphEdge::_v1_idx_type arg)
  {
    msg_.v1_idx = std::move(arg);
    return Init_GraphEdge_v2_idx(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::GraphEdge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::GraphEdge>()
{
  return rmf_building_map_msgs::msg::builder::Init_GraphEdge_v1_idx();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_EDGE__BUILDER_HPP_
