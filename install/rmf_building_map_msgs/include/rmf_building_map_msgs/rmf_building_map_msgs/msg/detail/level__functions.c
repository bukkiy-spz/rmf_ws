// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/Level.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/level__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `images`
#include "rmf_building_map_msgs/msg/detail/affine_image__functions.h"
// Member `places`
#include "rmf_building_map_msgs/msg/detail/place__functions.h"
// Member `doors`
#include "rmf_building_map_msgs/msg/detail/door__functions.h"
// Member `nav_graphs`
// Member `wall_graph`
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"

bool
rmf_building_map_msgs__msg__Level__init(rmf_building_map_msgs__msg__Level * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // elevation
  // images
  if (!rmf_building_map_msgs__msg__AffineImage__Sequence__init(&msg->images, 0)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // places
  if (!rmf_building_map_msgs__msg__Place__Sequence__init(&msg->places, 0)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // doors
  if (!rmf_building_map_msgs__msg__Door__Sequence__init(&msg->doors, 0)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // nav_graphs
  if (!rmf_building_map_msgs__msg__Graph__Sequence__init(&msg->nav_graphs, 0)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  // wall_graph
  if (!rmf_building_map_msgs__msg__Graph__init(&msg->wall_graph)) {
    rmf_building_map_msgs__msg__Level__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__msg__Level__fini(rmf_building_map_msgs__msg__Level * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // elevation
  // images
  rmf_building_map_msgs__msg__AffineImage__Sequence__fini(&msg->images);
  // places
  rmf_building_map_msgs__msg__Place__Sequence__fini(&msg->places);
  // doors
  rmf_building_map_msgs__msg__Door__Sequence__fini(&msg->doors);
  // nav_graphs
  rmf_building_map_msgs__msg__Graph__Sequence__fini(&msg->nav_graphs);
  // wall_graph
  rmf_building_map_msgs__msg__Graph__fini(&msg->wall_graph);
}

bool
rmf_building_map_msgs__msg__Level__are_equal(const rmf_building_map_msgs__msg__Level * lhs, const rmf_building_map_msgs__msg__Level * rhs)
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
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  // images
  if (!rmf_building_map_msgs__msg__AffineImage__Sequence__are_equal(
      &(lhs->images), &(rhs->images)))
  {
    return false;
  }
  // places
  if (!rmf_building_map_msgs__msg__Place__Sequence__are_equal(
      &(lhs->places), &(rhs->places)))
  {
    return false;
  }
  // doors
  if (!rmf_building_map_msgs__msg__Door__Sequence__are_equal(
      &(lhs->doors), &(rhs->doors)))
  {
    return false;
  }
  // nav_graphs
  if (!rmf_building_map_msgs__msg__Graph__Sequence__are_equal(
      &(lhs->nav_graphs), &(rhs->nav_graphs)))
  {
    return false;
  }
  // wall_graph
  if (!rmf_building_map_msgs__msg__Graph__are_equal(
      &(lhs->wall_graph), &(rhs->wall_graph)))
  {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Level__copy(
  const rmf_building_map_msgs__msg__Level * input,
  rmf_building_map_msgs__msg__Level * output)
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
  // elevation
  output->elevation = input->elevation;
  // images
  if (!rmf_building_map_msgs__msg__AffineImage__Sequence__copy(
      &(input->images), &(output->images)))
  {
    return false;
  }
  // places
  if (!rmf_building_map_msgs__msg__Place__Sequence__copy(
      &(input->places), &(output->places)))
  {
    return false;
  }
  // doors
  if (!rmf_building_map_msgs__msg__Door__Sequence__copy(
      &(input->doors), &(output->doors)))
  {
    return false;
  }
  // nav_graphs
  if (!rmf_building_map_msgs__msg__Graph__Sequence__copy(
      &(input->nav_graphs), &(output->nav_graphs)))
  {
    return false;
  }
  // wall_graph
  if (!rmf_building_map_msgs__msg__Graph__copy(
      &(input->wall_graph), &(output->wall_graph)))
  {
    return false;
  }
  return true;
}

rmf_building_map_msgs__msg__Level *
rmf_building_map_msgs__msg__Level__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Level * msg = (rmf_building_map_msgs__msg__Level *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Level), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__Level));
  bool success = rmf_building_map_msgs__msg__Level__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__Level__destroy(rmf_building_map_msgs__msg__Level * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__msg__Level__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__msg__Level__Sequence__init(rmf_building_map_msgs__msg__Level__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Level * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__msg__Level *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__msg__Level), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__Level__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__Level__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__Level__Sequence__fini(rmf_building_map_msgs__msg__Level__Sequence * array)
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
      rmf_building_map_msgs__msg__Level__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__Level__Sequence *
rmf_building_map_msgs__msg__Level__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Level__Sequence * array = (rmf_building_map_msgs__msg__Level__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Level__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__Level__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__Level__Sequence__destroy(rmf_building_map_msgs__msg__Level__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__msg__Level__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__msg__Level__Sequence__are_equal(const rmf_building_map_msgs__msg__Level__Sequence * lhs, const rmf_building_map_msgs__msg__Level__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__msg__Level__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Level__Sequence__copy(
  const rmf_building_map_msgs__msg__Level__Sequence * input,
  rmf_building_map_msgs__msg__Level__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__msg__Level);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__msg__Level * data =
      (rmf_building_map_msgs__msg__Level *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__msg__Level__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__msg__Level__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__msg__Level__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
