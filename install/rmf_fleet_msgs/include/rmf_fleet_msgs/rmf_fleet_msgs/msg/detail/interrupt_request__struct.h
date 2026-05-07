// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/InterruptRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_INTERRUPT'.
enum
{
  rmf_fleet_msgs__msg__InterruptRequest__TYPE_INTERRUPT = 0
};

/// Constant 'TYPE_RESUME'.
enum
{
  rmf_fleet_msgs__msg__InterruptRequest__TYPE_RESUME = 1
};

// Include directives for member types
// Member 'fleet_name'
// Member 'robot_name'
// Member 'interrupt_id'
// Member 'labels'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/InterruptRequest in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__InterruptRequest
{
  rosidl_runtime_c__String fleet_name;
  rosidl_runtime_c__String robot_name;
  rosidl_runtime_c__String interrupt_id;
  rosidl_runtime_c__String__Sequence labels;
  uint8_t type;
} rmf_fleet_msgs__msg__InterruptRequest;

// Struct for a sequence of rmf_fleet_msgs__msg__InterruptRequest.
typedef struct rmf_fleet_msgs__msg__InterruptRequest__Sequence
{
  rmf_fleet_msgs__msg__InterruptRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__InterruptRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__INTERRUPT_REQUEST__STRUCT_H_
