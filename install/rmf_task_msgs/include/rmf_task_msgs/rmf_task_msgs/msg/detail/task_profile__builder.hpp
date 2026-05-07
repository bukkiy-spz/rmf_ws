// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/TaskProfile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/task_profile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskProfile_description
{
public:
  explicit Init_TaskProfile_description(::rmf_task_msgs::msg::TaskProfile & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::TaskProfile description(::rmf_task_msgs::msg::TaskProfile::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskProfile msg_;
};

class Init_TaskProfile_submission_time
{
public:
  explicit Init_TaskProfile_submission_time(::rmf_task_msgs::msg::TaskProfile & msg)
  : msg_(msg)
  {}
  Init_TaskProfile_description submission_time(::rmf_task_msgs::msg::TaskProfile::_submission_time_type arg)
  {
    msg_.submission_time = std::move(arg);
    return Init_TaskProfile_description(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskProfile msg_;
};

class Init_TaskProfile_task_id
{
public:
  Init_TaskProfile_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskProfile_submission_time task_id(::rmf_task_msgs::msg::TaskProfile::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskProfile_submission_time(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskProfile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::TaskProfile>()
{
  return rmf_task_msgs::msg::builder::Init_TaskProfile_task_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_PROFILE__BUILDER_HPP_
