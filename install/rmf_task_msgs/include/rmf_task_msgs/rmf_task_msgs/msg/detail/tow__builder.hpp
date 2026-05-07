// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/Tow.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TOW__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__TOW__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/tow__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_Tow_dropoff_place_name
{
public:
  explicit Init_Tow_dropoff_place_name(::rmf_task_msgs::msg::Tow & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::Tow dropoff_place_name(::rmf_task_msgs::msg::Tow::_dropoff_place_name_type arg)
  {
    msg_.dropoff_place_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::Tow msg_;
};

class Init_Tow_is_dropoff_place_known
{
public:
  explicit Init_Tow_is_dropoff_place_known(::rmf_task_msgs::msg::Tow & msg)
  : msg_(msg)
  {}
  Init_Tow_dropoff_place_name is_dropoff_place_known(::rmf_task_msgs::msg::Tow::_is_dropoff_place_known_type arg)
  {
    msg_.is_dropoff_place_known = std::move(arg);
    return Init_Tow_dropoff_place_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Tow msg_;
};

class Init_Tow_pickup_place_name
{
public:
  explicit Init_Tow_pickup_place_name(::rmf_task_msgs::msg::Tow & msg)
  : msg_(msg)
  {}
  Init_Tow_is_dropoff_place_known pickup_place_name(::rmf_task_msgs::msg::Tow::_pickup_place_name_type arg)
  {
    msg_.pickup_place_name = std::move(arg);
    return Init_Tow_is_dropoff_place_known(msg_);
  }

private:
  ::rmf_task_msgs::msg::Tow msg_;
};

class Init_Tow_object_id
{
public:
  explicit Init_Tow_object_id(::rmf_task_msgs::msg::Tow & msg)
  : msg_(msg)
  {}
  Init_Tow_pickup_place_name object_id(::rmf_task_msgs::msg::Tow::_object_id_type arg)
  {
    msg_.object_id = std::move(arg);
    return Init_Tow_pickup_place_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Tow msg_;
};

class Init_Tow_is_object_id_known
{
public:
  explicit Init_Tow_is_object_id_known(::rmf_task_msgs::msg::Tow & msg)
  : msg_(msg)
  {}
  Init_Tow_object_id is_object_id_known(::rmf_task_msgs::msg::Tow::_is_object_id_known_type arg)
  {
    msg_.is_object_id_known = std::move(arg);
    return Init_Tow_object_id(msg_);
  }

private:
  ::rmf_task_msgs::msg::Tow msg_;
};

class Init_Tow_object_type
{
public:
  explicit Init_Tow_object_type(::rmf_task_msgs::msg::Tow & msg)
  : msg_(msg)
  {}
  Init_Tow_is_object_id_known object_type(::rmf_task_msgs::msg::Tow::_object_type_type arg)
  {
    msg_.object_type = std::move(arg);
    return Init_Tow_is_object_id_known(msg_);
  }

private:
  ::rmf_task_msgs::msg::Tow msg_;
};

class Init_Tow_task_id
{
public:
  Init_Tow_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tow_object_type task_id(::rmf_task_msgs::msg::Tow::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_Tow_object_type(msg_);
  }

private:
  ::rmf_task_msgs::msg::Tow msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::Tow>()
{
  return rmf_task_msgs::msg::builder::Init_Tow_task_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TOW__BUILDER_HPP_
