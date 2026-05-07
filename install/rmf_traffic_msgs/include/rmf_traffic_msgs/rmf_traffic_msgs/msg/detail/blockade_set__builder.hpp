// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeSet.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/blockade_set__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockadeSet_path
{
public:
  explicit Init_BlockadeSet_path(::rmf_traffic_msgs::msg::BlockadeSet & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::BlockadeSet path(::rmf_traffic_msgs::msg::BlockadeSet::_path_type arg)
  {
    msg_.path = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeSet msg_;
};

class Init_BlockadeSet_radius
{
public:
  explicit Init_BlockadeSet_radius(::rmf_traffic_msgs::msg::BlockadeSet & msg)
  : msg_(msg)
  {}
  Init_BlockadeSet_path radius(::rmf_traffic_msgs::msg::BlockadeSet::_radius_type arg)
  {
    msg_.radius = std::move(arg);
    return Init_BlockadeSet_path(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeSet msg_;
};

class Init_BlockadeSet_reservation
{
public:
  explicit Init_BlockadeSet_reservation(::rmf_traffic_msgs::msg::BlockadeSet & msg)
  : msg_(msg)
  {}
  Init_BlockadeSet_radius reservation(::rmf_traffic_msgs::msg::BlockadeSet::_reservation_type arg)
  {
    msg_.reservation = std::move(arg);
    return Init_BlockadeSet_radius(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeSet msg_;
};

class Init_BlockadeSet_participant
{
public:
  Init_BlockadeSet_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockadeSet_reservation participant(::rmf_traffic_msgs::msg::BlockadeSet::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_BlockadeSet_reservation(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeSet msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::BlockadeSet>()
{
  return rmf_traffic_msgs::msg::builder::Init_BlockadeSet_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_SET__BUILDER_HPP_
