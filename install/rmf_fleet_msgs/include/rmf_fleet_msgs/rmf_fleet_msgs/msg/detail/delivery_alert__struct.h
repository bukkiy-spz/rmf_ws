// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/DeliveryAlert.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'id'
// Member 'task_id'
// Member 'message'
#include "rosidl_runtime_c/string.h"
// Member 'category'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_category__struct.h"
// Member 'tier'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__struct.h"
// Member 'action'
#include "rmf_fleet_msgs/msg/detail/delivery_alert_action__struct.h"

/// Struct defined in msg/DeliveryAlert in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__DeliveryAlert
{
  rosidl_runtime_c__String id;
  rmf_fleet_msgs__msg__DeliveryAlertCategory category;
  rmf_fleet_msgs__msg__DeliveryAlertTier tier;
  rosidl_runtime_c__String task_id;
  rmf_fleet_msgs__msg__DeliveryAlertAction action;
  rosidl_runtime_c__String message;
} rmf_fleet_msgs__msg__DeliveryAlert;

// Struct for a sequence of rmf_fleet_msgs__msg__DeliveryAlert.
typedef struct rmf_fleet_msgs__msg__DeliveryAlert__Sequence
{
  rmf_fleet_msgs__msg__DeliveryAlert * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__DeliveryAlert__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT__STRUCT_H_
