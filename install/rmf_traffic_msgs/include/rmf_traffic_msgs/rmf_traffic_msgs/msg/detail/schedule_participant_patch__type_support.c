// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/ScheduleParticipantPatch.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__functions.h"
#include "rmf_traffic_msgs/msg/detail/schedule_participant_patch__struct.h"


// Include directives for member types
// Member `erasures`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `delays`
#include "rmf_traffic_msgs/msg/schedule_change_delay.h"
// Member `delays`
#include "rmf_traffic_msgs/msg/detail/schedule_change_delay__rosidl_typesupport_introspection_c.h"
// Member `additions`
#include "rmf_traffic_msgs/msg/schedule_change_add.h"
// Member `additions`
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__rosidl_typesupport_introspection_c.h"
// Member `progress`
#include "rmf_traffic_msgs/msg/schedule_change_progress.h"
// Member `progress`
#include "rmf_traffic_msgs/msg/detail/schedule_change_progress__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__init(message_memory);
}

void rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__size_function__ScheduleParticipantPatch__erasures(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleParticipantPatch__erasures(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleParticipantPatch__erasures(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__fetch_function__ScheduleParticipantPatch__erasures(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleParticipantPatch__erasures(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__assign_function__ScheduleParticipantPatch__erasures(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleParticipantPatch__erasures(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__resize_function__ScheduleParticipantPatch__erasures(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__size_function__ScheduleParticipantPatch__delays(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleParticipantPatch__delays(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * member =
    (const rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleParticipantPatch__delays(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__fetch_function__ScheduleParticipantPatch__delays(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__ScheduleChangeDelay * item =
    ((const rmf_traffic_msgs__msg__ScheduleChangeDelay *)
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleParticipantPatch__delays(untyped_member, index));
  rmf_traffic_msgs__msg__ScheduleChangeDelay * value =
    (rmf_traffic_msgs__msg__ScheduleChangeDelay *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__assign_function__ScheduleParticipantPatch__delays(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__ScheduleChangeDelay * item =
    ((rmf_traffic_msgs__msg__ScheduleChangeDelay *)
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleParticipantPatch__delays(untyped_member, index));
  const rmf_traffic_msgs__msg__ScheduleChangeDelay * value =
    (const rmf_traffic_msgs__msg__ScheduleChangeDelay *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__resize_function__ScheduleParticipantPatch__delays(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence * member =
    (rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__fini(member);
  return rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array[6] = {
  {
    "participant_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, participant_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "itinerary_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, itinerary_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "erasures",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, erasures),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__size_function__ScheduleParticipantPatch__erasures,  // size() function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleParticipantPatch__erasures,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleParticipantPatch__erasures,  // get(index) function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__fetch_function__ScheduleParticipantPatch__erasures,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__assign_function__ScheduleParticipantPatch__erasures,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__resize_function__ScheduleParticipantPatch__erasures  // resize(index) function pointer
  },
  {
    "delays",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, delays),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__size_function__ScheduleParticipantPatch__delays,  // size() function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_const_function__ScheduleParticipantPatch__delays,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__get_function__ScheduleParticipantPatch__delays,  // get(index) function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__fetch_function__ScheduleParticipantPatch__delays,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__assign_function__ScheduleParticipantPatch__delays,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__resize_function__ScheduleParticipantPatch__delays  // resize(index) function pointer
  },
  {
    "additions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, additions),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "progress",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__ScheduleParticipantPatch, progress),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "ScheduleParticipantPatch",  // message name
  6,  // number of fields
  sizeof(rmf_traffic_msgs__msg__ScheduleParticipantPatch),
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array,  // message members
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleParticipantPatch)() {
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleChangeDelay)();
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleChangeAdd)();
  rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleChangeProgress)();
  if (!rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__ScheduleParticipantPatch__rosidl_typesupport_introspection_c__ScheduleParticipantPatch_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
