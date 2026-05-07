// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/robot_state__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/robot_state__functions.h"
#include "rmf_fleet_msgs/msg/detail/robot_state__struct.h"


// Include directives for member types
// Member `name`
// Member `model`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mode`
#include "rmf_fleet_msgs/msg/robot_mode.h"
// Member `mode`
#include "rmf_fleet_msgs/msg/detail/robot_mode__rosidl_typesupport_introspection_c.h"
// Member `location`
// Member `path`
#include "rmf_fleet_msgs/msg/location.h"
// Member `location`
// Member `path`
#include "rmf_fleet_msgs/msg/detail/location__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__RobotState__init(message_memory);
}

void rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__RobotState__fini(message_memory);
}

size_t rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__path(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__Location__Sequence * member =
    (const rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__path(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__Location__Sequence * member =
    (const rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__path(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__Location__Sequence * member =
    (rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__path(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_fleet_msgs__msg__Location * item =
    ((const rmf_fleet_msgs__msg__Location *)
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__path(untyped_member, index));
  rmf_fleet_msgs__msg__Location * value =
    (rmf_fleet_msgs__msg__Location *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__path(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_fleet_msgs__msg__Location * item =
    ((rmf_fleet_msgs__msg__Location *)
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__path(untyped_member, index));
  const rmf_fleet_msgs__msg__Location * value =
    (const rmf_fleet_msgs__msg__Location *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__path(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__Location__Sequence * member =
    (rmf_fleet_msgs__msg__Location__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__Location__Sequence__fini(member);
  return rmf_fleet_msgs__msg__Location__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[8] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__RobotState, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "model",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__RobotState, model),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__RobotState, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "seq",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__RobotState, seq),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__RobotState, mode),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "battery_percent",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__RobotState, battery_percent),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "location",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__RobotState, location),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "path",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__RobotState, path),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__size_function__RobotState__path,  // size() function pointer
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_const_function__RobotState__path,  // get_const(index) function pointer
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__get_function__RobotState__path,  // get(index) function pointer
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__fetch_function__RobotState__path,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__assign_function__RobotState__path,  // assign(index, value) function pointer
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__resize_function__RobotState__path  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "RobotState",  // message name
  8,  // number of fields
  sizeof(rmf_fleet_msgs__msg__RobotState),
  rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array,  // message members
  rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, RobotState)() {
  rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, RobotMode)();
  rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, Location)();
  rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, Location)();
  if (!rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__msg__RobotState__rosidl_typesupport_introspection_c__RobotState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
