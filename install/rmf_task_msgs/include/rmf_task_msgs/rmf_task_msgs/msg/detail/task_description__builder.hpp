// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/task_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_TaskDescription_clean
{
public:
  explicit Init_TaskDescription_clean(::rmf_task_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::TaskDescription clean(::rmf_task_msgs::msg::TaskDescription::_clean_type arg)
  {
    msg_.clean = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_delivery
{
public:
  explicit Init_TaskDescription_delivery(::rmf_task_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  Init_TaskDescription_clean delivery(::rmf_task_msgs::msg::TaskDescription::_delivery_type arg)
  {
    msg_.delivery = std::move(arg);
    return Init_TaskDescription_clean(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_loop
{
public:
  explicit Init_TaskDescription_loop(::rmf_task_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  Init_TaskDescription_delivery loop(::rmf_task_msgs::msg::TaskDescription::_loop_type arg)
  {
    msg_.loop = std::move(arg);
    return Init_TaskDescription_delivery(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_station
{
public:
  explicit Init_TaskDescription_station(::rmf_task_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  Init_TaskDescription_loop station(::rmf_task_msgs::msg::TaskDescription::_station_type arg)
  {
    msg_.station = std::move(arg);
    return Init_TaskDescription_loop(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_task_type
{
public:
  explicit Init_TaskDescription_task_type(::rmf_task_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  Init_TaskDescription_station task_type(::rmf_task_msgs::msg::TaskDescription::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return Init_TaskDescription_station(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_priority
{
public:
  explicit Init_TaskDescription_priority(::rmf_task_msgs::msg::TaskDescription & msg)
  : msg_(msg)
  {}
  Init_TaskDescription_task_type priority(::rmf_task_msgs::msg::TaskDescription::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_TaskDescription_task_type(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskDescription msg_;
};

class Init_TaskDescription_start_time
{
public:
  Init_TaskDescription_start_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TaskDescription_priority start_time(::rmf_task_msgs::msg::TaskDescription::_start_time_type arg)
  {
    msg_.start_time = std::move(arg);
    return Init_TaskDescription_priority(msg_);
  }

private:
  ::rmf_task_msgs::msg::TaskDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::TaskDescription>()
{
  return rmf_task_msgs::msg::builder::Init_TaskDescription_start_time();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_DESCRIPTION__BUILDER_HPP_
