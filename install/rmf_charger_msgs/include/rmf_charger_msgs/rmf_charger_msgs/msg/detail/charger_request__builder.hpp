// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__BUILDER_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_charger_msgs/msg/detail/charger_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_charger_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargerRequest_request_id
{
public:
  explicit Init_ChargerRequest_request_id(::rmf_charger_msgs::msg::ChargerRequest & msg)
  : msg_(msg)
  {}
  ::rmf_charger_msgs::msg::ChargerRequest request_id(::rmf_charger_msgs::msg::ChargerRequest::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerRequest msg_;
};

class Init_ChargerRequest_start_timeout
{
public:
  explicit Init_ChargerRequest_start_timeout(::rmf_charger_msgs::msg::ChargerRequest & msg)
  : msg_(msg)
  {}
  Init_ChargerRequest_request_id start_timeout(::rmf_charger_msgs::msg::ChargerRequest::_start_timeout_type arg)
  {
    msg_.start_timeout = std::move(arg);
    return Init_ChargerRequest_request_id(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerRequest msg_;
};

class Init_ChargerRequest_robot_name
{
public:
  explicit Init_ChargerRequest_robot_name(::rmf_charger_msgs::msg::ChargerRequest & msg)
  : msg_(msg)
  {}
  Init_ChargerRequest_start_timeout robot_name(::rmf_charger_msgs::msg::ChargerRequest::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_ChargerRequest_start_timeout(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerRequest msg_;
};

class Init_ChargerRequest_fleet_name
{
public:
  explicit Init_ChargerRequest_fleet_name(::rmf_charger_msgs::msg::ChargerRequest & msg)
  : msg_(msg)
  {}
  Init_ChargerRequest_robot_name fleet_name(::rmf_charger_msgs::msg::ChargerRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_ChargerRequest_robot_name(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerRequest msg_;
};

class Init_ChargerRequest_charger_name
{
public:
  Init_ChargerRequest_charger_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargerRequest_fleet_name charger_name(::rmf_charger_msgs::msg::ChargerRequest::_charger_name_type arg)
  {
    msg_.charger_name = std::move(arg);
    return Init_ChargerRequest_fleet_name(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_charger_msgs::msg::ChargerRequest>()
{
  return rmf_charger_msgs::msg::builder::Init_ChargerRequest_charger_name();
}

}  // namespace rmf_charger_msgs

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_REQUEST__BUILDER_HPP_
