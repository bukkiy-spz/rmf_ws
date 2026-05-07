// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:msg/ScheduleState.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/msg/detail/schedule_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleState_status
{
public:
  explicit Init_ScheduleState_status(::rmf_scheduler_msgs::msg::ScheduleState & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::msg::ScheduleState status(::rmf_scheduler_msgs::msg::ScheduleState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::ScheduleState msg_;
};

class Init_ScheduleState_next_run
{
public:
  explicit Init_ScheduleState_next_run(::rmf_scheduler_msgs::msg::ScheduleState & msg)
  : msg_(msg)
  {}
  Init_ScheduleState_status next_run(::rmf_scheduler_msgs::msg::ScheduleState::_next_run_type arg)
  {
    msg_.next_run = std::move(arg);
    return Init_ScheduleState_status(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::ScheduleState msg_;
};

class Init_ScheduleState_last_ran
{
public:
  explicit Init_ScheduleState_last_ran(::rmf_scheduler_msgs::msg::ScheduleState & msg)
  : msg_(msg)
  {}
  Init_ScheduleState_next_run last_ran(::rmf_scheduler_msgs::msg::ScheduleState::_last_ran_type arg)
  {
    msg_.last_ran = std::move(arg);
    return Init_ScheduleState_next_run(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::ScheduleState msg_;
};

class Init_ScheduleState_last_modified
{
public:
  explicit Init_ScheduleState_last_modified(::rmf_scheduler_msgs::msg::ScheduleState & msg)
  : msg_(msg)
  {}
  Init_ScheduleState_last_ran last_modified(::rmf_scheduler_msgs::msg::ScheduleState::_last_modified_type arg)
  {
    msg_.last_modified = std::move(arg);
    return Init_ScheduleState_last_ran(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::ScheduleState msg_;
};

class Init_ScheduleState_name
{
public:
  Init_ScheduleState_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleState_last_modified name(::rmf_scheduler_msgs::msg::ScheduleState::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ScheduleState_last_modified(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::ScheduleState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::msg::ScheduleState>()
{
  return rmf_scheduler_msgs::msg::builder::Init_ScheduleState_name();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE_STATE__BUILDER_HPP_
