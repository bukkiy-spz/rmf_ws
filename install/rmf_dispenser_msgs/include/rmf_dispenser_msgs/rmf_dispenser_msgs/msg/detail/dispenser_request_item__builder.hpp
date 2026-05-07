// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__BUILDER_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_dispenser_msgs
{

namespace msg
{

namespace builder
{

class Init_DispenserRequestItem_compartment_name
{
public:
  explicit Init_DispenserRequestItem_compartment_name(::rmf_dispenser_msgs::msg::DispenserRequestItem & msg)
  : msg_(msg)
  {}
  ::rmf_dispenser_msgs::msg::DispenserRequestItem compartment_name(::rmf_dispenser_msgs::msg::DispenserRequestItem::_compartment_name_type arg)
  {
    msg_.compartment_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserRequestItem msg_;
};

class Init_DispenserRequestItem_quantity
{
public:
  explicit Init_DispenserRequestItem_quantity(::rmf_dispenser_msgs::msg::DispenserRequestItem & msg)
  : msg_(msg)
  {}
  Init_DispenserRequestItem_compartment_name quantity(::rmf_dispenser_msgs::msg::DispenserRequestItem::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_DispenserRequestItem_compartment_name(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserRequestItem msg_;
};

class Init_DispenserRequestItem_type_guid
{
public:
  Init_DispenserRequestItem_type_guid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispenserRequestItem_quantity type_guid(::rmf_dispenser_msgs::msg::DispenserRequestItem::_type_guid_type arg)
  {
    msg_.type_guid = std::move(arg);
    return Init_DispenserRequestItem_quantity(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserRequestItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_dispenser_msgs::msg::DispenserRequestItem>()
{
  return rmf_dispenser_msgs::msg::builder::Init_DispenserRequestItem_type_guid();
}

}  // namespace rmf_dispenser_msgs

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__BUILDER_HPP_
