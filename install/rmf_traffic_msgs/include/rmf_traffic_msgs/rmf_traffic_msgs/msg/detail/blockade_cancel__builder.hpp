// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/BlockadeCancel.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/blockade_cancel__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_BlockadeCancel_reservation
{
public:
  explicit Init_BlockadeCancel_reservation(::rmf_traffic_msgs::msg::BlockadeCancel & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::BlockadeCancel reservation(::rmf_traffic_msgs::msg::BlockadeCancel::_reservation_type arg)
  {
    msg_.reservation = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeCancel msg_;
};

class Init_BlockadeCancel_all_reservations
{
public:
  explicit Init_BlockadeCancel_all_reservations(::rmf_traffic_msgs::msg::BlockadeCancel & msg)
  : msg_(msg)
  {}
  Init_BlockadeCancel_reservation all_reservations(::rmf_traffic_msgs::msg::BlockadeCancel::_all_reservations_type arg)
  {
    msg_.all_reservations = std::move(arg);
    return Init_BlockadeCancel_reservation(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeCancel msg_;
};

class Init_BlockadeCancel_participant
{
public:
  Init_BlockadeCancel_participant()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BlockadeCancel_all_reservations participant(::rmf_traffic_msgs::msg::BlockadeCancel::_participant_type arg)
  {
    msg_.participant = std::move(arg);
    return Init_BlockadeCancel_all_reservations(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::BlockadeCancel msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::BlockadeCancel>()
{
  return rmf_traffic_msgs::msg::builder::Init_BlockadeCancel_participant();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__BUILDER_HPP_
