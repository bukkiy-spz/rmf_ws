// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/SpeedLimitedLane.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_SpeedLimitedLane_speed_limit
{
public:
  explicit Init_SpeedLimitedLane_speed_limit(::rmf_fleet_msgs::msg::SpeedLimitedLane & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::SpeedLimitedLane speed_limit(::rmf_fleet_msgs::msg::SpeedLimitedLane::_speed_limit_type arg)
  {
    msg_.speed_limit = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::SpeedLimitedLane msg_;
};

class Init_SpeedLimitedLane_lane_index
{
public:
  Init_SpeedLimitedLane_lane_index()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SpeedLimitedLane_speed_limit lane_index(::rmf_fleet_msgs::msg::SpeedLimitedLane::_lane_index_type arg)
  {
    msg_.lane_index = std::move(arg);
    return Init_SpeedLimitedLane_speed_limit(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::SpeedLimitedLane msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::SpeedLimitedLane>()
{
  return rmf_fleet_msgs::msg::builder::Init_SpeedLimitedLane_lane_index();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMITED_LANE__BUILDER_HPP_
