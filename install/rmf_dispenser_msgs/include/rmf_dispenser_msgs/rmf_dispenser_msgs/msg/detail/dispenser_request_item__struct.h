// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_dispenser_msgs:msg/DispenserRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__STRUCT_H_
#define RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type_guid'
// Member 'compartment_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DispenserRequestItem in the package rmf_dispenser_msgs.
typedef struct rmf_dispenser_msgs__msg__DispenserRequestItem
{
  rosidl_runtime_c__String type_guid;
  int32_t quantity;
  rosidl_runtime_c__String compartment_name;
} rmf_dispenser_msgs__msg__DispenserRequestItem;

// Struct for a sequence of rmf_dispenser_msgs__msg__DispenserRequestItem.
typedef struct rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence
{
  rmf_dispenser_msgs__msg__DispenserRequestItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DISPENSER_MSGS__MSG__DETAIL__DISPENSER_REQUEST_ITEM__STRUCT_H_
