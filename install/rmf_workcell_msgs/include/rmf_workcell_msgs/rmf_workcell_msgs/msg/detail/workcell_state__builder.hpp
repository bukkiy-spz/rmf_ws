// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_workcell_msgs:msg/WorkcellState.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__BUILDER_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_workcell_msgs/msg/detail/workcell_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_workcell_msgs
{

namespace msg
{

namespace builder
{

class Init_WorkcellState_request_guid_queue
{
public:
  explicit Init_WorkcellState_request_guid_queue(::rmf_workcell_msgs::msg::WorkcellState & msg)
  : msg_(msg)
  {}
  ::rmf_workcell_msgs::msg::WorkcellState request_guid_queue(::rmf_workcell_msgs::msg::WorkcellState::_request_guid_queue_type arg)
  {
    msg_.request_guid_queue = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellState msg_;
};

class Init_WorkcellState_mode
{
public:
  explicit Init_WorkcellState_mode(::rmf_workcell_msgs::msg::WorkcellState & msg)
  : msg_(msg)
  {}
  Init_WorkcellState_request_guid_queue mode(::rmf_workcell_msgs::msg::WorkcellState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_WorkcellState_request_guid_queue(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellState msg_;
};

class Init_WorkcellState_guid
{
public:
  explicit Init_WorkcellState_guid(::rmf_workcell_msgs::msg::WorkcellState & msg)
  : msg_(msg)
  {}
  Init_WorkcellState_mode guid(::rmf_workcell_msgs::msg::WorkcellState::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_WorkcellState_mode(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellState msg_;
};

class Init_WorkcellState_time
{
public:
  Init_WorkcellState_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorkcellState_guid time(::rmf_workcell_msgs::msg::WorkcellState::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_WorkcellState_guid(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_workcell_msgs::msg::WorkcellState>()
{
  return rmf_workcell_msgs::msg::builder::Init_WorkcellState_time();
}

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_STATE__BUILDER_HPP_
