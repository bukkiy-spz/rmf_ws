// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAddItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleChangeAddItem_route
{
public:
  explicit Init_ScheduleChangeAddItem_route(::rmf_traffic_msgs::msg::ScheduleChangeAddItem & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleChangeAddItem route(::rmf_traffic_msgs::msg::ScheduleChangeAddItem::_route_type arg)
  {
    msg_.route = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeAddItem msg_;
};

class Init_ScheduleChangeAddItem_storage_id
{
public:
  explicit Init_ScheduleChangeAddItem_storage_id(::rmf_traffic_msgs::msg::ScheduleChangeAddItem & msg)
  : msg_(msg)
  {}
  Init_ScheduleChangeAddItem_route storage_id(::rmf_traffic_msgs::msg::ScheduleChangeAddItem::_storage_id_type arg)
  {
    msg_.storage_id = std::move(arg);
    return Init_ScheduleChangeAddItem_route(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeAddItem msg_;
};

class Init_ScheduleChangeAddItem_route_id
{
public:
  Init_ScheduleChangeAddItem_route_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleChangeAddItem_storage_id route_id(::rmf_traffic_msgs::msg::ScheduleChangeAddItem::_route_id_type arg)
  {
    msg_.route_id = std::move(arg);
    return Init_ScheduleChangeAddItem_storage_id(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleChangeAddItem msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleChangeAddItem>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleChangeAddItem_route_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_CHANGE_ADD_ITEM__BUILDER_HPP_
