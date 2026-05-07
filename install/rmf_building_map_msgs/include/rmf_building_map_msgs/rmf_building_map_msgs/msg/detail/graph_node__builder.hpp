// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/GraphNode.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_NODE__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_NODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/graph_node__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_GraphNode_params
{
public:
  explicit Init_GraphNode_params(::rmf_building_map_msgs::msg::GraphNode & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::GraphNode params(::rmf_building_map_msgs::msg::GraphNode::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::GraphNode msg_;
};

class Init_GraphNode_name
{
public:
  explicit Init_GraphNode_name(::rmf_building_map_msgs::msg::GraphNode & msg)
  : msg_(msg)
  {}
  Init_GraphNode_params name(::rmf_building_map_msgs::msg::GraphNode::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_GraphNode_params(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::GraphNode msg_;
};

class Init_GraphNode_y
{
public:
  explicit Init_GraphNode_y(::rmf_building_map_msgs::msg::GraphNode & msg)
  : msg_(msg)
  {}
  Init_GraphNode_name y(::rmf_building_map_msgs::msg::GraphNode::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_GraphNode_name(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::GraphNode msg_;
};

class Init_GraphNode_x
{
public:
  Init_GraphNode_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GraphNode_y x(::rmf_building_map_msgs::msg::GraphNode::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_GraphNode_y(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::GraphNode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::GraphNode>()
{
  return rmf_building_map_msgs::msg::builder::Init_GraphNode_x();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__GRAPH_NODE__BUILDER_HPP_
