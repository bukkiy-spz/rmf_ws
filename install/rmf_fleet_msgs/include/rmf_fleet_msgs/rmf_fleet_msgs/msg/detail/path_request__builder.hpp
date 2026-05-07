// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/PathRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__PATH_REQUEST__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__PATH_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/path_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_PathRequest_task_id
{
public:
  explicit Init_PathRequest_task_id(::rmf_fleet_msgs::msg::PathRequest & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::PathRequest task_id(::rmf_fleet_msgs::msg::PathRequest::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PathRequest msg_;
};

class Init_PathRequest_path
{
public:
  explicit Init_PathRequest_path(::rmf_fleet_msgs::msg::PathRequest & msg)
  : msg_(msg)
  {}
  Init_PathRequest_task_id path(::rmf_fleet_msgs::msg::PathRequest::_path_type arg)
  {
    msg_.path = std::move(arg);
    return Init_PathRequest_task_id(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PathRequest msg_;
};

class Init_PathRequest_robot_name
{
public:
  explicit Init_PathRequest_robot_name(::rmf_fleet_msgs::msg::PathRequest & msg)
  : msg_(msg)
  {}
  Init_PathRequest_path robot_name(::rmf_fleet_msgs::msg::PathRequest::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_PathRequest_path(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PathRequest msg_;
};

class Init_PathRequest_fleet_name
{
public:
  Init_PathRequest_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PathRequest_robot_name fleet_name(::rmf_fleet_msgs::msg::PathRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_PathRequest_robot_name(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PathRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::PathRequest>()
{
  return rmf_fleet_msgs::msg::builder::Init_PathRequest_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__PATH_REQUEST__BUILDER_HPP_
