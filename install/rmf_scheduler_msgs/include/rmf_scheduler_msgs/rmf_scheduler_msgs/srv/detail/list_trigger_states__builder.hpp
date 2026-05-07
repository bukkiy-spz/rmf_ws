// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:srv/ListTriggerStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_TRIGGER_STATES__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_TRIGGER_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/srv/detail/list_trigger_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_ListTriggerStates_Request_modified_after
{
public:
  Init_ListTriggerStates_Request_modified_after()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_scheduler_msgs::srv::ListTriggerStates_Request modified_after(::rmf_scheduler_msgs::srv::ListTriggerStates_Request::_modified_after_type arg)
  {
    msg_.modified_after = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListTriggerStates_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::ListTriggerStates_Request>()
{
  return rmf_scheduler_msgs::srv::builder::Init_ListTriggerStates_Request_modified_after();
}

}  // namespace rmf_scheduler_msgs


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_ListTriggerStates_Response_triggers
{
public:
  explicit Init_ListTriggerStates_Response_triggers(::rmf_scheduler_msgs::srv::ListTriggerStates_Response & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::ListTriggerStates_Response triggers(::rmf_scheduler_msgs::srv::ListTriggerStates_Response::_triggers_type arg)
  {
    msg_.triggers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListTriggerStates_Response msg_;
};

class Init_ListTriggerStates_Response_message
{
public:
  explicit Init_ListTriggerStates_Response_message(::rmf_scheduler_msgs::srv::ListTriggerStates_Response & msg)
  : msg_(msg)
  {}
  Init_ListTriggerStates_Response_triggers message(::rmf_scheduler_msgs::srv::ListTriggerStates_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ListTriggerStates_Response_triggers(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListTriggerStates_Response msg_;
};

class Init_ListTriggerStates_Response_success
{
public:
  Init_ListTriggerStates_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListTriggerStates_Response_message success(::rmf_scheduler_msgs::srv::ListTriggerStates_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ListTriggerStates_Response_message(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListTriggerStates_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::ListTriggerStates_Response>()
{
  return rmf_scheduler_msgs::srv::builder::Init_ListTriggerStates_Response_success();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_TRIGGER_STATES__BUILDER_HPP_
