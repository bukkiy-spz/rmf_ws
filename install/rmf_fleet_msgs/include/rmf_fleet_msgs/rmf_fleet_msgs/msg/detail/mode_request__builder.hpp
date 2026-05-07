// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/ModeRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MODE_REQUEST__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MODE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/mode_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_ModeRequest_parameters
{
public:
  explicit Init_ModeRequest_parameters(::rmf_fleet_msgs::msg::ModeRequest & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::ModeRequest parameters(::rmf_fleet_msgs::msg::ModeRequest::_parameters_type arg)
  {
    msg_.parameters = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ModeRequest msg_;
};

class Init_ModeRequest_task_id
{
public:
  explicit Init_ModeRequest_task_id(::rmf_fleet_msgs::msg::ModeRequest & msg)
  : msg_(msg)
  {}
  Init_ModeRequest_parameters task_id(::rmf_fleet_msgs::msg::ModeRequest::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_ModeRequest_parameters(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ModeRequest msg_;
};

class Init_ModeRequest_mode
{
public:
  explicit Init_ModeRequest_mode(::rmf_fleet_msgs::msg::ModeRequest & msg)
  : msg_(msg)
  {}
  Init_ModeRequest_task_id mode(::rmf_fleet_msgs::msg::ModeRequest::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_ModeRequest_task_id(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ModeRequest msg_;
};

class Init_ModeRequest_robot_name
{
public:
  explicit Init_ModeRequest_robot_name(::rmf_fleet_msgs::msg::ModeRequest & msg)
  : msg_(msg)
  {}
  Init_ModeRequest_mode robot_name(::rmf_fleet_msgs::msg::ModeRequest::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_ModeRequest_mode(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ModeRequest msg_;
};

class Init_ModeRequest_fleet_name
{
public:
  Init_ModeRequest_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeRequest_robot_name fleet_name(::rmf_fleet_msgs::msg::ModeRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_ModeRequest_robot_name(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ModeRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::ModeRequest>()
{
  return rmf_fleet_msgs::msg::builder::Init_ModeRequest_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MODE_REQUEST__BUILDER_HPP_
