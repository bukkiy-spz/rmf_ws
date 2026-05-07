// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:srv/CancelTrigger.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/srv/detail/cancel_trigger__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelTrigger_Request_name
{
public:
  Init_CancelTrigger_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_scheduler_msgs::srv::CancelTrigger_Request name(::rmf_scheduler_msgs::srv::CancelTrigger_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CancelTrigger_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CancelTrigger_Request>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CancelTrigger_Request_name();
}

}  // namespace rmf_scheduler_msgs


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelTrigger_Response_message
{
public:
  explicit Init_CancelTrigger_Response_message(::rmf_scheduler_msgs::srv::CancelTrigger_Response & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::CancelTrigger_Response message(::rmf_scheduler_msgs::srv::CancelTrigger_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CancelTrigger_Response msg_;
};

class Init_CancelTrigger_Response_success
{
public:
  Init_CancelTrigger_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelTrigger_Response_message success(::rmf_scheduler_msgs::srv::CancelTrigger_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CancelTrigger_Response_message(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CancelTrigger_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CancelTrigger_Response>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CancelTrigger_Response_success();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__BUILDER_HPP_
