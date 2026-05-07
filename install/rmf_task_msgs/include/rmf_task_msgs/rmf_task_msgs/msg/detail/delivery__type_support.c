// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_task_msgs/msg/detail/delivery__rosidl_typesupport_introspection_c.h"
#include "rmf_task_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_task_msgs/msg/detail/delivery__functions.h"
#include "rmf_task_msgs/msg/detail/delivery__struct.h"


// Include directives for member types
// Member `task_id`
// Member `pickup_place_name`
// Member `pickup_dispenser`
// Member `dropoff_place_name`
// Member `dropoff_ingestor`
#include "rosidl_runtime_c/string_functions.h"
// Member `items`
#include "rmf_dispenser_msgs/msg/dispenser_request_item.h"
// Member `items`
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__rosidl_typesupport_introspection_c.h"
// Member `pickup_behavior`
// Member `dropoff_behavior`
#include "rmf_task_msgs/msg/behavior.h"
// Member `pickup_behavior`
// Member `dropoff_behavior`
#include "rmf_task_msgs/msg/detail/behavior__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_task_msgs__msg__Delivery__init(message_memory);
}

void rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_fini_function(void * message_memory)
{
  rmf_task_msgs__msg__Delivery__fini(message_memory);
}

size_t rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__size_function__Delivery__items(
  const void * untyped_member)
{
  const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * member =
    (const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__get_const_function__Delivery__items(
  const void * untyped_member, size_t index)
{
  const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * member =
    (const rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__get_function__Delivery__items(
  void * untyped_member, size_t index)
{
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * member =
    (rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__fetch_function__Delivery__items(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_dispenser_msgs__msg__DispenserRequestItem * item =
    ((const rmf_dispenser_msgs__msg__DispenserRequestItem *)
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__get_const_function__Delivery__items(untyped_member, index));
  rmf_dispenser_msgs__msg__DispenserRequestItem * value =
    (rmf_dispenser_msgs__msg__DispenserRequestItem *)(untyped_value);
  *value = *item;
}

void rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__assign_function__Delivery__items(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_dispenser_msgs__msg__DispenserRequestItem * item =
    ((rmf_dispenser_msgs__msg__DispenserRequestItem *)
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__get_function__Delivery__items(untyped_member, index));
  const rmf_dispenser_msgs__msg__DispenserRequestItem * value =
    (const rmf_dispenser_msgs__msg__DispenserRequestItem *)(untyped_value);
  *item = *value;
}

bool rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__resize_function__Delivery__items(
  void * untyped_member, size_t size)
{
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence * member =
    (rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence *)(untyped_member);
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(member);
  return rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array[8] = {
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Delivery, task_id),  // bytes offset in struct
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
    offsetof(rmf_task_msgs__msg__Delivery, items),  // bytes offset in struct
    NULL,  // default value
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__size_function__Delivery__items,  // size() function pointer
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__get_const_function__Delivery__items,  // get_const(index) function pointer
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__get_function__Delivery__items,  // get(index) function pointer
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__fetch_function__Delivery__items,  // fetch(index, &value) function pointer
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__assign_function__Delivery__items,  // assign(index, value) function pointer
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__resize_function__Delivery__items  // resize(index) function pointer
  },
  {
    "pickup_place_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Delivery, pickup_place_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pickup_dispenser",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Delivery, pickup_dispenser),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pickup_behavior",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Delivery, pickup_behavior),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dropoff_place_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Delivery, dropoff_place_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dropoff_ingestor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Delivery, dropoff_ingestor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dropoff_behavior",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_task_msgs__msg__Delivery, dropoff_behavior),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_members = {
  "rmf_task_msgs__msg",  // message namespace
  "Delivery",  // message name
  8,  // number of fields
  sizeof(rmf_task_msgs__msg__Delivery),
  rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array,  // message members
  rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_type_support_handle = {
  0,
  &rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_task_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Delivery)() {
  rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_dispenser_msgs, msg, DispenserRequestItem)();
  rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Behavior)();
  rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_member_array[7].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_task_msgs, msg, Behavior)();
  if (!rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_type_support_handle.typesupport_identifier) {
    rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_task_msgs__msg__Delivery__rosidl_typesupport_introspection_c__Delivery_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
