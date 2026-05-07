// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/Route.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/route__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map`
#include "rosidl_runtime_c/string_functions.h"
// Member `trajectory`
#include "rmf_traffic_msgs/msg/detail/trajectory__functions.h"
// Member `checkpoints`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `dependencies`
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"

bool
rmf_traffic_msgs__msg__Route__init(rmf_traffic_msgs__msg__Route * msg)
{
  if (!msg) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__init(&msg->map)) {
    rmf_traffic_msgs__msg__Route__fini(msg);
    return false;
  }
  // trajectory
  if (!rmf_traffic_msgs__msg__Trajectory__init(&msg->trajectory)) {
    rmf_traffic_msgs__msg__Route__fini(msg);
    return false;
  }
  // checkpoints
  if (!rosidl_runtime_c__uint64__Sequence__init(&msg->checkpoints, 0)) {
    rmf_traffic_msgs__msg__Route__fini(msg);
    return false;
  }
  // dependencies
  if (!rmf_traffic_msgs__msg__TrafficDependency__Sequence__init(&msg->dependencies, 0)) {
    rmf_traffic_msgs__msg__Route__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__Route__fini(rmf_traffic_msgs__msg__Route * msg)
{
  if (!msg) {
    return;
  }
  // map
  rosidl_runtime_c__String__fini(&msg->map);
  // trajectory
  rmf_traffic_msgs__msg__Trajectory__fini(&msg->trajectory);
  // checkpoints
  rosidl_runtime_c__uint64__Sequence__fini(&msg->checkpoints);
  // dependencies
  rmf_traffic_msgs__msg__TrafficDependency__Sequence__fini(&msg->dependencies);
}

bool
rmf_traffic_msgs__msg__Route__are_equal(const rmf_traffic_msgs__msg__Route * lhs, const rmf_traffic_msgs__msg__Route * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map), &(rhs->map)))
  {
    return false;
  }
  // trajectory
  if (!rmf_traffic_msgs__msg__Trajectory__are_equal(
      &(lhs->trajectory), &(rhs->trajectory)))
  {
    return false;
  }
  // checkpoints
  if (!rosidl_runtime_c__uint64__Sequence__are_equal(
      &(lhs->checkpoints), &(rhs->checkpoints)))
  {
    return false;
  }
  // dependencies
  if (!rmf_traffic_msgs__msg__TrafficDependency__Sequence__are_equal(
      &(lhs->dependencies), &(rhs->dependencies)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__Route__copy(
  const rmf_traffic_msgs__msg__Route * input,
  rmf_traffic_msgs__msg__Route * output)
{
  if (!input || !output) {
    return false;
  }
  // map
  if (!rosidl_runtime_c__String__copy(
      &(input->map), &(output->map)))
  {
    return false;
  }
  // trajectory
  if (!rmf_traffic_msgs__msg__Trajectory__copy(
      &(input->trajectory), &(output->trajectory)))
  {
    return false;
  }
  // checkpoints
  if (!rosidl_runtime_c__uint64__Sequence__copy(
      &(input->checkpoints), &(output->checkpoints)))
  {
    return false;
  }
  // dependencies
  if (!rmf_traffic_msgs__msg__TrafficDependency__Sequence__copy(
      &(input->dependencies), &(output->dependencies)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__Route *
rmf_traffic_msgs__msg__Route__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Route * msg = (rmf_traffic_msgs__msg__Route *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__Route), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__Route));
  bool success = rmf_traffic_msgs__msg__Route__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__Route__destroy(rmf_traffic_msgs__msg__Route * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__Route__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__Route__Sequence__init(rmf_traffic_msgs__msg__Route__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Route * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__Route *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__Route), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__Route__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__Route__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__Route__Sequence__fini(rmf_traffic_msgs__msg__Route__Sequence * array)
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
      rmf_traffic_msgs__msg__Route__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__Route__Sequence *
rmf_traffic_msgs__msg__Route__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__Route__Sequence * array = (rmf_traffic_msgs__msg__Route__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__Route__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__Route__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__Route__Sequence__destroy(rmf_traffic_msgs__msg__Route__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__Route__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__Route__Sequence__are_equal(const rmf_traffic_msgs__msg__Route__Sequence * lhs, const rmf_traffic_msgs__msg__Route__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__Route__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__Route__Sequence__copy(
  const rmf_traffic_msgs__msg__Route__Sequence * input,
  rmf_traffic_msgs__msg__Route__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__Route);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__Route * data =
      (rmf_traffic_msgs__msg__Route *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__Route__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__Route__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__Route__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
