// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_charger_msgs:msg/ChargerCancel.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__BUILDER_HPP_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_charger_msgs/msg/detail/charger_cancel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_charger_msgs
{

namespace msg
{

namespace builder
{

class Init_ChargerCancel_request_id
{
public:
  explicit Init_ChargerCancel_request_id(::rmf_charger_msgs::msg::ChargerCancel & msg)
  : msg_(msg)
  {}
  ::rmf_charger_msgs::msg::ChargerCancel request_id(::rmf_charger_msgs::msg::ChargerCancel::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerCancel msg_;
};

class Init_ChargerCancel_charger_name
{
public:
  Init_ChargerCancel_charger_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChargerCancel_request_id charger_name(::rmf_charger_msgs::msg::ChargerCancel::_charger_name_type arg)
  {
    msg_.charger_name = std::move(arg);
    return Init_ChargerCancel_request_id(msg_);
  }

private:
  ::rmf_charger_msgs::msg::ChargerCancel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_charger_msgs::msg::ChargerCancel>()
{
  return rmf_charger_msgs::msg::builder::Init_ChargerCancel_charger_name();
}

}  // namespace rmf_charger_msgs

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__BUILDER_HPP_
