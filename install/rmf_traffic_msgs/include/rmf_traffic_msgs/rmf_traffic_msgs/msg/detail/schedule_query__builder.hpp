// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQuery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_query__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleQuery_participants
{
public:
  explicit Init_ScheduleQuery_participants(::rmf_traffic_msgs::msg::ScheduleQuery & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleQuery participants(::rmf_traffic_msgs::msg::ScheduleQuery::_participants_type arg)
  {
    msg_.participants = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQuery msg_;
};

class Init_ScheduleQuery_spacetime
{
public:
  Init_ScheduleQuery_spacetime()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleQuery_participants spacetime(::rmf_traffic_msgs::msg::ScheduleQuery::_spacetime_type arg)
  {
    msg_.spacetime = std::move(arg);
    return Init_ScheduleQuery_participants(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQuery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleQuery>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleQuery_spacetime();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY__BUILDER_HPP_
