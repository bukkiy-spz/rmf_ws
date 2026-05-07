// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeDelay.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleChangeDelay_delay
{
public:
  Init_ScheduleChangeDelay_delay()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rmf_traffic_msgs::msg::ScheduleChangeDelay delay(::rmf_traffic_msgs::msg::ScheduleChangeDelay::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeDelay msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleChangeDelay>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleChangeDelay_delay();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_DELAY__BUILDER_HPP_
