// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/BeaconState.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/beacon_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_BeaconState_level
{
public:
  explicit Init_BeaconState_level(::rmf_fleet_msgs::msg::BeaconState & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::BeaconState level(::rmf_fleet_msgs::msg::BeaconState::_level_type arg)
  {
    msg_.level = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::BeaconState msg_;
};

class Init_BeaconState_activated
{
public:
  explicit Init_BeaconState_activated(::rmf_fleet_msgs::msg::BeaconState & msg)
  : msg_(msg)
  {}
  Init_BeaconState_level activated(::rmf_fleet_msgs::msg::BeaconState::_activated_type arg)
  {
    msg_.activated = std::move(arg);
    return Init_BeaconState_level(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::BeaconState msg_;
};

class Init_BeaconState_category
{
public:
  explicit Init_BeaconState_category(::rmf_fleet_msgs::msg::BeaconState & msg)
  : msg_(msg)
  {}
  Init_BeaconState_activated category(::rmf_fleet_msgs::msg::BeaconState::_category_type arg)
  {
    msg_.category = std::move(arg);
    return Init_BeaconState_activated(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::BeaconState msg_;
};

class Init_BeaconState_online
{
public:
  explicit Init_BeaconState_online(::rmf_fleet_msgs::msg::BeaconState & msg)
  : msg_(msg)
  {}
  Init_BeaconState_category online(::rmf_fleet_msgs::msg::BeaconState::_online_type arg)
  {
    msg_.online = std::move(arg);
    return Init_BeaconState_category(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::BeaconState msg_;
};

class Init_BeaconState_id
{
public:
  Init_BeaconState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BeaconState_online id(::rmf_fleet_msgs::msg::BeaconState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_BeaconState_online(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::BeaconState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::BeaconState>()
{
  return rmf_fleet_msgs::msg::builder::Init_BeaconState_id();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__BEACON_STATE__BUILDER_HPP_
