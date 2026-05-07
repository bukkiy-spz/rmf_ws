// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ConvexShapeContext.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE_CONTEXT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE_CONTEXT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/convex_shape_context__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ConvexShapeContext_circles
{
public:
  Init_ConvexShapeContext_circles()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::msg::ConvexShapeContext circles(::rmf_traffic_msgs::msg::ConvexShapeContext::_circles_type arg)
  {
    msg_.circles = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ConvexShapeContext msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ConvexShapeContext>()
{
  return rmf_traffic_msgs::msg::builder::Init_ConvexShapeContext_circles();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE_CONTEXT__BUILDER_HPP_
