// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_ingestor_msgs:msg/IngestorResult.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__STRUCT_H_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ACKNOWLEDGED'.
enum
{
  rmf_ingestor_msgs__msg__IngestorResult__ACKNOWLEDGED = 0
};

/// Constant 'SUCCESS'.
enum
{
  rmf_ingestor_msgs__msg__IngestorResult__SUCCESS = 1
};

/// Constant 'FAILED'.
enum
{
  rmf_ingestor_msgs__msg__IngestorResult__FAILED = 2
};

// Include directives for member types
// Member 'time'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'request_guid'
// Member 'source_guid'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IngestorResult in the package rmf_ingestor_msgs.
typedef struct rmf_ingestor_msgs__msg__IngestorResult
{
  builtin_interfaces__msg__Time time;
  /// A unique ID for the request which this result is for
  rosidl_runtime_c__String request_guid;
  /// The unique ID of the workcell that this result was sent from
  rosidl_runtime_c__String source_guid;
  /// Different basic result statuses
  uint8_t status;
} rmf_ingestor_msgs__msg__IngestorResult;

// Struct for a sequence of rmf_ingestor_msgs__msg__IngestorResult.
typedef struct rmf_ingestor_msgs__msg__IngestorResult__Sequence
{
  rmf_ingestor_msgs__msg__IngestorResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_ingestor_msgs__msg__IngestorResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_RESULT__STRUCT_H_
