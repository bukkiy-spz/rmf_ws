// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:srv/ListSchedules.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/srv/detail/list_schedules__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_ListSchedules_Request_created_after
{
public:
  Init_ListSchedules_Request_created_after()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_scheduler_msgs::srv::ListSchedules_Request created_after(::rmf_scheduler_msgs::srv::ListSchedules_Request::_created_after_type arg)
  {
    msg_.created_after = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListSchedules_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::ListSchedules_Request>()
{
  return rmf_scheduler_msgs::srv::builder::Init_ListSchedules_Request_created_after();
}

}  // namespace rmf_scheduler_msgs


namespace rmf_scheduler_msgs
{

namespace srv
{

namespace builder
{

class Init_ListSchedules_Response_schedules
{
public:
  explicit Init_ListSchedules_Response_schedules(::rmf_scheduler_msgs::srv::ListSchedules_Response & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::srv::ListSchedules_Response schedules(::rmf_scheduler_msgs::srv::ListSchedules_Response::_schedules_type arg)
  {
    msg_.schedules = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListSchedules_Response msg_;
};

class Init_ListSchedules_Response_message
{
public:
  explicit Init_ListSchedules_Response_message(::rmf_scheduler_msgs::srv::ListSchedules_Response & msg)
  : msg_(msg)
  {}
  Init_ListSchedules_Response_schedules message(::rmf_scheduler_msgs::srv::ListSchedules_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_ListSchedules_Response_schedules(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListSchedules_Response msg_;
};

class Init_ListSchedules_Response_success
{
public:
  Init_ListSchedules_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ListSchedules_Response_message success(::rmf_scheduler_msgs::srv::ListSchedules_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ListSchedules_Response_message(msg_);
  }

private:
  ::rmf_scheduler_msgs::srv::ListSchedules_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::srv::ListSchedules_Response>()
{
  return rmf_scheduler_msgs::srv::builder::Init_ListSchedules_Response_success();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__LIST_SCHEDULES__BUILDER_HPP_
