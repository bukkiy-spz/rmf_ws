// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/Dock.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/dock__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_Dock_params
{
public:
  explicit Init_Dock_params(::rmf_fleet_msgs::msg::Dock & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::Dock params(::rmf_fleet_msgs::msg::Dock::_params_type arg)
  {
    msg_.params = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Dock msg_;
};

class Init_Dock_fleet_name
{
public:
  Init_Dock_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Dock_params fleet_name(::rmf_fleet_msgs::msg::Dock::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_Dock_params(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Dock msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::Dock>()
{
  return rmf_fleet_msgs::msg::builder::Init_Dock_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK__BUILDER_HPP_
