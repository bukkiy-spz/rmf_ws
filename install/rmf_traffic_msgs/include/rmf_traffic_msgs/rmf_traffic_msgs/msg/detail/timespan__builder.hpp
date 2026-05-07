// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/timespan__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_Timespan_upper_bound
{
public:
  explicit Init_Timespan_upper_bound(::rmf_traffic_msgs::msg::Timespan & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::Timespan upper_bound(::rmf_traffic_msgs::msg::Timespan::_upper_bound_type arg)
  {
    msg_.upper_bound = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Timespan msg_;
};

class Init_Timespan_has_upper_bound
{
public:
  explicit Init_Timespan_has_upper_bound(::rmf_traffic_msgs::msg::Timespan & msg)
  : msg_(msg)
  {}
  Init_Timespan_upper_bound has_upper_bound(::rmf_traffic_msgs::msg::Timespan::_has_upper_bound_type arg)
  {
    msg_.has_upper_bound = std::move(arg);
    return Init_Timespan_upper_bound(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Timespan msg_;
};

class Init_Timespan_lower_bound
{
public:
  explicit Init_Timespan_lower_bound(::rmf_traffic_msgs::msg::Timespan & msg)
  : msg_(msg)
  {}
  Init_Timespan_has_upper_bound lower_bound(::rmf_traffic_msgs::msg::Timespan::_lower_bound_type arg)
  {
    msg_.lower_bound = std::move(arg);
    return Init_Timespan_has_upper_bound(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Timespan msg_;
};

class Init_Timespan_has_lower_bound
{
public:
  explicit Init_Timespan_has_lower_bound(::rmf_traffic_msgs::msg::Timespan & msg)
  : msg_(msg)
  {}
  Init_Timespan_lower_bound has_lower_bound(::rmf_traffic_msgs::msg::Timespan::_has_lower_bound_type arg)
  {
    msg_.has_lower_bound = std::move(arg);
    return Init_Timespan_lower_bound(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Timespan msg_;
};

class Init_Timespan_maps
{
public:
  Init_Timespan_maps()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Timespan_has_lower_bound maps(::rmf_traffic_msgs::msg::Timespan::_maps_type arg)
  {
    msg_.maps = std::move(arg);
    return Init_Timespan_has_lower_bound(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Timespan msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::Timespan>()
{
  return rmf_traffic_msgs::msg::builder::Init_Timespan_maps();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TIMESPAN__BUILDER_HPP_
