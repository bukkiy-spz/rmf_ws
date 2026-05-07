// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/FleetState.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/fleet_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `robots`
#include "rmf_fleet_msgs/msg/detail/robot_state__functions.h"

bool
rmf_fleet_msgs__msg__FleetState__init(rmf_fleet_msgs__msg__FleetState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_fleet_msgs__msg__FleetState__fini(msg);
    return false;
  }
  // robots
  if (!rmf_fleet_msgs__msg__RobotState__Sequence__init(&msg->robots, 0)) {
    rmf_fleet_msgs__msg__FleetState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__FleetState__fini(rmf_fleet_msgs__msg__FleetState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // robots
  rmf_fleet_msgs__msg__RobotState__Sequence__fini(&msg->robots);
}

bool
rmf_fleet_msgs__msg__FleetState__are_equal(const rmf_fleet_msgs__msg__FleetState * lhs, const rmf_fleet_msgs__msg__FleetState * rhs)
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
  // robots
  if (!rmf_fleet_msgs__msg__RobotState__Sequence__are_equal(
      &(lhs->robots), &(rhs->robots)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__FleetState__copy(
  const rmf_fleet_msgs__msg__FleetState * input,
  rmf_fleet_msgs__msg__FleetState * output)
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
  // robots
  if (!rmf_fleet_msgs__msg__RobotState__Sequence__copy(
      &(input->robots), &(output->robots)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__FleetState *
rmf_fleet_msgs__msg__FleetState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__FleetState * msg = (rmf_fleet_msgs__msg__FleetState *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__FleetState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__FleetState));
  bool success = rmf_fleet_msgs__msg__FleetState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__FleetState__destroy(rmf_fleet_msgs__msg__FleetState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__FleetState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__FleetState__Sequence__init(rmf_fleet_msgs__msg__FleetState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__FleetState * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__FleetState *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__FleetState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__FleetState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__FleetState__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__FleetState__Sequence__fini(rmf_fleet_msgs__msg__FleetState__Sequence * array)
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
      rmf_fleet_msgs__msg__FleetState__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__FleetState__Sequence *
rmf_fleet_msgs__msg__FleetState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__FleetState__Sequence * array = (rmf_fleet_msgs__msg__FleetState__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__FleetState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__FleetState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__FleetState__Sequence__destroy(rmf_fleet_msgs__msg__FleetState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__FleetState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__FleetState__Sequence__are_equal(const rmf_fleet_msgs__msg__FleetState__Sequence * lhs, const rmf_fleet_msgs__msg__FleetState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__FleetState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__FleetState__Sequence__copy(
  const rmf_fleet_msgs__msg__FleetState__Sequence * input,
  rmf_fleet_msgs__msg__FleetState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__FleetState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__FleetState * data =
      (rmf_fleet_msgs__msg__FleetState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__FleetState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__FleetState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__FleetState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
