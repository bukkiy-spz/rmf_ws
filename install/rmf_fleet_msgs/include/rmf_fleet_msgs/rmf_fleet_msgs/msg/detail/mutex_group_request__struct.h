// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/MutexGroupRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_RELEASE'.
/**
  * Request to release the mutex group from this claimer
 */
enum
{
  rmf_fleet_msgs__msg__MutexGroupRequest__MODE_RELEASE = 0ul
};

/// Constant 'MODE_LOCK'.
/**
  * Request to lock the mutex group for this claimer
 */
enum
{
  rmf_fleet_msgs__msg__MutexGroupRequest__MODE_LOCK = 1ul
};

// Include directives for member types
// Member 'group'
#include "rosidl_runtime_c/string.h"
// Member 'claim_time'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/MutexGroupRequest in the package rmf_fleet_msgs.
/**
  * This message is used to attempt to claim a mutex group. It should be sent
  * periodically for the entire duration that the claimer needs the mutex because
  * mutex groups have a limited-time leasing period that will timeout if a request
  * heartbeat is not received in some amount of time.
 */
typedef struct rmf_fleet_msgs__msg__MutexGroupRequest
{
  /// Name of the mutex group that is being claimed
  rosidl_runtime_c__String group;
  /// Name of the agent that is trying to claim the mutex group.
  uint64_t claimant;
  /// Time stamp of when the claim request began. The same time stamp should be used
  /// for all subsequent heartbeat messages related to this claim. If the claim time
  /// changes then this claim will be treated a new claim and may be deprioritized.
  /// Earlier claims have priority over later claims.
  builtin_interfaces__msg__Time claim_time;
  /// What kind of request is this?
  uint32_t mode;
} rmf_fleet_msgs__msg__MutexGroupRequest;

// Struct for a sequence of rmf_fleet_msgs__msg__MutexGroupRequest.
typedef struct rmf_fleet_msgs__msg__MutexGroupRequest__Sequence
{
  rmf_fleet_msgs__msg__MutexGroupRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__MutexGroupRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__MUTEX_GROUP_REQUEST__STRUCT_H_
