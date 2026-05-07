// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ConvexShapeContext.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/convex_shape_context__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_traffic_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ConvexShapeContext_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ConvexShapeContext(_init);
}

void ConvexShapeContext_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ConvexShapeContext *>(message_memory);
  typed_message->~ConvexShapeContext();
}

size_t size_function__ConvexShapeContext__circles(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::Circle> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ConvexShapeContext__circles(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::Circle> *>(untyped_member);
  return &member[index];
}

void * get_function__ConvexShapeContext__circles(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::Circle> *>(untyped_member);
  return &member[index];
}

void fetch_function__ConvexShapeContext__circles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::Circle *>(
    get_const_function__ConvexShapeContext__circles(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::Circle *>(untyped_value);
  value = item;
}

void assign_function__ConvexShapeContext__circles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::Circle *>(
    get_function__ConvexShapeContext__circles(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::Circle *>(untyped_value);
  item = value;
}

void resize_function__ConvexShapeContext__circles(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::Circle> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ConvexShapeContext_message_member_array[1] = {
  {
    "circles",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::Circle>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ConvexShapeContext, circles),  // bytes offset in struct
    nullptr,  // default value
    size_function__ConvexShapeContext__circles,  // size() function pointer
    get_const_function__ConvexShapeContext__circles,  // get_const(index) function pointer
    get_function__ConvexShapeContext__circles,  // get(index) function pointer
    fetch_function__ConvexShapeContext__circles,  // fetch(index, &value) function pointer
    assign_function__ConvexShapeContext__circles,  // assign(index, value) function pointer
    resize_function__ConvexShapeContext__circles  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ConvexShapeContext_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ConvexShapeContext",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ConvexShapeContext),
  ConvexShapeContext_message_member_array,  // message members
  ConvexShapeContext_init_function,  // function to initialize message memory (memory has to be allocated)
  ConvexShapeContext_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ConvexShapeContext_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ConvexShapeContext_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_traffic_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_traffic_msgs::msg::ConvexShapeContext>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ConvexShapeContext_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ConvexShapeContext)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ConvexShapeContext_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
