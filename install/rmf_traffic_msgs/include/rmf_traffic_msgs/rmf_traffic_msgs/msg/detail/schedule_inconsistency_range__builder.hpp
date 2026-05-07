// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistencyRange.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency_range__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleInconsistencyRange_upper
{
public:
  explicit Init_ScheduleInconsistencyRange_upper(::rmf_traffic_msgs::msg::ScheduleInconsistencyRange & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleInconsistencyRange upper(::rmf_traffic_msgs::msg::ScheduleInconsistencyRange::_upper_type arg)
  {
    msg_.upper = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleInconsistencyRange msg_;
};

class Init_ScheduleInconsistencyRange_lower
{
public:
  Init_ScheduleInconsistencyRange_lower()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleInconsistencyRange_upper lower(::rmf_traffic_msgs::msg::ScheduleInconsistencyRange::_lower_type arg)
  {
    msg_.lower = std::move(arg);
    return Init_ScheduleInconsistencyRange_upper(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleInconsistencyRange msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleInconsistencyRange>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleInconsistencyRange_lower();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_INCONSISTENCY_RANGE__BUILDER_HPP_
