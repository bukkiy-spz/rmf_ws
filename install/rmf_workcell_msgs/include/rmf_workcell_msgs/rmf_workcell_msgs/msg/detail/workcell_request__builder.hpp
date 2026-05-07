// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_workcell_msgs:msg/WorkcellRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__BUILDER_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_workcell_msgs/msg/detail/workcell_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_workcell_msgs
{

namespace msg
{

namespace builder
{

class Init_WorkcellRequest_target_guid
{
public:
  explicit Init_WorkcellRequest_target_guid(::rmf_workcell_msgs::msg::WorkcellRequest & msg)
  : msg_(msg)
  {}
  ::rmf_workcell_msgs::msg::WorkcellRequest target_guid(::rmf_workcell_msgs::msg::WorkcellRequest::_target_guid_type arg)
  {
    msg_.target_guid = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellRequest msg_;
};

class Init_WorkcellRequest_request_guid
{
public:
  explicit Init_WorkcellRequest_request_guid(::rmf_workcell_msgs::msg::WorkcellRequest & msg)
  : msg_(msg)
  {}
  Init_WorkcellRequest_target_guid request_guid(::rmf_workcell_msgs::msg::WorkcellRequest::_request_guid_type arg)
  {
    msg_.request_guid = std::move(arg);
    return Init_WorkcellRequest_target_guid(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellRequest msg_;
};

class Init_WorkcellRequest_time
{
public:
  Init_WorkcellRequest_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorkcellRequest_request_guid time(::rmf_workcell_msgs::msg::WorkcellRequest::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_WorkcellRequest_request_guid(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_workcell_msgs::msg::WorkcellRequest>()
{
  return rmf_workcell_msgs::msg::builder::Init_WorkcellRequest_time();
}

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_REQUEST__BUILDER_HPP_
