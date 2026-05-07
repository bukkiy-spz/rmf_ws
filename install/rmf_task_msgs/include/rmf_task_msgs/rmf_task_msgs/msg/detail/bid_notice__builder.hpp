// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/bid_notice__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_BidNotice_time_window
{
public:
  explicit Init_BidNotice_time_window(::rmf_task_msgs::msg::BidNotice & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::BidNotice time_window(::rmf_task_msgs::msg::BidNotice::_time_window_type arg)
  {
    msg_.time_window = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidNotice msg_;
};

class Init_BidNotice_task_id
{
public:
  explicit Init_BidNotice_task_id(::rmf_task_msgs::msg::BidNotice & msg)
  : msg_(msg)
  {}
  Init_BidNotice_time_window task_id(::rmf_task_msgs::msg::BidNotice::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_BidNotice_time_window(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidNotice msg_;
};

class Init_BidNotice_request
{
public:
  Init_BidNotice_request()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BidNotice_task_id request(::rmf_task_msgs::msg::BidNotice::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_BidNotice_task_id(msg_);
  }

private:
  ::rmf_task_msgs::msg::BidNotice msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::BidNotice>()
{
  return rmf_task_msgs::msg::builder::Init_BidNotice_request();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_NOTICE__BUILDER_HPP_
