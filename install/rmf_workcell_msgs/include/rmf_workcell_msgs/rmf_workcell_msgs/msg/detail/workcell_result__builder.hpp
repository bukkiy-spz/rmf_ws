// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_workcell_msgs:msg/WorkcellResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__BUILDER_HPP_
#define RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_workcell_msgs/msg/detail/workcell_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_workcell_msgs
{

namespace msg
{

namespace builder
{

class Init_WorkcellResult_status
{
public:
  explicit Init_WorkcellResult_status(::rmf_workcell_msgs::msg::WorkcellResult & msg)
  : msg_(msg)
  {}
  ::rmf_workcell_msgs::msg::WorkcellResult status(::rmf_workcell_msgs::msg::WorkcellResult::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellResult msg_;
};

class Init_WorkcellResult_source_guid
{
public:
  explicit Init_WorkcellResult_source_guid(::rmf_workcell_msgs::msg::WorkcellResult & msg)
  : msg_(msg)
  {}
  Init_WorkcellResult_status source_guid(::rmf_workcell_msgs::msg::WorkcellResult::_source_guid_type arg)
  {
    msg_.source_guid = std::move(arg);
    return Init_WorkcellResult_status(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellResult msg_;
};

class Init_WorkcellResult_request_guid
{
public:
  explicit Init_WorkcellResult_request_guid(::rmf_workcell_msgs::msg::WorkcellResult & msg)
  : msg_(msg)
  {}
  Init_WorkcellResult_source_guid request_guid(::rmf_workcell_msgs::msg::WorkcellResult::_request_guid_type arg)
  {
    msg_.request_guid = std::move(arg);
    return Init_WorkcellResult_source_guid(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellResult msg_;
};

class Init_WorkcellResult_time
{
public:
  Init_WorkcellResult_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WorkcellResult_request_guid time(::rmf_workcell_msgs::msg::WorkcellResult::_time_type arg)
  {
    msg_.time = std::move(arg);
    return Init_WorkcellResult_request_guid(msg_);
  }

private:
  ::rmf_workcell_msgs::msg::WorkcellResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_workcell_msgs::msg::WorkcellResult>()
{
  return rmf_workcell_msgs::msg::builder::Init_WorkcellResult_time();
}

}  // namespace rmf_workcell_msgs

#endif  // RMF_WORKCELL_MSGS__MSG__DETAIL__WORKCELL_RESULT__BUILDER_HPP_
