// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_obstacle_msgs:msg/BoundingBox3D.idl
// generated code does not contain a copyright notice

#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_obstacle_msgs
{

namespace msg
{

namespace builder
{

class Init_BoundingBox3D_size
{
public:
  explicit Init_BoundingBox3D_size(::rmf_obstacle_msgs::msg::BoundingBox3D & msg)
  : msg_(msg)
  {}
  ::rmf_obstacle_msgs::msg::BoundingBox3D size(::rmf_obstacle_msgs::msg::BoundingBox3D::_size_type arg)
  {
    msg_.size = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::BoundingBox3D msg_;
};

class Init_BoundingBox3D_center
{
public:
  Init_BoundingBox3D_center()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoundingBox3D_size center(::rmf_obstacle_msgs::msg::BoundingBox3D::_center_type arg)
  {
    msg_.center = std::move(arg);
    return Init_BoundingBox3D_size(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::BoundingBox3D msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_obstacle_msgs::msg::BoundingBox3D>()
{
  return rmf_obstacle_msgs::msg::builder::Init_BoundingBox3D_center();
}

}  // namespace rmf_obstacle_msgs

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__BOUNDING_BOX3_D__BUILDER_HPP_
