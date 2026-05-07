// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/TaskSummary.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/task_summary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskSummary_robot_name
{
public:
  explicit Init_TaskSummary_robot_name(::rmf_task_msgs::msg::TaskSummary & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::TaskSummary robot_name(::rmf_task_msgs::msg::TaskSummary::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

class Init_TaskSummary_end_time
{
public:
  explicit Init_TaskSummary_end_time(::rmf_task_msgs::msg::TaskSummary & msg)
  : msg_(msg)
  {}
  Init_TaskSummary_robot_name end_time(::rmf_task_msgs::msg::TaskSummary::_end_time_type arg)
  {
    msg_.end_time = std::move(arg);
    return Init_TaskSummary_robot_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

class Init_TaskSummary_start_time
{
public:
  explicit Init_TaskSummary_start_time(::rmf_task_msgs::msg::TaskSummary & msg)
  : msg_(msg)
  {}
  Init_TaskSummary_end_time start_time(::rmf_task_msgs::msg::TaskSummary::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_TaskSummary_end_time(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

class Init_TaskSummary_submission_time
{
public:
  explicit Init_TaskSummary_submission_time(::rmf_task_msgs::msg::TaskSummary & msg)
  : msg_(msg)
  {}
  Init_TaskSummary_start_time submission_time(::rmf_task_msgs::msg::TaskSummary::_submission_time_type arg)
  {
    msg_.submission_time = std::move(arg);
    return Init_TaskSummary_start_time(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

class Init_TaskSummary_status
{
public:
  explicit Init_TaskSummary_status(::rmf_task_msgs::msg::TaskSummary & msg)
  : msg_(msg)
  {}
  Init_TaskSummary_submission_time status(::rmf_task_msgs::msg::TaskSummary::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_TaskSummary_submission_time(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

class Init_TaskSummary_state
{
public:
  explicit Init_TaskSummary_state(::rmf_task_msgs::msg::TaskSummary & msg)
  : msg_(msg)
  {}
  Init_TaskSummary_status state(::rmf_task_msgs::msg::TaskSummary::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_TaskSummary_status(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

class Init_TaskSummary_task_profile
{
public:
  explicit Init_TaskSummary_task_profile(::rmf_task_msgs::msg::TaskSummary & msg)
  : msg_(msg)
  {}
  Init_TaskSummary_state task_profile(::rmf_task_msgs::msg::TaskSummary::_task_profile_type arg)
  {
    msg_.task_profile = std::move(arg);
    return Init_TaskSummary_state(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

class Init_TaskSummary_task_id
{
public:
  explicit Init_TaskSummary_task_id(::rmf_task_msgs::msg::TaskSummary & msg)
  : msg_(msg)
  {}
  Init_TaskSummary_task_profile task_id(::rmf_task_msgs::msg::TaskSummary::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_TaskSummary_task_profile(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

class Init_TaskSummary_fleet_name
{
public:
  Init_TaskSummary_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskSummary_task_id fleet_name(::rmf_task_msgs::msg::TaskSummary::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_TaskSummary_task_id(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskSummary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::TaskSummary>()
{
  return rmf_task_msgs::msg::builder::Init_TaskSummary_fleet_name();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_SUMMARY__BUILDER_HPP_
