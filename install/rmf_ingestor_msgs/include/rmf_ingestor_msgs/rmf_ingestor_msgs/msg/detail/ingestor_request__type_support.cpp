// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_ingestor_msgs:msg/IngestorRequest.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace rmf_ingestor_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void IngestorRequest_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_ingestor_msgs::msg::IngestorRequest(_init);
}

void IngestorRequest_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_ingestor_msgs::msg::IngestorRequest *>(message_memory);
  typed_message->~IngestorRequest();
}

size_t size_function__IngestorRequest__items(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_ingestor_msgs::msg::IngestorRequestItem> *>(untyped_member);
  return member->size();
}

const void * get_const_function__IngestorRequest__items(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_ingestor_msgs::msg::IngestorRequestItem> *>(untyped_member);
  return &member[index];
}

void * get_function__IngestorRequest__items(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_ingestor_msgs::msg::IngestorRequestItem> *>(untyped_member);
  return &member[index];
}

void fetch_function__IngestorRequest__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_ingestor_msgs::msg::IngestorRequestItem *>(
    get_const_function__IngestorRequest__items(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_ingestor_msgs::msg::IngestorRequestItem *>(untyped_value);
  value = item;
}

void assign_function__IngestorRequest__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_ingestor_msgs::msg::IngestorRequestItem *>(
    get_function__IngestorRequest__items(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_ingestor_msgs::msg::IngestorRequestItem *>(untyped_value);
  item = value;
}

void resize_function__IngestorRequest__items(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_ingestor_msgs::msg::IngestorRequestItem> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember IngestorRequest_message_member_array[5] = {
  {
    "time",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs::msg::IngestorRequest, time),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "request_guid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs::msg::IngestorRequest, request_guid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "target_guid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs::msg::IngestorRequest, target_guid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "transporter_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs::msg::IngestorRequest, transporter_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "items",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_ingestor_msgs::msg::IngestorRequestItem>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs::msg::IngestorRequest, items),  // bytes offset in struct
    nullptr,  // default value
    size_function__IngestorRequest__items,  // size() function pointer
    get_const_function__IngestorRequest__items,  // get_const(index) function pointer
    get_function__IngestorRequest__items,  // get(index) function pointer
    fetch_function__IngestorRequest__items,  // fetch(index, &value) function pointer
    assign_function__IngestorRequest__items,  // assign(index, value) function pointer
    resize_function__IngestorRequest__items  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers IngestorRequest_message_members = {
  "rmf_ingestor_msgs::msg",  // message namespace
  "IngestorRequest",  // message name
  5,  // number of fields
  sizeof(rmf_ingestor_msgs::msg::IngestorRequest),
  IngestorRequest_message_member_array,  // message members
  IngestorRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  IngestorRequest_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t IngestorRequest_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &IngestorRequest_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace rmf_ingestor_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<rmf_ingestor_msgs::msg::IngestorRequest>()
{
  return &::rmf_ingestor_msgs::msg::rosidl_typesupport_introspection_cpp::IngestorRequest_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_ingestor_msgs, msg, IngestorRequest)() {
  return &::rmf_ingestor_msgs::msg::rosidl_typesupport_introspection_cpp::IngestorRequest_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
