// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/Graph.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/graph__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `vertices`
#include "rmf_building_map_msgs/msg/detail/graph_node__functions.h"
// Member `edges`
#include "rmf_building_map_msgs/msg/detail/graph_edge__functions.h"
// Member `params`
#include "rmf_building_map_msgs/msg/detail/param__functions.h"

bool
rmf_building_map_msgs__msg__Graph__init(rmf_building_map_msgs__msg__Graph * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
    return false;
  }
  // vertices
  if (!rmf_building_map_msgs__msg__GraphNode__Sequence__init(&msg->vertices, 0)) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
    return false;
  }
  // edges
  if (!rmf_building_map_msgs__msg__GraphEdge__Sequence__init(&msg->edges, 0)) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
    return false;
  }
  // params
  if (!rmf_building_map_msgs__msg__Param__Sequence__init(&msg->params, 0)) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__msg__Graph__fini(rmf_building_map_msgs__msg__Graph * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // vertices
  rmf_building_map_msgs__msg__GraphNode__Sequence__fini(&msg->vertices);
  // edges
  rmf_building_map_msgs__msg__GraphEdge__Sequence__fini(&msg->edges);
  // params
  rmf_building_map_msgs__msg__Param__Sequence__fini(&msg->params);
}

bool
rmf_building_map_msgs__msg__Graph__are_equal(const rmf_building_map_msgs__msg__Graph * lhs, const rmf_building_map_msgs__msg__Graph * rhs)
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
  // vertices
  if (!rmf_building_map_msgs__msg__GraphNode__Sequence__are_equal(
      &(lhs->vertices), &(rhs->vertices)))
  {
    return false;
  }
  // edges
  if (!rmf_building_map_msgs__msg__GraphEdge__Sequence__are_equal(
      &(lhs->edges), &(rhs->edges)))
  {
    return false;
  }
  // params
  if (!rmf_building_map_msgs__msg__Param__Sequence__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Graph__copy(
  const rmf_building_map_msgs__msg__Graph * input,
  rmf_building_map_msgs__msg__Graph * output)
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
  // vertices
  if (!rmf_building_map_msgs__msg__GraphNode__Sequence__copy(
      &(input->vertices), &(output->vertices)))
  {
    return false;
  }
  // edges
  if (!rmf_building_map_msgs__msg__GraphEdge__Sequence__copy(
      &(input->edges), &(output->edges)))
  {
    return false;
  }
  // params
  if (!rmf_building_map_msgs__msg__Param__Sequence__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  return true;
}

rmf_building_map_msgs__msg__Graph *
rmf_building_map_msgs__msg__Graph__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Graph * msg = (rmf_building_map_msgs__msg__Graph *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Graph), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__Graph));
  bool success = rmf_building_map_msgs__msg__Graph__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__Graph__destroy(rmf_building_map_msgs__msg__Graph * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__msg__Graph__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__msg__Graph__Sequence__init(rmf_building_map_msgs__msg__Graph__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Graph * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__msg__Graph *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__msg__Graph), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__Graph__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__Graph__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__Graph__Sequence__fini(rmf_building_map_msgs__msg__Graph__Sequence * array)
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
      rmf_building_map_msgs__msg__Graph__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__Graph__Sequence *
rmf_building_map_msgs__msg__Graph__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__Graph__Sequence * array = (rmf_building_map_msgs__msg__Graph__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__Graph__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__Graph__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__Graph__Sequence__destroy(rmf_building_map_msgs__msg__Graph__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__msg__Graph__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__msg__Graph__Sequence__are_equal(const rmf_building_map_msgs__msg__Graph__Sequence * lhs, const rmf_building_map_msgs__msg__Graph__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__msg__Graph__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__msg__Graph__Sequence__copy(
  const rmf_building_map_msgs__msg__Graph__Sequence * input,
  rmf_building_map_msgs__msg__Graph__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__msg__Graph);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__msg__Graph * data =
      (rmf_building_map_msgs__msg__Graph *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__msg__Graph__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__msg__Graph__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__msg__Graph__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
