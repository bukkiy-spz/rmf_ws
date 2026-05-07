// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/LaneStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/lane_states__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/lane_states__functions.h"
#include "rmf_fleet_msgs/msg/detail/lane_states__struct.h"


// Include directives for member types
// Member `fleet_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `closed_lanes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `speed_limits`
#include "rmf_fleet_msgs/msg/speed_limited_lane.h"
// Member `speed_limits`
#include "rmf_fleet_msgs/msg/detail/speed_limited_lane__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__LaneStates__init(message_memory);
}

void rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__LaneStates__fini(message_memory);
}

size_t rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__size_function__LaneStates__closed_lanes(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_const_function__LaneStates__closed_lanes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint64__Sequence * member =
    (const rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_function__LaneStates__closed_lanes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__fetch_function__LaneStates__closed_lanes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint64_t * item =
    ((const uint64_t *)
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_const_function__LaneStates__closed_lanes(untyped_member, index));
  uint64_t * value =
    (uint64_t *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__assign_function__LaneStates__closed_lanes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint64_t * item =
    ((uint64_t *)
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_function__LaneStates__closed_lanes(untyped_member, index));
  const uint64_t * value =
    (const uint64_t *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__resize_function__LaneStates__closed_lanes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint64__Sequence * member =
    (rosidl_runtime_c__uint64__Sequence *)(untyped_member);
  rosidl_runtime_c__uint64__Sequence__fini(member);
  return rosidl_runtime_c__uint64__Sequence__init(member, size);
}

size_t rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__size_function__LaneStates__speed_limits(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * member =
    (const rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_const_function__LaneStates__speed_limits(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * member =
    (const rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_function__LaneStates__speed_limits(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * member =
    (rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__fetch_function__LaneStates__speed_limits(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_fleet_msgs__msg__SpeedLimitedLane * item =
    ((const rmf_fleet_msgs__msg__SpeedLimitedLane *)
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_const_function__LaneStates__speed_limits(untyped_member, index));
  rmf_fleet_msgs__msg__SpeedLimitedLane * value =
    (rmf_fleet_msgs__msg__SpeedLimitedLane *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__assign_function__LaneStates__speed_limits(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_fleet_msgs__msg__SpeedLimitedLane * item =
    ((rmf_fleet_msgs__msg__SpeedLimitedLane *)
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_function__LaneStates__speed_limits(untyped_member, index));
  const rmf_fleet_msgs__msg__SpeedLimitedLane * value =
    (const rmf_fleet_msgs__msg__SpeedLimitedLane *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__resize_function__LaneStates__speed_limits(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence * member =
    (rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__fini(member);
  return rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_member_array[3] = {
  {
    "fleet_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__LaneStates, fleet_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "closed_lanes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__LaneStates, closed_lanes),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__size_function__LaneStates__closed_lanes,  // size() function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_const_function__LaneStates__closed_lanes,  // get_const(index) function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_function__LaneStates__closed_lanes,  // get(index) function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__fetch_function__LaneStates__closed_lanes,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__assign_function__LaneStates__closed_lanes,  // assign(index, value) function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__resize_function__LaneStates__closed_lanes  // resize(index) function pointer
  },
  {
    "speed_limits",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__LaneStates, speed_limits),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__size_function__LaneStates__speed_limits,  // size() function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_const_function__LaneStates__speed_limits,  // get_const(index) function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__get_function__LaneStates__speed_limits,  // get(index) function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__fetch_function__LaneStates__speed_limits,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__assign_function__LaneStates__speed_limits,  // assign(index, value) function pointer
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__resize_function__LaneStates__speed_limits  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "LaneStates",  // message name
  3,  // number of fields
  sizeof(rmf_fleet_msgs__msg__LaneStates),
  rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_member_array,  // message members
  rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, LaneStates)() {
  rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, SpeedLimitedLane)();
  if (!rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__msg__LaneStates__rosidl_typesupport_introspection_c__LaneStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
