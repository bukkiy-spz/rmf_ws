// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryDelay.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_DELAY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_DELAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/itinerary_delay__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ItineraryDelay_itinerary_version
{
public:
  explicit Init_ItineraryDelay_itinerary_version(::rmf_traffic_msgs::msg::ItineraryDelay & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ItineraryDelay itinerary_version(::rmf_traffic_msgs::msg::ItineraryDelay::_itinerary_version_type arg)
  {
    msg_.itinerary_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryDelay msg_;
};

class Init_ItineraryDelay_delay
{
public:
  explicit Init_ItineraryDelay_delay(::rmf_traffic_msgs::msg::ItineraryDelay & msg)
  : msg_(msg)
  {}
  Init_ItineraryDelay_itinerary_version delay(::rmf_traffic_msgs::msg::ItineraryDelay::_delay_type arg)
  {
    msg_.delay = std::move(arg);
    return Init_ItineraryDelay_itinerary_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryDelay msg_;
};

class Init_ItineraryDelay_participant
{
public:
  Init_ItineraryDelay_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItineraryDelay_delay participant(::rmf_traffic_msgs::msg::ItineraryDelay::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_ItineraryDelay_delay(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryDelay msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ItineraryDelay>()
{
  return rmf_traffic_msgs::msg::builder::Init_ItineraryDelay_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_DELAY__BUILDER_HPP_
