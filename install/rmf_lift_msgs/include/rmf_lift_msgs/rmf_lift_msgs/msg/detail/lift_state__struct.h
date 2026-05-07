// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_lift_msgs:msg/LiftState.idl
// generated code does not contain a copyright notice

#ifndef RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__STRUCT_H_
#define RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'DOOR_CLOSED'.
enum
{
  rmf_lift_msgs__msg__LiftState__DOOR_CLOSED = 0
};

/// Constant 'DOOR_MOVING'.
enum
{
  rmf_lift_msgs__msg__LiftState__DOOR_MOVING = 1
};

/// Constant 'DOOR_OPEN'.
enum
{
  rmf_lift_msgs__msg__LiftState__DOOR_OPEN = 2
};

/// Constant 'MOTION_STOPPED'.
enum
{
  rmf_lift_msgs__msg__LiftState__MOTION_STOPPED = 0
};

/// Constant 'MOTION_UP'.
enum
{
  rmf_lift_msgs__msg__LiftState__MOTION_UP = 1
};

/// Constant 'MOTION_DOWN'.
enum
{
  rmf_lift_msgs__msg__LiftState__MOTION_DOWN = 2
};

/// Constant 'MOTION_UNKNOWN'.
enum
{
  rmf_lift_msgs__msg__LiftState__MOTION_UNKNOWN = 3
};

/// Constant 'MODE_UNKNOWN'.
enum
{
  rmf_lift_msgs__msg__LiftState__MODE_UNKNOWN = 0
};

/// Constant 'MODE_HUMAN'.
enum
{
  rmf_lift_msgs__msg__LiftState__MODE_HUMAN = 1
};

/// Constant 'MODE_AGV'.
enum
{
  rmf_lift_msgs__msg__LiftState__MODE_AGV = 2
};

/// Constant 'MODE_FIRE'.
enum
{
  rmf_lift_msgs__msg__LiftState__MODE_FIRE = 3
};

/// Constant 'MODE_OFFLINE'.
enum
{
  rmf_lift_msgs__msg__LiftState__MODE_OFFLINE = 4
};

/// Constant 'MODE_EMERGENCY'.
enum
{
  rmf_lift_msgs__msg__LiftState__MODE_EMERGENCY = 5
};

// Include directives for member types
// Member 'lift_time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'lift_name'
// Member 'available_floors'
// Member 'current_floor'
// Member 'destination_floor'
// Member 'session_id'
#include "rosidl_runtime_c/string.h"
// Member 'available_modes'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/LiftState in the package rmf_lift_msgs.
/**
  * lift_time records when the information in this message was generated
 */
typedef struct rmf_lift_msgs__msg__LiftState
{
  builtin_interfaces__msg__Time lift_time;
  rosidl_runtime_c__String lift_name;
  rosidl_runtime_c__String__Sequence available_floors;
  rosidl_runtime_c__String current_floor;
  rosidl_runtime_c__String destination_floor;
  uint8_t door_state;
  uint8_t motion_state;
  /// We can only set human or agv mode, but we can read other modes: fire, etc.
  rosidl_runtime_c__uint8__Sequence available_modes;
  uint8_t current_mode;
  /// we can add more "read-only" modes as we come across more of them.
  /// this field records the session_id that has been granted control of the lift
  /// until it sends a request with a request_type of REQUEST_END_SESSION
  rosidl_runtime_c__String session_id;
} rmf_lift_msgs__msg__LiftState;

// Struct for a sequence of rmf_lift_msgs__msg__LiftState.
typedef struct rmf_lift_msgs__msg__LiftState__Sequence
{
  rmf_lift_msgs__msg__LiftState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_lift_msgs__msg__LiftState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_LIFT_MSGS__MSG__DETAIL__LIFT_STATE__STRUCT_H_
