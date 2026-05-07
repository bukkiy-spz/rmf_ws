// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/BlockadeHeartbeat.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/blockade_heartbeat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `statuses`
#include "rmf_traffic_msgs/msg/detail/blockade_status__functions.h"

bool
rmf_traffic_msgs__msg__BlockadeHeartbeat__init(rmf_traffic_msgs__msg__BlockadeHeartbeat * msg)
{
  if (!msg) {
    return false;
  }
  // statuses
  if (!rmf_traffic_msgs__msg__BlockadeStatus__Sequence__init(&msg->statuses, 0)) {
    rmf_traffic_msgs__msg__BlockadeHeartbeat__fini(msg);
    return false;
  }
  // has_gridlock
  return true;
}

void
rmf_traffic_msgs__msg__BlockadeHeartbeat__fini(rmf_traffic_msgs__msg__BlockadeHeartbeat * msg)
{
  if (!msg) {
    return;
  }
  // statuses
  rmf_traffic_msgs__msg__BlockadeStatus__Sequence__fini(&msg->statuses);
  // has_gridlock
}

bool
rmf_traffic_msgs__msg__BlockadeHeartbeat__are_equal(const rmf_traffic_msgs__msg__BlockadeHeartbeat * lhs, const rmf_traffic_msgs__msg__BlockadeHeartbeat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // statuses
  if (!rmf_traffic_msgs__msg__BlockadeStatus__Sequence__are_equal(
      &(lhs->statuses), &(rhs->statuses)))
  {
    return false;
  }
  // has_gridlock
  if (lhs->has_gridlock != rhs->has_gridlock) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeHeartbeat__copy(
  const rmf_traffic_msgs__msg__BlockadeHeartbeat * input,
  rmf_traffic_msgs__msg__BlockadeHeartbeat * output)
{
  if (!input || !output) {
    return false;
  }
  // statuses
  if (!rmf_traffic_msgs__msg__BlockadeStatus__Sequence__copy(
      &(input->statuses), &(output->statuses)))
  {
    return false;
  }
  // has_gridlock
  output->has_gridlock = input->has_gridlock;
  return true;
}

rmf_traffic_msgs__msg__BlockadeHeartbeat *
rmf_traffic_msgs__msg__BlockadeHeartbeat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeHeartbeat * msg = (rmf_traffic_msgs__msg__BlockadeHeartbeat *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeHeartbeat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__BlockadeHeartbeat));
  bool success = rmf_traffic_msgs__msg__BlockadeHeartbeat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__BlockadeHeartbeat__destroy(rmf_traffic_msgs__msg__BlockadeHeartbeat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__BlockadeHeartbeat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__init(rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeHeartbeat * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__BlockadeHeartbeat *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__BlockadeHeartbeat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__BlockadeHeartbeat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__BlockadeHeartbeat__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__fini(rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence * array)
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
      rmf_traffic_msgs__msg__BlockadeHeartbeat__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence *
rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence * array = (rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__destroy(rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__are_equal(const rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence * lhs, const rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeHeartbeat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__copy(
  const rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence * input,
  rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__BlockadeHeartbeat);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__BlockadeHeartbeat * data =
      (rmf_traffic_msgs__msg__BlockadeHeartbeat *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__BlockadeHeartbeat__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__BlockadeHeartbeat__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__BlockadeHeartbeat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
