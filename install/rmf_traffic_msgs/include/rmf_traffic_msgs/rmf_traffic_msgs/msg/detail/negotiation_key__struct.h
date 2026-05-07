// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationKey.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_KEY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_KEY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NegotiationKey in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationKey
{
  /// The participant ID of the negotiation table
  uint64_t participant;
  /// The version of the negotiation table that we care about
  uint64_t version;
} rmf_traffic_msgs__msg__NegotiationKey;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationKey.
typedef struct rmf_traffic_msgs__msg__NegotiationKey__Sequence
{
  rmf_traffic_msgs__msg__NegotiationKey * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationKey__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_KEY__STRUCT_H_
