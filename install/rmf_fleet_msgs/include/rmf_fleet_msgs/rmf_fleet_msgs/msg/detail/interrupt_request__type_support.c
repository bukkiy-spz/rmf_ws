// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/InterruptRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/interrupt_request__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/interrupt_request__functions.h"
#include "rmf_fleet_msgs/msg/detail/interrupt_request__struct.h"


// Include directives for member types
// Member `fleet_name`
// Member `robot_name`
// Member `interrupt_id`
// Member `labels`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__InterruptRequest__init(message_memory);
}

void rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__InterruptRequest__fini(message_memory);
}

size_t rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__size_function__InterruptRequest__labels(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__get_const_function__InterruptRequest__labels(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__get_function__InterruptRequest__labels(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__fetch_function__InterruptRequest__labels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__get_const_function__InterruptRequest__labels(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__assign_function__InterruptRequest__labels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__get_function__InterruptRequest__labels(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__resize_function__InterruptRequest__labels(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_message_member_array[5] = {
  {
    "fleet_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__InterruptRequest, fleet_name),  // bytes offset in struct
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
    offsetof(rmf_fleet_msgs__msg__InterruptRequest, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "interrupt_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__InterruptRequest, interrupt_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "labels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__InterruptRequest, labels),  // bytes offset in struct
    NULL,  // default value
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__size_function__InterruptRequest__labels,  // size() function pointer
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__get_const_function__InterruptRequest__labels,  // get_const(index) function pointer
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__get_function__InterruptRequest__labels,  // get(index) function pointer
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__fetch_function__InterruptRequest__labels,  // fetch(index, &value) function pointer
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__assign_function__InterruptRequest__labels,  // assign(index, value) function pointer
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__resize_function__InterruptRequest__labels  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__InterruptRequest, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "InterruptRequest",  // message name
  5,  // number of fields
  sizeof(rmf_fleet_msgs__msg__InterruptRequest),
  rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_message_member_array,  // message members
  rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, InterruptRequest)() {
  if (!rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__msg__InterruptRequest__rosidl_typesupport_introspection_c__InterruptRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
