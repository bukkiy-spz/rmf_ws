// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupStates.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/mutex_group_states__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_MutexGroupStates_assignments
{
public:
  Init_MutexGroupStates_assignments()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_fleet_msgs::msg::MutexGroupStates assignments(::rmf_fleet_msgs::msg::MutexGroupStates::_assignments_type arg)
  {
    msg_.assignments = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupStates msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::MutexGroupStates>()
{
  return rmf_fleet_msgs::msg::builder::Init_MutexGroupStates_assignments();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_STATES__BUILDER_HPP_
