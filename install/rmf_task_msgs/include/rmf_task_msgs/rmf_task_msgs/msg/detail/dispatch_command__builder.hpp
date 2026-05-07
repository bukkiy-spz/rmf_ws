// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/DispatchCommand.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/dispatch_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_DispatchCommand_type
{
public:
  explicit Init_DispatchCommand_type(::rmf_task_msgs::msg::DispatchCommand & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::DispatchCommand type(::rmf_task_msgs::msg::DispatchCommand::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchCommand msg_;
};

class Init_DispatchCommand_timestamp
{
public:
  explicit Init_DispatchCommand_timestamp(::rmf_task_msgs::msg::DispatchCommand & msg)
  : msg_(msg)
  {}
  Init_DispatchCommand_type timestamp(::rmf_task_msgs::msg::DispatchCommand::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_DispatchCommand_type(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchCommand msg_;
};

class Init_DispatchCommand_dispatch_id
{
public:
  explicit Init_DispatchCommand_dispatch_id(::rmf_task_msgs::msg::DispatchCommand & msg)
  : msg_(msg)
  {}
  Init_DispatchCommand_timestamp dispatch_id(::rmf_task_msgs::msg::DispatchCommand::_dispatch_id_type arg)
  {
    msg_.dispatch_id = std::move(arg);
    return Init_DispatchCommand_timestamp(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchCommand msg_;
};

class Init_DispatchCommand_task_id
{
public:
  explicit Init_DispatchCommand_task_id(::rmf_task_msgs::msg::DispatchCommand & msg)
  : msg_(msg)
  {}
  Init_DispatchCommand_dispatch_id task_id(::rmf_task_msgs::msg::DispatchCommand::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_DispatchCommand_dispatch_id(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchCommand msg_;
};

class Init_DispatchCommand_fleet_name
{
public:
  Init_DispatchCommand_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispatchCommand_task_id fleet_name(::rmf_task_msgs::msg::DispatchCommand::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_DispatchCommand_task_id(msg_);
  }

private:
  ::rmf_task_msgs::msg::DispatchCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::DispatchCommand>()
{
  return rmf_task_msgs::msg::builder::Init_DispatchCommand_fleet_name();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_COMMAND__BUILDER_HPP_
