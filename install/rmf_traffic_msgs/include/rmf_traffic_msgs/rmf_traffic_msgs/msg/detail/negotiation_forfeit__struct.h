// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationForfeit.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_FORFEIT__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_FORFEIT__STRUCT_H_

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
#include "rmf_traffic_msgs/msg/detail/negotiation_key__struct.h"

/// Struct defined in msg/NegotiationForfeit in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationForfeit
{
  /// The conflict ID that this forfeit is targeted at
  uint64_t conflict_version;
  /// Forfeit this negotiation table
  rmf_traffic_msgs__msg__NegotiationKey__Sequence table;
} rmf_traffic_msgs__msg__NegotiationForfeit;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationForfeit.
typedef struct rmf_traffic_msgs__msg__NegotiationForfeit__Sequence
{
  rmf_traffic_msgs__msg__NegotiationForfeit * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationForfeit__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_FORFEIT__STRUCT_H_
