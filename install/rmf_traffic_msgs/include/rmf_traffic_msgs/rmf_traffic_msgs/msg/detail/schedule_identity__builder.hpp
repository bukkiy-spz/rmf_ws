// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleIdentity.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_identity__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleIdentity_timestamp
{
public:
  explicit Init_ScheduleIdentity_timestamp(::rmf_traffic_msgs::msg::ScheduleIdentity & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleIdentity timestamp(::rmf_traffic_msgs::msg::ScheduleIdentity::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleIdentity msg_;
};

class Init_ScheduleIdentity_node_uuid
{
public:
  Init_ScheduleIdentity_node_uuid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleIdentity_timestamp node_uuid(::rmf_traffic_msgs::msg::ScheduleIdentity::_node_uuid_type arg)
  {
    msg_.node_uuid = std::move(arg);
    return Init_ScheduleIdentity_timestamp(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleIdentity msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleIdentity>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleIdentity_node_uuid();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__BUILDER_HPP_
