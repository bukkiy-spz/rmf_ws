// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/Station.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__STATION__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__STATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/station__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_Station_place_name
{
public:
  explicit Init_Station_place_name(::rmf_task_msgs::msg::Station & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::Station place_name(::rmf_task_msgs::msg::Station::_place_name_type arg)
  {
    msg_.place_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::Station msg_;
};

class Init_Station_robot_type
{
public:
  explicit Init_Station_robot_type(::rmf_task_msgs::msg::Station & msg)
  : msg_(msg)
  {}
  Init_Station_place_name robot_type(::rmf_task_msgs::msg::Station::_robot_type_type arg)
  {
    msg_.robot_type = std::move(arg);
    return Init_Station_place_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Station msg_;
};

class Init_Station_task_id
{
public:
  Init_Station_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Station_robot_type task_id(::rmf_task_msgs::msg::Station::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_Station_robot_type(msg_);
  }

private:
  ::rmf_task_msgs::msg::Station msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::Station>()
{
  return rmf_task_msgs::msg::builder::Init_Station_task_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__STATION__BUILDER_HPP_
