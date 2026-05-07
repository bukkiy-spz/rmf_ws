// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/Region.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/region__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_Region_timespan
{
public:
  explicit Init_Region_timespan(::rmf_traffic_msgs::msg::Region & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::Region timespan(::rmf_traffic_msgs::msg::Region::_timespan_type arg)
  {
    msg_.timespan = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Region msg_;
};

class Init_Region_spaces
{
public:
  explicit Init_Region_spaces(::rmf_traffic_msgs::msg::Region & msg)
  : msg_(msg)
  {}
  Init_Region_timespan spaces(::rmf_traffic_msgs::msg::Region::_spaces_type arg)
  {
    msg_.spaces = std::move(arg);
    return Init_Region_timespan(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Region msg_;
};

class Init_Region_map
{
public:
  Init_Region_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Region_spaces map(::rmf_traffic_msgs::msg::Region::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_Region_spaces(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Region msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::Region>()
{
  return rmf_traffic_msgs::msg::builder::Init_Region_map();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__REGION__BUILDER_HPP_
