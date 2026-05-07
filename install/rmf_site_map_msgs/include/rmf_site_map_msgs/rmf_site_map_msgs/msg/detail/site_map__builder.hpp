// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_site_map_msgs:msg/SiteMap.idl
// generated code does not contain a copyright notice

#ifndef RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__BUILDER_HPP_
#define RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_site_map_msgs/msg/detail/site_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_site_map_msgs
{

namespace msg
{

namespace builder
{

class Init_SiteMap_data
{
public:
  explicit Init_SiteMap_data(::rmf_site_map_msgs::msg::SiteMap & msg)
  : msg_(msg)
  {}
  ::rmf_site_map_msgs::msg::SiteMap data(::rmf_site_map_msgs::msg::SiteMap::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_site_map_msgs::msg::SiteMap msg_;
};

class Init_SiteMap_encoding
{
public:
  Init_SiteMap_encoding()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SiteMap_data encoding(::rmf_site_map_msgs::msg::SiteMap::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_SiteMap_data(msg_);
  }

private:
  ::rmf_site_map_msgs::msg::SiteMap msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_site_map_msgs::msg::SiteMap>()
{
  return rmf_site_map_msgs::msg::builder::Init_SiteMap_encoding();
}

}  // namespace rmf_site_map_msgs

#endif  // RMF_SITE_MAP_MSGS__MSG__DETAIL__SITE_MAP__BUILDER_HPP_
