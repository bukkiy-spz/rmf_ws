// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationState.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'status'
#include "rmf_traffic_msgs/msg/detail/negotiation_status__struct.h"
// Member 'tree'
#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__struct.h"
// Member 'orphan_proposals'
#include "rmf_traffic_msgs/msg/detail/negotiation_proposal__struct.h"
// Member 'orphan_rejections'
#include "rmf_traffic_msgs/msg/detail/negotiation_rejection__struct.h"
// Member 'orphan_forfeits'
#include "rmf_traffic_msgs/msg/detail/negotiation_forfeit__struct.h"

/// Struct defined in msg/NegotiationState in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationState
{
  rmf_traffic_msgs__msg__NegotiationStatus status;
  rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence tree;
  rmf_traffic_msgs__msg__NegotiationProposal__Sequence orphan_proposals;
  rmf_traffic_msgs__msg__NegotiationRejection__Sequence orphan_rejections;
  rmf_traffic_msgs__msg__NegotiationForfeit__Sequence orphan_forfeits;
} rmf_traffic_msgs__msg__NegotiationState;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationState.
typedef struct rmf_traffic_msgs__msg__NegotiationState__Sequence
{
  rmf_traffic_msgs__msg__NegotiationState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_STATE__STRUCT_H_
