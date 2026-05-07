// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_dispenser_msgs:msg/DispenserRequest.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_dispenser_msgs/msg/detail/dispenser_request__rosidl_typesupport_introspection_c.h"
#include "rmf_dispenser_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_dispenser_msgs/msg/detail/dispenser_request__functions.h"
#include "rmf_dispenser_msgs/msg/detail/dispenser_request__struct.h"


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
#include "rmf_dispenser_msgs/msg/dispenser_request_item.h"
// Member `items`
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_dispenser_msgs__msg__DispenserRequest__init(message_memory);
}

void rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_fini_function(void * message_memory)
{
  rmf_dispenser_msgs__msg__DispenserRequest__fini(message_memory);
}

size_t rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__size_function__DispenserRequest__items(
  const void * untyped_member)
{
  const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * member =
    (const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__get_const_function__DispenserRequest__items(
  const void * untyped_member, size_t index)
{
  const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * member =
    (const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__get_function__DispenserRequest__items(
  void * untyped_member, size_t index)
{
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * member =
    (rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__fetch_function__DispenserRequest__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_dispenser_msgs__msg__DispenserRequestItem * item =
    ((const rmf_dispenser_msgs__msg__DispenserRequestItem *)
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__get_const_function__DispenserRequest__items(untyped_member, index));
  rmf_dispenser_msgs__msg__DispenserRequestItem * value =
    (rmf_dispenser_msgs__msg__DispenserRequestItem *)(untyped_value);
  *value = *item;
}

void rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__assign_function__DispenserRequest__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_dispenser_msgs__msg__DispenserRequestItem * item =
    ((rmf_dispenser_msgs__msg__DispenserRequestItem *)
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__get_function__DispenserRequest__items(untyped_member, index));
  const rmf_dispenser_msgs__msg__DispenserRequestItem * value =
    (const rmf_dispenser_msgs__msg__DispenserRequestItem *)(untyped_value);
  *item = *value;
}

bool rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__resize_function__DispenserRequest__items(
  void * untyped_member, size_t size)
{
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * member =
    (rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)(untyped_member);
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(member);
  return rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_member_array[5] = {
  {
    "time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_dispenser_msgs__msg__DispenserRequest, time),  // bytes offset in struct
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
    offsetof(rmf_dispenser_msgs__msg__DispenserRequest, request_guid),  // bytes offset in struct
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
    offsetof(rmf_dispenser_msgs__msg__DispenserRequest, target_guid),  // bytes offset in struct
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
    offsetof(rmf_dispenser_msgs__msg__DispenserRequest, transporter_type),  // bytes offset in struct
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
    offsetof(rmf_dispenser_msgs__msg__DispenserRequest, items),  // bytes offset in struct
    NULL,  // default value
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__size_function__DispenserRequest__items,  // size() function pointer
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__get_const_function__DispenserRequest__items,  // get_const(index) function pointer
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__get_function__DispenserRequest__items,  // get(index) function pointer
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__fetch_function__DispenserRequest__items,  // fetch(index, &value) function pointer
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__assign_function__DispenserRequest__items,  // assign(index, value) function pointer
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__resize_function__DispenserRequest__items  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_members = {
  "rmf_dispenser_msgs__msg",  // message namespace
  "DispenserRequest",  // message name
  5,  // number of fields
  sizeof(rmf_dispenser_msgs__msg__DispenserRequest),
  rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_member_array,  // message members
  rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_type_support_handle = {
  0,
  &rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_dispenser_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_dispenser_msgs, msg, DispenserRequest)() {
  rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_dispenser_msgs, msg, DispenserRequestItem)();
  if (!rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_type_support_handle.typesupport_identifier) {
    rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_dispenser_msgs__msg__DispenserRequest__rosidl_typesupport_introspection_c__DispenserRequest_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
