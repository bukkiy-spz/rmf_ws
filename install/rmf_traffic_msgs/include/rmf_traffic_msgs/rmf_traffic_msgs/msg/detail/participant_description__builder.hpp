// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ParticipantDescription.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/participant_description__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ParticipantDescription_profile
{
public:
  explicit Init_ParticipantDescription_profile(::rmf_traffic_msgs::msg::ParticipantDescription & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ParticipantDescription profile(::rmf_traffic_msgs::msg::ParticipantDescription::_profile_type arg)
  {
    msg_.profile = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ParticipantDescription msg_;
};

class Init_ParticipantDescription_responsiveness
{
public:
  explicit Init_ParticipantDescription_responsiveness(::rmf_traffic_msgs::msg::ParticipantDescription & msg)
  : msg_(msg)
  {}
  Init_ParticipantDescription_profile responsiveness(::rmf_traffic_msgs::msg::ParticipantDescription::_responsiveness_type arg)
  {
    msg_.responsiveness = std::move(arg);
    return Init_ParticipantDescription_profile(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ParticipantDescription msg_;
};

class Init_ParticipantDescription_owner
{
public:
  explicit Init_ParticipantDescription_owner(::rmf_traffic_msgs::msg::ParticipantDescription & msg)
  : msg_(msg)
  {}
  Init_ParticipantDescription_responsiveness owner(::rmf_traffic_msgs::msg::ParticipantDescription::_owner_type arg)
  {
    msg_.owner = std::move(arg);
    return Init_ParticipantDescription_responsiveness(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ParticipantDescription msg_;
};

class Init_ParticipantDescription_name
{
public:
  Init_ParticipantDescription_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParticipantDescription_owner name(::rmf_traffic_msgs::msg::ParticipantDescription::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_ParticipantDescription_owner(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ParticipantDescription msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ParticipantDescription>()
{
  return rmf_traffic_msgs::msg::builder::Init_ParticipantDescription_name();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANT_DESCRIPTION__BUILDER_HPP_
