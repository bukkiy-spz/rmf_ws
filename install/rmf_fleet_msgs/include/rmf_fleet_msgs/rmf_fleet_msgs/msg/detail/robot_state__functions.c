// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/RobotState.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/robot_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `model`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `mode`
#include "rmf_fleet_msgs/msg/detail/robot_mode__functions.h"
// Member `location`
// Member `path`
#include "rmf_fleet_msgs/msg/detail/location__functions.h"

bool
rmf_fleet_msgs__msg__RobotState__init(rmf_fleet_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // model
  if (!rosidl_runtime_c__String__init(&msg->model)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // seq
  // mode
  if (!rmf_fleet_msgs__msg__RobotMode__init(&msg->mode)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // battery_percent
  // location
  if (!rmf_fleet_msgs__msg__Location__init(&msg->location)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  // path
  if (!rmf_fleet_msgs__msg__Location__Sequence__init(&msg->path, 0)) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__RobotState__fini(rmf_fleet_msgs__msg__RobotState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // model
  rosidl_runtime_c__String__fini(&msg->model);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // seq
  // mode
  rmf_fleet_msgs__msg__RobotMode__fini(&msg->mode);
  // battery_percent
  // location
  rmf_fleet_msgs__msg__Location__fini(&msg->location);
  // path
  rmf_fleet_msgs__msg__Location__Sequence__fini(&msg->path);
}

bool
rmf_fleet_msgs__msg__RobotState__are_equal(const rmf_fleet_msgs__msg__RobotState * lhs, const rmf_fleet_msgs__msg__RobotState * rhs)
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
  // model
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->model), &(rhs->model)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // seq
  if (lhs->seq != rhs->seq) {
    return false;
  }
  // mode
  if (!rmf_fleet_msgs__msg__RobotMode__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // battery_percent
  if (lhs->battery_percent != rhs->battery_percent) {
    return false;
  }
  // location
  if (!rmf_fleet_msgs__msg__Location__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // path
  if (!rmf_fleet_msgs__msg__Location__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__RobotState__copy(
  const rmf_fleet_msgs__msg__RobotState * input,
  rmf_fleet_msgs__msg__RobotState * output)
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
  // model
  if (!rosidl_runtime_c__String__copy(
      &(input->model), &(output->model)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // seq
  output->seq = input->seq;
  // mode
  if (!rmf_fleet_msgs__msg__RobotMode__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // battery_percent
  output->battery_percent = input->battery_percent;
  // location
  if (!rmf_fleet_msgs__msg__Location__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // path
  if (!rmf_fleet_msgs__msg__Location__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__RobotState *
rmf_fleet_msgs__msg__RobotState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__RobotState * msg = (rmf_fleet_msgs__msg__RobotState *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__RobotState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__RobotState));
  bool success = rmf_fleet_msgs__msg__RobotState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__RobotState__destroy(rmf_fleet_msgs__msg__RobotState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__RobotState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__RobotState__Sequence__init(rmf_fleet_msgs__msg__RobotState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__RobotState * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__RobotState *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__RobotState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__RobotState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__RobotState__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__RobotState__Sequence__fini(rmf_fleet_msgs__msg__RobotState__Sequence * array)
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
      rmf_fleet_msgs__msg__RobotState__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__RobotState__Sequence *
rmf_fleet_msgs__msg__RobotState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__RobotState__Sequence * array = (rmf_fleet_msgs__msg__RobotState__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__RobotState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__RobotState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__RobotState__Sequence__destroy(rmf_fleet_msgs__msg__RobotState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__RobotState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__RobotState__Sequence__are_equal(const rmf_fleet_msgs__msg__RobotState__Sequence * lhs, const rmf_fleet_msgs__msg__RobotState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__RobotState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__RobotState__Sequence__copy(
  const rmf_fleet_msgs__msg__RobotState__Sequence * input,
  rmf_fleet_msgs__msg__RobotState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__RobotState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__RobotState * data =
      (rmf_fleet_msgs__msg__RobotState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__RobotState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__RobotState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__RobotState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
