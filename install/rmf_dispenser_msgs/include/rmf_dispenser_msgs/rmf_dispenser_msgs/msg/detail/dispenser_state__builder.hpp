// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_dispenser_msgs:msg/DispenserState.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__BUILDER_HPP_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_dispenser_msgs/msg/detail/dispenser_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_dispenser_msgs
{

namespace msg
{

namespace builder
{

class Init_DispenserState_seconds_remaining
{
public:
  explicit Init_DispenserState_seconds_remaining(::rmf_dispenser_msgs::msg::DispenserState & msg)
  : msg_(msg)
  {}
  ::rmf_dispenser_msgs::msg::DispenserState seconds_remaining(::rmf_dispenser_msgs::msg::DispenserState::_seconds_remaining_type arg)
  {
    msg_.seconds_remaining = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserState msg_;
};

class Init_DispenserState_request_guid_queue
{
public:
  explicit Init_DispenserState_request_guid_queue(::rmf_dispenser_msgs::msg::DispenserState & msg)
  : msg_(msg)
  {}
  Init_DispenserState_seconds_remaining request_guid_queue(::rmf_dispenser_msgs::msg::DispenserState::_request_guid_queue_type arg)
  {
    msg_.request_guid_queue = std::move(arg);
    return Init_DispenserState_seconds_remaining(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserState msg_;
};

class Init_DispenserState_mode
{
public:
  explicit Init_DispenserState_mode(::rmf_dispenser_msgs::msg::DispenserState & msg)
  : msg_(msg)
  {}
  Init_DispenserState_request_guid_queue mode(::rmf_dispenser_msgs::msg::DispenserState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_DispenserState_request_guid_queue(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserState msg_;
};

class Init_DispenserState_guid
{
public:
  explicit Init_DispenserState_guid(::rmf_dispenser_msgs::msg::DispenserState & msg)
  : msg_(msg)
  {}
  Init_DispenserState_mode guid(::rmf_dispenser_msgs::msg::DispenserState::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_DispenserState_mode(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserState msg_;
};

class Init_DispenserState_time
{
public:
  Init_DispenserState_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DispenserState_guid time(::rmf_dispenser_msgs::msg::DispenserState::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_DispenserState_guid(msg_);
  }

private:
  ::rmf_dispenser_msgs::msg::DispenserState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_dispenser_msgs::msg::DispenserState>()
{
  return rmf_dispenser_msgs::msg::builder::Init_DispenserState_time();
}

}  // namespace rmf_dispenser_msgs

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_STATE__BUILDER_HPP_
