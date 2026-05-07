// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:srv/RequestChanges.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/srv/detail/request_changes__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestChanges_Request_full_update
{
public:
  explicit Init_RequestChanges_Request_full_update(::rmf_traffic_msgs::srv::RequestChanges_Request & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::srv::RequestChanges_Request full_update(::rmf_traffic_msgs::srv::RequestChanges_Request::_full_update_type arg)
  {
    msg_.full_update = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RequestChanges_Request msg_;
};

class Init_RequestChanges_Request_version
{
public:
  explicit Init_RequestChanges_Request_version(::rmf_traffic_msgs::srv::RequestChanges_Request & msg)
  : msg_(msg)
  {}
  Init_RequestChanges_Request_full_update version(::rmf_traffic_msgs::srv::RequestChanges_Request::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_RequestChanges_Request_full_update(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RequestChanges_Request msg_;
};

class Init_RequestChanges_Request_query_id
{
public:
  Init_RequestChanges_Request_query_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestChanges_Request_version query_id(::rmf_traffic_msgs::srv::RequestChanges_Request::_query_id_type arg)
  {
    msg_.query_id = std::move(arg);
    return Init_RequestChanges_Request_version(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RequestChanges_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::RequestChanges_Request>()
{
  return rmf_traffic_msgs::srv::builder::Init_RequestChanges_Request_query_id();
}

}  // namespace rmf_traffic_msgs


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_RequestChanges_Response_error
{
public:
  explicit Init_RequestChanges_Response_error(::rmf_traffic_msgs::srv::RequestChanges_Response & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::srv::RequestChanges_Response error(::rmf_traffic_msgs::srv::RequestChanges_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RequestChanges_Response msg_;
};

class Init_RequestChanges_Response_result
{
public:
  explicit Init_RequestChanges_Response_result(::rmf_traffic_msgs::srv::RequestChanges_Response & msg)
  : msg_(msg)
  {}
  Init_RequestChanges_Response_error result(::rmf_traffic_msgs::srv::RequestChanges_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return Init_RequestChanges_Response_error(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RequestChanges_Response msg_;
};

class Init_RequestChanges_Response_node_id
{
public:
  Init_RequestChanges_Response_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RequestChanges_Response_result node_id(::rmf_traffic_msgs::srv::RequestChanges_Response::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_RequestChanges_Response_result(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RequestChanges_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::RequestChanges_Response>()
{
  return rmf_traffic_msgs::srv::builder::Init_RequestChanges_Response_node_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REQUEST_CHANGES__BUILDER_HPP_
