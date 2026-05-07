// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_obstacle_msgs:msg/Obstacle.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_obstacle_msgs/msg/detail/obstacle__rosidl_typesupport_introspection_c.h"
#include "rmf_obstacle_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_obstacle_msgs/msg/detail/obstacle__functions.h"
#include "rmf_obstacle_msgs/msg/detail/obstacle__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `source`
// Member `level_name`
// Member `classification`
#include "rosidl_runtime_c/string_functions.h"
// Member `bbox`
#include "rmf_obstacle_msgs/msg/bounding_box3_d.h"
// Member `bbox`
#include "rmf_obstacle_msgs/msg/detail/bounding_box3_d__rosidl_typesupport_introspection_c.h"
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `lifetime`
#include "builtin_interfaces/msg/duration.h"
// Member `lifetime`
#include "builtin_interfaces/msg/detail/duration__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_obstacle_msgs__msg__Obstacle__init(message_memory);
}

void rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_fini_function(void * message_memory)
{
  rmf_obstacle_msgs__msg__Obstacle__fini(message_memory);
}

size_t rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int8__Sequence * member =
    (const rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__data(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__data(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

bool rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int8__Sequence * member =
    (rosidl_runtime_c__int8__Sequence *)(untyped_member);
  rosidl_runtime_c__int8__Sequence__fini(member);
  return rosidl_runtime_c__int8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[10] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, source),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "level_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, level_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "classification",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, classification),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bbox",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, bbox),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data_resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, data_resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, data),  // bytes offset in struct
    NULL,  // default value
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__size_function__Obstacle__data,  // size() function pointer
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_const_function__Obstacle__data,  // get_const(index) function pointer
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__get_function__Obstacle__data,  // get(index) function pointer
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__fetch_function__Obstacle__data,  // fetch(index, &value) function pointer
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__assign_function__Obstacle__data,  // assign(index, value) function pointer
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__resize_function__Obstacle__data  // resize(index) function pointer
  },
  {
    "lifetime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, lifetime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "action",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_obstacle_msgs__msg__Obstacle, action),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_members = {
  "rmf_obstacle_msgs__msg",  // message namespace
  "Obstacle",  // message name
  10,  // number of fields
  sizeof(rmf_obstacle_msgs__msg__Obstacle),
  rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array,  // message members
  rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle = {
  0,
  &rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_obstacle_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_obstacle_msgs, msg, Obstacle)() {
  rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_obstacle_msgs, msg, BoundingBox3D)();
  rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_member_array[8].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Duration)();
  if (!rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle.typesupport_identifier) {
    rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_obstacle_msgs__msg__Obstacle__rosidl_typesupport_introspection_c__Obstacle_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
