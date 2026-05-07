// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/Loop.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__LOOP__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__LOOP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/loop__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_Loop_finish_name
{
public:
  explicit Init_Loop_finish_name(::rmf_task_msgs::msg::Loop & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::Loop finish_name(::rmf_task_msgs::msg::Loop::_finish_name_type arg)
  {
    msg_.finish_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::Loop msg_;
};

class Init_Loop_start_name
{
public:
  explicit Init_Loop_start_name(::rmf_task_msgs::msg::Loop & msg)
  : msg_(msg)
  {}
  Init_Loop_finish_name start_name(::rmf_task_msgs::msg::Loop::_start_name_type arg)
  {
    msg_.start_name = std::move(arg);
    return Init_Loop_finish_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Loop msg_;
};

class Init_Loop_num_loops
{
public:
  explicit Init_Loop_num_loops(::rmf_task_msgs::msg::Loop & msg)
  : msg_(msg)
  {}
  Init_Loop_start_name num_loops(::rmf_task_msgs::msg::Loop::_num_loops_type arg)
  {
    msg_.num_loops = std::move(arg);
    return Init_Loop_start_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Loop msg_;
};

class Init_Loop_robot_type
{
public:
  explicit Init_Loop_robot_type(::rmf_task_msgs::msg::Loop & msg)
  : msg_(msg)
  {}
  Init_Loop_num_loops robot_type(::rmf_task_msgs::msg::Loop::_robot_type_type arg)
  {
    msg_.robot_type = std::move(arg);
    return Init_Loop_num_loops(msg_);
  }

private:
  ::rmf_task_msgs::msg::Loop msg_;
};

class Init_Loop_task_id
{
public:
  Init_Loop_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Loop_robot_type task_id(::rmf_task_msgs::msg::Loop::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_Loop_robot_type(msg_);
  }

private:
  ::rmf_task_msgs::msg::Loop msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::Loop>()
{
  return rmf_task_msgs::msg::builder::Init_Loop_task_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__LOOP__BUILDER_HPP_
