// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_scheduler_msgs:msg/TriggerState.idl
// generated code does not contain a copyright notice
#include "rmf_scheduler_msgs/msg/detail/trigger_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_scheduler_msgs__msg__TriggerState__init(rmf_scheduler_msgs__msg__TriggerState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_scheduler_msgs__msg__TriggerState__fini(msg);
    return false;
  }
  // last_modified
  // last_ran
  // status
  return true;
}

void
rmf_scheduler_msgs__msg__TriggerState__fini(rmf_scheduler_msgs__msg__TriggerState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // last_modified
  // last_ran
  // status
}

bool
rmf_scheduler_msgs__msg__TriggerState__are_equal(const rmf_scheduler_msgs__msg__TriggerState * lhs, const rmf_scheduler_msgs__msg__TriggerState * rhs)
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
  // last_modified
  if (lhs->last_modified != rhs->last_modified) {
    return false;
  }
  // last_ran
  if (lhs->last_ran != rhs->last_ran) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
rmf_scheduler_msgs__msg__TriggerState__copy(
  const rmf_scheduler_msgs__msg__TriggerState * input,
  rmf_scheduler_msgs__msg__TriggerState * output)
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
  // last_modified
  output->last_modified = input->last_modified;
  // last_ran
  output->last_ran = input->last_ran;
  // status
  output->status = input->status;
  return true;
}

rmf_scheduler_msgs__msg__TriggerState *
rmf_scheduler_msgs__msg__TriggerState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__TriggerState * msg = (rmf_scheduler_msgs__msg__TriggerState *)allocator.allocate(sizeof(rmf_scheduler_msgs__msg__TriggerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_scheduler_msgs__msg__TriggerState));
  bool success = rmf_scheduler_msgs__msg__TriggerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_scheduler_msgs__msg__TriggerState__destroy(rmf_scheduler_msgs__msg__TriggerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_scheduler_msgs__msg__TriggerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_scheduler_msgs__msg__TriggerState__Sequence__init(rmf_scheduler_msgs__msg__TriggerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__TriggerState * data = NULL;

  if (size) {
    data = (rmf_scheduler_msgs__msg__TriggerState *)allocator.zero_allocate(size, sizeof(rmf_scheduler_msgs__msg__TriggerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_scheduler_msgs__msg__TriggerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_scheduler_msgs__msg__TriggerState__fini(&data[i - 1]);
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
rmf_scheduler_msgs__msg__TriggerState__Sequence__fini(rmf_scheduler_msgs__msg__TriggerState__Sequence * array)
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
      rmf_scheduler_msgs__msg__TriggerState__fini(&array->data[i]);
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

rmf_scheduler_msgs__msg__TriggerState__Sequence *
rmf_scheduler_msgs__msg__TriggerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__TriggerState__Sequence * array = (rmf_scheduler_msgs__msg__TriggerState__Sequence *)allocator.allocate(sizeof(rmf_scheduler_msgs__msg__TriggerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_scheduler_msgs__msg__TriggerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_scheduler_msgs__msg__TriggerState__Sequence__destroy(rmf_scheduler_msgs__msg__TriggerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_scheduler_msgs__msg__TriggerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_scheduler_msgs__msg__TriggerState__Sequence__are_equal(const rmf_scheduler_msgs__msg__TriggerState__Sequence * lhs, const rmf_scheduler_msgs__msg__TriggerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_scheduler_msgs__msg__TriggerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_scheduler_msgs__msg__TriggerState__Sequence__copy(
  const rmf_scheduler_msgs__msg__TriggerState__Sequence * input,
  rmf_scheduler_msgs__msg__TriggerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_scheduler_msgs__msg__TriggerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_scheduler_msgs__msg__TriggerState * data =
      (rmf_scheduler_msgs__msg__TriggerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_scheduler_msgs__msg__TriggerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_scheduler_msgs__msg__TriggerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_scheduler_msgs__msg__TriggerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
