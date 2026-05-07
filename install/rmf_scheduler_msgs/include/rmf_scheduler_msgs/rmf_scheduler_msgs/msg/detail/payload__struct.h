// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_scheduler_msgs:msg/Payload.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_H_
#define RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PAYLOAD_TYPE_SERIALIZED_MESSAGE'.
enum
{
  rmf_scheduler_msgs__msg__Payload__PAYLOAD_TYPE_SERIALIZED_MESSAGE = 1
};

// Include directives for member types
// Member 'topic'
// Member 'message_type'
#include "rosidl_runtime_c/string.h"
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

// constants for array fields with an upper bound
// data
enum
{
  rmf_scheduler_msgs__msg__Payload__data__MAX_SIZE = 2097152
};

/// Struct defined in msg/Payload in the package rmf_scheduler_msgs.
/**
  * Denotes the type of payload
 */
typedef struct rmf_scheduler_msgs__msg__Payload
{
  uint8_t type;
  rosidl_runtime_c__String topic;
  rosidl_runtime_c__String message_type;
  /// max 2mb
  rosidl_runtime_c__uint8__Sequence data;
} rmf_scheduler_msgs__msg__Payload;

// Struct for a sequence of rmf_scheduler_msgs__msg__Payload.
typedef struct rmf_scheduler_msgs__msg__Payload__Sequence
{
  rmf_scheduler_msgs__msg__Payload * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_scheduler_msgs__msg__Payload__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__MSG__DETAIL__PAYLOAD__STRUCT_H_
