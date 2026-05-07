// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/Timespan.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/timespan__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/timespan__functions.h"
#include "rmf_traffic_msgs/msg/detail/timespan__struct.h"


// Include directives for member types
// Member `maps`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__Timespan__init(message_memory);
}

void rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__Timespan__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__size_function__Timespan__maps(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__get_const_function__Timespan__maps(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__get_function__Timespan__maps(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__fetch_function__Timespan__maps(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__get_const_function__Timespan__maps(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__assign_function__Timespan__maps(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__get_function__Timespan__maps(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__resize_function__Timespan__maps(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_message_member_array[5] = {
  {
    "maps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Timespan, maps),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__size_function__Timespan__maps,  // size() function pointer
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__get_const_function__Timespan__maps,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__get_function__Timespan__maps,  // get(index) function pointer
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__fetch_function__Timespan__maps,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__assign_function__Timespan__maps,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__resize_function__Timespan__maps  // resize(index) function pointer
  },
  {
    "has_lower_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Timespan, has_lower_bound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lower_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Timespan, lower_bound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "has_upper_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Timespan, has_upper_bound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "upper_bound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Timespan, upper_bound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "Timespan",  // message name
  5,  // number of fields
  sizeof(rmf_traffic_msgs__msg__Timespan),
  rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_message_member_array,  // message members
  rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Timespan)() {
  if (!rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__Timespan__rosidl_typesupport_introspection_c__Timespan_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
