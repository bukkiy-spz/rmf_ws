// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/robot_mode__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_RobotMode_mode_request_id
{
public:
  explicit Init_RobotMode_mode_request_id(::rmf_fleet_msgs::msg::RobotMode & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::RobotMode mode_request_id(::rmf_fleet_msgs::msg::RobotMode::_mode_request_id_type arg)
  {
    msg_.mode_request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotMode msg_;
};

class Init_RobotMode_mode
{
public:
  Init_RobotMode_mode()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RobotMode_mode_request_id mode(::rmf_fleet_msgs::msg::RobotMode::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_RobotMode_mode_request_id(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::RobotMode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::RobotMode>()
{
  return rmf_fleet_msgs::msg::builder::Init_RobotMode_mode();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__BUILDER_HPP_
