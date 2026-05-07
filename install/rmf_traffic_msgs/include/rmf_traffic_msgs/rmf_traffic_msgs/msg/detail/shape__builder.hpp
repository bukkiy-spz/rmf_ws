// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/Shape.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/shape__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_Shape_index
{
public:
  explicit Init_Shape_index(::rmf_traffic_msgs::msg::Shape & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::Shape index(::rmf_traffic_msgs::msg::Shape::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Shape msg_;
};

class Init_Shape_type
{
public:
  Init_Shape_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Shape_index type(::rmf_traffic_msgs::msg::Shape::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Shape_index(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Shape msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::Shape>()
{
  return rmf_traffic_msgs::msg::builder::Init_Shape_type();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SHAPE__BUILDER_HPP_
