// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_traffic_msgs:msg/ScheduleQueries.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__BUILDER_HPP_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_traffic_msgs/msg/detail/schedule_queries__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_traffic_msgs
{

namespace msg
{

namespace builder
{

class Init_ScheduleQueries_query_ids
{
public:
  explicit Init_ScheduleQueries_query_ids(::rmf_traffic_msgs::msg::ScheduleQueries & msg)
  : msg_(msg)
  {}
  ::rmf_traffic_msgs::msg::ScheduleQueries query_ids(::rmf_traffic_msgs::msg::ScheduleQueries::_query_ids_type arg)
  {
    msg_.query_ids = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQueries msg_;
};

class Init_ScheduleQueries_queries
{
public:
  explicit Init_ScheduleQueries_queries(::rmf_traffic_msgs::msg::ScheduleQueries & msg)
  : msg_(msg)
  {}
  Init_ScheduleQueries_query_ids queries(::rmf_traffic_msgs::msg::ScheduleQueries::_queries_type arg)
  {
    msg_.queries = std::move(arg);
    return Init_ScheduleQueries_query_ids(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQueries msg_;
};

class Init_ScheduleQueries_node_id
{
public:
  Init_ScheduleQueries_node_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ScheduleQueries_queries node_id(::rmf_traffic_msgs::msg::ScheduleQueries::_node_id_type arg)
  {
    msg_.node_id = std::move(arg);
    return Init_ScheduleQueries_queries(msg_);
  }

private:
  ::rmf_traffic_msgs::msg::ScheduleQueries msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_traffic_msgs::msg::ScheduleQueries>()
{
  return rmf_traffic_msgs::msg::builder::Init_ScheduleQueries_node_id();
}

}  // namespace rmf_traffic_msgs

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_QUERIES__BUILDER_HPP_
