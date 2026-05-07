// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_lift_msgs:msg/LiftRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__BUILDER_HPP_
#define RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_lift_msgs/msg/detail/lift_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_lift_msgs
{

namespace msg
{

namespace builder
{

class Init_LiftRequest_door_state
{
public:
  explicit Init_LiftRequest_door_state(::rmf_lift_msgs::msg::LiftRequest & msg)
  : msg_(msg)
  {}
  ::rmf_lift_msgs::msg::LiftRequest door_state(::rmf_lift_msgs::msg::LiftRequest::_door_state_type arg)
  {
    msg_.door_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftRequest msg_;
};

class Init_LiftRequest_destination_floor
{
public:
  explicit Init_LiftRequest_destination_floor(::rmf_lift_msgs::msg::LiftRequest & msg)
  : msg_(msg)
  {}
  Init_LiftRequest_door_state destination_floor(::rmf_lift_msgs::msg::LiftRequest::_destination_floor_type arg)
  {
    msg_.destination_floor = std::move(arg);
    return Init_LiftRequest_door_state(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftRequest msg_;
};

class Init_LiftRequest_request_type
{
public:
  explicit Init_LiftRequest_request_type(::rmf_lift_msgs::msg::LiftRequest & msg)
  : msg_(msg)
  {}
  Init_LiftRequest_destination_floor request_type(::rmf_lift_msgs::msg::LiftRequest::_request_type_type arg)
  {
    msg_.request_type = std::move(arg);
    return Init_LiftRequest_destination_floor(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftRequest msg_;
};

class Init_LiftRequest_session_id
{
public:
  explicit Init_LiftRequest_session_id(::rmf_lift_msgs::msg::LiftRequest & msg)
  : msg_(msg)
  {}
  Init_LiftRequest_request_type session_id(::rmf_lift_msgs::msg::LiftRequest::_session_id_type arg)
  {
    msg_.session_id = std::move(arg);
    return Init_LiftRequest_request_type(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftRequest msg_;
};

class Init_LiftRequest_request_time
{
public:
  explicit Init_LiftRequest_request_time(::rmf_lift_msgs::msg::LiftRequest & msg)
  : msg_(msg)
  {}
  Init_LiftRequest_session_id request_time(::rmf_lift_msgs::msg::LiftRequest::_request_time_type arg)
  {
    msg_.request_time = std::move(arg);
    return Init_LiftRequest_session_id(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftRequest msg_;
};

class Init_LiftRequest_lift_name
{
public:
  Init_LiftRequest_lift_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LiftRequest_request_time lift_name(::rmf_lift_msgs::msg::LiftRequest::_lift_name_type arg)
  {
    msg_.lift_name = std::move(arg);
    return Init_LiftRequest_request_time(msg_);
  }

private:
  ::rmf_lift_msgs::msg::LiftRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_lift_msgs::msg::LiftRequest>()
{
  return rmf_lift_msgs::msg::builder::Init_LiftRequest_lift_name();
}

}  // namespace rmf_lift_msgs

#endif  // RMF_LIFT_MSGS__MSG__DETAIL__LIFT_REQUEST__BUILDER_HPP_
