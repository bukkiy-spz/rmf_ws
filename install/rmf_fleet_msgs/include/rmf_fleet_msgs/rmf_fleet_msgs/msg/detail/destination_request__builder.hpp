// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/DestinationRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/destination_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_DestinationRequest_task_id
{
public:
  explicit Init_DestinationRequest_task_id(::rmf_fleet_msgs::msg::DestinationRequest & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::DestinationRequest task_id(::rmf_fleet_msgs::msg::DestinationRequest::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DestinationRequest msg_;
};

class Init_DestinationRequest_destination
{
public:
  explicit Init_DestinationRequest_destination(::rmf_fleet_msgs::msg::DestinationRequest & msg)
  : msg_(msg)
  {}
  Init_DestinationRequest_task_id destination(::rmf_fleet_msgs::msg::DestinationRequest::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_DestinationRequest_task_id(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DestinationRequest msg_;
};

class Init_DestinationRequest_robot_name
{
public:
  explicit Init_DestinationRequest_robot_name(::rmf_fleet_msgs::msg::DestinationRequest & msg)
  : msg_(msg)
  {}
  Init_DestinationRequest_destination robot_name(::rmf_fleet_msgs::msg::DestinationRequest::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_DestinationRequest_destination(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DestinationRequest msg_;
};

class Init_DestinationRequest_fleet_name
{
public:
  Init_DestinationRequest_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DestinationRequest_robot_name fleet_name(::rmf_fleet_msgs::msg::DestinationRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_DestinationRequest_robot_name(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DestinationRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::DestinationRequest>()
{
  return rmf_fleet_msgs::msg::builder::Init_DestinationRequest_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DESTINATION_REQUEST__BUILDER_HPP_
