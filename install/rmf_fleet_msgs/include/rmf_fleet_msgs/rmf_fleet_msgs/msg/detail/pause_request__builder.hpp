// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/PauseRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/pause_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_PauseRequest_at_checkpoint
{
public:
  explicit Init_PauseRequest_at_checkpoint(::rmf_fleet_msgs::msg::PauseRequest & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::PauseRequest at_checkpoint(::rmf_fleet_msgs::msg::PauseRequest::_at_checkpoint_type arg)
  {
    msg_.at_checkpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PauseRequest msg_;
};

class Init_PauseRequest_type
{
public:
  explicit Init_PauseRequest_type(::rmf_fleet_msgs::msg::PauseRequest & msg)
  : msg_(msg)
  {}
  Init_PauseRequest_at_checkpoint type(::rmf_fleet_msgs::msg::PauseRequest::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_PauseRequest_at_checkpoint(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PauseRequest msg_;
};

class Init_PauseRequest_mode_request_id
{
public:
  explicit Init_PauseRequest_mode_request_id(::rmf_fleet_msgs::msg::PauseRequest & msg)
  : msg_(msg)
  {}
  Init_PauseRequest_type mode_request_id(::rmf_fleet_msgs::msg::PauseRequest::_mode_request_id_type arg)
  {
    msg_.mode_request_id = std::move(arg);
    return Init_PauseRequest_type(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PauseRequest msg_;
};

class Init_PauseRequest_robot_name
{
public:
  explicit Init_PauseRequest_robot_name(::rmf_fleet_msgs::msg::PauseRequest & msg)
  : msg_(msg)
  {}
  Init_PauseRequest_mode_request_id robot_name(::rmf_fleet_msgs::msg::PauseRequest::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_PauseRequest_mode_request_id(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PauseRequest msg_;
};

class Init_PauseRequest_fleet_name
{
public:
  Init_PauseRequest_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PauseRequest_robot_name fleet_name(::rmf_fleet_msgs::msg::PauseRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_PauseRequest_robot_name(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::PauseRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::PauseRequest>()
{
  return rmf_fleet_msgs::msg::builder::Init_PauseRequest_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__PAUSE_REQUEST__BUILDER_HPP_
