// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/msg/detail/task_description__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/msg/detail/task_description__functions.h"
#include "rmf_task_msgs/msg/detail/task_description__struct.h"


// Include directives for member types
// Member `start_time`
#include "builtin_interfaces/msg/time.h"
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `priority`
#include "rmf_task_msgs/msg/priority.h"
// Member `priority`
#include "rmf_task_msgs/msg/detail/priority__rosidl_typesupport_introspection_c.h"
// Member `task_type`
#include "rmf_task_msgs/msg/task_type.h"
// Member `task_type`
#include "rmf_task_msgs/msg/detail/task_type__rosidl_typesupport_introspection_c.h"
// Member `station`
#include "rmf_task_msgs/msg/station.h"
// Member `station`
#include "rmf_task_msgs/msg/detail/station__rosidl_typesupport_introspection_c.h"
// Member `loop`
#include "rmf_task_msgs/msg/loop.h"
// Member `loop`
#include "rmf_task_msgs/msg/detail/loop__rosidl_typesupport_introspection_c.h"
// Member `delivery`
#include "rmf_task_msgs/msg/delivery.h"
// Member `delivery`
#include "rmf_task_msgs/msg/detail/delivery__rosidl_typesupport_introspection_c.h"
// Member `clean`
#include "rmf_task_msgs/msg/clean.h"
// Member `clean`
#include "rmf_task_msgs/msg/detail/clean__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__msg__TaskDescription__init(message_memory);
}

void rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_fini_function(void * message_memory)
{
  rmf_task_msgs__msg__TaskDescription__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array[7] = {
  {
    "start_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskDescription, start_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskDescription, priority),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "task_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskDescription, task_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "station",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskDescription, station),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "loop",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskDescription, loop),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "delivery",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskDescription, delivery),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "clean",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__TaskDescription, clean),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_members = {
  "rmf_task_msgs__msg",  // message namespace
  "TaskDescription",  // message name
  7,  // number of fields
  sizeof(rmf_task_msgs__msg__TaskDescription),
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array,  // message members
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_type_support_handle = {
  0,
  &rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskDescription)() {
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Priority)();
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, TaskType)();
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Station)();
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Loop)();
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Delivery)();
  rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Clean)();
  if (!rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_type_support_handle.typesupport_identifier) {
    rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_task_msgs__msg__TaskDescription__rosidl_typesupport_introspection_c__TaskDescription_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
