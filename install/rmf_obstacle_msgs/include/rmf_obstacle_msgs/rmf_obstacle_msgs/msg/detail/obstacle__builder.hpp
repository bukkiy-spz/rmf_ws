// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_obstacle_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#ifndef RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
#define RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_obstacle_msgs/msg/detail/obstacle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_obstacle_msgs
{

namespace msg
{

namespace builder
{

class Init_Obstacle_action
{
public:
  explicit Init_Obstacle_action(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  ::rmf_obstacle_msgs::msg::Obstacle action(::rmf_obstacle_msgs::msg::Obstacle::_action_type arg)
  {
    msg_.action = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_lifetime
{
public:
  explicit Init_Obstacle_lifetime(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_action lifetime(::rmf_obstacle_msgs::msg::Obstacle::_lifetime_type arg)
  {
    msg_.lifetime = std::move(arg);
    return Init_Obstacle_action(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_data
{
public:
  explicit Init_Obstacle_data(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_lifetime data(::rmf_obstacle_msgs::msg::Obstacle::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_Obstacle_lifetime(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_data_resolution
{
public:
  explicit Init_Obstacle_data_resolution(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_data data_resolution(::rmf_obstacle_msgs::msg::Obstacle::_data_resolution_type arg)
  {
    msg_.data_resolution = std::move(arg);
    return Init_Obstacle_data(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_bbox
{
public:
  explicit Init_Obstacle_bbox(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_data_resolution bbox(::rmf_obstacle_msgs::msg::Obstacle::_bbox_type arg)
  {
    msg_.bbox = std::move(arg);
    return Init_Obstacle_data_resolution(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_classification
{
public:
  explicit Init_Obstacle_classification(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_bbox classification(::rmf_obstacle_msgs::msg::Obstacle::_classification_type arg)
  {
    msg_.classification = std::move(arg);
    return Init_Obstacle_bbox(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_level_name
{
public:
  explicit Init_Obstacle_level_name(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_classification level_name(::rmf_obstacle_msgs::msg::Obstacle::_level_name_type arg)
  {
    msg_.level_name = std::move(arg);
    return Init_Obstacle_classification(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_source
{
public:
  explicit Init_Obstacle_source(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_level_name source(::rmf_obstacle_msgs::msg::Obstacle::_source_type arg)
  {
    msg_.source = std::move(arg);
    return Init_Obstacle_level_name(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_id
{
public:
  explicit Init_Obstacle_id(::rmf_obstacle_msgs::msg::Obstacle & msg)
  : msg_(msg)
  {}
  Init_Obstacle_source id(::rmf_obstacle_msgs::msg::Obstacle::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Obstacle_source(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

class Init_Obstacle_header
{
public:
  Init_Obstacle_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Obstacle_id header(::rmf_obstacle_msgs::msg::Obstacle::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_Obstacle_id(msg_);
  }

private:
  ::rmf_obstacle_msgs::msg::Obstacle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_obstacle_msgs::msg::Obstacle>()
{
  return rmf_obstacle_msgs::msg::builder::Init_Obstacle_header();
}

}  // namespace rmf_obstacle_msgs

#endif  // RMF_OBSTACLE_MSGS__MSG__DETAIL__OBSTACLE__BUILDER_HPP_
