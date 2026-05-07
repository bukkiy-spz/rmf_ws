// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/MutexGroupManualRelease.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/mutex_group_manual_release__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `release_mutex_groups`
// Member `fleet`
// Member `robot`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_fleet_msgs__msg__MutexGroupManualRelease__init(rmf_fleet_msgs__msg__MutexGroupManualRelease * msg)
{
  if (!msg) {
    return false;
  }
  // release_mutex_groups
  if (!rosidl_runtime_c__String__Sequence__init(&msg->release_mutex_groups, 0)) {
    rmf_fleet_msgs__msg__MutexGroupManualRelease__fini(msg);
    return false;
  }
  // fleet
  if (!rosidl_runtime_c__String__init(&msg->fleet)) {
    rmf_fleet_msgs__msg__MutexGroupManualRelease__fini(msg);
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__init(&msg->robot)) {
    rmf_fleet_msgs__msg__MutexGroupManualRelease__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__MutexGroupManualRelease__fini(rmf_fleet_msgs__msg__MutexGroupManualRelease * msg)
{
  if (!msg) {
    return;
  }
  // release_mutex_groups
  rosidl_runtime_c__String__Sequence__fini(&msg->release_mutex_groups);
  // fleet
  rosidl_runtime_c__String__fini(&msg->fleet);
  // robot
  rosidl_runtime_c__String__fini(&msg->robot);
}

bool
rmf_fleet_msgs__msg__MutexGroupManualRelease__are_equal(const rmf_fleet_msgs__msg__MutexGroupManualRelease * lhs, const rmf_fleet_msgs__msg__MutexGroupManualRelease * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // release_mutex_groups
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->release_mutex_groups), &(rhs->release_mutex_groups)))
  {
    return false;
  }
  // fleet
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fleet), &(rhs->fleet)))
  {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot), &(rhs->robot)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__MutexGroupManualRelease__copy(
  const rmf_fleet_msgs__msg__MutexGroupManualRelease * input,
  rmf_fleet_msgs__msg__MutexGroupManualRelease * output)
{
  if (!input || !output) {
    return false;
  }
  // release_mutex_groups
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->release_mutex_groups), &(output->release_mutex_groups)))
  {
    return false;
  }
  // fleet
  if (!rosidl_runtime_c__String__copy(
      &(input->fleet), &(output->fleet)))
  {
    return false;
  }
  // robot
  if (!rosidl_runtime_c__String__copy(
      &(input->robot), &(output->robot)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__MutexGroupManualRelease *
rmf_fleet_msgs__msg__MutexGroupManualRelease__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupManualRelease * msg = (rmf_fleet_msgs__msg__MutexGroupManualRelease *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__MutexGroupManualRelease), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__MutexGroupManualRelease));
  bool success = rmf_fleet_msgs__msg__MutexGroupManualRelease__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__MutexGroupManualRelease__destroy(rmf_fleet_msgs__msg__MutexGroupManualRelease * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__MutexGroupManualRelease__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__init(rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupManualRelease * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__MutexGroupManualRelease *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__MutexGroupManualRelease), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__MutexGroupManualRelease__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__MutexGroupManualRelease__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__fini(rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence * array)
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
      rmf_fleet_msgs__msg__MutexGroupManualRelease__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence *
rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence * array = (rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__destroy(rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__are_equal(const rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence * lhs, const rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__MutexGroupManualRelease__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__copy(
  const rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence * input,
  rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__MutexGroupManualRelease);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__MutexGroupManualRelease * data =
      (rmf_fleet_msgs__msg__MutexGroupManualRelease *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__MutexGroupManualRelease__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__MutexGroupManualRelease__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__MutexGroupManualRelease__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
