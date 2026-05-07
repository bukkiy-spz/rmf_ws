// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/Clean.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__CLEAN__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__CLEAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/clean__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_Clean_start_waypoint
{
public:
  Init_Clean_start_waypoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_task_msgs::msg::Clean start_waypoint(::rmf_task_msgs::msg::Clean::_start_waypoint_type arg)
  {
    msg_.start_waypoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::Clean msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::Clean>()
{
  return rmf_task_msgs::msg::builder::Init_Clean_start_waypoint();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__CLEAN__BUILDER_HPP_
