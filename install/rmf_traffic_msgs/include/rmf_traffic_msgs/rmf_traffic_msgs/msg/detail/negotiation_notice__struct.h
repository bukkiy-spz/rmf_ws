// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationNotice.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'participants'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NegotiationNotice in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationNotice
{
  /// The version number assigned to this conflict
  uint64_t conflict_version;
  /// The IDs of the participants that are in conflict.
  rosidl_runtime_c__uint64__Sequence participants;
} rmf_traffic_msgs__msg__NegotiationNotice;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationNotice.
typedef struct rmf_traffic_msgs__msg__NegotiationNotice__Sequence
{
  rmf_traffic_msgs__msg__NegotiationNotice * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationNotice__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_NOTICE__STRUCT_H_
