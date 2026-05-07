// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQuerySpacetime.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_query_spacetime__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleQuerySpacetime_timespan
{
public:
  explicit Init_ScheduleQuerySpacetime_timespan(::rmf_traffic_msgs::msg::ScheduleQuerySpacetime & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleQuerySpacetime timespan(::rmf_traffic_msgs::msg::ScheduleQuerySpacetime::_timespan_type arg)
  {
    msg_.timespan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQuerySpacetime msg_;
};

class Init_ScheduleQuerySpacetime_shape_context
{
public:
  explicit Init_ScheduleQuerySpacetime_shape_context(::rmf_traffic_msgs::msg::ScheduleQuerySpacetime & msg)
  : msg_(msg)
  {}
  Init_ScheduleQuerySpacetime_timespan shape_context(::rmf_traffic_msgs::msg::ScheduleQuerySpacetime::_shape_context_type arg)
  {
    msg_.shape_context = std::move(arg);
    return Init_ScheduleQuerySpacetime_timespan(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQuerySpacetime msg_;
};

class Init_ScheduleQuerySpacetime_regions
{
public:
  explicit Init_ScheduleQuerySpacetime_regions(::rmf_traffic_msgs::msg::ScheduleQuerySpacetime & msg)
  : msg_(msg)
  {}
  Init_ScheduleQuerySpacetime_shape_context regions(::rmf_traffic_msgs::msg::ScheduleQuerySpacetime::_regions_type arg)
  {
    msg_.regions = std::move(arg);
    return Init_ScheduleQuerySpacetime_shape_context(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQuerySpacetime msg_;
};

class Init_ScheduleQuerySpacetime_type
{
public:
  Init_ScheduleQuerySpacetime_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleQuerySpacetime_regions type(::rmf_traffic_msgs::msg::ScheduleQuerySpacetime::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_ScheduleQuerySpacetime_regions(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQuerySpacetime msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleQuerySpacetime>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleQuerySpacetime_type();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERY_SPACETIME__BUILDER_HPP_
