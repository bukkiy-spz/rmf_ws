// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/DispatchStates.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/dispatch_states__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `active`
// Member `finished`
#include "rmf_task_msgs/msg/detail/dispatch_state__functions.h"

bool
rmf_task_msgs__msg__DispatchStates__init(rmf_task_msgs__msg__DispatchStates * msg)
{
  if (!msg) {
    return false;
  }
  // active
  if (!rmf_task_msgs__msg__DispatchState__Sequence__init(&msg->active, 0)) {
    rmf_task_msgs__msg__DispatchStates__fini(msg);
    return false;
  }
  // finished
  if (!rmf_task_msgs__msg__DispatchState__Sequence__init(&msg->finished, 0)) {
    rmf_task_msgs__msg__DispatchStates__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__DispatchStates__fini(rmf_task_msgs__msg__DispatchStates * msg)
{
  if (!msg) {
    return;
  }
  // active
  rmf_task_msgs__msg__DispatchState__Sequence__fini(&msg->active);
  // finished
  rmf_task_msgs__msg__DispatchState__Sequence__fini(&msg->finished);
}

bool
rmf_task_msgs__msg__DispatchStates__are_equal(const rmf_task_msgs__msg__DispatchStates * lhs, const rmf_task_msgs__msg__DispatchStates * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // active
  if (!rmf_task_msgs__msg__DispatchState__Sequence__are_equal(
      &(lhs->active), &(rhs->active)))
  {
    return false;
  }
  // finished
  if (!rmf_task_msgs__msg__DispatchState__Sequence__are_equal(
      &(lhs->finished), &(rhs->finished)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__DispatchStates__copy(
  const rmf_task_msgs__msg__DispatchStates * input,
  rmf_task_msgs__msg__DispatchStates * output)
{
  if (!input || !output) {
    return false;
  }
  // active
  if (!rmf_task_msgs__msg__DispatchState__Sequence__copy(
      &(input->active), &(output->active)))
  {
    return false;
  }
  // finished
  if (!rmf_task_msgs__msg__DispatchState__Sequence__copy(
      &(input->finished), &(output->finished)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__DispatchStates *
rmf_task_msgs__msg__DispatchStates__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__DispatchStates * msg = (rmf_task_msgs__msg__DispatchStates *)allocator.allocate(sizeof(rmf_task_msgs__msg__DispatchStates), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__DispatchStates));
  bool success = rmf_task_msgs__msg__DispatchStates__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__DispatchStates__destroy(rmf_task_msgs__msg__DispatchStates * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__DispatchStates__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__DispatchStates__Sequence__init(rmf_task_msgs__msg__DispatchStates__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__DispatchStates * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__DispatchStates *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__DispatchStates), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__DispatchStates__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__DispatchStates__fini(&data[i - 1]);
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
rmf_task_msgs__msg__DispatchStates__Sequence__fini(rmf_task_msgs__msg__DispatchStates__Sequence * array)
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
      rmf_task_msgs__msg__DispatchStates__fini(&array->data[i]);
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

rmf_task_msgs__msg__DispatchStates__Sequence *
rmf_task_msgs__msg__DispatchStates__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__DispatchStates__Sequence * array = (rmf_task_msgs__msg__DispatchStates__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__DispatchStates__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__DispatchStates__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__DispatchStates__Sequence__destroy(rmf_task_msgs__msg__DispatchStates__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__DispatchStates__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__DispatchStates__Sequence__are_equal(const rmf_task_msgs__msg__DispatchStates__Sequence * lhs, const rmf_task_msgs__msg__DispatchStates__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__DispatchStates__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__DispatchStates__Sequence__copy(
  const rmf_task_msgs__msg__DispatchStates__Sequence * input,
  rmf_task_msgs__msg__DispatchStates__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__DispatchStates);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__DispatchStates * data =
      (rmf_task_msgs__msg__DispatchStates *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__DispatchStates__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__DispatchStates__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__DispatchStates__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
