// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_traffic_msgs:msg/ScheduleIdentity.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__STRUCT_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'node_uuid'
#include "rosidl_runtime_c/string.h"
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in msg/ScheduleIdentity in the package rmf_traffic_msgs.
/**
  * The UUID of the new schedule node
  * TODO(MXG): Consider using uuid_msgs here: https://github.com/ros-geographic-info/unique_identifier/blob/master/uuid_msgs/msg/UniqueID.msg
 */
typedef struct rmf_traffic_msgs__msg__ScheduleIdentity
{
  rosidl_runtime_c__String node_uuid;
  /// The time that the new schedule node was started. In the event that multiple
  /// schedule nodes have been started, the one with the newest timestamp will be
  /// considered the active node, and the rest of the nodes will shut down.
  builtin_interfaces__msg__Time timestamp;
} rmf_traffic_msgs__msg__ScheduleIdentity;

// Struct for a sequence of rmf_traffic_msgs__msg__ScheduleIdentity.
typedef struct rmf_traffic_msgs__msg__ScheduleIdentity__Sequence
{
  rmf_traffic_msgs__msg__ScheduleIdentity * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_traffic_msgs__msg__ScheduleIdentity__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__SCHEDULE_IDENTITY__STRUCT_H_
