// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_obstacle_msgs:msg/Obstacles.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_obstacle_msgs/msg/detail/obstacles__rosidl_typesupport_introspection_c.h"
#include "rmf_obstacle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_obstacle_msgs/msg/detail/obstacles__functions.h"
#include "rmf_obstacle_msgs/msg/detail/obstacles__struct.h"


// Include directives for member types
// Member `obstacles`
#include "rmf_obstacle_msgs/msg/obstacle.h"
// Member `obstacles`
#include "rmf_obstacle_msgs/msg/detail/obstacle__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_obstacle_msgs__msg__Obstacles__init(message_memory);
}

void rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_fini_function(void * message_memory)
{
  rmf_obstacle_msgs__msg__Obstacles__fini(message_memory);
}

size_t rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__size_function__Obstacles__obstacles(
  const void * untyped_member)
{
  const rmf_obstacle_msgs__msg__Obstacle__Sequence * member =
    (const rmf_obstacle_msgs__msg__Obstacle__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_const_function__Obstacles__obstacles(
  const void * untyped_member, size_t index)
{
  const rmf_obstacle_msgs__msg__Obstacle__Sequence * member =
    (const rmf_obstacle_msgs__msg__Obstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_function__Obstacles__obstacles(
  void * untyped_member, size_t index)
{
  rmf_obstacle_msgs__msg__Obstacle__Sequence * member =
    (rmf_obstacle_msgs__msg__Obstacle__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__fetch_function__Obstacles__obstacles(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_obstacle_msgs__msg__Obstacle * item =
    ((const rmf_obstacle_msgs__msg__Obstacle *)
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_const_function__Obstacles__obstacles(untyped_member, index));
  rmf_obstacle_msgs__msg__Obstacle * value =
    (rmf_obstacle_msgs__msg__Obstacle *)(untyped_value);
  *value = *item;
}

void rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__assign_function__Obstacles__obstacles(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_obstacle_msgs__msg__Obstacle * item =
    ((rmf_obstacle_msgs__msg__Obstacle *)
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_function__Obstacles__obstacles(untyped_member, index));
  const rmf_obstacle_msgs__msg__Obstacle * value =
    (const rmf_obstacle_msgs__msg__Obstacle *)(untyped_value);
  *item = *value;
}

bool rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__resize_function__Obstacles__obstacles(
  void * untyped_member, size_t size)
{
  rmf_obstacle_msgs__msg__Obstacle__Sequence * member =
    (rmf_obstacle_msgs__msg__Obstacle__Sequence *)(untyped_member);
  rmf_obstacle_msgs__msg__Obstacle__Sequence__fini(member);
  return rmf_obstacle_msgs__msg__Obstacle__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array[1] = {
  {
    "obstacles",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacles, obstacles),  // bytes offset in struct
    NULL,  // default value
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__size_function__Obstacles__obstacles,  // size() function pointer
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_const_function__Obstacles__obstacles,  // get_const(index) function pointer
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__get_function__Obstacles__obstacles,  // get(index) function pointer
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__fetch_function__Obstacles__obstacles,  // fetch(index, &value) function pointer
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__assign_function__Obstacles__obstacles,  // assign(index, value) function pointer
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__resize_function__Obstacles__obstacles  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_members = {
  "rmf_obstacle_msgs__msg",  // message namespace
  "Obstacles",  // message name
  1,  // number of fields
  sizeof(rmf_obstacle_msgs__msg__Obstacles),
  rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array,  // message members
  rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle = {
  0,
  &rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_obstacle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_obstacle_msgs, msg, Obstacles)() {
  rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_obstacle_msgs, msg, Obstacle)();
  if (!rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle.typesupport_identifier) {
    rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_obstacle_msgs__msg__Obstacles__rosidl_typesupport_introspection_c__Obstacles_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
