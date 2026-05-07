// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertTier.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_DeliveryAlertTier_value
{
public:
  Init_DeliveryAlertTier_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_fleet_msgs::msg::DeliveryAlertTier value(::rmf_fleet_msgs::msg::DeliveryAlertTier::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::DeliveryAlertTier msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::DeliveryAlertTier>()
{
  return rmf_fleet_msgs::msg::builder::Init_DeliveryAlertTier_value();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__BUILDER_HPP_
