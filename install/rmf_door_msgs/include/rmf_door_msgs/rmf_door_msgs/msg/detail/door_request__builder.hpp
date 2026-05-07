// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_door_msgs:msg/DoorRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__BUILDER_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_door_msgs/msg/detail/door_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_door_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorRequest_requested_mode
{
public:
  explicit Init_DoorRequest_requested_mode(::rmf_door_msgs::msg::DoorRequest & msg)
  : msg_(msg)
  {}
  ::rmf_door_msgs::msg::DoorRequest requested_mode(::rmf_door_msgs::msg::DoorRequest::_requested_mode_type arg)
  {
    msg_.requested_mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorRequest msg_;
};

class Init_DoorRequest_door_name
{
public:
  explicit Init_DoorRequest_door_name(::rmf_door_msgs::msg::DoorRequest & msg)
  : msg_(msg)
  {}
  Init_DoorRequest_requested_mode door_name(::rmf_door_msgs::msg::DoorRequest::_door_name_type arg)
  {
    msg_.door_name = std::move(arg);
    return Init_DoorRequest_requested_mode(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorRequest msg_;
};

class Init_DoorRequest_requester_id
{
public:
  explicit Init_DoorRequest_requester_id(::rmf_door_msgs::msg::DoorRequest & msg)
  : msg_(msg)
  {}
  Init_DoorRequest_door_name requester_id(::rmf_door_msgs::msg::DoorRequest::_requester_id_type arg)
  {
    msg_.requester_id = std::move(arg);
    return Init_DoorRequest_door_name(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorRequest msg_;
};

class Init_DoorRequest_request_time
{
public:
  Init_DoorRequest_request_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DoorRequest_requester_id request_time(::rmf_door_msgs::msg::DoorRequest::_request_time_type arg)
  {
    msg_.request_time = std::move(arg);
    return Init_DoorRequest_requester_id(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_door_msgs::msg::DoorRequest>()
{
  return rmf_door_msgs::msg::builder::Init_DoorRequest_request_time();
}

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_REQUEST__BUILDER_HPP_
