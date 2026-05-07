// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupAssignment.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/mutex_group_assignment__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_MutexGroupAssignment_claim_time
{
public:
  explicit Init_MutexGroupAssignment_claim_time(::rmf_fleet_msgs::msg::MutexGroupAssignment & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::MutexGroupAssignment claim_time(::rmf_fleet_msgs::msg::MutexGroupAssignment::_claim_time_type arg)
  {
    msg_.claim_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupAssignment msg_;
};

class Init_MutexGroupAssignment_claimant
{
public:
  explicit Init_MutexGroupAssignment_claimant(::rmf_fleet_msgs::msg::MutexGroupAssignment & msg)
  : msg_(msg)
  {}
  Init_MutexGroupAssignment_claim_time claimant(::rmf_fleet_msgs::msg::MutexGroupAssignment::_claimant_type arg)
  {
    msg_.claimant = std::move(arg);
    return Init_MutexGroupAssignment_claim_time(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupAssignment msg_;
};

class Init_MutexGroupAssignment_group
{
public:
  Init_MutexGroupAssignment_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutexGroupAssignment_claimant group(::rmf_fleet_msgs::msg::MutexGroupAssignment::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_MutexGroupAssignment_claimant(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupAssignment msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::MutexGroupAssignment>()
{
  return rmf_fleet_msgs::msg::builder::Init_MutexGroupAssignment_group();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_ASSIGNMENT__BUILDER_HPP_
