// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_scheduler_msgs:msg/Trigger.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_scheduler_msgs/msg/detail/trigger__rosidl_typesupport_introspection_c.h"
#include "rmf_scheduler_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_scheduler_msgs/msg/detail/trigger__functions.h"
#include "rmf_scheduler_msgs/msg/detail/trigger__struct.h"


// Include directives for member types
// Member `name`
// Member `group`
#include "rosidl_runtime_c/string_functions.h"
// Member `payload`
#include "rmf_scheduler_msgs/msg/payload.h"
// Member `payload`
#include "rmf_scheduler_msgs/msg/detail/payload__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_scheduler_msgs__msg__Trigger__init(message_memory);
}

void rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_fini_function(void * message_memory)
{
  rmf_scheduler_msgs__msg__Trigger__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_member_array[5] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__Trigger, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "created_at",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__Trigger, created_at),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "at",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__Trigger, at),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "group",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__Trigger, group),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "payload",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_scheduler_msgs__msg__Trigger, payload),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_members = {
  "rmf_scheduler_msgs__msg",  // message namespace
  "Trigger",  // message name
  5,  // number of fields
  sizeof(rmf_scheduler_msgs__msg__Trigger),
  rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_member_array,  // message members
  rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_type_support_handle = {
  0,
  &rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_scheduler_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, msg, Trigger)() {
  rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_scheduler_msgs, msg, Payload)();
  if (!rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_type_support_handle.typesupport_identifier) {
    rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_scheduler_msgs__msg__Trigger__rosidl_typesupport_introspection_c__Trigger_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
