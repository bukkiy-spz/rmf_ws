// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/RobotMode.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_IDLE'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_IDLE = 0ul
};

/// Constant 'MODE_CHARGING'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_CHARGING = 1ul
};

/// Constant 'MODE_MOVING'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_MOVING = 2ul
};

/// Constant 'MODE_PAUSED'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_PAUSED = 3ul
};

/// Constant 'MODE_WAITING'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_WAITING = 4ul
};

/// Constant 'MODE_EMERGENCY'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_EMERGENCY = 5ul
};

/// Constant 'MODE_GOING_HOME'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_GOING_HOME = 6ul
};

/// Constant 'MODE_DOCKING'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_DOCKING = 7ul
};

/// Constant 'MODE_ADAPTER_ERROR'.
/**
  * Use this when a command received from the fleet adapter
  * has a problem and needs to be recomputed.
 */
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_ADAPTER_ERROR = 8ul
};

/// Constant 'MODE_CLEANING'.
enum
{
  rmf_fleet_msgs__msg__RobotMode__MODE_CLEANING = 9ul
};

/// Struct defined in msg/RobotMode in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__RobotMode
{
  uint32_t mode;
  uint64_t mode_request_id;
} rmf_fleet_msgs__msg__RobotMode;

// Struct for a sequence of rmf_fleet_msgs__msg__RobotMode.
typedef struct rmf_fleet_msgs__msg__RobotMode__Sequence
{
  rmf_fleet_msgs__msg__RobotMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__RobotMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__ROBOT_MODE__STRUCT_H_
