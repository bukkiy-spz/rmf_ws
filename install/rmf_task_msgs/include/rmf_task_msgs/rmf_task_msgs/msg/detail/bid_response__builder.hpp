// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/BidResponse.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/bid_response__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_BidResponse_errors
{
public:
  explicit Init_BidResponse_errors(::rmf_task_msgs::msg::BidResponse & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::BidResponse errors(::rmf_task_msgs::msg::BidResponse::_errors_type arg)
  {
    msg_.errors = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidResponse msg_;
};

class Init_BidResponse_proposal
{
public:
  explicit Init_BidResponse_proposal(::rmf_task_msgs::msg::BidResponse & msg)
  : msg_(msg)
  {}
  Init_BidResponse_errors proposal(::rmf_task_msgs::msg::BidResponse::_proposal_type arg)
  {
    msg_.proposal = std::move(arg);
    return Init_BidResponse_errors(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidResponse msg_;
};

class Init_BidResponse_has_proposal
{
public:
  explicit Init_BidResponse_has_proposal(::rmf_task_msgs::msg::BidResponse & msg)
  : msg_(msg)
  {}
  Init_BidResponse_proposal has_proposal(::rmf_task_msgs::msg::BidResponse::_has_proposal_type arg)
  {
    msg_.has_proposal = std::move(arg);
    return Init_BidResponse_proposal(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidResponse msg_;
};

class Init_BidResponse_task_id
{
public:
  Init_BidResponse_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BidResponse_has_proposal task_id(::rmf_task_msgs::msg::BidResponse::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_BidResponse_has_proposal(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidResponse msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::BidResponse>()
{
  return rmf_task_msgs::msg::builder::Init_BidResponse_task_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__BUILDER_HPP_
