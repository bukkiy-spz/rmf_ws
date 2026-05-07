// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeProgress.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleChangeProgress_checkpoints
{
public:
  explicit Init_ScheduleChangeProgress_checkpoints(::rmf_traffic_msgs::msg::ScheduleChangeProgress & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleChangeProgress checkpoints(::rmf_traffic_msgs::msg::ScheduleChangeProgress::_checkpoints_type arg)
  {
    msg_.checkpoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeProgress msg_;
};

class Init_ScheduleChangeProgress_version
{
public:
  explicit Init_ScheduleChangeProgress_version(::rmf_traffic_msgs::msg::ScheduleChangeProgress & msg)
  : msg_(msg)
  {}
  Init_ScheduleChangeProgress_checkpoints version(::rmf_traffic_msgs::msg::ScheduleChangeProgress::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_ScheduleChangeProgress_checkpoints(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeProgress msg_;
};

class Init_ScheduleChangeProgress_has_progress
{
public:
  Init_ScheduleChangeProgress_has_progress()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleChangeProgress_version has_progress(::rmf_traffic_msgs::msg::ScheduleChangeProgress::_has_progress_type arg)
  {
    msg_.has_progress = std::move(arg);
    return Init_ScheduleChangeProgress_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeProgress msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleChangeProgress>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleChangeProgress_has_progress();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_PROGRESS__BUILDER_HPP_
