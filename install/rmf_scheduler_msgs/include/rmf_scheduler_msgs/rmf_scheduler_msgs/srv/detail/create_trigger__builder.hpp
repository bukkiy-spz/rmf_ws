// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:srv/CreateTrigger.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_TRIGGER__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/srv/detail/create_trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateTrigger_Request_trigger
{
public:
  Init_CreateTrigger_Request_trigger()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_scheduler_msgs::srv::CreateTrigger_Request trigger(::rmf_scheduler_msgs::srv::CreateTrigger_Request::_trigger_type arg)
  {
    msg_.trigger = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateTrigger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CreateTrigger_Request>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CreateTrigger_Request_trigger();
}

}  // namespace rmf_scheduler_msgs


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CreateTrigger_Response_message
{
public:
  explicit Init_CreateTrigger_Response_message(::rmf_scheduler_msgs::srv::CreateTrigger_Response & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::CreateTrigger_Response message(::rmf_scheduler_msgs::srv::CreateTrigger_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateTrigger_Response msg_;
};

class Init_CreateTrigger_Response_success
{
public:
  Init_CreateTrigger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CreateTrigger_Response_message success(::rmf_scheduler_msgs::srv::CreateTrigger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CreateTrigger_Response_message(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CreateTrigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CreateTrigger_Response>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CreateTrigger_Response_success();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CREATE_TRIGGER__BUILDER_HPP_
