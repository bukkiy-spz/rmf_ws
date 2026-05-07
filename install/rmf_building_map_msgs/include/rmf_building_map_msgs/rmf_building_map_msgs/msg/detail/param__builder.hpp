// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/param__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_Param_value_bool
{
public:
  explicit Init_Param_value_bool(::rmf_building_map_msgs::msg::Param & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::Param value_bool(::rmf_building_map_msgs::msg::Param::_value_bool_type arg)
  {
    msg_.value_bool = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Param msg_;
};

class Init_Param_value_string
{
public:
  explicit Init_Param_value_string(::rmf_building_map_msgs::msg::Param & msg)
  : msg_(msg)
  {}
  Init_Param_value_bool value_string(::rmf_building_map_msgs::msg::Param::_value_string_type arg)
  {
    msg_.value_string = std::move(arg);
    return Init_Param_value_bool(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Param msg_;
};

class Init_Param_value_float
{
public:
  explicit Init_Param_value_float(::rmf_building_map_msgs::msg::Param & msg)
  : msg_(msg)
  {}
  Init_Param_value_string value_float(::rmf_building_map_msgs::msg::Param::_value_float_type arg)
  {
    msg_.value_float = std::move(arg);
    return Init_Param_value_string(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Param msg_;
};

class Init_Param_value_int
{
public:
  explicit Init_Param_value_int(::rmf_building_map_msgs::msg::Param & msg)
  : msg_(msg)
  {}
  Init_Param_value_float value_int(::rmf_building_map_msgs::msg::Param::_value_int_type arg)
  {
    msg_.value_int = std::move(arg);
    return Init_Param_value_float(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Param msg_;
};

class Init_Param_type
{
public:
  explicit Init_Param_type(::rmf_building_map_msgs::msg::Param & msg)
  : msg_(msg)
  {}
  Init_Param_value_int type(::rmf_building_map_msgs::msg::Param::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Param_value_int(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Param msg_;
};

class Init_Param_name
{
public:
  Init_Param_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Param_type name(::rmf_building_map_msgs::msg::Param::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Param_type(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::Param msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::Param>()
{
  return rmf_building_map_msgs::msg::builder::Init_Param_name();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__BUILDER_HPP_
