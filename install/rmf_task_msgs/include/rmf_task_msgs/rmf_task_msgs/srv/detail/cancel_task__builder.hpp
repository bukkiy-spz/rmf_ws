// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:srv/CancelTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__CANCEL_TASK__BUILDER_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__CANCEL_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/srv/detail/cancel_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelTask_Request_task_id
{
public:
  explicit Init_CancelTask_Request_task_id(::rmf_task_msgs::srv::CancelTask_Request & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::CancelTask_Request task_id(::rmf_task_msgs::srv::CancelTask_Request::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::CancelTask_Request msg_;
};

class Init_CancelTask_Request_requester
{
public:
  Init_CancelTask_Request_requester()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelTask_Request_task_id requester(::rmf_task_msgs::srv::CancelTask_Request::_requester_type arg)
  {
    msg_.requester = std::move(arg);
    return Init_CancelTask_Request_task_id(msg_);
  }

private:
  ::rmf_task_msgs::srv::CancelTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::CancelTask_Request>()
{
  return rmf_task_msgs::srv::builder::Init_CancelTask_Request_requester();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelTask_Response_message
{
public:
  explicit Init_CancelTask_Response_message(::rmf_task_msgs::srv::CancelTask_Response & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::CancelTask_Response message(::rmf_task_msgs::srv::CancelTask_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::CancelTask_Response msg_;
};

class Init_CancelTask_Response_success
{
public:
  Init_CancelTask_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelTask_Response_message success(::rmf_task_msgs::srv::CancelTask_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CancelTask_Response_message(msg_);
  }

private:
  ::rmf_task_msgs::srv::CancelTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::CancelTask_Response>()
{
  return rmf_task_msgs::srv::builder::Init_CancelTask_Response_success();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__CANCEL_TASK__BUILDER_HPP_
