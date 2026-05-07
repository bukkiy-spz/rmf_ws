// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupManualRelease.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/mutex_group_manual_release__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_MutexGroupManualRelease_robot
{
public:
  explicit Init_MutexGroupManualRelease_robot(::rmf_fleet_msgs::msg::MutexGroupManualRelease & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::MutexGroupManualRelease robot(::rmf_fleet_msgs::msg::MutexGroupManualRelease::_robot_type arg)
  {
    msg_.robot = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupManualRelease msg_;
};

class Init_MutexGroupManualRelease_fleet
{
public:
  explicit Init_MutexGroupManualRelease_fleet(::rmf_fleet_msgs::msg::MutexGroupManualRelease & msg)
  : msg_(msg)
  {}
  Init_MutexGroupManualRelease_robot fleet(::rmf_fleet_msgs::msg::MutexGroupManualRelease::_fleet_type arg)
  {
    msg_.fleet = std::move(arg);
    return Init_MutexGroupManualRelease_robot(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupManualRelease msg_;
};

class Init_MutexGroupManualRelease_release_mutex_groups
{
public:
  Init_MutexGroupManualRelease_release_mutex_groups()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutexGroupManualRelease_fleet release_mutex_groups(::rmf_fleet_msgs::msg::MutexGroupManualRelease::_release_mutex_groups_type arg)
  {
    msg_.release_mutex_groups = std::move(arg);
    return Init_MutexGroupManualRelease_fleet(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupManualRelease msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::MutexGroupManualRelease>()
{
  return rmf_fleet_msgs::msg::builder::Init_MutexGroupManualRelease_release_mutex_groups();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_MANUAL_RELEASE__BUILDER_HPP_
