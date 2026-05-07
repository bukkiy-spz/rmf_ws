// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_workcell_msgs:msg/Trait.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__BUILDER_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_workcell_msgs/msg/detail/trait__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_workcell_msgs
{

namespace msg
{

namespace builder
{

class Init_Trait_value
{
public:
  explicit Init_Trait_value(::rmf_workcell_msgs::msg::Trait & msg)
  : msg_(msg)
  {}
  ::rmf_workcell_msgs::msg::Trait value(::rmf_workcell_msgs::msg::Trait::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::Trait msg_;
};

class Init_Trait_key
{
public:
  Init_Trait_key()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trait_value key(::rmf_workcell_msgs::msg::Trait::_key_type arg)
  {
    msg_.key = std::move(arg);
    return Init_Trait_value(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::Trait msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_workcell_msgs::msg::Trait>()
{
  return rmf_workcell_msgs::msg::builder::Init_Trait_key();
}

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__TRAIT__BUILDER_HPP_
