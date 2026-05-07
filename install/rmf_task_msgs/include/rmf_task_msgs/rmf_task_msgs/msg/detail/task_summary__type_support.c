// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:msg/TaskSummary.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/msg/detail/task_summary__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/msg/detail/task_summary__functions.h"
#include "rmf_task_msgs/msg/detail/task_summary__struct.h"


// Include directives for member types
// Member `fleet_name`
// Member `task_id`
// Member `status`
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `task_profile`
#include "rmf_task_msgs/msg/task_profile.h"
// Member `task_profile`
#include "rmf_task_msgs/msg/detail/task_profile__rosidl_typesupport_introspection_c.h"
// Member `submission_time`
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/time.h"
// Member `submission_time`
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__msg__TaskSummary__init(message_memory);
}

void rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_fini_function(void * message_memory)
{
  rmf_task_msgs__msg__TaskSummary__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_member_array[9] = {
  {
    "fleet_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskSummary, fleet_name),  // bytes offset in struct
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
    offsetof(rmf_task_msgs__msg__TaskSummary, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_profile",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskSummary, task_profile),  // bytes offset in struct
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
    offsetof(rmf_task_msgs__msg__TaskSummary, state),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskSummary, status),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "submission_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskSummary, submission_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskSummary, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "end_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskSummary, end_time),  // bytes offset in struct
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
    offsetof(rmf_task_msgs__msg__TaskSummary, robot_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_members = {
  "rmf_task_msgs__msg",  // message namespace
  "TaskSummary",  // message name
  9,  // number of fields
  sizeof(rmf_task_msgs__msg__TaskSummary),
  rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_member_array,  // message members
  rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_type_support_handle = {
  0,
  &rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskSummary)() {
  rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskProfile)();
  rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  if (!rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_type_support_handle.typesupport_identifier) {
    rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_task_msgs__msg__TaskSummary__rosidl_typesupport_introspection_c__TaskSummary_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
