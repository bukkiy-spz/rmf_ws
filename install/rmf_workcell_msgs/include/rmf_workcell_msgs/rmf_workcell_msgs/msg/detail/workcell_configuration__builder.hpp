// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_workcell_msgs:msg/WorkcellConfiguration.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__BUILDER_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_workcell_msgs/msg/detail/workcell_configuration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_workcell_msgs
{

namespace msg
{

namespace builder
{

class Init_WorkcellConfiguration_traits
{
public:
  explicit Init_WorkcellConfiguration_traits(::rmf_workcell_msgs::msg::WorkcellConfiguration & msg)
  : msg_(msg)
  {}
  ::rmf_workcell_msgs::msg::WorkcellConfiguration traits(::rmf_workcell_msgs::msg::WorkcellConfiguration::_traits_type arg)
  {
    msg_.traits = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellConfiguration msg_;
};

class Init_WorkcellConfiguration_assets
{
public:
  explicit Init_WorkcellConfiguration_assets(::rmf_workcell_msgs::msg::WorkcellConfiguration & msg)
  : msg_(msg)
  {}
  Init_WorkcellConfiguration_traits assets(::rmf_workcell_msgs::msg::WorkcellConfiguration::_assets_type arg)
  {
    msg_.assets = std::move(arg);
    return Init_WorkcellConfiguration_traits(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellConfiguration msg_;
};

class Init_WorkcellConfiguration_type
{
public:
  explicit Init_WorkcellConfiguration_type(::rmf_workcell_msgs::msg::WorkcellConfiguration & msg)
  : msg_(msg)
  {}
  Init_WorkcellConfiguration_assets type(::rmf_workcell_msgs::msg::WorkcellConfiguration::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_WorkcellConfiguration_assets(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellConfiguration msg_;
};

class Init_WorkcellConfiguration_guid
{
public:
  explicit Init_WorkcellConfiguration_guid(::rmf_workcell_msgs::msg::WorkcellConfiguration & msg)
  : msg_(msg)
  {}
  Init_WorkcellConfiguration_type guid(::rmf_workcell_msgs::msg::WorkcellConfiguration::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_WorkcellConfiguration_type(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellConfiguration msg_;
};

class Init_WorkcellConfiguration_time
{
public:
  Init_WorkcellConfiguration_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorkcellConfiguration_guid time(::rmf_workcell_msgs::msg::WorkcellConfiguration::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_WorkcellConfiguration_guid(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellConfiguration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_workcell_msgs::msg::WorkcellConfiguration>()
{
  return rmf_workcell_msgs::msg::builder::Init_WorkcellConfiguration_time();
}

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_CONFIGURATION__BUILDER_HPP_
