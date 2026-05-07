// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rmf_building_map_msgs:msg/AffineImage.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__BUILDER_HPP_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rmf_building_map_msgs/msg/detail/affine_image__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rmf_building_map_msgs
{

namespace msg
{

namespace builder
{

class Init_AffineImage_data
{
public:
  explicit Init_AffineImage_data(::rmf_building_map_msgs::msg::AffineImage & msg)
  : msg_(msg)
  {}
  ::rmf_building_map_msgs::msg::AffineImage data(::rmf_building_map_msgs::msg::AffineImage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::AffineImage msg_;
};

class Init_AffineImage_encoding
{
public:
  explicit Init_AffineImage_encoding(::rmf_building_map_msgs::msg::AffineImage & msg)
  : msg_(msg)
  {}
  Init_AffineImage_data encoding(::rmf_building_map_msgs::msg::AffineImage::_encoding_type arg)
  {
    msg_.encoding = std::move(arg);
    return Init_AffineImage_data(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::AffineImage msg_;
};

class Init_AffineImage_scale
{
public:
  explicit Init_AffineImage_scale(::rmf_building_map_msgs::msg::AffineImage & msg)
  : msg_(msg)
  {}
  Init_AffineImage_encoding scale(::rmf_building_map_msgs::msg::AffineImage::_scale_type arg)
  {
    msg_.scale = std::move(arg);
    return Init_AffineImage_encoding(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::AffineImage msg_;
};

class Init_AffineImage_yaw
{
public:
  explicit Init_AffineImage_yaw(::rmf_building_map_msgs::msg::AffineImage & msg)
  : msg_(msg)
  {}
  Init_AffineImage_scale yaw(::rmf_building_map_msgs::msg::AffineImage::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_AffineImage_scale(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::AffineImage msg_;
};

class Init_AffineImage_y_offset
{
public:
  explicit Init_AffineImage_y_offset(::rmf_building_map_msgs::msg::AffineImage & msg)
  : msg_(msg)
  {}
  Init_AffineImage_yaw y_offset(::rmf_building_map_msgs::msg::AffineImage::_y_offset_type arg)
  {
    msg_.y_offset = std::move(arg);
    return Init_AffineImage_yaw(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::AffineImage msg_;
};

class Init_AffineImage_x_offset
{
public:
  explicit Init_AffineImage_x_offset(::rmf_building_map_msgs::msg::AffineImage & msg)
  : msg_(msg)
  {}
  Init_AffineImage_y_offset x_offset(::rmf_building_map_msgs::msg::AffineImage::_x_offset_type arg)
  {
    msg_.x_offset = std::move(arg);
    return Init_AffineImage_y_offset(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::AffineImage msg_;
};

class Init_AffineImage_name
{
public:
  Init_AffineImage_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_AffineImage_x_offset name(::rmf_building_map_msgs::msg::AffineImage::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_AffineImage_x_offset(msg_);
  }

private:
  ::rmf_building_map_msgs::msg::AffineImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::rmf_building_map_msgs::msg::AffineImage>()
{
  return rmf_building_map_msgs::msg::builder::Init_AffineImage_name();
}

}  // namespace rmf_building_map_msgs

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__AFFINE_IMAGE__BUILDER_HPP_
