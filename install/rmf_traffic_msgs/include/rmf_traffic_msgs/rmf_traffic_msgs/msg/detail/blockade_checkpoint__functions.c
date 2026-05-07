// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/BlockadeCheckpoint.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/blockade_checkpoint__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `map_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_traffic_msgs__msg__BlockadeCheckpoint__init(rmf_traffic_msgs__msg__BlockadeCheckpoint * msg)
{
  if (!msg) {
    return false;
  }
  // position
  // map_name
  if (!rosidl_runtime_c__String__init(&msg->map_name)) {
    rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(msg);
    return false;
  }
  // can_hold
  return true;
}

void
rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(rmf_traffic_msgs__msg__BlockadeCheckpoint * msg)
{
  if (!msg) {
    return;
  }
  // position
  // map_name
  rosidl_runtime_c__String__fini(&msg->map_name);
  // can_hold
}

bool
rmf_traffic_msgs__msg__BlockadeCheckpoint__are_equal(const rmf_traffic_msgs__msg__BlockadeCheckpoint * lhs, const rmf_traffic_msgs__msg__BlockadeCheckpoint * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  for (size_t i = 0; i < 2; ++i) {
    if (lhs->position[i] != rhs->position[i]) {
      return false;
    }
  }
  // map_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->map_name), &(rhs->map_name)))
  {
    return false;
  }
  // can_hold
  if (lhs->can_hold != rhs->can_hold) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeCheckpoint__copy(
  const rmf_traffic_msgs__msg__BlockadeCheckpoint * input,
  rmf_traffic_msgs__msg__BlockadeCheckpoint * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  for (size_t i = 0; i < 2; ++i) {
    output->position[i] = input->position[i];
  }
  // map_name
  if (!rosidl_runtime_c__String__copy(
      &(input->map_name), &(output->map_name)))
  {
    return false;
  }
  // can_hold
  output->can_hold = input->can_hold;
  return true;
}

rmf_traffic_msgs__msg__BlockadeCheckpoint *
rmf_traffic_msgs__msg__BlockadeCheckpoint__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeCheckpoint * msg = (rmf_traffic_msgs__msg__BlockadeCheckpoint *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint));
  bool success = rmf_traffic_msgs__msg__BlockadeCheckpoint__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__BlockadeCheckpoint__destroy(rmf_traffic_msgs__msg__BlockadeCheckpoint * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__init(rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeCheckpoint * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__BlockadeCheckpoint *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__BlockadeCheckpoint__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__fini(rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * array)
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
      rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence *
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * array = (rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__destroy(rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__are_equal(const rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * lhs, const rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeCheckpoint__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__copy(
  const rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * input,
  rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__BlockadeCheckpoint);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__BlockadeCheckpoint * data =
      (rmf_traffic_msgs__msg__BlockadeCheckpoint *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__BlockadeCheckpoint__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__BlockadeCheckpoint__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeCheckpoint__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
