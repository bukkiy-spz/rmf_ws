// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_door_msgs:msg/DoorMode.idl
// generated code does not contain a copyright notice

#ifndef RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__STRUCT_H_
#define RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_CLOSED'.
/**
  * "value" must be one of the following enumerations:
 */
enum
{
  rmf_door_msgs__msg__DoorMode__MODE_CLOSED = 0ul
};

/// Constant 'MODE_MOVING'.
enum
{
  rmf_door_msgs__msg__DoorMode__MODE_MOVING = 1ul
};

/// Constant 'MODE_OPEN'.
enum
{
  rmf_door_msgs__msg__DoorMode__MODE_OPEN = 2ul
};

/// Constant 'MODE_OFFLINE'.
enum
{
  rmf_door_msgs__msg__DoorMode__MODE_OFFLINE = 3ul
};

/// Constant 'MODE_UNKNOWN'.
enum
{
  rmf_door_msgs__msg__DoorMode__MODE_UNKNOWN = 4ul
};

/// Struct defined in msg/DoorMode in the package rmf_door_msgs.
/**
  * The DoorMode message captures the "mode" of an automatic door controller.
  * Most door controllers default to running in "closed" mode, and transition
  * through some sort of "moving" mode until reaching the "open" mode.
 */
typedef struct rmf_door_msgs__msg__DoorMode
{
  uint32_t value;
} rmf_door_msgs__msg__DoorMode;

// Struct for a sequence of rmf_door_msgs__msg__DoorMode.
typedef struct rmf_door_msgs__msg__DoorMode__Sequence
{
  rmf_door_msgs__msg__DoorMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_door_msgs__msg__DoorMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_DOOR_MSGS__MSG__DETAIL__DOOR_MODE__STRUCT_H_
