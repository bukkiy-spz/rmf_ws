// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/ApiResponse.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__API_RESPONSE__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__API_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/api_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_ApiResponse_request_id
{
public:
  explicit Init_ApiResponse_request_id(::rmf_task_msgs::msg::ApiResponse & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::ApiResponse request_id(::rmf_task_msgs::msg::ApiResponse::_request_id_type arg)
  {
    msg_.request_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::ApiResponse msg_;
};

class Init_ApiResponse_json_msg
{
public:
  explicit Init_ApiResponse_json_msg(::rmf_task_msgs::msg::ApiResponse & msg)
  : msg_(msg)
  {}
  Init_ApiResponse_request_id json_msg(::rmf_task_msgs::msg::ApiResponse::_json_msg_type arg)
  {
    msg_.json_msg = std::move(arg);
    return Init_ApiResponse_request_id(msg_);
  }

private:
  ::rmf_task_msgs::msg::ApiResponse msg_;
};

class Init_ApiResponse_type
{
public:
  Init_ApiResponse_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ApiResponse_json_msg type(::rmf_task_msgs::msg::ApiResponse::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ApiResponse_json_msg(msg_);
  }

private:
  ::rmf_task_msgs::msg::ApiResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::ApiResponse>()
{
  return rmf_task_msgs::msg::builder::Init_ApiResponse_type();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__API_RESPONSE__BUILDER_HPP_
