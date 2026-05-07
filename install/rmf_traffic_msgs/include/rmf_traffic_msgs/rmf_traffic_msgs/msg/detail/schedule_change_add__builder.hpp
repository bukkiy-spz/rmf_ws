// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAdd.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_change_add__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleChangeAdd_items
{
public:
  explicit Init_ScheduleChangeAdd_items(::rmf_traffic_msgs::msg::ScheduleChangeAdd & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleChangeAdd items(::rmf_traffic_msgs::msg::ScheduleChangeAdd::_items_type arg)
  {
    msg_.items = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeAdd msg_;
};

class Init_ScheduleChangeAdd_plan_id
{
public:
  Init_ScheduleChangeAdd_plan_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleChangeAdd_items plan_id(::rmf_traffic_msgs::msg::ScheduleChangeAdd::_plan_id_type arg)
  {
    msg_.plan_id = std::move(arg);
    return Init_ScheduleChangeAdd_items(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeAdd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleChangeAdd>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleChangeAdd_plan_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD__BUILDER_HPP_
