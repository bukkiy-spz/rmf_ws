// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleQueryParticipants.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_query_participants__struct.h"


// Include directives for member types
// Member `ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__init(message_memory);
}

void rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__size_function__ScheduleQueryParticipants__ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueryParticipants__ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__get_function__ScheduleQueryParticipants__ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__fetch_function__ScheduleQueryParticipants__ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueryParticipants__ids(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__assign_function__ScheduleQueryParticipants__ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__get_function__ScheduleQueryParticipants__ids(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__resize_function__ScheduleQueryParticipants__ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_message_member_array[2] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleQueryParticipants, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleQueryParticipants, ids),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__size_function__ScheduleQueryParticipants__ids,  // size() function pointer
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__get_const_function__ScheduleQueryParticipants__ids,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__get_function__ScheduleQueryParticipants__ids,  // get(index) function pointer
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__fetch_function__ScheduleQueryParticipants__ids,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__assign_function__ScheduleQueryParticipants__ids,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__resize_function__ScheduleQueryParticipants__ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ScheduleQueryParticipants",  // message name
  2,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ScheduleQueryParticipants),
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_message_member_array,  // message members
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleQueryParticipants)() {
  if (!rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__ScheduleQueryParticipants__rosidl_typesupport_introspection_c__ScheduleQueryParticipants_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
