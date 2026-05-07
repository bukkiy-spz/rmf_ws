// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ConvexShape.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/convex_shape__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ConvexShape_index
{
public:
  explicit Init_ConvexShape_index(::rmf_traffic_msgs::msg::ConvexShape & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ConvexShape index(::rmf_traffic_msgs::msg::ConvexShape::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ConvexShape msg_;
};

class Init_ConvexShape_type
{
public:
  Init_ConvexShape_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ConvexShape_index type(::rmf_traffic_msgs::msg::ConvexShape::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ConvexShape_index(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ConvexShape msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ConvexShape>()
{
  return rmf_traffic_msgs::msg::builder::Init_ConvexShape_type();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__CONVEX_SHAPE__BUILDER_HPP_
