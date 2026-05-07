// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/MutexGroupRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/mutex_group_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_MutexGroupRequest_mode
{
public:
  explicit Init_MutexGroupRequest_mode(::rmf_fleet_msgs::msg::MutexGroupRequest & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::MutexGroupRequest mode(::rmf_fleet_msgs::msg::MutexGroupRequest::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupRequest msg_;
};

class Init_MutexGroupRequest_claim_time
{
public:
  explicit Init_MutexGroupRequest_claim_time(::rmf_fleet_msgs::msg::MutexGroupRequest & msg)
  : msg_(msg)
  {}
  Init_MutexGroupRequest_mode claim_time(::rmf_fleet_msgs::msg::MutexGroupRequest::_claim_time_type arg)
  {
    msg_.claim_time = std::move(arg);
    return Init_MutexGroupRequest_mode(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupRequest msg_;
};

class Init_MutexGroupRequest_claimant
{
public:
  explicit Init_MutexGroupRequest_claimant(::rmf_fleet_msgs::msg::MutexGroupRequest & msg)
  : msg_(msg)
  {}
  Init_MutexGroupRequest_claim_time claimant(::rmf_fleet_msgs::msg::MutexGroupRequest::_claimant_type arg)
  {
    msg_.claimant = std::move(arg);
    return Init_MutexGroupRequest_claim_time(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupRequest msg_;
};

class Init_MutexGroupRequest_group
{
public:
  Init_MutexGroupRequest_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MutexGroupRequest_claimant group(::rmf_fleet_msgs::msg::MutexGroupRequest::_group_type arg)
  {
    msg_.group = std::move(arg);
    return Init_MutexGroupRequest_claimant(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::MutexGroupRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::MutexGroupRequest>()
{
  return rmf_fleet_msgs::msg::builder::Init_MutexGroupRequest_group();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__BUILDER_HPP_
