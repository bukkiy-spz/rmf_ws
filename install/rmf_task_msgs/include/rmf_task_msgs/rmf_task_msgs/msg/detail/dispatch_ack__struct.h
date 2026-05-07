// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'errors'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/DispatchAck in the package rmf_task_msgs.
/**
  * This message is published by the fleet adapter in response to a
  * DispatchRequest message. It indicates whether the requested task addition or
  * cancellation was successful.
 */
typedef struct rmf_task_msgs__msg__DispatchAck
{
  /// The ID of the DispatchRequest that is being responded to
  uint64_t dispatch_id;
  /// True if the addition or cancellation operation was successful
  bool success;
  rosidl_runtime_c__String__Sequence errors;
} rmf_task_msgs__msg__DispatchAck;

// Struct for a sequence of rmf_task_msgs__msg__DispatchAck.
typedef struct rmf_task_msgs__msg__DispatchAck__Sequence
{
  rmf_task_msgs__msg__DispatchAck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__DispatchAck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__DISPATCH_ACK__STRUCT_H_
