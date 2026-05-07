// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/TrajectoryWaypoint.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/trajectory_waypoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rmf_traffic_msgs__msg__TrajectoryWaypoint__init(rmf_traffic_msgs__msg__TrajectoryWaypoint * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // position
  // velocity
  return true;
}

void
rmf_traffic_msgs__msg__TrajectoryWaypoint__fini(rmf_traffic_msgs__msg__TrajectoryWaypoint * msg)
{
  if (!msg) {
    return;
  }
  // time
  // position
  // velocity
}

bool
rmf_traffic_msgs__msg__TrajectoryWaypoint__are_equal(const rmf_traffic_msgs__msg__TrajectoryWaypoint * lhs, const rmf_traffic_msgs__msg__TrajectoryWaypoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // position
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    if (lhs->velocity[i] != rhs->velocity[i]) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__TrajectoryWaypoint__copy(
  const rmf_traffic_msgs__msg__TrajectoryWaypoint * input,
  rmf_traffic_msgs__msg__TrajectoryWaypoint * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // position
  for (size_t i = 0; i < 3; ++i) {
    output->position[i] = input->position[i];
  }
  // velocity
  for (size_t i = 0; i < 3; ++i) {
    output->velocity[i] = input->velocity[i];
  }
  return true;
}

rmf_traffic_msgs__msg__TrajectoryWaypoint *
rmf_traffic_msgs__msg__TrajectoryWaypoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__TrajectoryWaypoint * msg = (rmf_traffic_msgs__msg__TrajectoryWaypoint *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__TrajectoryWaypoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__TrajectoryWaypoint));
  bool success = rmf_traffic_msgs__msg__TrajectoryWaypoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__TrajectoryWaypoint__destroy(rmf_traffic_msgs__msg__TrajectoryWaypoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__TrajectoryWaypoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__init(rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__TrajectoryWaypoint * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__TrajectoryWaypoint *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__TrajectoryWaypoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__TrajectoryWaypoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__TrajectoryWaypoint__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__fini(rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * array)
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
      rmf_traffic_msgs__msg__TrajectoryWaypoint__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence *
rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * array = (rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__destroy(rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__are_equal(const rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * lhs, const rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__TrajectoryWaypoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__copy(
  const rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * input,
  rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__TrajectoryWaypoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__TrajectoryWaypoint * data =
      (rmf_traffic_msgs__msg__TrajectoryWaypoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__TrajectoryWaypoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__TrajectoryWaypoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__TrajectoryWaypoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
