// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/InterruptRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/interrupt_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_InterruptRequest_type
{
public:
  explicit Init_InterruptRequest_type(::rmf_fleet_msgs::msg::InterruptRequest & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::InterruptRequest type(::rmf_fleet_msgs::msg::InterruptRequest::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::InterruptRequest msg_;
};

class Init_InterruptRequest_labels
{
public:
  explicit Init_InterruptRequest_labels(::rmf_fleet_msgs::msg::InterruptRequest & msg)
  : msg_(msg)
  {}
  Init_InterruptRequest_type labels(::rmf_fleet_msgs::msg::InterruptRequest::_labels_type arg)
  {
    msg_.labels = std::move(arg);
    return Init_InterruptRequest_type(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::InterruptRequest msg_;
};

class Init_InterruptRequest_interrupt_id
{
public:
  explicit Init_InterruptRequest_interrupt_id(::rmf_fleet_msgs::msg::InterruptRequest & msg)
  : msg_(msg)
  {}
  Init_InterruptRequest_labels interrupt_id(::rmf_fleet_msgs::msg::InterruptRequest::_interrupt_id_type arg)
  {
    msg_.interrupt_id = std::move(arg);
    return Init_InterruptRequest_labels(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::InterruptRequest msg_;
};

class Init_InterruptRequest_robot_name
{
public:
  explicit Init_InterruptRequest_robot_name(::rmf_fleet_msgs::msg::InterruptRequest & msg)
  : msg_(msg)
  {}
  Init_InterruptRequest_interrupt_id robot_name(::rmf_fleet_msgs::msg::InterruptRequest::_robot_name_type arg)
  {
    msg_.robot_name = std::move(arg);
    return Init_InterruptRequest_interrupt_id(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::InterruptRequest msg_;
};

class Init_InterruptRequest_fleet_name
{
public:
  Init_InterruptRequest_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InterruptRequest_robot_name fleet_name(::rmf_fleet_msgs::msg::InterruptRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_InterruptRequest_robot_name(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::InterruptRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::InterruptRequest>()
{
  return rmf_fleet_msgs::msg::builder::Init_InterruptRequest_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__BUILDER_HPP_
