// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_ingestor_msgs:msg/IngestorRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_ingestor_msgs/msg/detail/ingestor_request__rosidl_typesupport_introspection_c.h"
#include "rmf_ingestor_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request__functions.h"
#include "rmf_ingestor_msgs/msg/detail/ingestor_request__struct.h"


// Include directives for member types
// Member `time`
#include "builtin_interfaces/msg/time.h"
// Member `time`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `request_guid`
// Member `target_guid`
// Member `transporter_type`
#include "rosidl_runtime_c/string_functions.h"
// Member `items`
#include "rmf_ingestor_msgs/msg/ingestor_request_item.h"
// Member `items`
#include "rmf_ingestor_msgs/msg/detail/ingestor_request_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_ingestor_msgs__msg__IngestorRequest__init(message_memory);
}

void rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_fini_function(void * message_memory)
{
  rmf_ingestor_msgs__msg__IngestorRequest__fini(message_memory);
}

size_t rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__size_function__IngestorRequest__items(
  const void * untyped_member)
{
  const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * member =
    (const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__get_const_function__IngestorRequest__items(
  const void * untyped_member, size_t index)
{
  const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * member =
    (const rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__get_function__IngestorRequest__items(
  void * untyped_member, size_t index)
{
  rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * member =
    (rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__fetch_function__IngestorRequest__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_ingestor_msgs__msg__IngestorRequestItem * item =
    ((const rmf_ingestor_msgs__msg__IngestorRequestItem *)
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__get_const_function__IngestorRequest__items(untyped_member, index));
  rmf_ingestor_msgs__msg__IngestorRequestItem * value =
    (rmf_ingestor_msgs__msg__IngestorRequestItem *)(untyped_value);
  *value = *item;
}

void rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__assign_function__IngestorRequest__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_ingestor_msgs__msg__IngestorRequestItem * item =
    ((rmf_ingestor_msgs__msg__IngestorRequestItem *)
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__get_function__IngestorRequest__items(untyped_member, index));
  const rmf_ingestor_msgs__msg__IngestorRequestItem * value =
    (const rmf_ingestor_msgs__msg__IngestorRequestItem *)(untyped_value);
  *item = *value;
}

bool rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__resize_function__IngestorRequest__items(
  void * untyped_member, size_t size)
{
  rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence * member =
    (rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence *)(untyped_member);
  rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(member);
  return rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_member_array[5] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorRequest, time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorRequest, request_guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "target_guid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorRequest, target_guid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "transporter_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorRequest, transporter_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "items",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_ingestor_msgs__msg__IngestorRequest, items),  // bytes offset in struct
    NULL,  // default value
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__size_function__IngestorRequest__items,  // size() function pointer
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__get_const_function__IngestorRequest__items,  // get_const(index) function pointer
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__get_function__IngestorRequest__items,  // get(index) function pointer
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__fetch_function__IngestorRequest__items,  // fetch(index, &value) function pointer
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__assign_function__IngestorRequest__items,  // assign(index, value) function pointer
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__resize_function__IngestorRequest__items  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_members = {
  "rmf_ingestor_msgs__msg",  // message namespace
  "IngestorRequest",  // message name
  5,  // number of fields
  sizeof(rmf_ingestor_msgs__msg__IngestorRequest),
  rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_member_array,  // message members
  rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_type_support_handle = {
  0,
  &rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_ingestor_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_ingestor_msgs, msg, IngestorRequest)() {
  rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_ingestor_msgs, msg, IngestorRequestItem)();
  if (!rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_type_support_handle.typesupport_identifier) {
    rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_ingestor_msgs__msg__IngestorRequest__rosidl_typesupport_introspection_c__IngestorRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
