// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/BidResponse.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'task_id'
// Member 'errors'
#include "rosidl_runtime_c/string.h"
// Member 'proposal'
#include "rmf_task_msgs/msg/detail/bid_proposal__struct.h"

/// Struct defined in msg/BidResponse in the package rmf_task_msgs.
/**
  * ID of the task that is being bid on
 */
typedef struct rmf_task_msgs__msg__BidResponse
{
  rosidl_runtime_c__String task_id;
  /// True if this response contains a proposal
  bool has_proposal;
  /// The proposal of this response, if has_proposal is true
  rmf_task_msgs__msg__BidProposal proposal;
  /// Any errors related to this bid
  rosidl_runtime_c__String__Sequence errors;
} rmf_task_msgs__msg__BidResponse;

// Struct for a sequence of rmf_task_msgs__msg__BidResponse.
typedef struct rmf_task_msgs__msg__BidResponse__Sequence
{
  rmf_task_msgs__msg__BidResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__BidResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__BID_RESPONSE__STRUCT_H_
