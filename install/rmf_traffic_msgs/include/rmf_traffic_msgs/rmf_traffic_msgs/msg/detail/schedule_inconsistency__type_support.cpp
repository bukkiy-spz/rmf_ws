// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleInconsistency.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/schedule_inconsistency__struct.hpp"
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

void ScheduleInconsistency_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ScheduleInconsistency(_init);
}

void ScheduleInconsistency_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ScheduleInconsistency *>(message_memory);
  typed_message->~ScheduleInconsistency();
}

size_t size_function__ScheduleInconsistency__ranges(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::ScheduleInconsistencyRange> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ScheduleInconsistency__ranges(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::ScheduleInconsistencyRange> *>(untyped_member);
  return &member[index];
}

void * get_function__ScheduleInconsistency__ranges(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::ScheduleInconsistencyRange> *>(untyped_member);
  return &member[index];
}

void fetch_function__ScheduleInconsistency__ranges(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::ScheduleInconsistencyRange *>(
    get_const_function__ScheduleInconsistency__ranges(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::ScheduleInconsistencyRange *>(untyped_value);
  value = item;
}

void assign_function__ScheduleInconsistency__ranges(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::ScheduleInconsistencyRange *>(
    get_function__ScheduleInconsistency__ranges(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::ScheduleInconsistencyRange *>(untyped_value);
  item = value;
}

void resize_function__ScheduleInconsistency__ranges(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::ScheduleInconsistencyRange> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ScheduleInconsistency_message_member_array[4] = {
  {
    "participant",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleInconsistency, participant),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ranges",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleInconsistencyRange>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleInconsistency, ranges),  // bytes offset in struct
    nullptr,  // default value
    size_function__ScheduleInconsistency__ranges,  // size() function pointer
    get_const_function__ScheduleInconsistency__ranges,  // get_const(index) function pointer
    get_function__ScheduleInconsistency__ranges,  // get(index) function pointer
    fetch_function__ScheduleInconsistency__ranges,  // fetch(index, &value) function pointer
    assign_function__ScheduleInconsistency__ranges,  // assign(index, value) function pointer
    resize_function__ScheduleInconsistency__ranges  // resize(index) function pointer
  },
  {
    "last_known_itinerary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleInconsistency, last_known_itinerary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "last_known_progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleInconsistency, last_known_progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ScheduleInconsistency_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ScheduleInconsistency",  // message name
  4,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ScheduleInconsistency),
  ScheduleInconsistency_message_member_array,  // message members
  ScheduleInconsistency_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduleInconsistency_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ScheduleInconsistency_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ScheduleInconsistency_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleInconsistency>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleInconsistency_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ScheduleInconsistency)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleInconsistency_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
