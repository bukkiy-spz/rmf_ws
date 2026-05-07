// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/SchedulePatch.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_patch__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_SchedulePatch_latest_version
{
public:
  explicit Init_SchedulePatch_latest_version(::rmf_traffic_msgs::msg::SchedulePatch & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::SchedulePatch latest_version(::rmf_traffic_msgs::msg::SchedulePatch::_latest_version_type arg)
  {
    msg_.latest_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::SchedulePatch msg_;
};

class Init_SchedulePatch_base_version
{
public:
  explicit Init_SchedulePatch_base_version(::rmf_traffic_msgs::msg::SchedulePatch & msg)
  : msg_(msg)
  {}
  Init_SchedulePatch_latest_version base_version(::rmf_traffic_msgs::msg::SchedulePatch::_base_version_type arg)
  {
    msg_.base_version = std::move(arg);
    return Init_SchedulePatch_latest_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::SchedulePatch msg_;
};

class Init_SchedulePatch_has_base_version
{
public:
  explicit Init_SchedulePatch_has_base_version(::rmf_traffic_msgs::msg::SchedulePatch & msg)
  : msg_(msg)
  {}
  Init_SchedulePatch_base_version has_base_version(::rmf_traffic_msgs::msg::SchedulePatch::_has_base_version_type arg)
  {
    msg_.has_base_version = std::move(arg);
    return Init_SchedulePatch_base_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::SchedulePatch msg_;
};

class Init_SchedulePatch_cull
{
public:
  explicit Init_SchedulePatch_cull(::rmf_traffic_msgs::msg::SchedulePatch & msg)
  : msg_(msg)
  {}
  Init_SchedulePatch_has_base_version cull(::rmf_traffic_msgs::msg::SchedulePatch::_cull_type arg)
  {
    msg_.cull = std::move(arg);
    return Init_SchedulePatch_has_base_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::SchedulePatch msg_;
};

class Init_SchedulePatch_participants
{
public:
  Init_SchedulePatch_participants()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SchedulePatch_cull participants(::rmf_traffic_msgs::msg::SchedulePatch::_participants_type arg)
  {
    msg_.participants = std::move(arg);
    return Init_SchedulePatch_cull(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::SchedulePatch msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::SchedulePatch>()
{
  return rmf_traffic_msgs::msg::builder::Init_SchedulePatch_participants();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_PATCH__BUILDER_HPP_
