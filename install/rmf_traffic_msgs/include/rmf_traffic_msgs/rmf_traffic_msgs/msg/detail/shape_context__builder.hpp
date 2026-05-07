// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ShapeContext.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/shape_context__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ShapeContext_convex_shapes
{
public:
  Init_ShapeContext_convex_shapes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::msg::ShapeContext convex_shapes(::rmf_traffic_msgs::msg::ShapeContext::_convex_shapes_type arg)
  {
    msg_.convex_shapes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ShapeContext msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ShapeContext>()
{
  return rmf_traffic_msgs::msg::builder::Init_ShapeContext_convex_shapes();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE_CONTEXT__BUILDER_HPP_
