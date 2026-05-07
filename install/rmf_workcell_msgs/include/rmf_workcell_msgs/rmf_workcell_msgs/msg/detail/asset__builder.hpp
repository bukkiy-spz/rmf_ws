// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_workcell_msgs:msg/Asset.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__BUILDER_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_workcell_msgs/msg/detail/asset__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_workcell_msgs
{

namespace msg
{

namespace builder
{

class Init_Asset_type
{
public:
  explicit Init_Asset_type(::rmf_workcell_msgs::msg::Asset & msg)
  : msg_(msg)
  {}
  ::rmf_workcell_msgs::msg::Asset type(::rmf_workcell_msgs::msg::Asset::_type_type arg)
  {
    msg_.type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::Asset msg_;
};

class Init_Asset_guid
{
public:
  Init_Asset_guid()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Asset_type guid(::rmf_workcell_msgs::msg::Asset::_guid_type arg)
  {
    msg_.guid = std::move(arg);
    return Init_Asset_type(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::Asset msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_workcell_msgs::msg::Asset>()
{
  return rmf_workcell_msgs::msg::builder::Init_Asset_guid();
}

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__ASSET__BUILDER_HPP_
