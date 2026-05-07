// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ItinerarySet.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/itinerary_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ItinerarySet_itinerary_version
{
public:
  explicit Init_ItinerarySet_itinerary_version(::rmf_traffic_msgs::msg::ItinerarySet & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ItinerarySet itinerary_version(::rmf_traffic_msgs::msg::ItinerarySet::_itinerary_version_type arg)
  {
    msg_.itinerary_version = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItinerarySet msg_;
};

class Init_ItinerarySet_storage_base
{
public:
  explicit Init_ItinerarySet_storage_base(::rmf_traffic_msgs::msg::ItinerarySet & msg)
  : msg_(msg)
  {}
  Init_ItinerarySet_itinerary_version storage_base(::rmf_traffic_msgs::msg::ItinerarySet::_storage_base_type arg)
  {
    msg_.storage_base = std::move(arg);
    return Init_ItinerarySet_itinerary_version(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItinerarySet msg_;
};

class Init_ItinerarySet_itinerary
{
public:
  explicit Init_ItinerarySet_itinerary(::rmf_traffic_msgs::msg::ItinerarySet & msg)
  : msg_(msg)
  {}
  Init_ItinerarySet_storage_base itinerary(::rmf_traffic_msgs::msg::ItinerarySet::_itinerary_type arg)
  {
    msg_.itinerary = std::move(arg);
    return Init_ItinerarySet_storage_base(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItinerarySet msg_;
};

class Init_ItinerarySet_plan
{
public:
  explicit Init_ItinerarySet_plan(::rmf_traffic_msgs::msg::ItinerarySet & msg)
  : msg_(msg)
  {}
  Init_ItinerarySet_itinerary plan(::rmf_traffic_msgs::msg::ItinerarySet::_plan_type arg)
  {
    msg_.plan = std::move(arg);
    return Init_ItinerarySet_itinerary(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItinerarySet msg_;
};

class Init_ItinerarySet_participant
{
public:
  Init_ItinerarySet_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ItinerarySet_plan participant(::rmf_traffic_msgs::msg::ItinerarySet::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_ItinerarySet_plan(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ItinerarySet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ItinerarySet>()
{
  return rmf_traffic_msgs::msg::builder::Init_ItinerarySet_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ITINERARY_SET__BUILDER_HPP_
