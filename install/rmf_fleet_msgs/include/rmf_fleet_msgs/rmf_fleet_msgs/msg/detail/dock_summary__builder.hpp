// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/DockSummary.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/dock_summary__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_DockSummary_docks
{
public:
  Init_DockSummary_docks()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_fleet_msgs::msg::DockSummary docks(::rmf_fleet_msgs::msg::DockSummary::_docks_type arg)
  {
    msg_.docks = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DockSummary msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::DockSummary>()
{
  return rmf_fleet_msgs::msg::builder::Init_DockSummary_docks();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DOCK_SUMMARY__BUILDER_HPP_
