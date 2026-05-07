// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQueryParticipants.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleQueryParticipants_ids
{
public:
  explicit Init_ScheduleQueryParticipants_ids(::rmf_traffic_msgs::msg::ScheduleQueryParticipants & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleQueryParticipants ids(::rmf_traffic_msgs::msg::ScheduleQueryParticipants::_ids_type arg)
  {
    msg_.ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQueryParticipants msg_;
};

class Init_ScheduleQueryParticipants_type
{
public:
  Init_ScheduleQueryParticipants_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleQueryParticipants_ids type(::rmf_traffic_msgs::msg::ScheduleQueryParticipants::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ScheduleQueryParticipants_ids(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQueryParticipants msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleQueryParticipants>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleQueryParticipants_type();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_PARTICIPANTS__BUILDER_HPP_
