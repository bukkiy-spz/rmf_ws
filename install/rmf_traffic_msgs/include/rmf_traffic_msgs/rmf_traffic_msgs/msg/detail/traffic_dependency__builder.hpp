// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/TrafficDependency.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/traffic_dependency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_TrafficDependency_on_checkpoint
{
public:
  explicit Init_TrafficDependency_on_checkpoint(::rmf_traffic_msgs::msg::TrafficDependency & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::TrafficDependency on_checkpoint(::rmf_traffic_msgs::msg::TrafficDependency::_on_checkpoint_type arg)
  {
    msg_.on_checkpoint = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::TrafficDependency msg_;
};

class Init_TrafficDependency_on_route
{
public:
  explicit Init_TrafficDependency_on_route(::rmf_traffic_msgs::msg::TrafficDependency & msg)
  : msg_(msg)
  {}
  Init_TrafficDependency_on_checkpoint on_route(::rmf_traffic_msgs::msg::TrafficDependency::_on_route_type arg)
  {
    msg_.on_route = std::move(arg);
    return Init_TrafficDependency_on_checkpoint(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::TrafficDependency msg_;
};

class Init_TrafficDependency_on_plan
{
public:
  explicit Init_TrafficDependency_on_plan(::rmf_traffic_msgs::msg::TrafficDependency & msg)
  : msg_(msg)
  {}
  Init_TrafficDependency_on_route on_plan(::rmf_traffic_msgs::msg::TrafficDependency::_on_plan_type arg)
  {
    msg_.on_plan = std::move(arg);
    return Init_TrafficDependency_on_route(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::TrafficDependency msg_;
};

class Init_TrafficDependency_on_participant
{
public:
  explicit Init_TrafficDependency_on_participant(::rmf_traffic_msgs::msg::TrafficDependency & msg)
  : msg_(msg)
  {}
  Init_TrafficDependency_on_plan on_participant(::rmf_traffic_msgs::msg::TrafficDependency::_on_participant_type arg)
  {
    msg_.on_participant = std::move(arg);
    return Init_TrafficDependency_on_plan(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::TrafficDependency msg_;
};

class Init_TrafficDependency_dependent_checkpoint
{
public:
  Init_TrafficDependency_dependent_checkpoint()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficDependency_on_participant dependent_checkpoint(::rmf_traffic_msgs::msg::TrafficDependency::_dependent_checkpoint_type arg)
  {
    msg_.dependent_checkpoint = std::move(arg);
    return Init_TrafficDependency_on_participant(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::TrafficDependency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::TrafficDependency>()
{
  return rmf_traffic_msgs::msg::builder::Init_TrafficDependency_dependent_checkpoint();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__TRAFFIC_DEPENDENCY__BUILDER_HPP_
