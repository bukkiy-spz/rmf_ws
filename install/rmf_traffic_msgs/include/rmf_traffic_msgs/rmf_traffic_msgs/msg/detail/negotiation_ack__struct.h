// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationAck.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'acknowledgments'
#include "rmf_traffic_msgs/msg/detail/negotiation_participant_ack__struct.h"

/// Struct defined in msg/NegotiationAck in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationAck
{
  /// The version number of the conflict whose conclusion is being acknowledged
  uint64_t conflict_version;
  /// The participants who are acknowledging the conclusion of the conflict
  /// negotiation
  rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence acknowledgments;
} rmf_traffic_msgs__msg__NegotiationAck;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationAck.
typedef struct rmf_traffic_msgs__msg__NegotiationAck__Sequence
{
  rmf_traffic_msgs__msg__NegotiationAck * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationAck__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_ACK__STRUCT_H_
