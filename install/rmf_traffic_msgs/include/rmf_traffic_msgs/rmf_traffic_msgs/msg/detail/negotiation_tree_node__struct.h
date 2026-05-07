// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/NegotiationTreeNode.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'key'
#include "rmf_traffic_msgs/msg/detail/negotiation_key__struct.h"
// Member 'itinerary'
#include "rmf_traffic_msgs/msg/detail/route__struct.h"

/// Struct defined in msg/NegotiationTreeNode in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__NegotiationTreeNode
{
  int64_t parent;
  rmf_traffic_msgs__msg__NegotiationKey key;
  bool rejected;
  rmf_traffic_msgs__msg__Route__Sequence itinerary;
} rmf_traffic_msgs__msg__NegotiationTreeNode;

// Struct for a sequence of rmf_traffic_msgs__msg__NegotiationTreeNode.
typedef struct rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence
{
  rmf_traffic_msgs__msg__NegotiationTreeNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__NEGOTIATION_TREE_NODE__STRUCT_H_
