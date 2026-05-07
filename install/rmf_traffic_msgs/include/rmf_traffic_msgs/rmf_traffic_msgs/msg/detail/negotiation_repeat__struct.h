// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationRepeat.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'table'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/NegotiationRepeat in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationRepeat
{
  /// Repeat conflict information related to this version
  uint64_t conflict_version;
  /// Repeat conflict information related to this table. If this is empty, then
  /// only the initial NegotiationNotice will be repeated.
  rosidl_runtime_c__uint64__Sequence table;
} rmf_traffic_msgs__msg__NegotiationRepeat;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationRepeat.
typedef struct rmf_traffic_msgs__msg__NegotiationRepeat__Sequence
{
  rmf_traffic_msgs__msg__NegotiationRepeat * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationRepeat__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REPEAT__STRUCT_H_
