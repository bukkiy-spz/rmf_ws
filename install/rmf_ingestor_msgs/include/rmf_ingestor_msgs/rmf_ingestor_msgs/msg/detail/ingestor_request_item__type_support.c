// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__rosidl_typesupport_introspection_c.h"
#include "rmf_ingestor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__functions.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__struct.h"


// Include directives for member types
// Member `type_guid`
// Member `compartment_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_ingestor_msgs__msg__IngestorRequestItem__init(message_memory);
}

void rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_fini_function(void * message_memory)
{
  rmf_ingestor_msgs__msg__IngestorRequestItem__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_message_member_array[3] = {
  {
    "type_guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorRequestItem, type_guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quantity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorRequestItem, quantity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "compartment_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorRequestItem, compartment_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_message_members = {
  "rmf_ingestor_msgs__msg",  // message namespace
  "IngestorRequestItem",  // message name
  3,  // number of fields
  sizeof(rmf_ingestor_msgs__msg__IngestorRequestItem),
  rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_message_member_array,  // message members
  rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_message_type_support_handle = {
  0,
  &rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_ingestor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_ingestor_msgs, msg, IngestorRequestItem)() {
  if (!rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_message_type_support_handle.typesupport_identifier) {
    rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_ingestor_msgs__msg__IngestorRequestItem__rosidl_typesupport_introspection_c__IngestorRequestItem_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
