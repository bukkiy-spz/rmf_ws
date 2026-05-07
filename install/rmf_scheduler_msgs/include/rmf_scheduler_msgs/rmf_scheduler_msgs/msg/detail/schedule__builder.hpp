// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_scheduler_msgs:msg/Schedule.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE__BUILDER_HPP_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_scheduler_msgs/msg/detail/schedule__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_scheduler_msgs
{

namespace msg
{

namespace builder
{

class Init_Schedule_payload
{
public:
  explicit Init_Schedule_payload(::rmf_scheduler_msgs::msg::Schedule & msg)
  : msg_(msg)
  {}
  ::rmf_scheduler_msgs::msg::Schedule payload(::rmf_scheduler_msgs::msg::Schedule::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Schedule msg_;
};

class Init_Schedule_group
{
public:
  explicit Init_Schedule_group(::rmf_scheduler_msgs::msg::Schedule & msg)
  : msg_(msg)
  {}
  Init_Schedule_payload group(::rmf_scheduler_msgs::msg::Schedule::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_Schedule_payload(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Schedule msg_;
};

class Init_Schedule_finish_at
{
public:
  explicit Init_Schedule_finish_at(::rmf_scheduler_msgs::msg::Schedule & msg)
  : msg_(msg)
  {}
  Init_Schedule_group finish_at(::rmf_scheduler_msgs::msg::Schedule::_finish_at_type arg)
  {
    msg_.finish_at = std::move(arg);
    return Init_Schedule_group(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Schedule msg_;
};

class Init_Schedule_start_at
{
public:
  explicit Init_Schedule_start_at(::rmf_scheduler_msgs::msg::Schedule & msg)
  : msg_(msg)
  {}
  Init_Schedule_finish_at start_at(::rmf_scheduler_msgs::msg::Schedule::_start_at_type arg)
  {
    msg_.start_at = std::move(arg);
    return Init_Schedule_finish_at(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Schedule msg_;
};

class Init_Schedule_schedule
{
public:
  explicit Init_Schedule_schedule(::rmf_scheduler_msgs::msg::Schedule & msg)
  : msg_(msg)
  {}
  Init_Schedule_start_at schedule(::rmf_scheduler_msgs::msg::Schedule::_schedule_type arg)
  {
    msg_.schedule = std::move(arg);
    return Init_Schedule_start_at(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Schedule msg_;
};

class Init_Schedule_created_at
{
public:
  explicit Init_Schedule_created_at(::rmf_scheduler_msgs::msg::Schedule & msg)
  : msg_(msg)
  {}
  Init_Schedule_schedule created_at(::rmf_scheduler_msgs::msg::Schedule::_created_at_type arg)
  {
    msg_.created_at = std::move(arg);
    return Init_Schedule_schedule(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Schedule msg_;
};

class Init_Schedule_name
{
public:
  Init_Schedule_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Schedule_created_at name(::rmf_scheduler_msgs::msg::Schedule::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Schedule_created_at(msg_);
  }

private:
  ::rmf_scheduler_msgs::msg::Schedule msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_scheduler_msgs::msg::Schedule>()
{
  return rmf_scheduler_msgs::msg::builder::Init_Schedule_name();
}

}  // namespace rmf_scheduler_msgs

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__SCHEDULE__BUILDER_HPP_
