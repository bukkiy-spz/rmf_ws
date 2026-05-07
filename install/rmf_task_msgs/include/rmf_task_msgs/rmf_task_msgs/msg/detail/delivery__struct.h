// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/Delivery.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
// Member 'pickup_place_name'
// Member 'pickup_dispenser'
// Member 'dropoff_place_name'
// Member 'dropoff_ingestor'
#include "rosidl_runtime_c/string.h"
// Member 'items'
#include "rmf_dispenser_msgs/msg/detail/dispenser_request_item__struct.h"
// Member 'pickup_behavior'
// Member 'dropoff_behavior'
#include "rmf_task_msgs/msg/detail/behavior__struct.h"

/// Struct defined in msg/Delivery in the package rmf_task_msgs.
/**
  * task_id is intended to be a pseudo-random string generated
  * by the caller which can be used to identify this task as it
  * moves between the queues to completion (or failure).
 */
typedef struct rmf_task_msgs__msg__Delivery
{
  rosidl_runtime_c__String task_id;
  rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence items;
  rosidl_runtime_c__String pickup_place_name;
  rosidl_runtime_c__String pickup_dispenser;
  rmf_task_msgs__msg__Behavior pickup_behavior;
  rosidl_runtime_c__String dropoff_place_name;
  rosidl_runtime_c__String dropoff_ingestor;
  rmf_task_msgs__msg__Behavior dropoff_behavior;
} rmf_task_msgs__msg__Delivery;

// Struct for a sequence of rmf_task_msgs__msg__Delivery.
typedef struct rmf_task_msgs__msg__Delivery__Sequence
{
  rmf_task_msgs__msg__Delivery * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__Delivery__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DELIVERY__STRUCT_H_
