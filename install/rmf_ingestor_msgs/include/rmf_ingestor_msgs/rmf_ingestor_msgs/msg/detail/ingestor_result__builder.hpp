// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__BUILDER_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_ingestor_msgs/msg/detail/ingestor_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_ingestor_msgs
{

namespace msg
{

namespace builder
{

class Init_IngestorResult_status
{
public:
  explicit Init_IngestorResult_status(::rmf_ingestor_msgs::msg::IngestorResult & msg)
  : msg_(msg)
  {}
  ::rmf_ingestor_msgs::msg::IngestorResult status(::rmf_ingestor_msgs::msg::IngestorResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorResult msg_;
};

class Init_IngestorResult_source_guid
{
public:
  explicit Init_IngestorResult_source_guid(::rmf_ingestor_msgs::msg::IngestorResult & msg)
  : msg_(msg)
  {}
  Init_IngestorResult_status source_guid(::rmf_ingestor_msgs::msg::IngestorResult::_source_guid_type arg)
  {
    msg_.source_guid = std::move(arg);
    return Init_IngestorResult_status(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorResult msg_;
};

class Init_IngestorResult_request_guid
{
public:
  explicit Init_IngestorResult_request_guid(::rmf_ingestor_msgs::msg::IngestorResult & msg)
  : msg_(msg)
  {}
  Init_IngestorResult_source_guid request_guid(::rmf_ingestor_msgs::msg::IngestorResult::_request_guid_type arg)
  {
    msg_.request_guid = std::move(arg);
    return Init_IngestorResult_source_guid(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorResult msg_;
};

class Init_IngestorResult_time
{
public:
  Init_IngestorResult_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IngestorResult_request_guid time(::rmf_ingestor_msgs::msg::IngestorResult::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_IngestorResult_request_guid(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_ingestor_msgs::msg::IngestorResult>()
{
  return rmf_ingestor_msgs::msg::builder::Init_IngestorResult_time();
}

}  // namespace rmf_ingestor_msgs

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__BUILDER_HPP_
