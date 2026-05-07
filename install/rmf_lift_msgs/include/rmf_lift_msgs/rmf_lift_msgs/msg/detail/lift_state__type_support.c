// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_lift_msgs/msg/detail/lift_state__rosidl_typesupport_introspection_c.h"
#include "rmf_lift_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_lift_msgs/msg/detail/lift_state__functions.h"
#include "rmf_lift_msgs/msg/detail/lift_state__struct.h"


// Include directives for member types
// Member `lift_time`
#include "builtin_interfaces/msg/time.h"
// Member `lift_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `lift_name`
// Member `available_floors`
// Member `current_floor`
// Member `destination_floor`
// Member `session_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `available_modes`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_lift_msgs__msg__LiftState__init(message_memory);
}

void rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_fini_function(void * message_memory)
{
  rmf_lift_msgs__msg__LiftState__fini(message_memory);
}

size_t rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__size_function__LiftState__available_floors(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_const_function__LiftState__available_floors(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_function__LiftState__available_floors(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__fetch_function__LiftState__available_floors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_const_function__LiftState__available_floors(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__assign_function__LiftState__available_floors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_function__LiftState__available_floors(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__resize_function__LiftState__available_floors(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__size_function__LiftState__available_modes(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_const_function__LiftState__available_modes(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_function__LiftState__available_modes(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__fetch_function__LiftState__available_modes(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_const_function__LiftState__available_modes(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__assign_function__LiftState__available_modes(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_function__LiftState__available_modes(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__resize_function__LiftState__available_modes(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_member_array[10] = {
  {
    "lift_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, lift_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lift_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, lift_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available_floors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, available_floors),  // bytes offset in struct
    NULL,  // default value
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__size_function__LiftState__available_floors,  // size() function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_const_function__LiftState__available_floors,  // get_const(index) function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_function__LiftState__available_floors,  // get(index) function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__fetch_function__LiftState__available_floors,  // fetch(index, &value) function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__assign_function__LiftState__available_floors,  // assign(index, value) function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__resize_function__LiftState__available_floors  // resize(index) function pointer
  },
  {
    "current_floor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, current_floor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "destination_floor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, destination_floor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "door_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, door_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "motion_state",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, motion_state),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "available_modes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, available_modes),  // bytes offset in struct
    NULL,  // default value
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__size_function__LiftState__available_modes,  // size() function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_const_function__LiftState__available_modes,  // get_const(index) function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__get_function__LiftState__available_modes,  // get(index) function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__fetch_function__LiftState__available_modes,  // fetch(index, &value) function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__assign_function__LiftState__available_modes,  // assign(index, value) function pointer
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__resize_function__LiftState__available_modes  // resize(index) function pointer
  },
  {
    "current_mode",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, current_mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "session_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_lift_msgs__msg__LiftState, session_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_members = {
  "rmf_lift_msgs__msg",  // message namespace
  "LiftState",  // message name
  10,  // number of fields
  sizeof(rmf_lift_msgs__msg__LiftState),
  rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_member_array,  // message members
  rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_type_support_handle = {
  0,
  &rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_lift_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_lift_msgs, msg, LiftState)() {
  rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_type_support_handle.typesupport_identifier) {
    rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_lift_msgs__msg__LiftState__rosidl_typesupport_introspection_c__LiftState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
