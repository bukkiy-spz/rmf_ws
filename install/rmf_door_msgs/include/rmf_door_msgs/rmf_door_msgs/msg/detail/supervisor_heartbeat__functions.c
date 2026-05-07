// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_door_msgs:msg/SupervisorHeartbeat.idl
// generated code does not contain a copyright notice
#include "rmf_door_msgs/msg/detail/supervisor_heartbeat__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `all_sessions`
#include "rmf_door_msgs/msg/detail/door_sessions__functions.h"

bool
rmf_door_msgs__msg__SupervisorHeartbeat__init(rmf_door_msgs__msg__SupervisorHeartbeat * msg)
{
  if (!msg) {
    return false;
  }
  // all_sessions
  if (!rmf_door_msgs__msg__DoorSessions__Sequence__init(&msg->all_sessions, 0)) {
    rmf_door_msgs__msg__SupervisorHeartbeat__fini(msg);
    return false;
  }
  return true;
}

void
rmf_door_msgs__msg__SupervisorHeartbeat__fini(rmf_door_msgs__msg__SupervisorHeartbeat * msg)
{
  if (!msg) {
    return;
  }
  // all_sessions
  rmf_door_msgs__msg__DoorSessions__Sequence__fini(&msg->all_sessions);
}

bool
rmf_door_msgs__msg__SupervisorHeartbeat__are_equal(const rmf_door_msgs__msg__SupervisorHeartbeat * lhs, const rmf_door_msgs__msg__SupervisorHeartbeat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // all_sessions
  if (!rmf_door_msgs__msg__DoorSessions__Sequence__are_equal(
      &(lhs->all_sessions), &(rhs->all_sessions)))
  {
    return false;
  }
  return true;
}

bool
rmf_door_msgs__msg__SupervisorHeartbeat__copy(
  const rmf_door_msgs__msg__SupervisorHeartbeat * input,
  rmf_door_msgs__msg__SupervisorHeartbeat * output)
{
  if (!input || !output) {
    return false;
  }
  // all_sessions
  if (!rmf_door_msgs__msg__DoorSessions__Sequence__copy(
      &(input->all_sessions), &(output->all_sessions)))
  {
    return false;
  }
  return true;
}

rmf_door_msgs__msg__SupervisorHeartbeat *
rmf_door_msgs__msg__SupervisorHeartbeat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__SupervisorHeartbeat * msg = (rmf_door_msgs__msg__SupervisorHeartbeat *)allocator.allocate(sizeof(rmf_door_msgs__msg__SupervisorHeartbeat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_door_msgs__msg__SupervisorHeartbeat));
  bool success = rmf_door_msgs__msg__SupervisorHeartbeat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_door_msgs__msg__SupervisorHeartbeat__destroy(rmf_door_msgs__msg__SupervisorHeartbeat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_door_msgs__msg__SupervisorHeartbeat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__init(rmf_door_msgs__msg__SupervisorHeartbeat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__SupervisorHeartbeat * data = NULL;

  if (size) {
    data = (rmf_door_msgs__msg__SupervisorHeartbeat *)allocator.zero_allocate(size, sizeof(rmf_door_msgs__msg__SupervisorHeartbeat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_door_msgs__msg__SupervisorHeartbeat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_door_msgs__msg__SupervisorHeartbeat__fini(&data[i - 1]);
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
rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__fini(rmf_door_msgs__msg__SupervisorHeartbeat__Sequence * array)
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
      rmf_door_msgs__msg__SupervisorHeartbeat__fini(&array->data[i]);
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

rmf_door_msgs__msg__SupervisorHeartbeat__Sequence *
rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_door_msgs__msg__SupervisorHeartbeat__Sequence * array = (rmf_door_msgs__msg__SupervisorHeartbeat__Sequence *)allocator.allocate(sizeof(rmf_door_msgs__msg__SupervisorHeartbeat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__destroy(rmf_door_msgs__msg__SupervisorHeartbeat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__are_equal(const rmf_door_msgs__msg__SupervisorHeartbeat__Sequence * lhs, const rmf_door_msgs__msg__SupervisorHeartbeat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_door_msgs__msg__SupervisorHeartbeat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__copy(
  const rmf_door_msgs__msg__SupervisorHeartbeat__Sequence * input,
  rmf_door_msgs__msg__SupervisorHeartbeat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_door_msgs__msg__SupervisorHeartbeat);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_door_msgs__msg__SupervisorHeartbeat * data =
      (rmf_door_msgs__msg__SupervisorHeartbeat *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_door_msgs__msg__SupervisorHeartbeat__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_door_msgs__msg__SupervisorHeartbeat__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_door_msgs__msg__SupervisorHeartbeat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
