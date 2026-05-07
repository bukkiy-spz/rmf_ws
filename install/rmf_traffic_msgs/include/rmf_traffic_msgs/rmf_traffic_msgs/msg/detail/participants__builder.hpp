// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/Participants.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/participants__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_Participants_participants
{
public:
  explicit Init_Participants_participants(::rmf_traffic_msgs::msg::Participants & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::Participants participants(::rmf_traffic_msgs::msg::Participants::_participants_type arg)
  {
    msg_.participants = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Participants msg_;
};

class Init_Participants_node_id
{
public:
  Init_Participants_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Participants_participants node_id(::rmf_traffic_msgs::msg::Participants::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_Participants_participants(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Participants msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::Participants>()
{
  return rmf_traffic_msgs::msg::builder::Init_Participants_node_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__BUILDER_HPP_
