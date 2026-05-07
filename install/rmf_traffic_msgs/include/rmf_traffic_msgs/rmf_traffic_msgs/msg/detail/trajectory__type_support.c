// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_traffic_msgs:msg/Trajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_traffic_msgs/msg/detail/trajectory__rosidl_typesupport_introspection_c.h"
#include "rmf_traffic_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_traffic_msgs/msg/detail/trajectory__functions.h"
#include "rmf_traffic_msgs/msg/detail/trajectory__struct.h"


// Include directives for member types
// Member `waypoints`
#include "rmf_traffic_msgs/msg/trajectory_waypoint.h"
// Member `waypoints`
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_traffic_msgs__msg__Trajectory__init(message_memory);
}

void rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function(void * message_memory)
{
  rmf_traffic_msgs__msg__Trajectory__fini(message_memory);
}

size_t rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__waypoints(
  const void * untyped_member)
{
  const rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * member =
    (const rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__waypoints(
  const void * untyped_member, size_t index)
{
  const rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * member =
    (const rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__waypoints(
  void * untyped_member, size_t index)
{
  rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * member =
    (rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_traffic_msgs__msg__TrajectoryWaypoint * item =
    ((const rmf_traffic_msgs__msg__TrajectoryWaypoint *)
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__waypoints(untyped_member, index));
  rmf_traffic_msgs__msg__TrajectoryWaypoint * value =
    (rmf_traffic_msgs__msg__TrajectoryWaypoint *)(untyped_value);
  *value = *item;
}

void rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_traffic_msgs__msg__TrajectoryWaypoint * item =
    ((rmf_traffic_msgs__msg__TrajectoryWaypoint *)
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__waypoints(untyped_member, index));
  const rmf_traffic_msgs__msg__TrajectoryWaypoint * value =
    (const rmf_traffic_msgs__msg__TrajectoryWaypoint *)(untyped_value);
  *item = *value;
}

bool rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__waypoints(
  void * untyped_member, size_t size)
{
  rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * member =
    (rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence *)(untyped_member);
  rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__fini(member);
  return rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[1] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_traffic_msgs__msg__Trajectory, waypoints),  // bytes offset in struct
    NULL,  // default value
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__size_function__Trajectory__waypoints,  // size() function pointer
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_const_function__Trajectory__waypoints,  // get_const(index) function pointer
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__get_function__Trajectory__waypoints,  // get(index) function pointer
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__fetch_function__Trajectory__waypoints,  // fetch(index, &value) function pointer
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__assign_function__Trajectory__waypoints,  // assign(index, value) function pointer
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__resize_function__Trajectory__waypoints  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members = {
  "rmf_traffic_msgs__msg",  // message namespace
  "Trajectory",  // message name
  1,  // number of fields
  sizeof(rmf_traffic_msgs__msg__Trajectory),
  rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array,  // message members
  rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle = {
  0,
  &rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_traffic_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, Trajectory)() {
  rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_traffic_msgs, msg, TrajectoryWaypoint)();
  if (!rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier) {
    rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_traffic_msgs__msg__Trajectory__rosidl_typesupport_introspection_c__Trajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
