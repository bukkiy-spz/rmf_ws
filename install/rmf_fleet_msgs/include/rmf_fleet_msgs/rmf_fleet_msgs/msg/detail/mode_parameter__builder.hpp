// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/ModeParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MODE_PARAMETER__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MODE_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/mode_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_ModeParameter_value
{
public:
  explicit Init_ModeParameter_value(::rmf_fleet_msgs::msg::ModeParameter & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::ModeParameter value(::rmf_fleet_msgs::msg::ModeParameter::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ModeParameter msg_;
};

class Init_ModeParameter_name
{
public:
  Init_ModeParameter_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ModeParameter_value name(::rmf_fleet_msgs::msg::ModeParameter::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ModeParameter_value(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::ModeParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::ModeParameter>()
{
  return rmf_fleet_msgs::msg::builder::Init_ModeParameter_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MODE_PARAMETER__BUILDER_HPP_
