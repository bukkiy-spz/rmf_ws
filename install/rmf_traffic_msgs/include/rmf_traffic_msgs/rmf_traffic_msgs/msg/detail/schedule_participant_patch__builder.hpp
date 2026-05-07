// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleParticipantPatch_progress
{
public:
  explicit Init_ScheduleParticipantPatch_progress(::rmf_traffic_msgs::msg::ScheduleParticipantPatch & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleParticipantPatch progress(::rmf_traffic_msgs::msg::ScheduleParticipantPatch::_progress_type arg)
  {
    msg_.progress = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleParticipantPatch msg_;
};

class Init_ScheduleParticipantPatch_additions
{
public:
  explicit Init_ScheduleParticipantPatch_additions(::rmf_traffic_msgs::msg::ScheduleParticipantPatch & msg)
  : msg_(msg)
  {}
  Init_ScheduleParticipantPatch_progress additions(::rmf_traffic_msgs::msg::ScheduleParticipantPatch::_additions_type arg)
  {
    msg_.additions = std::move(arg);
    return Init_ScheduleParticipantPatch_progress(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleParticipantPatch msg_;
};

class Init_ScheduleParticipantPatch_delays
{
public:
  explicit Init_ScheduleParticipantPatch_delays(::rmf_traffic_msgs::msg::ScheduleParticipantPatch & msg)
  : msg_(msg)
  {}
  Init_ScheduleParticipantPatch_additions delays(::rmf_traffic_msgs::msg::ScheduleParticipantPatch::_delays_type arg)
  {
    msg_.delays = std::move(arg);
    return Init_ScheduleParticipantPatch_additions(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleParticipantPatch msg_;
};

class Init_ScheduleParticipantPatch_erasures
{
public:
  explicit Init_ScheduleParticipantPatch_erasures(::rmf_traffic_msgs::msg::ScheduleParticipantPatch & msg)
  : msg_(msg)
  {}
  Init_ScheduleParticipantPatch_delays erasures(::rmf_traffic_msgs::msg::ScheduleParticipantPatch::_erasures_type arg)
  {
    msg_.erasures = std::move(arg);
    return Init_ScheduleParticipantPatch_delays(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleParticipantPatch msg_;
};

class Init_ScheduleParticipantPatch_itinerary_version
{
public:
  explicit Init_ScheduleParticipantPatch_itinerary_version(::rmf_traffic_msgs::msg::ScheduleParticipantPatch & msg)
  : msg_(msg)
  {}
  Init_ScheduleParticipantPatch_erasures itinerary_version(::rmf_traffic_msgs::msg::ScheduleParticipantPatch::_itinerary_version_type arg)
  {
    msg_.itinerary_version = std::move(arg);
    return Init_ScheduleParticipantPatch_erasures(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleParticipantPatch msg_;
};

class Init_ScheduleParticipantPatch_participant_id
{
public:
  Init_ScheduleParticipantPatch_participant_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleParticipantPatch_itinerary_version participant_id(::rmf_traffic_msgs::msg::ScheduleParticipantPatch::_participant_id_type arg)
  {
    msg_.participant_id = std::move(arg);
    return Init_ScheduleParticipantPatch_itinerary_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleParticipantPatch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleParticipantPatch>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleParticipantPatch_participant_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PARTICIPANT_PATCH__BUILDER_HPP_
