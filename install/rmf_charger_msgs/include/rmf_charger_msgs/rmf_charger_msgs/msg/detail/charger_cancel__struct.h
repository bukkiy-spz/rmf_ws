// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_charger_msgs:msg/ChargerCancel.idl
// generated code does not contain a copyright notice

#ifndef RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__STRUCT_H_
#define RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'charger_name'
// Member 'request_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ChargerCancel in the package rmf_charger_msgs.
typedef struct rmf_charger_msgs__msg__ChargerCancel
{
  /// the charger that should process this message
  rosidl_runtime_c__String charger_name;
  /// A unique ID for each request. It is advised that you prefix this
  /// with the sender's node name. This is used for error tracking
  /// later on
  rosidl_runtime_c__String request_id;
} rmf_charger_msgs__msg__ChargerCancel;

// Struct for a sequence of rmf_charger_msgs__msg__ChargerCancel.
typedef struct rmf_charger_msgs__msg__ChargerCancel__Sequence
{
  rmf_charger_msgs__msg__ChargerCancel * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_charger_msgs__msg__ChargerCancel__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_CHARGER_MSGS__MSG__DETAIL__CHARGER_CANCEL__STRUCT_H_
