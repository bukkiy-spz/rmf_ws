// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.hpp"
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

void ScheduleParticipantPatch_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) rmf_traffic_msgs::msg::ScheduleParticipantPatch(_init);
}

void ScheduleParticipantPatch_fini_function(void * message_memory)
{
  auto typed_message = static_cast<rmf_traffic_msgs::msg::ScheduleParticipantPatch *>(message_memory);
  typed_message->~ScheduleParticipantPatch();
}

size_t size_function__ScheduleParticipantPatch__erasures(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ScheduleParticipantPatch__erasures(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void * get_function__ScheduleParticipantPatch__erasures(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__ScheduleParticipantPatch__erasures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint64_t *>(
    get_const_function__ScheduleParticipantPatch__erasures(untyped_member, index));
  auto & value = *reinterpret_cast<uint64_t *>(untyped_value);
  value = item;
}

void assign_function__ScheduleParticipantPatch__erasures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint64_t *>(
    get_function__ScheduleParticipantPatch__erasures(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint64_t *>(untyped_value);
  item = value;
}

void resize_function__ScheduleParticipantPatch__erasures(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint64_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ScheduleParticipantPatch__delays(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::ScheduleChangeDelay> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ScheduleParticipantPatch__delays(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<rmf_traffic_msgs::msg::ScheduleChangeDelay> *>(untyped_member);
  return &member[index];
}

void * get_function__ScheduleParticipantPatch__delays(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<rmf_traffic_msgs::msg::ScheduleChangeDelay> *>(untyped_member);
  return &member[index];
}

void fetch_function__ScheduleParticipantPatch__delays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const rmf_traffic_msgs::msg::ScheduleChangeDelay *>(
    get_const_function__ScheduleParticipantPatch__delays(untyped_member, index));
  auto & value = *reinterpret_cast<rmf_traffic_msgs::msg::ScheduleChangeDelay *>(untyped_value);
  value = item;
}

void assign_function__ScheduleParticipantPatch__delays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<rmf_traffic_msgs::msg::ScheduleChangeDelay *>(
    get_function__ScheduleParticipantPatch__delays(untyped_member, index));
  const auto & value = *reinterpret_cast<const rmf_traffic_msgs::msg::ScheduleChangeDelay *>(untyped_value);
  item = value;
}

void resize_function__ScheduleParticipantPatch__delays(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<rmf_traffic_msgs::msg::ScheduleChangeDelay> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ScheduleParticipantPatch_message_member_array[6] = {
  {
    "participant_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleParticipantPatch, participant_id),  // bytes offset in struct
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
    offsetof(rmf_traffic_msgs::msg::ScheduleParticipantPatch, itinerary_version),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "erasures",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleParticipantPatch, erasures),  // bytes offset in struct
    nullptr,  // default value
    size_function__ScheduleParticipantPatch__erasures,  // size() function pointer
    get_const_function__ScheduleParticipantPatch__erasures,  // get_const(index) function pointer
    get_function__ScheduleParticipantPatch__erasures,  // get(index) function pointer
    fetch_function__ScheduleParticipantPatch__erasures,  // fetch(index, &value) function pointer
    assign_function__ScheduleParticipantPatch__erasures,  // assign(index, value) function pointer
    resize_function__ScheduleParticipantPatch__erasures  // resize(index) function pointer
  },
  {
    "delays",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleChangeDelay>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleParticipantPatch, delays),  // bytes offset in struct
    nullptr,  // default value
    size_function__ScheduleParticipantPatch__delays,  // size() function pointer
    get_const_function__ScheduleParticipantPatch__delays,  // get_const(index) function pointer
    get_function__ScheduleParticipantPatch__delays,  // get(index) function pointer
    fetch_function__ScheduleParticipantPatch__delays,  // fetch(index, &value) function pointer
    assign_function__ScheduleParticipantPatch__delays,  // assign(index, value) function pointer
    resize_function__ScheduleParticipantPatch__delays  // resize(index) function pointer
  },
  {
    "additions",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleChangeAdd>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleParticipantPatch, additions),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "progress",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleChangeProgress>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs::msg::ScheduleParticipantPatch, progress),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ScheduleParticipantPatch_message_members = {
  "rmf_traffic_msgs::msg",  // message namespace
  "ScheduleParticipantPatch",  // message name
  6,  // number of fields
  sizeof(rmf_traffic_msgs::msg::ScheduleParticipantPatch),
  ScheduleParticipantPatch_message_member_array,  // message members
  ScheduleParticipantPatch_init_function,  // function to initialize message memory (memory has to be allocated)
  ScheduleParticipantPatch_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ScheduleParticipantPatch_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ScheduleParticipantPatch_message_members,
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
get_message_type_support_handle<rmf_traffic_msgs::msg::ScheduleParticipantPatch>()
{
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleParticipantPatch_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, rmf_traffic_msgs, msg, ScheduleParticipantPatch)() {
  return &::rmf_traffic_msgs::msg::rosidl_typesupport_introspection_cpp::ScheduleParticipantPatch_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
