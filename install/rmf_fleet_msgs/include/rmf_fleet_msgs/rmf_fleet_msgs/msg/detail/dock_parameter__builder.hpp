// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/DockParameter.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/dock_parameter__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_DockParameter_path
{
public:
  explicit Init_DockParameter_path(::rmf_fleet_msgs::msg::DockParameter & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::DockParameter path(::rmf_fleet_msgs::msg::DockParameter::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DockParameter msg_;
};

class Init_DockParameter_finish
{
public:
  explicit Init_DockParameter_finish(::rmf_fleet_msgs::msg::DockParameter & msg)
  : msg_(msg)
  {}
  Init_DockParameter_path finish(::rmf_fleet_msgs::msg::DockParameter::_finish_type arg)
  {
    msg_.finish = std::move(arg);
    return Init_DockParameter_path(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DockParameter msg_;
};

class Init_DockParameter_start
{
public:
  Init_DockParameter_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DockParameter_finish start(::rmf_fleet_msgs::msg::DockParameter::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_DockParameter_finish(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DockParameter msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::DockParameter>()
{
  return rmf_fleet_msgs::msg::builder::Init_DockParameter_start();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK_PARAMETER__BUILDER_HPP_
