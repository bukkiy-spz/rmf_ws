// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_door_msgs:msg/DoorMode.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__BUILDER_HPP_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_door_msgs/msg/detail/door_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_door_msgs
{

namespace msg
{

namespace builder
{

class Init_DoorMode_value
{
public:
  Init_DoorMode_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_door_msgs::msg::DoorMode value(::rmf_door_msgs::msg::DoorMode::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_door_msgs::msg::DoorMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_door_msgs::msg::DoorMode>()
{
  return rmf_door_msgs::msg::builder::Init_DoorMode_value();
}

}  // namespace rmf_door_msgs

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__BUILDER_HPP_
