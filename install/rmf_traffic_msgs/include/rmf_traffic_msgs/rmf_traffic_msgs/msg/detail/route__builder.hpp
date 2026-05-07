// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/Route.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/route__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_Route_dependencies
{
public:
  explicit Init_Route_dependencies(::rmf_traffic_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::Route dependencies(::rmf_traffic_msgs::msg::Route::_dependencies_type arg)
  {
    msg_.dependencies = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Route msg_;
};

class Init_Route_checkpoints
{
public:
  explicit Init_Route_checkpoints(::rmf_traffic_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_dependencies checkpoints(::rmf_traffic_msgs::msg::Route::_checkpoints_type arg)
  {
    msg_.checkpoints = std::move(arg);
    return Init_Route_dependencies(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Route msg_;
};

class Init_Route_trajectory
{
public:
  explicit Init_Route_trajectory(::rmf_traffic_msgs::msg::Route & msg)
  : msg_(msg)
  {}
  Init_Route_checkpoints trajectory(::rmf_traffic_msgs::msg::Route::_trajectory_type arg)
  {
    msg_.trajectory = std::move(arg);
    return Init_Route_checkpoints(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Route msg_;
};

class Init_Route_map
{
public:
  Init_Route_map()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Route_trajectory map(::rmf_traffic_msgs::msg::Route::_map_type arg)
  {
    msg_.map = std::move(arg);
    return Init_Route_trajectory(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::Route msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::Route>()
{
  return rmf_traffic_msgs::msg::builder::Init_Route_map();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__ROUTE__BUILDER_HPP_
