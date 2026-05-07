// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_ingestor_msgs:msg/IngestorState.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_STATE__BUILDER_HPP_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_ingestor_msgs/msg/detail/ingestor_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_ingestor_msgs
{

namespace msg
{

namespace builder
{

class Init_IngestorState_seconds_remaining
{
public:
  explicit Init_IngestorState_seconds_remaining(::rmf_ingestor_msgs::msg::IngestorState & msg)
  : msg_(msg)
  {}
  ::rmf_ingestor_msgs::msg::IngestorState seconds_remaining(::rmf_ingestor_msgs::msg::IngestorState::_seconds_remaining_type arg)
  {
    msg_.seconds_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorState msg_;
};

class Init_IngestorState_request_guid_queue
{
public:
  explicit Init_IngestorState_request_guid_queue(::rmf_ingestor_msgs::msg::IngestorState & msg)
  : msg_(msg)
  {}
  Init_IngestorState_seconds_remaining request_guid_queue(::rmf_ingestor_msgs::msg::IngestorState::_request_guid_queue_type arg)
  {
    msg_.request_guid_queue = std::move(arg);
    return Init_IngestorState_seconds_remaining(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorState msg_;
};

class Init_IngestorState_mode
{
public:
  explicit Init_IngestorState_mode(::rmf_ingestor_msgs::msg::IngestorState & msg)
  : msg_(msg)
  {}
  Init_IngestorState_request_guid_queue mode(::rmf_ingestor_msgs::msg::IngestorState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_IngestorState_request_guid_queue(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorState msg_;
};

class Init_IngestorState_guid
{
public:
  explicit Init_IngestorState_guid(::rmf_ingestor_msgs::msg::IngestorState & msg)
  : msg_(msg)
  {}
  Init_IngestorState_mode guid(::rmf_ingestor_msgs::msg::IngestorState::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_IngestorState_mode(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorState msg_;
};

class Init_IngestorState_time
{
public:
  Init_IngestorState_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IngestorState_guid time(::rmf_ingestor_msgs::msg::IngestorState::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_IngestorState_guid(msg_);
  }

private:
  ::rmf_ingestor_msgs::msg::IngestorState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_ingestor_msgs::msg::IngestorState>()
{
  return rmf_ingestor_msgs::msg::builder::Init_IngestorState_time();
}

}  // namespace rmf_ingestor_msgs

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_STATE__BUILDER_HPP_
