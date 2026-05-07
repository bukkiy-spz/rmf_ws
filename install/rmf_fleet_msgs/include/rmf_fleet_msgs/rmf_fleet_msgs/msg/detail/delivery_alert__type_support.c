// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_fleet_msgs:msg/DeliveryAlert.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_fleet_msgs/msg/detail/delivery_alert__rosidl_typesupport_introspection_c.h"
#include "rmf_fleet_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_fleet_msgs/msg/detail/delivery_alert__functions.h"
#include "rmf_fleet_msgs/msg/detail/delivery_alert__struct.h"


// Include directives for member types
// Member `id`
// Member `task_id`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `category`
#include "rmf_fleet_msgs/msg/delivery_alert_category.h"
// Member `category`
#include "rmf_fleet_msgs/msg/detail/delivery_alert_category__rosidl_typesupport_introspection_c.h"
// Member `tier`
#include "rmf_fleet_msgs/msg/delivery_alert_tier.h"
// Member `tier`
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__rosidl_typesupport_introspection_c.h"
// Member `action`
#include "rmf_fleet_msgs/msg/delivery_alert_action.h"
// Member `action`
#include "rmf_fleet_msgs/msg/detail/delivery_alert_action__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_fleet_msgs__msg__DeliveryAlert__init(message_memory);
}

void rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_fini_function(void * message_memory)
{
  rmf_fleet_msgs__msg__DeliveryAlert__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_member_array[6] = {
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DeliveryAlert, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "category",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DeliveryAlert, category),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tier",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DeliveryAlert, tier),  // bytes offset in struct
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
    offsetof(rmf_fleet_msgs__msg__DeliveryAlert, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DeliveryAlert, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_fleet_msgs__msg__DeliveryAlert, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_members = {
  "rmf_fleet_msgs__msg",  // message namespace
  "DeliveryAlert",  // message name
  6,  // number of fields
  sizeof(rmf_fleet_msgs__msg__DeliveryAlert),
  rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_member_array,  // message members
  rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_type_support_handle = {
  0,
  &rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_fleet_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DeliveryAlert)() {
  rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DeliveryAlertCategory)();
  rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DeliveryAlertTier)();
  rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_fleet_msgs, msg, DeliveryAlertAction)();
  if (!rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_type_support_handle.typesupport_identifier) {
    rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_fleet_msgs__msg__DeliveryAlert__rosidl_typesupport_introspection_c__DeliveryAlert_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
