// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/TrafficDependency.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/traffic_dependency__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rmf_traffic_msgs__msg__TrafficDependency__init(rmf_traffic_msgs__msg__TrafficDependency * msg)
{
  if (!msg) {
    return false;
  }
  // dependent_checkpoint
  // on_participant
  // on_plan
  // on_route
  // on_checkpoint
  return true;
}

void
rmf_traffic_msgs__msg__TrafficDependency__fini(rmf_traffic_msgs__msg__TrafficDependency * msg)
{
  if (!msg) {
    return;
  }
  // dependent_checkpoint
  // on_participant
  // on_plan
  // on_route
  // on_checkpoint
}

bool
rmf_traffic_msgs__msg__TrafficDependency__are_equal(const rmf_traffic_msgs__msg__TrafficDependency * lhs, const rmf_traffic_msgs__msg__TrafficDependency * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dependent_checkpoint
  if (lhs->dependent_checkpoint != rhs->dependent_checkpoint) {
    return false;
  }
  // on_participant
  if (lhs->on_participant != rhs->on_participant) {
    return false;
  }
  // on_plan
  if (lhs->on_plan != rhs->on_plan) {
    return false;
  }
  // on_route
  if (lhs->on_route != rhs->on_route) {
    return false;
  }
  // on_checkpoint
  if (lhs->on_checkpoint != rhs->on_checkpoint) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__TrafficDependency__copy(
  const rmf_traffic_msgs__msg__TrafficDependency * input,
  rmf_traffic_msgs__msg__TrafficDependency * output)
{
  if (!input || !output) {
    return false;
  }
  // dependent_checkpoint
  output->dependent_checkpoint = input->dependent_checkpoint;
  // on_participant
  output->on_participant = input->on_participant;
  // on_plan
  output->on_plan = input->on_plan;
  // on_route
  output->on_route = input->on_route;
  // on_checkpoint
  output->on_checkpoint = input->on_checkpoint;
  return true;
}

rmf_traffic_msgs__msg__TrafficDependency *
rmf_traffic_msgs__msg__TrafficDependency__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__TrafficDependency * msg = (rmf_traffic_msgs__msg__TrafficDependency *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__TrafficDependency), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__TrafficDependency));
  bool success = rmf_traffic_msgs__msg__TrafficDependency__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__TrafficDependency__destroy(rmf_traffic_msgs__msg__TrafficDependency * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__TrafficDependency__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__TrafficDependency__Sequence__init(rmf_traffic_msgs__msg__TrafficDependency__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__TrafficDependency * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__TrafficDependency *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__TrafficDependency), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__TrafficDependency__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__TrafficDependency__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__TrafficDependency__Sequence__fini(rmf_traffic_msgs__msg__TrafficDependency__Sequence * array)
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
      rmf_traffic_msgs__msg__TrafficDependency__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__TrafficDependency__Sequence *
rmf_traffic_msgs__msg__TrafficDependency__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__TrafficDependency__Sequence * array = (rmf_traffic_msgs__msg__TrafficDependency__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__TrafficDependency__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__TrafficDependency__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__TrafficDependency__Sequence__destroy(rmf_traffic_msgs__msg__TrafficDependency__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__TrafficDependency__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__TrafficDependency__Sequence__are_equal(const rmf_traffic_msgs__msg__TrafficDependency__Sequence * lhs, const rmf_traffic_msgs__msg__TrafficDependency__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__TrafficDependency__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__TrafficDependency__Sequence__copy(
  const rmf_traffic_msgs__msg__TrafficDependency__Sequence * input,
  rmf_traffic_msgs__msg__TrafficDependency__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__TrafficDependency);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__TrafficDependency * data =
      (rmf_traffic_msgs__msg__TrafficDependency *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__TrafficDependency__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__TrafficDependency__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__TrafficDependency__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
