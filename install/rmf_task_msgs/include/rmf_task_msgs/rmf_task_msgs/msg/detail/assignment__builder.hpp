// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/Assignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/assignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_Assignment_expected_robot_name
{
public:
  explicit Init_Assignment_expected_robot_name(::rmf_task_msgs::msg::Assignment & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::Assignment expected_robot_name(::rmf_task_msgs::msg::Assignment::_expected_robot_name_type arg)
  {
    msg_.expected_robot_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::Assignment msg_;
};

class Init_Assignment_fleet_name
{
public:
  explicit Init_Assignment_fleet_name(::rmf_task_msgs::msg::Assignment & msg)
  : msg_(msg)
  {}
  Init_Assignment_expected_robot_name fleet_name(::rmf_task_msgs::msg::Assignment::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_Assignment_expected_robot_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Assignment msg_;
};

class Init_Assignment_is_assigned
{
public:
  Init_Assignment_is_assigned()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Assignment_fleet_name is_assigned(::rmf_task_msgs::msg::Assignment::_is_assigned_type arg)
  {
    msg_.is_assigned = std::move(arg);
    return Init_Assignment_fleet_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Assignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::Assignment>()
{
  return rmf_task_msgs::msg::builder::Init_Assignment_is_assigned();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__ASSIGNMENT__BUILDER_HPP_
