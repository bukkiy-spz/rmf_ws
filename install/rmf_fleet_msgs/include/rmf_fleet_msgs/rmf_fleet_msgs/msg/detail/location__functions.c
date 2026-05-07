// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/Location.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `t`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `level_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_fleet_msgs__msg__Location__init(rmf_fleet_msgs__msg__Location * msg)
{
  if (!msg) {
    return false;
  }
  // t
  if (!builtin_interfaces__msg__Time__init(&msg->t)) {
    rmf_fleet_msgs__msg__Location__fini(msg);
    return false;
  }
  // x
  // y
  // yaw
  // obey_approach_speed_limit
  msg->obey_approach_speed_limit = false;
  // approach_speed_limit
  // level_name
  if (!rosidl_runtime_c__String__init(&msg->level_name)) {
    rmf_fleet_msgs__msg__Location__fini(msg);
    return false;
  }
  // index
  return true;
}

void
rmf_fleet_msgs__msg__Location__fini(rmf_fleet_msgs__msg__Location * msg)
{
  if (!msg) {
    return;
  }
  // t
  builtin_interfaces__msg__Time__fini(&msg->t);
  // x
  // y
  // yaw
  // obey_approach_speed_limit
  // approach_speed_limit
  // level_name
  rosidl_runtime_c__String__fini(&msg->level_name);
  // index
}

bool
rmf_fleet_msgs__msg__Location__are_equal(const rmf_fleet_msgs__msg__Location * lhs, const rmf_fleet_msgs__msg__Location * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // t
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->t), &(rhs->t)))
  {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // obey_approach_speed_limit
  if (lhs->obey_approach_speed_limit != rhs->obey_approach_speed_limit) {
    return false;
  }
  // approach_speed_limit
  if (lhs->approach_speed_limit != rhs->approach_speed_limit) {
    return false;
  }
  // level_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->level_name), &(rhs->level_name)))
  {
    return false;
  }
  // index
  if (lhs->index != rhs->index) {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__Location__copy(
  const rmf_fleet_msgs__msg__Location * input,
  rmf_fleet_msgs__msg__Location * output)
{
  if (!input || !output) {
    return false;
  }
  // t
  if (!builtin_interfaces__msg__Time__copy(
      &(input->t), &(output->t)))
  {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // yaw
  output->yaw = input->yaw;
  // obey_approach_speed_limit
  output->obey_approach_speed_limit = input->obey_approach_speed_limit;
  // approach_speed_limit
  output->approach_speed_limit = input->approach_speed_limit;
  // level_name
  if (!rosidl_runtime_c__String__copy(
      &(input->level_name), &(output->level_name)))
  {
    return false;
  }
  // index
  output->index = input->index;
  return true;
}

rmf_fleet_msgs__msg__Location *
rmf_fleet_msgs__msg__Location__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__Location * msg = (rmf_fleet_msgs__msg__Location *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__Location), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__Location));
  bool success = rmf_fleet_msgs__msg__Location__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__Location__destroy(rmf_fleet_msgs__msg__Location * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__Location__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__Location__Sequence__init(rmf_fleet_msgs__msg__Location__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__Location * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__Location *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__Location), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__Location__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__Location__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__Location__Sequence__fini(rmf_fleet_msgs__msg__Location__Sequence * array)
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
      rmf_fleet_msgs__msg__Location__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__Location__Sequence *
rmf_fleet_msgs__msg__Location__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__Location__Sequence * array = (rmf_fleet_msgs__msg__Location__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__Location__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__Location__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__Location__Sequence__destroy(rmf_fleet_msgs__msg__Location__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__Location__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__Location__Sequence__are_equal(const rmf_fleet_msgs__msg__Location__Sequence * lhs, const rmf_fleet_msgs__msg__Location__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__Location__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__Location__Sequence__copy(
  const rmf_fleet_msgs__msg__Location__Sequence * input,
  rmf_fleet_msgs__msg__Location__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__Location);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__Location * data =
      (rmf_fleet_msgs__msg__Location *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__Location__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__Location__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__Location__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
