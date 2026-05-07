// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ItinerarySet.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/itinerary_set__struct.hpp"
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

void ItinerarySet_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ItinerarySet(_init);
}

void ItinerarySet_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ItinerarySet *>(message_memory);
  typed_message->~ItinerarySet();
}

size_t size_function__ItinerarySet__itinerary(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::Route> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ItinerarySet__itinerary(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::Route> *>(untyped_member);
  return &member[index];
}

void * get_function__ItinerarySet__itinerary(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::Route> *>(untyped_member);
  return &member[index];
}

void fetch_function__ItinerarySet__itinerary(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::Route *>(
    get_const_function__ItinerarySet__itinerary(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::Route *>(untyped_value);
  value = item;
}

void assign_function__ItinerarySet__itinerary(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::Route *>(
    get_function__ItinerarySet__itinerary(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::Route *>(untyped_value);
  item = value;
}

void resize_function__ItinerarySet__itinerary(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::Route> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ItinerarySet_message_member_array[5] = {
  {
    "participant",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ItinerarySet, participant),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plan",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ItinerarySet, plan),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "itinerary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::Route>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ItinerarySet, itinerary),  // bytes offset in struct
    nullptr,  // default value
    size_function__ItinerarySet__itinerary,  // size() function pointer
    get_const_function__ItinerarySet__itinerary,  // get_const(index) function pointer
    get_function__ItinerarySet__itinerary,  // get(index) function pointer
    fetch_function__ItinerarySet__itinerary,  // fetch(index, &value) function pointer
    assign_function__ItinerarySet__itinerary,  // assign(index, value) function pointer
    resize_function__ItinerarySet__itinerary  // resize(index) function pointer
  },
  {
    "storage_base",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ItinerarySet, storage_base),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "itinerary_version",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ItinerarySet, itinerary_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ItinerarySet_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ItinerarySet",  // message name
  5,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ItinerarySet),
  ItinerarySet_message_member_array,  // message members
  ItinerarySet_init_function,  // function to initialize message memory (memory has to be allocated)
  ItinerarySet_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ItinerarySet_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ItinerarySet_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::ItinerarySet>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ItinerarySet_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ItinerarySet)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ItinerarySet_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
