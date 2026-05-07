// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__BUILDER_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_ingestor_msgs
{

namespace msg
{

namespace builder
{

class Init_IngestorRequestItem_compartment_name
{
public:
  explicit Init_IngestorRequestItem_compartment_name(::rmf_ingestor_msgs::msg::IngestorRequestItem & msg)
  : msg_(msg)
  {}
  ::rmf_ingestor_msgs::msg::IngestorRequestItem compartment_name(::rmf_ingestor_msgs::msg::IngestorRequestItem::_compartment_name_type arg)
  {
    msg_.compartment_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorRequestItem msg_;
};

class Init_IngestorRequestItem_quantity
{
public:
  explicit Init_IngestorRequestItem_quantity(::rmf_ingestor_msgs::msg::IngestorRequestItem & msg)
  : msg_(msg)
  {}
  Init_IngestorRequestItem_compartment_name quantity(::rmf_ingestor_msgs::msg::IngestorRequestItem::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return Init_IngestorRequestItem_compartment_name(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorRequestItem msg_;
};

class Init_IngestorRequestItem_type_guid
{
public:
  Init_IngestorRequestItem_type_guid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IngestorRequestItem_quantity type_guid(::rmf_ingestor_msgs::msg::IngestorRequestItem::_type_guid_type arg)
  {
    msg_.type_guid = std::move(arg);
    return Init_IngestorRequestItem_quantity(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorRequestItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_ingestor_msgs::msg::IngestorRequestItem>()
{
  return rmf_ingestor_msgs::msg::builder::Init_IngestorRequestItem_type_guid();
}

}  // namespace rmf_ingestor_msgs

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__BUILDER_HPP_
