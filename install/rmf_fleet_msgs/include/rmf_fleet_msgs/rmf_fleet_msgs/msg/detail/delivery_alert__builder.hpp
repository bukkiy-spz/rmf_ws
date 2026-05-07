// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/DeliveryAlert.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/delivery_alert__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_DeliveryAlert_message
{
public:
  explicit Init_DeliveryAlert_message(::rmf_fleet_msgs::msg::DeliveryAlert & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::DeliveryAlert message(::rmf_fleet_msgs::msg::DeliveryAlert::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DeliveryAlert msg_;
};

class Init_DeliveryAlert_action
{
public:
  explicit Init_DeliveryAlert_action(::rmf_fleet_msgs::msg::DeliveryAlert & msg)
  : msg_(msg)
  {}
  Init_DeliveryAlert_message action(::rmf_fleet_msgs::msg::DeliveryAlert::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_DeliveryAlert_message(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DeliveryAlert msg_;
};

class Init_DeliveryAlert_task_id
{
public:
  explicit Init_DeliveryAlert_task_id(::rmf_fleet_msgs::msg::DeliveryAlert & msg)
  : msg_(msg)
  {}
  Init_DeliveryAlert_action task_id(::rmf_fleet_msgs::msg::DeliveryAlert::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_DeliveryAlert_action(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DeliveryAlert msg_;
};

class Init_DeliveryAlert_tier
{
public:
  explicit Init_DeliveryAlert_tier(::rmf_fleet_msgs::msg::DeliveryAlert & msg)
  : msg_(msg)
  {}
  Init_DeliveryAlert_task_id tier(::rmf_fleet_msgs::msg::DeliveryAlert::_tier_type arg)
  {
    msg_.tier = std::move(arg);
    return Init_DeliveryAlert_task_id(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DeliveryAlert msg_;
};

class Init_DeliveryAlert_category
{
public:
  explicit Init_DeliveryAlert_category(::rmf_fleet_msgs::msg::DeliveryAlert & msg)
  : msg_(msg)
  {}
  Init_DeliveryAlert_tier category(::rmf_fleet_msgs::msg::DeliveryAlert::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_DeliveryAlert_tier(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DeliveryAlert msg_;
};

class Init_DeliveryAlert_id
{
public:
  Init_DeliveryAlert_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeliveryAlert_category id(::rmf_fleet_msgs::msg::DeliveryAlert::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_DeliveryAlert_category(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DeliveryAlert msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::DeliveryAlert>()
{
  return rmf_fleet_msgs::msg::builder::Init_DeliveryAlert_id();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__BUILDER_HPP_
