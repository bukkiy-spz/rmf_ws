// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryReached.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/itinerary_reached__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ItineraryReached_progress_version
{
public:
  explicit Init_ItineraryReached_progress_version(::rmf_traffic_msgs::msg::ItineraryReached & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ItineraryReached progress_version(::rmf_traffic_msgs::msg::ItineraryReached::_progress_version_type arg)
  {
    msg_.progress_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryReached msg_;
};

class Init_ItineraryReached_reached_checkpoints
{
public:
  explicit Init_ItineraryReached_reached_checkpoints(::rmf_traffic_msgs::msg::ItineraryReached & msg)
  : msg_(msg)
  {}
  Init_ItineraryReached_progress_version reached_checkpoints(::rmf_traffic_msgs::msg::ItineraryReached::_reached_checkpoints_type arg)
  {
    msg_.reached_checkpoints = std::move(arg);
    return Init_ItineraryReached_progress_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryReached msg_;
};

class Init_ItineraryReached_plan
{
public:
  explicit Init_ItineraryReached_plan(::rmf_traffic_msgs::msg::ItineraryReached & msg)
  : msg_(msg)
  {}
  Init_ItineraryReached_reached_checkpoints plan(::rmf_traffic_msgs::msg::ItineraryReached::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return Init_ItineraryReached_reached_checkpoints(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryReached msg_;
};

class Init_ItineraryReached_participant
{
public:
  Init_ItineraryReached_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItineraryReached_plan participant(::rmf_traffic_msgs::msg::ItineraryReached::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_ItineraryReached_plan(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryReached msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ItineraryReached>()
{
  return rmf_traffic_msgs::msg::builder::Init_ItineraryReached_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_REACHED__BUILDER_HPP_
