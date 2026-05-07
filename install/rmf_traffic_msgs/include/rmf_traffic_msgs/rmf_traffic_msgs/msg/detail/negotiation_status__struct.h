// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationStatus.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUS__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUS__STRUCT_H_

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
// Member 'start_time'
// Member 'last_response_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/NegotiationStatus in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationStatus
{
  uint64_t conflict_version;
  rosidl_runtime_c__uint64__Sequence participants;
  /// Time that this negotiation began
  builtin_interfaces__msg__Time start_time;
  /// Time that the last response from a participant was seen
  builtin_interfaces__msg__Time last_response_time;
} rmf_traffic_msgs__msg__NegotiationStatus;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationStatus.
typedef struct rmf_traffic_msgs__msg__NegotiationStatus__Sequence
{
  rmf_traffic_msgs__msg__NegotiationStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUS__STRUCT_H_
