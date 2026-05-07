// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/ModeRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/mode_request__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/mode_request__functions.h"
#include "rmf_fleet_msgs/msg/detail/mode_request__struct.h"


// Include directives for member types
// Member `fleet_name`
// Member `robot_name`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mode`
#include "rmf_fleet_msgs/msg/robot_mode.h"
// Member `mode`
#include "rmf_fleet_msgs/msg/detail/robot_mode__rosidl_typesupport_introspection_c.h"
// Member `parameters`
#include "rmf_fleet_msgs/msg/mode_parameter.h"
// Member `parameters`
#include "rmf_fleet_msgs/msg/detail/mode_parameter__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__ModeRequest__init(message_memory);
}

void rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__ModeRequest__fini(message_memory);
}

size_t rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__size_function__ModeRequest__parameters(
  const void * untyped_member)
{
  const rmf_fleet_msgs__msg__ModeParameter__Sequence * member =
    (const rmf_fleet_msgs__msg__ModeParameter__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__get_const_function__ModeRequest__parameters(
  const void * untyped_member, size_t index)
{
  const rmf_fleet_msgs__msg__ModeParameter__Sequence * member =
    (const rmf_fleet_msgs__msg__ModeParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__get_function__ModeRequest__parameters(
  void * untyped_member, size_t index)
{
  rmf_fleet_msgs__msg__ModeParameter__Sequence * member =
    (rmf_fleet_msgs__msg__ModeParameter__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__fetch_function__ModeRequest__parameters(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_fleet_msgs__msg__ModeParameter * item =
    ((const rmf_fleet_msgs__msg__ModeParameter *)
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__get_const_function__ModeRequest__parameters(untyped_member, index));
  rmf_fleet_msgs__msg__ModeParameter * value =
    (rmf_fleet_msgs__msg__ModeParameter *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__assign_function__ModeRequest__parameters(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_fleet_msgs__msg__ModeParameter * item =
    ((rmf_fleet_msgs__msg__ModeParameter *)
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__get_function__ModeRequest__parameters(untyped_member, index));
  const rmf_fleet_msgs__msg__ModeParameter * value =
    (const rmf_fleet_msgs__msg__ModeParameter *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__resize_function__ModeRequest__parameters(
  void * untyped_member, size_t size)
{
  rmf_fleet_msgs__msg__ModeParameter__Sequence * member =
    (rmf_fleet_msgs__msg__ModeParameter__Sequence *)(untyped_member);
  rmf_fleet_msgs__msg__ModeParameter__Sequence__fini(member);
  return rmf_fleet_msgs__msg__ModeParameter__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_member_array[5] = {
  {
    "fleet_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__ModeRequest, fleet_name),  // bytes offset in struct
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
    offsetof(rmf_fleet_msgs__msg__ModeRequest, robot_name),  // bytes offset in struct
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
    offsetof(rmf_fleet_msgs__msg__ModeRequest, mode),  // bytes offset in struct
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
    offsetof(rmf_fleet_msgs__msg__ModeRequest, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "parameters",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__ModeRequest, parameters),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__size_function__ModeRequest__parameters,  // size() function pointer
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__get_const_function__ModeRequest__parameters,  // get_const(index) function pointer
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__get_function__ModeRequest__parameters,  // get(index) function pointer
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__fetch_function__ModeRequest__parameters,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__assign_function__ModeRequest__parameters,  // assign(index, value) function pointer
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__resize_function__ModeRequest__parameters  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "ModeRequest",  // message name
  5,  // number of fields
  sizeof(rmf_fleet_msgs__msg__ModeRequest),
  rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_member_array,  // message members
  rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, ModeRequest)() {
  rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, RobotMode)();
  rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, ModeParameter)();
  if (!rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__msg__ModeRequest__rosidl_typesupport_introspection_c__ModeRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
