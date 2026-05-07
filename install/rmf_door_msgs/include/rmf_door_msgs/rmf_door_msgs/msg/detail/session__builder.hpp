// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_door_msgs:msg/Session.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__SESSION__BUILDER_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__SESSION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_door_msgs/msg/detail/session__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_door_msgs
{

namespace msg
{

namespace builder
{

class Init_Session_requester_id
{
public:
  explicit Init_Session_requester_id(::rmf_door_msgs::msg::Session & msg)
  : msg_(msg)
  {}
  ::rmf_door_msgs::msg::Session requester_id(::rmf_door_msgs::msg::Session::_requester_id_type arg)
  {
    msg_.requester_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_door_msgs::msg::Session msg_;
};

class Init_Session_request_time
{
public:
  Init_Session_request_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Session_requester_id request_time(::rmf_door_msgs::msg::Session::_request_time_type arg)
  {
    msg_.request_time = std::move(arg);
    return Init_Session_requester_id(msg_);
  }

private:
  ::rmf_door_msgs::msg::Session msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_door_msgs::msg::Session>()
{
  return rmf_door_msgs::msg::builder::Init_Session_request_time();
}

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__SESSION__BUILDER_HPP_
