// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_building_map_msgs:msg/Param.idl
// generated code does not contain a copyright notice

#ifndef RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__STRUCT_H_
#define RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'TYPE_UNDEFINED'.
enum
{
  rmf_building_map_msgs__msg__Param__TYPE_UNDEFINED = 0ul
};

/// Constant 'TYPE_STRING'.
enum
{
  rmf_building_map_msgs__msg__Param__TYPE_STRING = 1ul
};

/// Constant 'TYPE_INT'.
enum
{
  rmf_building_map_msgs__msg__Param__TYPE_INT = 2ul
};

/// Constant 'TYPE_DOUBLE'.
enum
{
  rmf_building_map_msgs__msg__Param__TYPE_DOUBLE = 3ul
};

/// Constant 'TYPE_BOOL'.
enum
{
  rmf_building_map_msgs__msg__Param__TYPE_BOOL = 4ul
};

// Include directives for member types
// Member 'name'
// Member 'value_string'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Param in the package rmf_building_map_msgs.
typedef struct rmf_building_map_msgs__msg__Param
{
  rosidl_runtime_c__String name;
  uint32_t type;
  int32_t value_int;
  float value_float;
  rosidl_runtime_c__String value_string;
  bool value_bool;
} rmf_building_map_msgs__msg__Param;

// Struct for a sequence of rmf_building_map_msgs__msg__Param.
typedef struct rmf_building_map_msgs__msg__Param__Sequence
{
  rmf_building_map_msgs__msg__Param * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_building_map_msgs__msg__Param__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_BUILDING_MAP_MSGS__MSG__DETAIL__PARAM__STRUCT_H_
