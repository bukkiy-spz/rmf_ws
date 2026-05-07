// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_fleet_msgs:msg/Location.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_fleet_msgs/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_fleet_msgs
{

namespace msg
{

namespace builder
{

class Init_Location_index
{
public:
  explicit Init_Location_index(::rmf_fleet_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  ::rmf_fleet_msgs::msg::Location index(::rmf_fleet_msgs::msg::Location::_index_type arg)
  {
    msg_.index = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Location msg_;
};

class Init_Location_level_name
{
public:
  explicit Init_Location_level_name(::rmf_fleet_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_index level_name(::rmf_fleet_msgs::msg::Location::_level_name_type arg)
  {
    msg_.level_name = std::move(arg);
    return Init_Location_index(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Location msg_;
};

class Init_Location_approach_speed_limit
{
public:
  explicit Init_Location_approach_speed_limit(::rmf_fleet_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_level_name approach_speed_limit(::rmf_fleet_msgs::msg::Location::_approach_speed_limit_type arg)
  {
    msg_.approach_speed_limit = std::move(arg);
    return Init_Location_level_name(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Location msg_;
};

class Init_Location_obey_approach_speed_limit
{
public:
  explicit Init_Location_obey_approach_speed_limit(::rmf_fleet_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_approach_speed_limit obey_approach_speed_limit(::rmf_fleet_msgs::msg::Location::_obey_approach_speed_limit_type arg)
  {
    msg_.obey_approach_speed_limit = std::move(arg);
    return Init_Location_approach_speed_limit(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Location msg_;
};

class Init_Location_yaw
{
public:
  explicit Init_Location_yaw(::rmf_fleet_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_obey_approach_speed_limit yaw(::rmf_fleet_msgs::msg::Location::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_Location_obey_approach_speed_limit(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Location msg_;
};

class Init_Location_y
{
public:
  explicit Init_Location_y(::rmf_fleet_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_yaw y(::rmf_fleet_msgs::msg::Location::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Location_yaw(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Location msg_;
};

class Init_Location_x
{
public:
  explicit Init_Location_x(::rmf_fleet_msgs::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_y x(::rmf_fleet_msgs::msg::Location::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Location_y(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Location msg_;
};

class Init_Location_t
{
public:
  Init_Location_t()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_x t(::rmf_fleet_msgs::msg::Location::_t_type arg)
  {
    msg_.t = std::move(arg);
    return Init_Location_x(msg_);
  }

private:
  ::rmf_fleet_msgs::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_fleet_msgs::msg::Location>()
{
  return rmf_fleet_msgs::msg::builder::Init_Location_t();
}

}  // namespace rmf_fleet_msgs

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__LOCATION__BUILDER_HPP_
