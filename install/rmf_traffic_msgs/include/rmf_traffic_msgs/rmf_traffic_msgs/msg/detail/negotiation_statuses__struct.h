// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationStatuses.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUSES__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUSES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'negotiations'
#include "rmf_traffic_msgs/msg/detail/negotiation_status__struct.h"

/// Struct defined in msg/NegotiationStatuses in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationStatuses
{
  rmf_traffic_msgs__msg__NegotiationStatus__Sequence negotiations;
} rmf_traffic_msgs__msg__NegotiationStatuses;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationStatuses.
typedef struct rmf_traffic_msgs__msg__NegotiationStatuses__Sequence
{
  rmf_traffic_msgs__msg__NegotiationStatuses * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationStatuses__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATUSES__STRUCT_H_
