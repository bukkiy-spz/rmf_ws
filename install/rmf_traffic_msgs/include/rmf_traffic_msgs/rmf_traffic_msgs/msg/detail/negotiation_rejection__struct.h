// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationRejection.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__STRUCT_H_

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
// Member 'alternatives'
#include "rmf_traffic_msgs/msg/detail/itinerary__struct.h"

/// Struct defined in msg/NegotiationRejection in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationRejection
{
  /// The conflict ID that this rejection is targeted at
  uint64_t conflict_version;
  /// Reject this negotiation table
  rmf_traffic_msgs__msg__NegotiationKey__Sequence table;
  /// The rejection is by this participant
  uint64_t rejected_by;
  rmf_traffic_msgs__msg__Itinerary__Sequence alternatives;
} rmf_traffic_msgs__msg__NegotiationRejection;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationRejection.
typedef struct rmf_traffic_msgs__msg__NegotiationRejection__Sequence
{
  rmf_traffic_msgs__msg__NegotiationRejection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationRejection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_REJECTION__STRUCT_H_
