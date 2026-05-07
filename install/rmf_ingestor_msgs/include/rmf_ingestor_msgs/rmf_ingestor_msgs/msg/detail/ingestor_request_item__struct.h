// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_ingestor_msgs:msg/IngestorRequestItem.idl
// generated code does not contain a copyright notice

#ifndef RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__STRUCT_H_
#define RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type_guid'
// Member 'compartment_name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/IngestorRequestItem in the package rmf_ingestor_msgs.
typedef struct rmf_ingestor_msgs__msg__IngestorRequestItem
{
  rosidl_runtime_c__String type_guid;
  int32_t quantity;
  rosidl_runtime_c__String compartment_name;
} rmf_ingestor_msgs__msg__IngestorRequestItem;

// Struct for a sequence of rmf_ingestor_msgs__msg__IngestorRequestItem.
typedef struct rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence
{
  rmf_ingestor_msgs__msg__IngestorRequestItem * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_INGESTOR_MSGS__MSG__DETAIL__INGESTOR_REQUEST_ITEM__STRUCT_H_
