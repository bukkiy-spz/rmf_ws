// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/Profile.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/profile__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_Profile_shape_context
{
public:
  explicit Init_Profile_shape_context(::rmf_traffic_msgs::msg::Profile & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::Profile shape_context(::rmf_traffic_msgs::msg::Profile::_shape_context_type arg)
  {
    msg_.shape_context = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Profile msg_;
};

class Init_Profile_vicinity
{
public:
  explicit Init_Profile_vicinity(::rmf_traffic_msgs::msg::Profile & msg)
  : msg_(msg)
  {}
  Init_Profile_shape_context vicinity(::rmf_traffic_msgs::msg::Profile::_vicinity_type arg)
  {
    msg_.vicinity = std::move(arg);
    return Init_Profile_shape_context(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Profile msg_;
};

class Init_Profile_footprint
{
public:
  Init_Profile_footprint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Profile_vicinity footprint(::rmf_traffic_msgs::msg::Profile::_footprint_type arg)
  {
    msg_.footprint = std::move(arg);
    return Init_Profile_vicinity(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Profile msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::Profile>()
{
  return rmf_traffic_msgs::msg::builder::Init_Profile_footprint();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PROFILE__BUILDER_HPP_
