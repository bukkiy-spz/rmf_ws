// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:msg/Lift.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/msg/detail/lift__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/msg/detail/lift__functions.h"
#include "rmf_building_map_msgs/msg/detail/lift__struct.h"


// Include directives for member types
// Member `name`
// Member `levels`
#include "rosidl_runtime_c/string_functions.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/door.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/detail/door__rosidl_typesupport_introspection_c.h"
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/graph.h"
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/detail/graph__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__msg__Lift__init(message_memory);
}

void rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_fini_function(void * message_memory)
{
  rmf_building_map_msgs__msg__Lift__fini(message_memory);
}

size_t rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__size_function__Lift__levels(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_const_function__Lift__levels(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_function__Lift__levels(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__fetch_function__Lift__levels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_const_function__Lift__levels(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__assign_function__Lift__levels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_function__Lift__levels(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__resize_function__Lift__levels(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__size_function__Lift__doors(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Door__Sequence * member =
    (const rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_const_function__Lift__doors(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Door__Sequence * member =
    (const rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_function__Lift__doors(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Door__Sequence * member =
    (rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__fetch_function__Lift__doors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__Door * item =
    ((const rmf_building_map_msgs__msg__Door *)
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_const_function__Lift__doors(untyped_member, index));
  rmf_building_map_msgs__msg__Door * value =
    (rmf_building_map_msgs__msg__Door *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__assign_function__Lift__doors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__Door * item =
    ((rmf_building_map_msgs__msg__Door *)
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_function__Lift__doors(untyped_member, index));
  const rmf_building_map_msgs__msg__Door * value =
    (const rmf_building_map_msgs__msg__Door *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__resize_function__Lift__doors(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Door__Sequence * member =
    (rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Door__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Door__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_member_array[9] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "levels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, levels),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__size_function__Lift__levels,  // size() function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_const_function__Lift__levels,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_function__Lift__levels,  // get(index) function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__fetch_function__Lift__levels,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__assign_function__Lift__levels,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__resize_function__Lift__levels  // resize(index) function pointer
  },
  {
    "doors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, doors),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__size_function__Lift__doors,  // size() function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_const_function__Lift__doors,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__get_function__Lift__doors,  // get(index) function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__fetch_function__Lift__doors,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__assign_function__Lift__doors,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__resize_function__Lift__doors  // resize(index) function pointer
  },
  {
    "wall_graph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, wall_graph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, ref_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, ref_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ref_yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, ref_yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "depth",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Lift, depth),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_members = {
  "rmf_building_map_msgs__msg",  // message namespace
  "Lift",  // message name
  9,  // number of fields
  sizeof(rmf_building_map_msgs__msg__Lift),
  rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_member_array,  // message members
  rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_type_support_handle = {
  0,
  &rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Lift)() {
  rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Door)();
  rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Graph)();
  if (!rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_type_support_handle.typesupport_identifier) {
    rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_building_map_msgs__msg__Lift__rosidl_typesupport_introspection_c__Lift_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
