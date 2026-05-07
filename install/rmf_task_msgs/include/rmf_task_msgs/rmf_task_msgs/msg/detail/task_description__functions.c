// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/TaskDescription.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/task_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `start_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `priority`
#include "rmf_task_msgs/msg/detail/priority__functions.h"
// Member `task_type`
#include "rmf_task_msgs/msg/detail/task_type__functions.h"
// Member `station`
#include "rmf_task_msgs/msg/detail/station__functions.h"
// Member `loop`
#include "rmf_task_msgs/msg/detail/loop__functions.h"
// Member `delivery`
#include "rmf_task_msgs/msg/detail/delivery__functions.h"
// Member `clean`
#include "rmf_task_msgs/msg/detail/clean__functions.h"

bool
rmf_task_msgs__msg__TaskDescription__init(rmf_task_msgs__msg__TaskDescription * msg)
{
  if (!msg) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // priority
  if (!rmf_task_msgs__msg__Priority__init(&msg->priority)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // task_type
  if (!rmf_task_msgs__msg__TaskType__init(&msg->task_type)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // station
  if (!rmf_task_msgs__msg__Station__init(&msg->station)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // loop
  if (!rmf_task_msgs__msg__Loop__init(&msg->loop)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // delivery
  if (!rmf_task_msgs__msg__Delivery__init(&msg->delivery)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  // clean
  if (!rmf_task_msgs__msg__Clean__init(&msg->clean)) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__TaskDescription__fini(rmf_task_msgs__msg__TaskDescription * msg)
{
  if (!msg) {
    return;
  }
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // priority
  rmf_task_msgs__msg__Priority__fini(&msg->priority);
  // task_type
  rmf_task_msgs__msg__TaskType__fini(&msg->task_type);
  // station
  rmf_task_msgs__msg__Station__fini(&msg->station);
  // loop
  rmf_task_msgs__msg__Loop__fini(&msg->loop);
  // delivery
  rmf_task_msgs__msg__Delivery__fini(&msg->delivery);
  // clean
  rmf_task_msgs__msg__Clean__fini(&msg->clean);
}

bool
rmf_task_msgs__msg__TaskDescription__are_equal(const rmf_task_msgs__msg__TaskDescription * lhs, const rmf_task_msgs__msg__TaskDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // priority
  if (!rmf_task_msgs__msg__Priority__are_equal(
      &(lhs->priority), &(rhs->priority)))
  {
    return false;
  }
  // task_type
  if (!rmf_task_msgs__msg__TaskType__are_equal(
      &(lhs->task_type), &(rhs->task_type)))
  {
    return false;
  }
  // station
  if (!rmf_task_msgs__msg__Station__are_equal(
      &(lhs->station), &(rhs->station)))
  {
    return false;
  }
  // loop
  if (!rmf_task_msgs__msg__Loop__are_equal(
      &(lhs->loop), &(rhs->loop)))
  {
    return false;
  }
  // delivery
  if (!rmf_task_msgs__msg__Delivery__are_equal(
      &(lhs->delivery), &(rhs->delivery)))
  {
    return false;
  }
  // clean
  if (!rmf_task_msgs__msg__Clean__are_equal(
      &(lhs->clean), &(rhs->clean)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__TaskDescription__copy(
  const rmf_task_msgs__msg__TaskDescription * input,
  rmf_task_msgs__msg__TaskDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // priority
  if (!rmf_task_msgs__msg__Priority__copy(
      &(input->priority), &(output->priority)))
  {
    return false;
  }
  // task_type
  if (!rmf_task_msgs__msg__TaskType__copy(
      &(input->task_type), &(output->task_type)))
  {
    return false;
  }
  // station
  if (!rmf_task_msgs__msg__Station__copy(
      &(input->station), &(output->station)))
  {
    return false;
  }
  // loop
  if (!rmf_task_msgs__msg__Loop__copy(
      &(input->loop), &(output->loop)))
  {
    return false;
  }
  // delivery
  if (!rmf_task_msgs__msg__Delivery__copy(
      &(input->delivery), &(output->delivery)))
  {
    return false;
  }
  // clean
  if (!rmf_task_msgs__msg__Clean__copy(
      &(input->clean), &(output->clean)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__TaskDescription *
rmf_task_msgs__msg__TaskDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__TaskDescription * msg = (rmf_task_msgs__msg__TaskDescription *)allocator.allocate(sizeof(rmf_task_msgs__msg__TaskDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__TaskDescription));
  bool success = rmf_task_msgs__msg__TaskDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__TaskDescription__destroy(rmf_task_msgs__msg__TaskDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__TaskDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__TaskDescription__Sequence__init(rmf_task_msgs__msg__TaskDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__TaskDescription * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__TaskDescription *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__TaskDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__TaskDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__TaskDescription__fini(&data[i - 1]);
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
rmf_task_msgs__msg__TaskDescription__Sequence__fini(rmf_task_msgs__msg__TaskDescription__Sequence * array)
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
      rmf_task_msgs__msg__TaskDescription__fini(&array->data[i]);
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

rmf_task_msgs__msg__TaskDescription__Sequence *
rmf_task_msgs__msg__TaskDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__TaskDescription__Sequence * array = (rmf_task_msgs__msg__TaskDescription__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__TaskDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__TaskDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__TaskDescription__Sequence__destroy(rmf_task_msgs__msg__TaskDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__TaskDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__TaskDescription__Sequence__are_equal(const rmf_task_msgs__msg__TaskDescription__Sequence * lhs, const rmf_task_msgs__msg__TaskDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__TaskDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__TaskDescription__Sequence__copy(
  const rmf_task_msgs__msg__TaskDescription__Sequence * input,
  rmf_task_msgs__msg__TaskDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__TaskDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__TaskDescription * data =
      (rmf_task_msgs__msg__TaskDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__TaskDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__TaskDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__TaskDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
