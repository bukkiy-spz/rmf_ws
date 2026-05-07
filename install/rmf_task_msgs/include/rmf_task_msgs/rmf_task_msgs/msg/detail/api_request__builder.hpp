// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/ApiRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/api_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_ApiRequest_request_id
{
public:
  explicit Init_ApiRequest_request_id(::rmf_task_msgs::msg::ApiRequest & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::ApiRequest request_id(::rmf_task_msgs::msg::ApiRequest::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::ApiRequest msg_;
};

class Init_ApiRequest_json_msg
{
public:
  Init_ApiRequest_json_msg()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApiRequest_request_id json_msg(::rmf_task_msgs::msg::ApiRequest::_json_msg_type arg)
  {
    msg_.json_msg = std::move(arg);
    return Init_ApiRequest_request_id(msg_);
  }

private:
  ::rmf_task_msgs::msg::ApiRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::ApiRequest>()
{
  return rmf_task_msgs::msg::builder::Init_ApiRequest_json_msg();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__API_REQUEST__BUILDER_HPP_
