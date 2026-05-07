// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/SpeedLimitRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/speed_limit_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedLimitRequest_remove_limits
{
public:
  explicit Init_SpeedLimitRequest_remove_limits(::rmf_fleet_msgs::msg::SpeedLimitRequest & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::SpeedLimitRequest remove_limits(::rmf_fleet_msgs::msg::SpeedLimitRequest::_remove_limits_type arg)
  {
    msg_.remove_limits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::SpeedLimitRequest msg_;
};

class Init_SpeedLimitRequest_speed_limits
{
public:
  explicit Init_SpeedLimitRequest_speed_limits(::rmf_fleet_msgs::msg::SpeedLimitRequest & msg)
  : msg_(msg)
  {}
  Init_SpeedLimitRequest_remove_limits speed_limits(::rmf_fleet_msgs::msg::SpeedLimitRequest::_speed_limits_type arg)
  {
    msg_.speed_limits = std::move(arg);
    return Init_SpeedLimitRequest_remove_limits(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::SpeedLimitRequest msg_;
};

class Init_SpeedLimitRequest_fleet_name
{
public:
  Init_SpeedLimitRequest_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedLimitRequest_speed_limits fleet_name(::rmf_fleet_msgs::msg::SpeedLimitRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_SpeedLimitRequest_speed_limits(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::SpeedLimitRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::SpeedLimitRequest>()
{
  return rmf_fleet_msgs::msg::builder::Init_SpeedLimitRequest_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__BUILDER_HPP_
