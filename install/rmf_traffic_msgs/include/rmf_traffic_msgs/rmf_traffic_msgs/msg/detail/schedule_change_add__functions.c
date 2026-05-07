// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAdd.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_change_add__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `items`
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__functions.h"

bool
rmf_traffic_msgs__msg__ScheduleChangeAdd__init(rmf_traffic_msgs__msg__ScheduleChangeAdd * msg)
{
  if (!msg) {
    return false;
  }
  // plan_id
  // items
  if (!rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__init(&msg->items, 0)) {
    rmf_traffic_msgs__msg__ScheduleChangeAdd__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__ScheduleChangeAdd__fini(rmf_traffic_msgs__msg__ScheduleChangeAdd * msg)
{
  if (!msg) {
    return;
  }
  // plan_id
  // items
  rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__fini(&msg->items);
}

bool
rmf_traffic_msgs__msg__ScheduleChangeAdd__are_equal(const rmf_traffic_msgs__msg__ScheduleChangeAdd * lhs, const rmf_traffic_msgs__msg__ScheduleChangeAdd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // plan_id
  if (lhs->plan_id != rhs->plan_id) {
    return false;
  }
  // items
  if (!rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__are_equal(
      &(lhs->items), &(rhs->items)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ScheduleChangeAdd__copy(
  const rmf_traffic_msgs__msg__ScheduleChangeAdd * input,
  rmf_traffic_msgs__msg__ScheduleChangeAdd * output)
{
  if (!input || !output) {
    return false;
  }
  // plan_id
  output->plan_id = input->plan_id;
  // items
  if (!rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__copy(
      &(input->items), &(output->items)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__ScheduleChangeAdd *
rmf_traffic_msgs__msg__ScheduleChangeAdd__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleChangeAdd * msg = (rmf_traffic_msgs__msg__ScheduleChangeAdd *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ScheduleChangeAdd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ScheduleChangeAdd));
  bool success = rmf_traffic_msgs__msg__ScheduleChangeAdd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ScheduleChangeAdd__destroy(rmf_traffic_msgs__msg__ScheduleChangeAdd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__ScheduleChangeAdd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__init(rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleChangeAdd * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__ScheduleChangeAdd *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__ScheduleChangeAdd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ScheduleChangeAdd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ScheduleChangeAdd__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__fini(rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * array)
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
      rmf_traffic_msgs__msg__ScheduleChangeAdd__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence *
rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * array = (rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__destroy(rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__are_equal(const rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * lhs, const rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__ScheduleChangeAdd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__copy(
  const rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * input,
  rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__ScheduleChangeAdd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__ScheduleChangeAdd * data =
      (rmf_traffic_msgs__msg__ScheduleChangeAdd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__ScheduleChangeAdd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__ScheduleChangeAdd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__ScheduleChangeAdd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
