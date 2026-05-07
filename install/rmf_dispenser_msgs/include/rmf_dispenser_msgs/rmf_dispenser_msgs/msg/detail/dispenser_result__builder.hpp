// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__BUILDER_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_dispenser_msgs/msg/detail/dispenser_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_dispenser_msgs
{

namespace msg
{

namespace builder
{

class Init_DispenserResult_status
{
public:
  explicit Init_DispenserResult_status(::rmf_dispenser_msgs::msg::DispenserResult & msg)
  : msg_(msg)
  {}
  ::rmf_dispenser_msgs::msg::DispenserResult status(::rmf_dispenser_msgs::msg::DispenserResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserResult msg_;
};

class Init_DispenserResult_source_guid
{
public:
  explicit Init_DispenserResult_source_guid(::rmf_dispenser_msgs::msg::DispenserResult & msg)
  : msg_(msg)
  {}
  Init_DispenserResult_status source_guid(::rmf_dispenser_msgs::msg::DispenserResult::_source_guid_type arg)
  {
    msg_.source_guid = std::move(arg);
    return Init_DispenserResult_status(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserResult msg_;
};

class Init_DispenserResult_request_guid
{
public:
  explicit Init_DispenserResult_request_guid(::rmf_dispenser_msgs::msg::DispenserResult & msg)
  : msg_(msg)
  {}
  Init_DispenserResult_source_guid request_guid(::rmf_dispenser_msgs::msg::DispenserResult::_request_guid_type arg)
  {
    msg_.request_guid = std::move(arg);
    return Init_DispenserResult_source_guid(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserResult msg_;
};

class Init_DispenserResult_time
{
public:
  Init_DispenserResult_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispenserResult_request_guid time(::rmf_dispenser_msgs::msg::DispenserResult::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_DispenserResult_request_guid(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_dispenser_msgs::msg::DispenserResult>()
{
  return rmf_dispenser_msgs::msg::builder::Init_DispenserResult_time();
}

}  // namespace rmf_dispenser_msgs

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_RESULT__BUILDER_HPP_
