// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:srv/RegisterQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/srv/detail/register_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterQuery_Request_query
{
public:
  Init_RegisterQuery_Request_query()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::srv::RegisterQuery_Request query(::rmf_traffic_msgs::srv::RegisterQuery_Request::_query_type arg)
  {
    msg_.query = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterQuery_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::RegisterQuery_Request>()
{
  return rmf_traffic_msgs::srv::builder::Init_RegisterQuery_Request_query();
}

}  // namespace rmf_traffic_msgs


namespace rmf_traffic_msgs
{

namespace srv
{

namespace builder
{

class Init_RegisterQuery_Response_error
{
public:
  explicit Init_RegisterQuery_Response_error(::rmf_traffic_msgs::srv::RegisterQuery_Response & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::srv::RegisterQuery_Response error(::rmf_traffic_msgs::srv::RegisterQuery_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterQuery_Response msg_;
};

class Init_RegisterQuery_Response_query_id
{
public:
  explicit Init_RegisterQuery_Response_query_id(::rmf_traffic_msgs::srv::RegisterQuery_Response & msg)
  : msg_(msg)
  {}
  Init_RegisterQuery_Response_error query_id(::rmf_traffic_msgs::srv::RegisterQuery_Response::_query_id_type arg)
  {
    msg_.query_id = std::move(arg);
    return Init_RegisterQuery_Response_error(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterQuery_Response msg_;
};

class Init_RegisterQuery_Response_node_id
{
public:
  Init_RegisterQuery_Response_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RegisterQuery_Response_query_id node_id(::rmf_traffic_msgs::srv::RegisterQuery_Response::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_RegisterQuery_Response_query_id(msg_);
  }

private:
  ::rmf_traffic_msgs::srv::RegisterQuery_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::srv::RegisterQuery_Response>()
{
  return rmf_traffic_msgs::srv::builder::Init_RegisterQuery_Response_node_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__SRV__DETAIL__REGISTER_QUERY__BUILDER_HPP_
