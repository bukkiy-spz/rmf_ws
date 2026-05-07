// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/BlockadeCancel.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/BlockadeCancel in the package rmf_traffic_msgs.
typedef struct rmf_traffic_msgs__msg__BlockadeCancel
{
  /// The participant whose reservation is being canceled
  uint64_t participant;
  /// True if all reservations for this participants should be considered cancelled
  bool all_reservations;
  /// If all_reservations is false, then this is the last reservation that should
  /// be considered cancelled. If all_reservations is true, then this field is
  /// meaningless
  uint64_t reservation;
} rmf_traffic_msgs__msg__BlockadeCancel;

// Struct for a sequence of rmf_traffic_msgs__msg__BlockadeCancel.
typedef struct rmf_traffic_msgs__msg__BlockadeCancel__Sequence
{
  rmf_traffic_msgs__msg__BlockadeCancel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__BlockadeCancel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__BLOCKADE_CANCEL__STRUCT_H_
