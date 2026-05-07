// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rmf_building_map_msgs/msg/detail/level__rosidl_typesupport_introspection_c.h"
#include "rmf_building_map_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rmf_building_map_msgs/msg/detail/level__functions.h"
#include "rmf_building_map_msgs/msg/detail/level__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `images`
#include "rmf_building_map_msgs/msg/affine_image.h"
// Member `images`
#include "rmf_building_map_msgs/msg/detail/affine_image__rosidl_typesupport_introspection_c.h"
// Member `places`
#include "rmf_building_map_msgs/msg/place.h"
// Member `places`
#include "rmf_building_map_msgs/msg/detail/place__rosidl_typesupport_introspection_c.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/door.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/detail/door__rosidl_typesupport_introspection_c.h"
// Member `nav_graphs`
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/graph.h"
// Member `nav_graphs`
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/detail/graph__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rmf_building_map_msgs__msg__Level__init(message_memory);
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_fini_function(void * message_memory)
{
  rmf_building_map_msgs__msg__Level__fini(message_memory);
}

size_t rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__size_function__Level__images(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__AffineImage__Sequence * member =
    (const rmf_building_map_msgs__msg__AffineImage__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__images(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__AffineImage__Sequence * member =
    (const rmf_building_map_msgs__msg__AffineImage__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__images(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__AffineImage__Sequence * member =
    (rmf_building_map_msgs__msg__AffineImage__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__fetch_function__Level__images(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__AffineImage * item =
    ((const rmf_building_map_msgs__msg__AffineImage *)
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__images(untyped_member, index));
  rmf_building_map_msgs__msg__AffineImage * value =
    (rmf_building_map_msgs__msg__AffineImage *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__assign_function__Level__images(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__AffineImage * item =
    ((rmf_building_map_msgs__msg__AffineImage *)
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__images(untyped_member, index));
  const rmf_building_map_msgs__msg__AffineImage * value =
    (const rmf_building_map_msgs__msg__AffineImage *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__resize_function__Level__images(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__AffineImage__Sequence * member =
    (rmf_building_map_msgs__msg__AffineImage__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__AffineImage__Sequence__fini(member);
  return rmf_building_map_msgs__msg__AffineImage__Sequence__init(member, size);
}

size_t rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__size_function__Level__places(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Place__Sequence * member =
    (const rmf_building_map_msgs__msg__Place__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__places(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Place__Sequence * member =
    (const rmf_building_map_msgs__msg__Place__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__places(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Place__Sequence * member =
    (rmf_building_map_msgs__msg__Place__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__fetch_function__Level__places(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__Place * item =
    ((const rmf_building_map_msgs__msg__Place *)
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__places(untyped_member, index));
  rmf_building_map_msgs__msg__Place * value =
    (rmf_building_map_msgs__msg__Place *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__assign_function__Level__places(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__Place * item =
    ((rmf_building_map_msgs__msg__Place *)
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__places(untyped_member, index));
  const rmf_building_map_msgs__msg__Place * value =
    (const rmf_building_map_msgs__msg__Place *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__resize_function__Level__places(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Place__Sequence * member =
    (rmf_building_map_msgs__msg__Place__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Place__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Place__Sequence__init(member, size);
}

size_t rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__size_function__Level__doors(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Door__Sequence * member =
    (const rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__doors(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Door__Sequence * member =
    (const rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__doors(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Door__Sequence * member =
    (rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__fetch_function__Level__doors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__Door * item =
    ((const rmf_building_map_msgs__msg__Door *)
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__doors(untyped_member, index));
  rmf_building_map_msgs__msg__Door * value =
    (rmf_building_map_msgs__msg__Door *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__assign_function__Level__doors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__Door * item =
    ((rmf_building_map_msgs__msg__Door *)
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__doors(untyped_member, index));
  const rmf_building_map_msgs__msg__Door * value =
    (const rmf_building_map_msgs__msg__Door *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__resize_function__Level__doors(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Door__Sequence * member =
    (rmf_building_map_msgs__msg__Door__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Door__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Door__Sequence__init(member, size);
}

size_t rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__size_function__Level__nav_graphs(
  const void * untyped_member)
{
  const rmf_building_map_msgs__msg__Graph__Sequence * member =
    (const rmf_building_map_msgs__msg__Graph__Sequence *)(untyped_member);
  return member->size;
}

const void * rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__nav_graphs(
  const void * untyped_member, size_t index)
{
  const rmf_building_map_msgs__msg__Graph__Sequence * member =
    (const rmf_building_map_msgs__msg__Graph__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__nav_graphs(
  void * untyped_member, size_t index)
{
  rmf_building_map_msgs__msg__Graph__Sequence * member =
    (rmf_building_map_msgs__msg__Graph__Sequence *)(untyped_member);
  return &member->data[index];
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__fetch_function__Level__nav_graphs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rmf_building_map_msgs__msg__Graph * item =
    ((const rmf_building_map_msgs__msg__Graph *)
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__nav_graphs(untyped_member, index));
  rmf_building_map_msgs__msg__Graph * value =
    (rmf_building_map_msgs__msg__Graph *)(untyped_value);
  *value = *item;
}

void rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__assign_function__Level__nav_graphs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rmf_building_map_msgs__msg__Graph * item =
    ((rmf_building_map_msgs__msg__Graph *)
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__nav_graphs(untyped_member, index));
  const rmf_building_map_msgs__msg__Graph * value =
    (const rmf_building_map_msgs__msg__Graph *)(untyped_value);
  *item = *value;
}

bool rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__resize_function__Level__nav_graphs(
  void * untyped_member, size_t size)
{
  rmf_building_map_msgs__msg__Graph__Sequence * member =
    (rmf_building_map_msgs__msg__Graph__Sequence *)(untyped_member);
  rmf_building_map_msgs__msg__Graph__Sequence__fini(member);
  return rmf_building_map_msgs__msg__Graph__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_member_array[7] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "elevation",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, elevation),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "images",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, images),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__size_function__Level__images,  // size() function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__images,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__images,  // get(index) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__fetch_function__Level__images,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__assign_function__Level__images,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__resize_function__Level__images  // resize(index) function pointer
  },
  {
    "places",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, places),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__size_function__Level__places,  // size() function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__places,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__places,  // get(index) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__fetch_function__Level__places,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__assign_function__Level__places,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__resize_function__Level__places  // resize(index) function pointer
  },
  {
    "doors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, doors),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__size_function__Level__doors,  // size() function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__doors,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__doors,  // get(index) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__fetch_function__Level__doors,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__assign_function__Level__doors,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__resize_function__Level__doors  // resize(index) function pointer
  },
  {
    "nav_graphs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, nav_graphs),  // bytes offset in struct
    NULL,  // default value
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__size_function__Level__nav_graphs,  // size() function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_const_function__Level__nav_graphs,  // get_const(index) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__get_function__Level__nav_graphs,  // get(index) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__fetch_function__Level__nav_graphs,  // fetch(index, &value) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__assign_function__Level__nav_graphs,  // assign(index, value) function pointer
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__resize_function__Level__nav_graphs  // resize(index) function pointer
  },
  {
    "wall_graph",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rmf_building_map_msgs__msg__Level, wall_graph),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_members = {
  "rmf_building_map_msgs__msg",  // message namespace
  "Level",  // message name
  7,  // number of fields
  sizeof(rmf_building_map_msgs__msg__Level),
  rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_member_array,  // message members
  rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_init_function,  // function to initialize message memory (memory has to be allocated)
  rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_type_support_handle = {
  0,
  &rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rmf_building_map_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Level)() {
  rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, AffineImage)();
  rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Place)();
  rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Door)();
  rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Graph)();
  rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rmf_building_map_msgs, msg, Graph)();
  if (!rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_type_support_handle.typesupport_identifier) {
    rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rmf_building_map_msgs__msg__Level__rosidl_typesupport_introspection_c__Level_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
