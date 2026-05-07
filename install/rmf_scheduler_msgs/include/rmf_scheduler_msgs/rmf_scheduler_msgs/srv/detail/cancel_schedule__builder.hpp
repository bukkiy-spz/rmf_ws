// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:srv/CancelSchedule.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_SCHEDULE__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_SCHEDULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/srv/detail/cancel_schedule__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelSchedule_Request_finished
{
public:
  explicit Init_CancelSchedule_Request_finished(::rmf_scheduler_msgs::srv::CancelSchedule_Request & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::CancelSchedule_Request finished(::rmf_scheduler_msgs::srv::CancelSchedule_Request::_finished_type arg)
  {
    msg_.finished = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CancelSchedule_Request msg_;
};

class Init_CancelSchedule_Request_name
{
public:
  Init_CancelSchedule_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelSchedule_Request_finished name(::rmf_scheduler_msgs::srv::CancelSchedule_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_CancelSchedule_Request_finished(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CancelSchedule_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CancelSchedule_Request>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CancelSchedule_Request_name();
}

}  // namespace rmf_scheduler_msgs


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_CancelSchedule_Response_message
{
public:
  explicit Init_CancelSchedule_Response_message(::rmf_scheduler_msgs::srv::CancelSchedule_Response & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::CancelSchedule_Response message(::rmf_scheduler_msgs::srv::CancelSchedule_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CancelSchedule_Response msg_;
};

class Init_CancelSchedule_Response_success
{
public:
  Init_CancelSchedule_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CancelSchedule_Response_message success(::rmf_scheduler_msgs::srv::CancelSchedule_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_CancelSchedule_Response_message(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::CancelSchedule_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::CancelSchedule_Response>()
{
  return rmf_scheduler_msgs::srv::builder::Init_CancelSchedule_Response_success();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_SCHEDULE__BUILDER_HPP_
