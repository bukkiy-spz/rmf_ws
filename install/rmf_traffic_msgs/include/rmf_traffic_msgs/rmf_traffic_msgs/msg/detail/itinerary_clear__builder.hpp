// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ItineraryClear.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_CLEAR__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_CLEAR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/itinerary_clear__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ItineraryClear_itinerary_version
{
public:
  explicit Init_ItineraryClear_itinerary_version(::rmf_traffic_msgs::msg::ItineraryClear & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ItineraryClear itinerary_version(::rmf_traffic_msgs::msg::ItineraryClear::_itinerary_version_type arg)
  {
    msg_.itinerary_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryClear msg_;
};

class Init_ItineraryClear_participant
{
public:
  Init_ItineraryClear_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItineraryClear_itinerary_version participant(::rmf_traffic_msgs::msg::ItineraryClear::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_ItineraryClear_itinerary_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItineraryClear msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ItineraryClear>()
{
  return rmf_traffic_msgs::msg::builder::Init_ItineraryClear_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_CLEAR__BUILDER_HPP_
