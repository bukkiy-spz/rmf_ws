// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_dispenser_msgs:msg/DispenserResult.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_dispenser_msgs/msg/detail/dispenser_result__rosidl_typesupport_introspection_c.h"
#include "rmf_dispenser_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_dispenser_msgs/msg/detail/dispenser_result__functions.h"
#include "rmf_dispenser_msgs/msg/detail/dispenser_result__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `request_guid`
// Member `source_guid`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_dispenser_msgs__msg__DispenserResult__init(message_memory);
}

void rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_fini_function(void * message_memory)
{
  rmf_dispenser_msgs__msg__DispenserResult__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_member_array[4] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_dispenser_msgs__msg__DispenserResult, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_dispenser_msgs__msg__DispenserResult, request_guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_dispenser_msgs__msg__DispenserResult, source_guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_dispenser_msgs__msg__DispenserResult, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_members = {
  "rmf_dispenser_msgs__msg",  // message namespace
  "DispenserResult",  // message name
  4,  // number of fields
  sizeof(rmf_dispenser_msgs__msg__DispenserResult),
  rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_member_array,  // message members
  rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_type_support_handle = {
  0,
  &rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_dispenser_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_dispenser_msgs, msg, DispenserResult)() {
  rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_type_support_handle.typesupport_identifier) {
    rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_dispenser_msgs__msg__DispenserResult__rosidl_typesupport_introspection_c__DispenserResult_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
