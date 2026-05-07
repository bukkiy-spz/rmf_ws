// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:msg/GraphEdge.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/msg/detail/graph_edge__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `params`
#include "rmf_building_map_msgs/msg/detail/param__functions.h"

bool
rmf_building_map_msgs__msg__GraphEdge__init(rmf_building_map_msgs__msg__GraphEdge * msg)
{
  if (!msg) {
    return false;
  }
  // v1_idx
  // v2_idx
  // params
  if (!rmf_building_map_msgs__msg__Param__Sequence__init(&msg->params, 0)) {
    rmf_building_map_msgs__msg__GraphEdge__fini(msg);
    return false;
  }
  // edge_type
  return true;
}

void
rmf_building_map_msgs__msg__GraphEdge__fini(rmf_building_map_msgs__msg__GraphEdge * msg)
{
  if (!msg) {
    return;
  }
  // v1_idx
  // v2_idx
  // params
  rmf_building_map_msgs__msg__Param__Sequence__fini(&msg->params);
  // edge_type
}

bool
rmf_building_map_msgs__msg__GraphEdge__are_equal(const rmf_building_map_msgs__msg__GraphEdge * lhs, const rmf_building_map_msgs__msg__GraphEdge * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // v1_idx
  if (lhs->v1_idx != rhs->v1_idx) {
    return false;
  }
  // v2_idx
  if (lhs->v2_idx != rhs->v2_idx) {
    return false;
  }
  // params
  if (!rmf_building_map_msgs__msg__Param__Sequence__are_equal(
      &(lhs->params), &(rhs->params)))
  {
    return false;
  }
  // edge_type
  if (lhs->edge_type != rhs->edge_type) {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__msg__GraphEdge__copy(
  const rmf_building_map_msgs__msg__GraphEdge * input,
  rmf_building_map_msgs__msg__GraphEdge * output)
{
  if (!input || !output) {
    return false;
  }
  // v1_idx
  output->v1_idx = input->v1_idx;
  // v2_idx
  output->v2_idx = input->v2_idx;
  // params
  if (!rmf_building_map_msgs__msg__Param__Sequence__copy(
      &(input->params), &(output->params)))
  {
    return false;
  }
  // edge_type
  output->edge_type = input->edge_type;
  return true;
}

rmf_building_map_msgs__msg__GraphEdge *
rmf_building_map_msgs__msg__GraphEdge__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__GraphEdge * msg = (rmf_building_map_msgs__msg__GraphEdge *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__GraphEdge), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__msg__GraphEdge));
  bool success = rmf_building_map_msgs__msg__GraphEdge__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__msg__GraphEdge__destroy(rmf_building_map_msgs__msg__GraphEdge * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__msg__GraphEdge__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__msg__GraphEdge__Sequence__init(rmf_building_map_msgs__msg__GraphEdge__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__GraphEdge * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__msg__GraphEdge *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__msg__GraphEdge), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__msg__GraphEdge__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__msg__GraphEdge__fini(&data[i - 1]);
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
rmf_building_map_msgs__msg__GraphEdge__Sequence__fini(rmf_building_map_msgs__msg__GraphEdge__Sequence * array)
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
      rmf_building_map_msgs__msg__GraphEdge__fini(&array->data[i]);
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

rmf_building_map_msgs__msg__GraphEdge__Sequence *
rmf_building_map_msgs__msg__GraphEdge__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__msg__GraphEdge__Sequence * array = (rmf_building_map_msgs__msg__GraphEdge__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__msg__GraphEdge__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__msg__GraphEdge__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__msg__GraphEdge__Sequence__destroy(rmf_building_map_msgs__msg__GraphEdge__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__msg__GraphEdge__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__msg__GraphEdge__Sequence__are_equal(const rmf_building_map_msgs__msg__GraphEdge__Sequence * lhs, const rmf_building_map_msgs__msg__GraphEdge__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__msg__GraphEdge__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__msg__GraphEdge__Sequence__copy(
  const rmf_building_map_msgs__msg__GraphEdge__Sequence * input,
  rmf_building_map_msgs__msg__GraphEdge__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__msg__GraphEdge);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__msg__GraphEdge * data =
      (rmf_building_map_msgs__msg__GraphEdge *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__msg__GraphEdge__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__msg__GraphEdge__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__msg__GraphEdge__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
