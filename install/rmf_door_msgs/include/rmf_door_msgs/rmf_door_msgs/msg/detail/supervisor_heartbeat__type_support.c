// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_door_msgs/msg/detail/supervisor_heartbeat__rosidl_typesupport_introspection_c.h"
#include "rmf_door_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_door_msgs/msg/detail/supervisor_heartbeat__functions.h"
#include "rmf_door_msgs/msg/detail/supervisor_heartbeat__struct.h"


// Include directives for member types
// Member `all_sessions`
#include "rmf_door_msgs/msg/door_sessions.h"
// Member `all_sessions`
#include "rmf_door_msgs/msg/detail/door_sessions__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_door_msgs__msg__SupervisorHeartbeat__init(message_memory);
}

void rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_fini_function(void * message_memory)
{
  rmf_door_msgs__msg__SupervisorHeartbeat__fini(message_memory);
}

size_t rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__size_function__SupervisorHeartbeat__all_sessions(
  const void * untyped_member)
{
  const rmf_door_msgs__msg__DoorSessions__Sequence * member =
    (const rmf_door_msgs__msg__DoorSessions__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__get_const_function__SupervisorHeartbeat__all_sessions(
  const void * untyped_member, size_t index)
{
  const rmf_door_msgs__msg__DoorSessions__Sequence * member =
    (const rmf_door_msgs__msg__DoorSessions__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__get_function__SupervisorHeartbeat__all_sessions(
  void * untyped_member, size_t index)
{
  rmf_door_msgs__msg__DoorSessions__Sequence * member =
    (rmf_door_msgs__msg__DoorSessions__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__fetch_function__SupervisorHeartbeat__all_sessions(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_door_msgs__msg__DoorSessions * item =
    ((const rmf_door_msgs__msg__DoorSessions *)
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__get_const_function__SupervisorHeartbeat__all_sessions(untyped_member, index));
  rmf_door_msgs__msg__DoorSessions * value =
    (rmf_door_msgs__msg__DoorSessions *)(untyped_value);
  *value = *item;
}

void rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__assign_function__SupervisorHeartbeat__all_sessions(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_door_msgs__msg__DoorSessions * item =
    ((rmf_door_msgs__msg__DoorSessions *)
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__get_function__SupervisorHeartbeat__all_sessions(untyped_member, index));
  const rmf_door_msgs__msg__DoorSessions * value =
    (const rmf_door_msgs__msg__DoorSessions *)(untyped_value);
  *item = *value;
}

bool rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__resize_function__SupervisorHeartbeat__all_sessions(
  void * untyped_member, size_t size)
{
  rmf_door_msgs__msg__DoorSessions__Sequence * member =
    (rmf_door_msgs__msg__DoorSessions__Sequence *)(untyped_member);
  rmf_door_msgs__msg__DoorSessions__Sequence__fini(member);
  return rmf_door_msgs__msg__DoorSessions__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_member_array[1] = {
  {
    "all_sessions",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_door_msgs__msg__SupervisorHeartbeat, all_sessions),  // bytes offset in struct
    NULL,  // default value
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__size_function__SupervisorHeartbeat__all_sessions,  // size() function pointer
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__get_const_function__SupervisorHeartbeat__all_sessions,  // get_const(index) function pointer
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__get_function__SupervisorHeartbeat__all_sessions,  // get(index) function pointer
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__fetch_function__SupervisorHeartbeat__all_sessions,  // fetch(index, &value) function pointer
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__assign_function__SupervisorHeartbeat__all_sessions,  // assign(index, value) function pointer
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__resize_function__SupervisorHeartbeat__all_sessions  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_members = {
  "rmf_door_msgs__msg",  // message namespace
  "SupervisorHeartbeat",  // message name
  1,  // number of fields
  sizeof(rmf_door_msgs__msg__SupervisorHeartbeat),
  rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_member_array,  // message members
  rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_type_support_handle = {
  0,
  &rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_door_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_door_msgs, msg, SupervisorHeartbeat)() {
  rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_door_msgs, msg, DoorSessions)();
  if (!rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_type_support_handle.typesupport_identifier) {
    rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_door_msgs__msg__SupervisorHeartbeat__rosidl_typesupport_introspection_c__SupervisorHeartbeat_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
