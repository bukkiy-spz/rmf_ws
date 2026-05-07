// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__BUILDER_HPP_
#define RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_task_msgs/msg/detail/delivery__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_task_msgs
{

namespace msg
{

namespace builder
{

class Init_Delivery_dropoff_behavior
{
public:
  explicit Init_Delivery_dropoff_behavior(::rmf_task_msgs::msg::Delivery & msg)
  : msg_(msg)
  {}
  ::rmf_task_msgs::msg::Delivery dropoff_behavior(::rmf_task_msgs::msg::Delivery::_dropoff_behavior_type arg)
  {
    msg_.dropoff_behavior = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_task_msgs::msg::Delivery msg_;
};

class Init_Delivery_dropoff_ingestor
{
public:
  explicit Init_Delivery_dropoff_ingestor(::rmf_task_msgs::msg::Delivery & msg)
  : msg_(msg)
  {}
  Init_Delivery_dropoff_behavior dropoff_ingestor(::rmf_task_msgs::msg::Delivery::_dropoff_ingestor_type arg)
  {
    msg_.dropoff_ingestor = std::move(arg);
    return Init_Delivery_dropoff_behavior(msg_);
  }

private:
  ::rmf_task_msgs::msg::Delivery msg_;
};

class Init_Delivery_dropoff_place_name
{
public:
  explicit Init_Delivery_dropoff_place_name(::rmf_task_msgs::msg::Delivery & msg)
  : msg_(msg)
  {}
  Init_Delivery_dropoff_ingestor dropoff_place_name(::rmf_task_msgs::msg::Delivery::_dropoff_place_name_type arg)
  {
    msg_.dropoff_place_name = std::move(arg);
    return Init_Delivery_dropoff_ingestor(msg_);
  }

private:
  ::rmf_task_msgs::msg::Delivery msg_;
};

class Init_Delivery_pickup_behavior
{
public:
  explicit Init_Delivery_pickup_behavior(::rmf_task_msgs::msg::Delivery & msg)
  : msg_(msg)
  {}
  Init_Delivery_dropoff_place_name pickup_behavior(::rmf_task_msgs::msg::Delivery::_pickup_behavior_type arg)
  {
    msg_.pickup_behavior = std::move(arg);
    return Init_Delivery_dropoff_place_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Delivery msg_;
};

class Init_Delivery_pickup_dispenser
{
public:
  explicit Init_Delivery_pickup_dispenser(::rmf_task_msgs::msg::Delivery & msg)
  : msg_(msg)
  {}
  Init_Delivery_pickup_behavior pickup_dispenser(::rmf_task_msgs::msg::Delivery::_pickup_dispenser_type arg)
  {
    msg_.pickup_dispenser = std::move(arg);
    return Init_Delivery_pickup_behavior(msg_);
  }

private:
  ::rmf_task_msgs::msg::Delivery msg_;
};

class Init_Delivery_pickup_place_name
{
public:
  explicit Init_Delivery_pickup_place_name(::rmf_task_msgs::msg::Delivery & msg)
  : msg_(msg)
  {}
  Init_Delivery_pickup_dispenser pickup_place_name(::rmf_task_msgs::msg::Delivery::_pickup_place_name_type arg)
  {
    msg_.pickup_place_name = std::move(arg);
    return Init_Delivery_pickup_dispenser(msg_);
  }

private:
  ::rmf_task_msgs::msg::Delivery msg_;
};

class Init_Delivery_items
{
public:
  explicit Init_Delivery_items(::rmf_task_msgs::msg::Delivery & msg)
  : msg_(msg)
  {}
  Init_Delivery_pickup_place_name items(::rmf_task_msgs::msg::Delivery::_items_type arg)
  {
    msg_.items = std::move(arg);
    return Init_Delivery_pickup_place_name(msg_);
  }

private:
  ::rmf_task_msgs::msg::Delivery msg_;
};

class Init_Delivery_task_id
{
public:
  Init_Delivery_task_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Delivery_items task_id(::rmf_task_msgs::msg::Delivery::_task_id_type arg)
  {
    msg_.task_id = std::move(arg);
    return Init_Delivery_items(msg_);
  }

private:
  ::rmf_task_msgs::msg::Delivery msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_task_msgs::msg::Delivery>()
{
  return rmf_task_msgs::msg::builder::Init_Delivery_task_id();
}

}  // namespace rmf_task_msgs

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__BUILDER_HPP_
