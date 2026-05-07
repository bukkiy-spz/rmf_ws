// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__BUILDER_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_ingestor_msgs/msg/detail/ingestor_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_ingestor_msgs
{

namespace msg
{

namespace builder
{

class Init_IngestorRequest_items
{
public:
  explicit Init_IngestorRequest_items(::rmf_ingestor_msgs::msg::IngestorRequest & msg)
  : msg_(msg)
  {}
  ::rmf_ingestor_msgs::msg::IngestorRequest items(::rmf_ingestor_msgs::msg::IngestorRequest::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorRequest msg_;
};

class Init_IngestorRequest_transporter_type
{
public:
  explicit Init_IngestorRequest_transporter_type(::rmf_ingestor_msgs::msg::IngestorRequest & msg)
  : msg_(msg)
  {}
  Init_IngestorRequest_items transporter_type(::rmf_ingestor_msgs::msg::IngestorRequest::_transporter_type_type arg)
  {
    msg_.transporter_type = std::move(arg);
    return Init_IngestorRequest_items(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorRequest msg_;
};

class Init_IngestorRequest_target_guid
{
public:
  explicit Init_IngestorRequest_target_guid(::rmf_ingestor_msgs::msg::IngestorRequest & msg)
  : msg_(msg)
  {}
  Init_IngestorRequest_transporter_type target_guid(::rmf_ingestor_msgs::msg::IngestorRequest::_target_guid_type arg)
  {
    msg_.target_guid = std::move(arg);
    return Init_IngestorRequest_transporter_type(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorRequest msg_;
};

class Init_IngestorRequest_request_guid
{
public:
  explicit Init_IngestorRequest_request_guid(::rmf_ingestor_msgs::msg::IngestorRequest & msg)
  : msg_(msg)
  {}
  Init_IngestorRequest_target_guid request_guid(::rmf_ingestor_msgs::msg::IngestorRequest::_request_guid_type arg)
  {
    msg_.request_guid = std::move(arg);
    return Init_IngestorRequest_target_guid(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorRequest msg_;
};

class Init_IngestorRequest_time
{
public:
  Init_IngestorRequest_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IngestorRequest_request_guid time(::rmf_ingestor_msgs::msg::IngestorRequest::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_IngestorRequest_request_guid(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_ingestor_msgs::msg::IngestorRequest>()
{
  return rmf_ingestor_msgs::msg::builder::Init_IngestorRequest_time();
}

}  // namespace rmf_ingestor_msgs

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST__BUILDER_HPP_
