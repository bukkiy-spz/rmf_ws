// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/mirror_update__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/mirror_update__functions.h"
#include "rmf_traffic_msgs/msg/detail/mirror_update__struct.h"


// Include directives for member types
// Member `node_id`
#include "rmf_traffic_msgs/msg/schedule_identity.h"
// Member `node_id`
#include "rmf_traffic_msgs/msg/detail/schedule_identity__rosidl_typesupport_introspection_c.h"
// Member `patch`
#include "rmf_traffic_msgs/msg/schedule_patch.h"
// Member `patch`
#include "rmf_traffic_msgs/msg/detail/schedule_patch__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__MirrorUpdate__init(message_memory);
}

void rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__MirrorUpdate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_member_array[4] = {
  {
    "node_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__MirrorUpdate, node_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "database_version",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__MirrorUpdate, database_version),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "patch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__MirrorUpdate, patch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_remedial_update",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__MirrorUpdate, is_remedial_update),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "MirrorUpdate",  // message name
  4,  // number of fields
  sizeof(rmf_traffic_msgs__msg__MirrorUpdate),
  rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_member_array,  // message members
  rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, MirrorUpdate)() {
  rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, ScheduleIdentity)();
  rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, SchedulePatch)();
  if (!rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__MirrorUpdate__rosidl_typesupport_introspection_c__MirrorUpdate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
