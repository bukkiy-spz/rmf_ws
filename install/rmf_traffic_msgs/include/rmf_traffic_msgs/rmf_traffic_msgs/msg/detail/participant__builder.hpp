// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/Participant.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/participant__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_Participant_description
{
public:
  explicit Init_Participant_description(::rmf_traffic_msgs::msg::Participant & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::Participant description(::rmf_traffic_msgs::msg::Participant::_description_type arg)
  {
    msg_.description = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Participant msg_;
};

class Init_Participant_id
{
public:
  Init_Participant_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Participant_description id(::rmf_traffic_msgs::msg::Participant::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Participant_description(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Participant msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::Participant>()
{
  return rmf_traffic_msgs::msg::builder::Init_Participant_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT__BUILDER_HPP_
