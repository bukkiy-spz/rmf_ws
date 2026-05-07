// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/Lift.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/lift__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `levels`
#include "rosidl_runtime_c/string_functions.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/detail/door__functions.h"
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"

bool
rmf_building_map_msgs__msg__Lift__init(rmf_building_map_msgs__msg__Lift * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__Lift__fini(msg);
    return false;
  }
  // levels
  if (!rosidl_runtime_c__String__Sequence__init(&msg->levels, 0)) {
    rmf_building_map_msgs__msg__Lift__fini(msg);
    return false;
  }
  // doors
  if (!rmf_building_map_msgs__msg__Door__Sequence__init(&msg->doors, 0)) {
    rmf_building_map_msgs__msg__Lift__fini(msg);
    return false;
  }
  // wall_graph
  if (!rmf_building_map_msgs__msg__Graph__init(&msg->wall_graph)) {
    rmf_building_map_msgs__msg__Lift__fini(msg);
    return false;
  }
  // ref_x
  // ref_y
  // ref_yaw
  // width
  // depth
  return true;
}

void
rmf_building_map_msgs__msg__Lift__fini(rmf_building_map_msgs__msg__Lift * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // levels
  rosidl_runtime_c__String__Sequence__fini(&msg->levels);
  // doors
  rmf_building_map_msgs__msg__Door__Sequence__fini(&msg->doors);
  // wall_graph
  rmf_building_map_msgs__msg__Graph__fini(&msg->wall_graph);
  // ref_x
  // ref_y
  // ref_yaw
  // width
  // depth
}

bool
rmf_building_map_msgs__msg__Lift__are_equal(const rmf_building_map_msgs__msg__Lift * lhs, const rmf_building_map_msgs__msg__Lift * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // levels
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->levels), &(rhs->levels)))
  {
    return false;
  }
  // doors
  if (!rmf_building_map_msgs__msg__Door__Sequence__are_equal(
      &(lhs->doors), &(rhs->doors)))
  {
    return false;
  }
  // wall_graph
  if (!rmf_building_map_msgs__msg__Graph__are_equal(
      &(lhs->wall_graph), &(rhs->wall_graph)))
  {
    return false;
  }
  // ref_x
  if (lhs->ref_x != rhs->ref_x) {
    return false;
  }
  // ref_y
  if (lhs->ref_y != rhs->ref_y) {
    return false;
  }
  // ref_yaw
  if (lhs->ref_yaw != rhs->ref_yaw) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Lift__copy(
  const rmf_building_map_msgs__msg__Lift * input,
  rmf_building_map_msgs__msg__Lift * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // levels
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->levels), &(output->levels)))
  {
    return false;
  }
  // doors
  if (!rmf_building_map_msgs__msg__Door__Sequence__copy(
      &(input->doors), &(output->doors)))
  {
    return false;
  }
  // wall_graph
  if (!rmf_building_map_msgs__msg__Graph__copy(
      &(input->wall_graph), &(output->wall_graph)))
  {
    return false;
  }
  // ref_x
  output->ref_x = input->ref_x;
  // ref_y
  output->ref_y = input->ref_y;
  // ref_yaw
  output->ref_yaw = input->ref_yaw;
  // width
  output->width = input->width;
  // depth
  output->depth = input->depth;
  return true;
}

rmf_building_map_msgs__msg__Lift *
rmf_building_map_msgs__msg__Lift__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Lift * msg = (rmf_building_map_msgs__msg__Lift *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Lift), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__Lift));
  bool success = rmf_building_map_msgs__msg__Lift__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__Lift__destroy(rmf_building_map_msgs__msg__Lift * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__msg__Lift__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__msg__Lift__Sequence__init(rmf_building_map_msgs__msg__Lift__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Lift * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__msg__Lift *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__msg__Lift), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__Lift__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__Lift__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
rmf_building_map_msgs__msg__Lift__Sequence__fini(rmf_building_map_msgs__msg__Lift__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      rmf_building_map_msgs__msg__Lift__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

rmf_building_map_msgs__msg__Lift__Sequence *
rmf_building_map_msgs__msg__Lift__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Lift__Sequence * array = (rmf_building_map_msgs__msg__Lift__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Lift__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__Lift__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__Lift__Sequence__destroy(rmf_building_map_msgs__msg__Lift__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__msg__Lift__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__msg__Lift__Sequence__are_equal(const rmf_building_map_msgs__msg__Lift__Sequence * lhs, const rmf_building_map_msgs__msg__Lift__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__msg__Lift__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Lift__Sequence__copy(
  const rmf_building_map_msgs__msg__Lift__Sequence * input,
  rmf_building_map_msgs__msg__Lift__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__msg__Lift);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__msg__Lift * data =
      (rmf_building_map_msgs__msg__Lift *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__msg__Lift__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__msg__Lift__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__msg__Lift__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
