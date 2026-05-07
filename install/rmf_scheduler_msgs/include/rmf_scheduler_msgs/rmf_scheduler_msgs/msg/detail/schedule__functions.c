// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_scheduler_msgs:msg/Schedule.idl
// generated code does not contain a copyright notice
#include "rmf_scheduler_msgs/msg/detail/schedule__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `schedule`
// Member `group`
#include "rosidl_runtime_c/string_functions.h"
// Member `payload`
#include "rmf_scheduler_msgs/msg/detail/payload__functions.h"

bool
rmf_scheduler_msgs__msg__Schedule__init(rmf_scheduler_msgs__msg__Schedule * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_scheduler_msgs__msg__Schedule__fini(msg);
    return false;
  }
  // created_at
  // schedule
  if (!rosidl_runtime_c__String__init(&msg->schedule)) {
    rmf_scheduler_msgs__msg__Schedule__fini(msg);
    return false;
  }
  // start_at
  // finish_at
  msg->finish_at = 9223372036854775807ll;
  // group
  if (!rosidl_runtime_c__String__init(&msg->group)) {
    rmf_scheduler_msgs__msg__Schedule__fini(msg);
    return false;
  }
  {
    bool success = rosidl_runtime_c__String__assign(&msg->group, "default");
    if (!success) {
      goto abort_init_0;
    }
  }
  // payload
  if (!rmf_scheduler_msgs__msg__Payload__init(&msg->payload)) {
    rmf_scheduler_msgs__msg__Schedule__fini(msg);
    return false;
  }
  return true;
abort_init_0:
  return false;
}

void
rmf_scheduler_msgs__msg__Schedule__fini(rmf_scheduler_msgs__msg__Schedule * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // created_at
  // schedule
  rosidl_runtime_c__String__fini(&msg->schedule);
  // start_at
  // finish_at
  // group
  rosidl_runtime_c__String__fini(&msg->group);
  // payload
  rmf_scheduler_msgs__msg__Payload__fini(&msg->payload);
}

bool
rmf_scheduler_msgs__msg__Schedule__are_equal(const rmf_scheduler_msgs__msg__Schedule * lhs, const rmf_scheduler_msgs__msg__Schedule * rhs)
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
  // created_at
  if (lhs->created_at != rhs->created_at) {
    return false;
  }
  // schedule
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->schedule), &(rhs->schedule)))
  {
    return false;
  }
  // start_at
  if (lhs->start_at != rhs->start_at) {
    return false;
  }
  // finish_at
  if (lhs->finish_at != rhs->finish_at) {
    return false;
  }
  // group
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->group), &(rhs->group)))
  {
    return false;
  }
  // payload
  if (!rmf_scheduler_msgs__msg__Payload__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
rmf_scheduler_msgs__msg__Schedule__copy(
  const rmf_scheduler_msgs__msg__Schedule * input,
  rmf_scheduler_msgs__msg__Schedule * output)
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
  // created_at
  output->created_at = input->created_at;
  // schedule
  if (!rosidl_runtime_c__String__copy(
      &(input->schedule), &(output->schedule)))
  {
    return false;
  }
  // start_at
  output->start_at = input->start_at;
  // finish_at
  output->finish_at = input->finish_at;
  // group
  if (!rosidl_runtime_c__String__copy(
      &(input->group), &(output->group)))
  {
    return false;
  }
  // payload
  if (!rmf_scheduler_msgs__msg__Payload__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

rmf_scheduler_msgs__msg__Schedule *
rmf_scheduler_msgs__msg__Schedule__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__Schedule * msg = (rmf_scheduler_msgs__msg__Schedule *)allocator.allocate(sizeof(rmf_scheduler_msgs__msg__Schedule), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_scheduler_msgs__msg__Schedule));
  bool success = rmf_scheduler_msgs__msg__Schedule__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_scheduler_msgs__msg__Schedule__destroy(rmf_scheduler_msgs__msg__Schedule * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_scheduler_msgs__msg__Schedule__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_scheduler_msgs__msg__Schedule__Sequence__init(rmf_scheduler_msgs__msg__Schedule__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__Schedule * data = NULL;

  if (size) {
    data = (rmf_scheduler_msgs__msg__Schedule *)allocator.zero_allocate(size, sizeof(rmf_scheduler_msgs__msg__Schedule), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_scheduler_msgs__msg__Schedule__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_scheduler_msgs__msg__Schedule__fini(&data[i - 1]);
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
rmf_scheduler_msgs__msg__Schedule__Sequence__fini(rmf_scheduler_msgs__msg__Schedule__Sequence * array)
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
      rmf_scheduler_msgs__msg__Schedule__fini(&array->data[i]);
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

rmf_scheduler_msgs__msg__Schedule__Sequence *
rmf_scheduler_msgs__msg__Schedule__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__Schedule__Sequence * array = (rmf_scheduler_msgs__msg__Schedule__Sequence *)allocator.allocate(sizeof(rmf_scheduler_msgs__msg__Schedule__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_scheduler_msgs__msg__Schedule__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_scheduler_msgs__msg__Schedule__Sequence__destroy(rmf_scheduler_msgs__msg__Schedule__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_scheduler_msgs__msg__Schedule__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_scheduler_msgs__msg__Schedule__Sequence__are_equal(const rmf_scheduler_msgs__msg__Schedule__Sequence * lhs, const rmf_scheduler_msgs__msg__Schedule__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_scheduler_msgs__msg__Schedule__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_scheduler_msgs__msg__Schedule__Sequence__copy(
  const rmf_scheduler_msgs__msg__Schedule__Sequence * input,
  rmf_scheduler_msgs__msg__Schedule__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_scheduler_msgs__msg__Schedule);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_scheduler_msgs__msg__Schedule * data =
      (rmf_scheduler_msgs__msg__Schedule *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_scheduler_msgs__msg__Schedule__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_scheduler_msgs__msg__Schedule__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_scheduler_msgs__msg__Schedule__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
