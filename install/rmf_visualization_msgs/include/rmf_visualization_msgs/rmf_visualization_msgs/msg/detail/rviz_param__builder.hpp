// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_visualization_msgs:msg/RvizParam.idl
// generated code does not contain a copyright notice

#ifndef RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__BUILDER_HPP_
#define RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_visualization_msgs/msg/detail/rviz_param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_visualization_msgs
{

namespace msg
{

namespace builder
{

class Init_RvizParam_start_duration
{
public:
  explicit Init_RvizParam_start_duration(::rmf_visualization_msgs::msg::RvizParam & msg)
  : msg_(msg)
  {}
  ::rmf_visualization_msgs::msg::RvizParam start_duration(::rmf_visualization_msgs::msg::RvizParam::_start_duration_type arg)
  {
    msg_.start_duration = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_visualization_msgs::msg::RvizParam msg_;
};

class Init_RvizParam_query_duration
{
public:
  explicit Init_RvizParam_query_duration(::rmf_visualization_msgs::msg::RvizParam & msg)
  : msg_(msg)
  {}
  Init_RvizParam_start_duration query_duration(::rmf_visualization_msgs::msg::RvizParam::_query_duration_type arg)
  {
    msg_.query_duration = std::move(arg);
    return Init_RvizParam_start_duration(msg_);
  }

private:
  ::rmf_visualization_msgs::msg::RvizParam msg_;
};

class Init_RvizParam_map_name
{
public:
  Init_RvizParam_map_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_RvizParam_query_duration map_name(::rmf_visualization_msgs::msg::RvizParam::_map_name_type arg)
  {
    msg_.map_name = std::move(arg);
    return Init_RvizParam_query_duration(msg_);
  }

private:
  ::rmf_visualization_msgs::msg::RvizParam msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_visualization_msgs::msg::RvizParam>()
{
  return rmf_visualization_msgs::msg::builder::Init_RvizParam_map_name();
}

}  // namespace rmf_visualization_msgs

#endif  // RMF_VISUALIZATION_MSGS__MSG__DETAIL__RVIZ_PARAM__BUILDER_HPP_
