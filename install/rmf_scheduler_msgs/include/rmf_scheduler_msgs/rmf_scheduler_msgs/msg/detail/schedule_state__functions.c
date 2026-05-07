// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_scheduler_msgs:msg/ScheduleState.idl
// generated code does not contain a copyright notice
#include "rmf_scheduler_msgs/msg/detail/schedule_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_scheduler_msgs__msg__ScheduleState__init(rmf_scheduler_msgs__msg__ScheduleState * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_scheduler_msgs__msg__ScheduleState__fini(msg);
    return false;
  }
  // last_modified
  // last_ran
  // next_run
  // status
  return true;
}

void
rmf_scheduler_msgs__msg__ScheduleState__fini(rmf_scheduler_msgs__msg__ScheduleState * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // last_modified
  // last_ran
  // next_run
  // status
}

bool
rmf_scheduler_msgs__msg__ScheduleState__are_equal(const rmf_scheduler_msgs__msg__ScheduleState * lhs, const rmf_scheduler_msgs__msg__ScheduleState * rhs)
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
  // next_run
  if (lhs->next_run != rhs->next_run) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
rmf_scheduler_msgs__msg__ScheduleState__copy(
  const rmf_scheduler_msgs__msg__ScheduleState * input,
  rmf_scheduler_msgs__msg__ScheduleState * output)
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
  // next_run
  output->next_run = input->next_run;
  // status
  output->status = input->status;
  return true;
}

rmf_scheduler_msgs__msg__ScheduleState *
rmf_scheduler_msgs__msg__ScheduleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__ScheduleState * msg = (rmf_scheduler_msgs__msg__ScheduleState *)allocator.allocate(sizeof(rmf_scheduler_msgs__msg__ScheduleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_scheduler_msgs__msg__ScheduleState));
  bool success = rmf_scheduler_msgs__msg__ScheduleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_scheduler_msgs__msg__ScheduleState__destroy(rmf_scheduler_msgs__msg__ScheduleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_scheduler_msgs__msg__ScheduleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_scheduler_msgs__msg__ScheduleState__Sequence__init(rmf_scheduler_msgs__msg__ScheduleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__ScheduleState * data = NULL;

  if (size) {
    data = (rmf_scheduler_msgs__msg__ScheduleState *)allocator.zero_allocate(size, sizeof(rmf_scheduler_msgs__msg__ScheduleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_scheduler_msgs__msg__ScheduleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_scheduler_msgs__msg__ScheduleState__fini(&data[i - 1]);
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
rmf_scheduler_msgs__msg__ScheduleState__Sequence__fini(rmf_scheduler_msgs__msg__ScheduleState__Sequence * array)
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
      rmf_scheduler_msgs__msg__ScheduleState__fini(&array->data[i]);
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

rmf_scheduler_msgs__msg__ScheduleState__Sequence *
rmf_scheduler_msgs__msg__ScheduleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_scheduler_msgs__msg__ScheduleState__Sequence * array = (rmf_scheduler_msgs__msg__ScheduleState__Sequence *)allocator.allocate(sizeof(rmf_scheduler_msgs__msg__ScheduleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_scheduler_msgs__msg__ScheduleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_scheduler_msgs__msg__ScheduleState__Sequence__destroy(rmf_scheduler_msgs__msg__ScheduleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_scheduler_msgs__msg__ScheduleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_scheduler_msgs__msg__ScheduleState__Sequence__are_equal(const rmf_scheduler_msgs__msg__ScheduleState__Sequence * lhs, const rmf_scheduler_msgs__msg__ScheduleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_scheduler_msgs__msg__ScheduleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_scheduler_msgs__msg__ScheduleState__Sequence__copy(
  const rmf_scheduler_msgs__msg__ScheduleState__Sequence * input,
  rmf_scheduler_msgs__msg__ScheduleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_scheduler_msgs__msg__ScheduleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_scheduler_msgs__msg__ScheduleState * data =
      (rmf_scheduler_msgs__msg__ScheduleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_scheduler_msgs__msg__ScheduleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_scheduler_msgs__msg__ScheduleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_scheduler_msgs__msg__ScheduleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
