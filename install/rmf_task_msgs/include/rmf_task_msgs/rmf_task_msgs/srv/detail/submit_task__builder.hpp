// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:srv/SubmitTask.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__BUILDER_HPP_
#define RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/srv/detail/submit_task__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmitTask_Request_description
{
public:
  explicit Init_SubmitTask_Request_description(::rmf_task_msgs::srv::SubmitTask_Request & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::SubmitTask_Request description(::rmf_task_msgs::srv::SubmitTask_Request::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::SubmitTask_Request msg_;
};

class Init_SubmitTask_Request_requester
{
public:
  Init_SubmitTask_Request_requester()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmitTask_Request_description requester(::rmf_task_msgs::srv::SubmitTask_Request::_requester_type arg)
  {
    msg_.requester = std::move(arg);
    return Init_SubmitTask_Request_description(msg_);
  }

private:
  ::rmf_task_msgs::srv::SubmitTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::SubmitTask_Request>()
{
  return rmf_task_msgs::srv::builder::Init_SubmitTask_Request_requester();
}

}  // namespace rmf_task_msgs


namespace rmf_task_msgs
{

namespace srv
{

namespace builder
{

class Init_SubmitTask_Response_message
{
public:
  explicit Init_SubmitTask_Response_message(::rmf_task_msgs::srv::SubmitTask_Response & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::srv::SubmitTask_Response message(::rmf_task_msgs::srv::SubmitTask_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::srv::SubmitTask_Response msg_;
};

class Init_SubmitTask_Response_task_id
{
public:
  explicit Init_SubmitTask_Response_task_id(::rmf_task_msgs::srv::SubmitTask_Response & msg)
  : msg_(msg)
  {}
  Init_SubmitTask_Response_message task_id(::rmf_task_msgs::srv::SubmitTask_Response::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_SubmitTask_Response_message(msg_);
  }

private:
  ::rmf_task_msgs::srv::SubmitTask_Response msg_;
};

class Init_SubmitTask_Response_success
{
public:
  Init_SubmitTask_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SubmitTask_Response_task_id success(::rmf_task_msgs::srv::SubmitTask_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_SubmitTask_Response_task_id(msg_);
  }

private:
  ::rmf_task_msgs::srv::SubmitTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::srv::SubmitTask_Response>()
{
  return rmf_task_msgs::srv::builder::Init_SubmitTask_Response_success();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__SRV__DETAIL__SUBMIT_TASK__BUILDER_HPP_
