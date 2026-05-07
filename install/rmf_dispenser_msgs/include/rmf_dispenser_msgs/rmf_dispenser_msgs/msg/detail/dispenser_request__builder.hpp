// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__BUILDER_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_dispenser_msgs/msg/detail/dispenser_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_dispenser_msgs
{

namespace msg
{

namespace builder
{

class Init_DispenserRequest_items
{
public:
  explicit Init_DispenserRequest_items(::rmf_dispenser_msgs::msg::DispenserRequest & msg)
  : msg_(msg)
  {}
  ::rmf_dispenser_msgs::msg::DispenserRequest items(::rmf_dispenser_msgs::msg::DispenserRequest::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserRequest msg_;
};

class Init_DispenserRequest_transporter_type
{
public:
  explicit Init_DispenserRequest_transporter_type(::rmf_dispenser_msgs::msg::DispenserRequest & msg)
  : msg_(msg)
  {}
  Init_DispenserRequest_items transporter_type(::rmf_dispenser_msgs::msg::DispenserRequest::_transporter_type_type arg)
  {
    msg_.transporter_type = std::move(arg);
    return Init_DispenserRequest_items(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserRequest msg_;
};

class Init_DispenserRequest_target_guid
{
public:
  explicit Init_DispenserRequest_target_guid(::rmf_dispenser_msgs::msg::DispenserRequest & msg)
  : msg_(msg)
  {}
  Init_DispenserRequest_transporter_type target_guid(::rmf_dispenser_msgs::msg::DispenserRequest::_target_guid_type arg)
  {
    msg_.target_guid = std::move(arg);
    return Init_DispenserRequest_transporter_type(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserRequest msg_;
};

class Init_DispenserRequest_request_guid
{
public:
  explicit Init_DispenserRequest_request_guid(::rmf_dispenser_msgs::msg::DispenserRequest & msg)
  : msg_(msg)
  {}
  Init_DispenserRequest_target_guid request_guid(::rmf_dispenser_msgs::msg::DispenserRequest::_request_guid_type arg)
  {
    msg_.request_guid = std::move(arg);
    return Init_DispenserRequest_target_guid(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserRequest msg_;
};

class Init_DispenserRequest_time
{
public:
  Init_DispenserRequest_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispenserRequest_request_guid time(::rmf_dispenser_msgs::msg::DispenserRequest::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_DispenserRequest_request_guid(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_dispenser_msgs::msg::DispenserRequest>()
{
  return rmf_dispenser_msgs::msg::builder::Init_DispenserRequest_time();
}

}  // namespace rmf_dispenser_msgs

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST__BUILDER_HPP_
