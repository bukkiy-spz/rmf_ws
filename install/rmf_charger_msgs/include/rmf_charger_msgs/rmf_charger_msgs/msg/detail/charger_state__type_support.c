// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_charger_msgs:msg/ChargerState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_charger_msgs/msg/detail/charger_state__rosidl_typesupport_introspection_c.h"
#include "rmf_charger_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_charger_msgs/msg/detail/charger_state__functions.h"
#include "rmf_charger_msgs/msg/detail/charger_state__struct.h"


// Include directives for member types
// Member `charger_time`
#include "builtin_interfaces/msg/time.h"
// Member `charger_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `charger_name`
// Member `error_message`
// Member `request_id`
// Member `robot_fleet`
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `time_to_fully_charged`
#include "builtin_interfaces/msg/duration.h"
// Member `time_to_fully_charged`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_charger_msgs__msg__ChargerState__init(message_memory);
}

void rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_fini_function(void * message_memory)
{
  rmf_charger_msgs__msg__ChargerState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_member_array[8] = {
  {
    "charger_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs__msg__ChargerState, charger_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs__msg__ChargerState, state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "charger_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs__msg__ChargerState, charger_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "error_message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs__msg__ChargerState, error_message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs__msg__ChargerState, request_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_fleet",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs__msg__ChargerState, robot_fleet),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs__msg__ChargerState, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "time_to_fully_charged",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_charger_msgs__msg__ChargerState, time_to_fully_charged),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_members = {
  "rmf_charger_msgs__msg",  // message namespace
  "ChargerState",  // message name
  8,  // number of fields
  sizeof(rmf_charger_msgs__msg__ChargerState),
  rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_member_array,  // message members
  rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_type_support_handle = {
  0,
  &rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_charger_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_charger_msgs, msg, ChargerState)() {
  rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_type_support_handle.typesupport_identifier) {
    rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_charger_msgs__msg__ChargerState__rosidl_typesupport_introspection_c__ChargerState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
