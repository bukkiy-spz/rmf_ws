// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryExtend.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/itinerary_extend__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ItineraryExtend_itinerary_version
{
public:
  explicit Init_ItineraryExtend_itinerary_version(::rmf_traffic_msgs::msg::ItineraryExtend & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ItineraryExtend itinerary_version(::rmf_traffic_msgs::msg::ItineraryExtend::_itinerary_version_type arg)
  {
    msg_.itinerary_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryExtend msg_;
};

class Init_ItineraryExtend_routes
{
public:
  explicit Init_ItineraryExtend_routes(::rmf_traffic_msgs::msg::ItineraryExtend & msg)
  : msg_(msg)
  {}
  Init_ItineraryExtend_itinerary_version routes(::rmf_traffic_msgs::msg::ItineraryExtend::_routes_type arg)
  {
    msg_.routes = std::move(arg);
    return Init_ItineraryExtend_itinerary_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryExtend msg_;
};

class Init_ItineraryExtend_participant
{
public:
  Init_ItineraryExtend_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItineraryExtend_routes participant(::rmf_traffic_msgs::msg::ItineraryExtend::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_ItineraryExtend_routes(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryExtend msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ItineraryExtend>()
{
  return rmf_traffic_msgs::msg::builder::Init_ItineraryExtend_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_EXTEND__BUILDER_HPP_
