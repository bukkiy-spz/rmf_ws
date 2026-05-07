// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/Space.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/space__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_Space_pose
{
public:
  explicit Init_Space_pose(::rmf_traffic_msgs::msg::Space & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::Space pose(::rmf_traffic_msgs::msg::Space::_pose_type arg)
  {
    msg_.pose = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Space msg_;
};

class Init_Space_shape
{
public:
  Init_Space_shape()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Space_pose shape(::rmf_traffic_msgs::msg::Space::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_Space_pose(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Space msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::Space>()
{
  return rmf_traffic_msgs::msg::builder::Init_Space_shape();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SPACE__BUILDER_HPP_
