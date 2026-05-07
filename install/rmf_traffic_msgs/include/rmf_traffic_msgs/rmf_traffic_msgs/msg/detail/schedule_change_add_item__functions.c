// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ScheduleChangeAddItem.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/schedule_change_add_item__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `route`
#include "rmf_traffic_msgs/msg/detail/route__functions.h"

bool
rmf_traffic_msgs__msg__ScheduleChangeAddItem__init(rmf_traffic_msgs__msg__ScheduleChangeAddItem * msg)
{
  if (!msg) {
    return false;
  }
  // route_id
  // storage_id
  // route
  if (!rmf_traffic_msgs__msg__Route__init(&msg->route)) {
    rmf_traffic_msgs__msg__ScheduleChangeAddItem__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__ScheduleChangeAddItem__fini(rmf_traffic_msgs__msg__ScheduleChangeAddItem * msg)
{
  if (!msg) {
    return;
  }
  // route_id
  // storage_id
  // route
  rmf_traffic_msgs__msg__Route__fini(&msg->route);
}

bool
rmf_traffic_msgs__msg__ScheduleChangeAddItem__are_equal(const rmf_traffic_msgs__msg__ScheduleChangeAddItem * lhs, const rmf_traffic_msgs__msg__ScheduleChangeAddItem * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // route_id
  if (lhs->route_id != rhs->route_id) {
    return false;
  }
  // storage_id
  if (lhs->storage_id != rhs->storage_id) {
    return false;
  }
  // route
  if (!rmf_traffic_msgs__msg__Route__are_equal(
      &(lhs->route), &(rhs->route)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ScheduleChangeAddItem__copy(
  const rmf_traffic_msgs__msg__ScheduleChangeAddItem * input,
  rmf_traffic_msgs__msg__ScheduleChangeAddItem * output)
{
  if (!input || !output) {
    return false;
  }
  // route_id
  output->route_id = input->route_id;
  // storage_id
  output->storage_id = input->storage_id;
  // route
  if (!rmf_traffic_msgs__msg__Route__copy(
      &(input->route), &(output->route)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__ScheduleChangeAddItem *
rmf_traffic_msgs__msg__ScheduleChangeAddItem__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleChangeAddItem * msg = (rmf_traffic_msgs__msg__ScheduleChangeAddItem *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ScheduleChangeAddItem), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ScheduleChangeAddItem));
  bool success = rmf_traffic_msgs__msg__ScheduleChangeAddItem__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ScheduleChangeAddItem__destroy(rmf_traffic_msgs__msg__ScheduleChangeAddItem * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__ScheduleChangeAddItem__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__init(rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleChangeAddItem * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__ScheduleChangeAddItem *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__ScheduleChangeAddItem), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ScheduleChangeAddItem__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ScheduleChangeAddItem__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__fini(rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence * array)
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
      rmf_traffic_msgs__msg__ScheduleChangeAddItem__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence *
rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence * array = (rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__destroy(rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__are_equal(const rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence * lhs, const rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__ScheduleChangeAddItem__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__copy(
  const rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence * input,
  rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__ScheduleChangeAddItem);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__ScheduleChangeAddItem * data =
      (rmf_traffic_msgs__msg__ScheduleChangeAddItem *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__ScheduleChangeAddItem__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__ScheduleChangeAddItem__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__ScheduleChangeAddItem__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
