// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:srv/ListTriggers.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_TRIGGERS__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_TRIGGERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/srv/detail/list_triggers__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_ListTriggers_Request_created_after
{
public:
  Init_ListTriggers_Request_created_after()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_scheduler_msgs::srv::ListTriggers_Request created_after(::rmf_scheduler_msgs::srv::ListTriggers_Request::_created_after_type arg)
  {
    msg_.created_after = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListTriggers_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::ListTriggers_Request>()
{
  return rmf_scheduler_msgs::srv::builder::Init_ListTriggers_Request_created_after();
}

}  // namespace rmf_scheduler_msgs


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_ListTriggers_Response_triggers
{
public:
  explicit Init_ListTriggers_Response_triggers(::rmf_scheduler_msgs::srv::ListTriggers_Response & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::ListTriggers_Response triggers(::rmf_scheduler_msgs::srv::ListTriggers_Response::_triggers_type arg)
  {
    msg_.triggers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListTriggers_Response msg_;
};

class Init_ListTriggers_Response_message
{
public:
  explicit Init_ListTriggers_Response_message(::rmf_scheduler_msgs::srv::ListTriggers_Response & msg)
  : msg_(msg)
  {}
  Init_ListTriggers_Response_triggers message(::rmf_scheduler_msgs::srv::ListTriggers_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ListTriggers_Response_triggers(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListTriggers_Response msg_;
};

class Init_ListTriggers_Response_success
{
public:
  Init_ListTriggers_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListTriggers_Response_message success(::rmf_scheduler_msgs::srv::ListTriggers_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ListTriggers_Response_message(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListTriggers_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::ListTriggers_Response>()
{
  return rmf_scheduler_msgs::srv::builder::Init_ListTriggers_Response_success();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_TRIGGERS__BUILDER_HPP_
