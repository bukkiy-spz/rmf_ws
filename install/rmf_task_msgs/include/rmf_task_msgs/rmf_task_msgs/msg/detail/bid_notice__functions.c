// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/BidNotice.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/bid_notice__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `request`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `time_window`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
rmf_task_msgs__msg__BidNotice__init(rmf_task_msgs__msg__BidNotice * msg)
{
  if (!msg) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__init(&msg->request)) {
    rmf_task_msgs__msg__BidNotice__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__BidNotice__fini(msg);
    return false;
  }
  // time_window
  if (!builtin_interfaces__msg__Duration__init(&msg->time_window)) {
    rmf_task_msgs__msg__BidNotice__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__BidNotice__fini(rmf_task_msgs__msg__BidNotice * msg)
{
  if (!msg) {
    return;
  }
  // request
  rosidl_runtime_c__String__fini(&msg->request);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // time_window
  builtin_interfaces__msg__Duration__fini(&msg->time_window);
}

bool
rmf_task_msgs__msg__BidNotice__are_equal(const rmf_task_msgs__msg__BidNotice * lhs, const rmf_task_msgs__msg__BidNotice * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // time_window
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_window), &(rhs->time_window)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__BidNotice__copy(
  const rmf_task_msgs__msg__BidNotice * input,
  rmf_task_msgs__msg__BidNotice * output)
{
  if (!input || !output) {
    return false;
  }
  // request
  if (!rosidl_runtime_c__String__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // time_window
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_window), &(output->time_window)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__BidNotice *
rmf_task_msgs__msg__BidNotice__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidNotice * msg = (rmf_task_msgs__msg__BidNotice *)allocator.allocate(sizeof(rmf_task_msgs__msg__BidNotice), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__BidNotice));
  bool success = rmf_task_msgs__msg__BidNotice__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__BidNotice__destroy(rmf_task_msgs__msg__BidNotice * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__BidNotice__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__BidNotice__Sequence__init(rmf_task_msgs__msg__BidNotice__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidNotice * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__BidNotice *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__BidNotice), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__BidNotice__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__BidNotice__fini(&data[i - 1]);
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
rmf_task_msgs__msg__BidNotice__Sequence__fini(rmf_task_msgs__msg__BidNotice__Sequence * array)
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
      rmf_task_msgs__msg__BidNotice__fini(&array->data[i]);
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

rmf_task_msgs__msg__BidNotice__Sequence *
rmf_task_msgs__msg__BidNotice__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidNotice__Sequence * array = (rmf_task_msgs__msg__BidNotice__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__BidNotice__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__BidNotice__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__BidNotice__Sequence__destroy(rmf_task_msgs__msg__BidNotice__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__BidNotice__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__BidNotice__Sequence__are_equal(const rmf_task_msgs__msg__BidNotice__Sequence * lhs, const rmf_task_msgs__msg__BidNotice__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__BidNotice__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__BidNotice__Sequence__copy(
  const rmf_task_msgs__msg__BidNotice__Sequence * input,
  rmf_task_msgs__msg__BidNotice__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__BidNotice);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__BidNotice * data =
      (rmf_task_msgs__msg__BidNotice *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__BidNotice__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__BidNotice__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__BidNotice__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
