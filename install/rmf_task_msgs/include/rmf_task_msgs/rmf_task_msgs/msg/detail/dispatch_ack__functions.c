// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/DispatchAck.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/dispatch_ack__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `errors`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__msg__DispatchAck__init(rmf_task_msgs__msg__DispatchAck * msg)
{
  if (!msg) {
    return false;
  }
  // dispatch_id
  // success
  // errors
  if (!rosidl_runtime_c__String__Sequence__init(&msg->errors, 0)) {
    rmf_task_msgs__msg__DispatchAck__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__DispatchAck__fini(rmf_task_msgs__msg__DispatchAck * msg)
{
  if (!msg) {
    return;
  }
  // dispatch_id
  // success
  // errors
  rosidl_runtime_c__String__Sequence__fini(&msg->errors);
}

bool
rmf_task_msgs__msg__DispatchAck__are_equal(const rmf_task_msgs__msg__DispatchAck * lhs, const rmf_task_msgs__msg__DispatchAck * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // dispatch_id
  if (lhs->dispatch_id != rhs->dispatch_id) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // errors
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->errors), &(rhs->errors)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__DispatchAck__copy(
  const rmf_task_msgs__msg__DispatchAck * input,
  rmf_task_msgs__msg__DispatchAck * output)
{
  if (!input || !output) {
    return false;
  }
  // dispatch_id
  output->dispatch_id = input->dispatch_id;
  // success
  output->success = input->success;
  // errors
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->errors), &(output->errors)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__DispatchAck *
rmf_task_msgs__msg__DispatchAck__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__DispatchAck * msg = (rmf_task_msgs__msg__DispatchAck *)allocator.allocate(sizeof(rmf_task_msgs__msg__DispatchAck), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__DispatchAck));
  bool success = rmf_task_msgs__msg__DispatchAck__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__DispatchAck__destroy(rmf_task_msgs__msg__DispatchAck * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__DispatchAck__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__DispatchAck__Sequence__init(rmf_task_msgs__msg__DispatchAck__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__DispatchAck * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__DispatchAck *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__DispatchAck), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__DispatchAck__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__DispatchAck__fini(&data[i - 1]);
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
rmf_task_msgs__msg__DispatchAck__Sequence__fini(rmf_task_msgs__msg__DispatchAck__Sequence * array)
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
      rmf_task_msgs__msg__DispatchAck__fini(&array->data[i]);
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

rmf_task_msgs__msg__DispatchAck__Sequence *
rmf_task_msgs__msg__DispatchAck__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__DispatchAck__Sequence * array = (rmf_task_msgs__msg__DispatchAck__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__DispatchAck__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__DispatchAck__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__DispatchAck__Sequence__destroy(rmf_task_msgs__msg__DispatchAck__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__DispatchAck__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__DispatchAck__Sequence__are_equal(const rmf_task_msgs__msg__DispatchAck__Sequence * lhs, const rmf_task_msgs__msg__DispatchAck__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__DispatchAck__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__DispatchAck__Sequence__copy(
  const rmf_task_msgs__msg__DispatchAck__Sequence * input,
  rmf_task_msgs__msg__DispatchAck__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__DispatchAck);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__DispatchAck * data =
      (rmf_task_msgs__msg__DispatchAck *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__DispatchAck__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__DispatchAck__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__DispatchAck__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
