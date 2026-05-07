// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/LaneRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/lane_request__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_LaneRequest_close_lanes
{
public:
  explicit Init_LaneRequest_close_lanes(::rmf_fleet_msgs::msg::LaneRequest & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::LaneRequest close_lanes(::rmf_fleet_msgs::msg::LaneRequest::_close_lanes_type arg)
  {
    msg_.close_lanes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::LaneRequest msg_;
};

class Init_LaneRequest_open_lanes
{
public:
  explicit Init_LaneRequest_open_lanes(::rmf_fleet_msgs::msg::LaneRequest & msg)
  : msg_(msg)
  {}
  Init_LaneRequest_close_lanes open_lanes(::rmf_fleet_msgs::msg::LaneRequest::_open_lanes_type arg)
  {
    msg_.open_lanes = std::move(arg);
    return Init_LaneRequest_close_lanes(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::LaneRequest msg_;
};

class Init_LaneRequest_fleet_name
{
public:
  Init_LaneRequest_fleet_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaneRequest_open_lanes fleet_name(::rmf_fleet_msgs::msg::LaneRequest::_fleet_name_type arg)
  {
    msg_.fleet_name = std::move(arg);
    return Init_LaneRequest_open_lanes(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::LaneRequest msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::LaneRequest>()
{
  return rmf_fleet_msgs::msg::builder::Init_LaneRequest_fleet_name();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LANE_REQUEST__BUILDER_HPP_
