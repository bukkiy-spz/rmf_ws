// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_ingestor_msgs:msg/IngestorState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_ingestor_msgs/msg/detail/ingestor_state__rosidl_typesupport_introspection_c.h"
#include "rmf_ingestor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_state__functions.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_state__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `guid`
// Member `request_guid_queue`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_ingestor_msgs__msg__IngestorState__init(message_memory);
}

void rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_fini_function(void * message_memory)
{
  rmf_ingestor_msgs__msg__IngestorState__fini(message_memory);
}

size_t rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__size_function__IngestorState__request_guid_queue(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__get_const_function__IngestorState__request_guid_queue(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__get_function__IngestorState__request_guid_queue(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__fetch_function__IngestorState__request_guid_queue(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__get_const_function__IngestorState__request_guid_queue(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__assign_function__IngestorState__request_guid_queue(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__get_function__IngestorState__request_guid_queue(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__resize_function__IngestorState__request_guid_queue(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_member_array[5] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorState, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorState, guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_guid_queue",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorState, request_guid_queue),  // bytes offset in struct
    NULL,  // default value
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__size_function__IngestorState__request_guid_queue,  // size() function pointer
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__get_const_function__IngestorState__request_guid_queue,  // get_const(index) function pointer
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__get_function__IngestorState__request_guid_queue,  // get(index) function pointer
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__fetch_function__IngestorState__request_guid_queue,  // fetch(index, &value) function pointer
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__assign_function__IngestorState__request_guid_queue,  // assign(index, value) function pointer
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__resize_function__IngestorState__request_guid_queue  // resize(index) function pointer
  },
  {
    "seconds_remaining",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorState, seconds_remaining),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_members = {
  "rmf_ingestor_msgs__msg",  // message namespace
  "IngestorState",  // message name
  5,  // number of fields
  sizeof(rmf_ingestor_msgs__msg__IngestorState),
  rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_member_array,  // message members
  rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_type_support_handle = {
  0,
  &rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_ingestor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_ingestor_msgs, msg, IngestorState)() {
  rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_type_support_handle.typesupport_identifier) {
    rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_ingestor_msgs__msg__IngestorState__rosidl_typesupport_introspection_c__IngestorState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
