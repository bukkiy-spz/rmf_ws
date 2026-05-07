// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_task_msgs:msg/TaskType.idl
// generated code does not contain a copyright notice

#ifndef RMF_TASK_MSGS__MSG__DETAIL__TASK_TYPE__STRUCT_H_
#define RMF_TASK_MSGS__MSG__DETAIL__TASK_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_STATION'.
enum
{
  rmf_task_msgs__msg__TaskType__TYPE_STATION = 0ul
};

/// Constant 'TYPE_LOOP'.
enum
{
  rmf_task_msgs__msg__TaskType__TYPE_LOOP = 1ul
};

/// Constant 'TYPE_DELIVERY'.
enum
{
  rmf_task_msgs__msg__TaskType__TYPE_DELIVERY = 2ul
};

/// Constant 'TYPE_CHARGE_BATTERY'.
enum
{
  rmf_task_msgs__msg__TaskType__TYPE_CHARGE_BATTERY = 3ul
};

/// Constant 'TYPE_CLEAN'.
enum
{
  rmf_task_msgs__msg__TaskType__TYPE_CLEAN = 4ul
};

/// Constant 'TYPE_PATROL'.
enum
{
  rmf_task_msgs__msg__TaskType__TYPE_PATROL = 5ul
};

/// Struct defined in msg/TaskType in the package rmf_task_msgs.
typedef struct rmf_task_msgs__msg__TaskType
{
  uint32_t type;
} rmf_task_msgs__msg__TaskType;

// Struct for a sequence of rmf_task_msgs__msg__TaskType.
typedef struct rmf_task_msgs__msg__TaskType__Sequence
{
  rmf_task_msgs__msg__TaskType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_task_msgs__msg__TaskType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TASK_MSGS__MSG__DETAIL__TASK_TYPE__STRUCT_H_
