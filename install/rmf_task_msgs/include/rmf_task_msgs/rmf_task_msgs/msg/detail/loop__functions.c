// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/Loop.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/loop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `task_id`
// Member `robot_type`
// Member `start_name`
// Member `finish_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_task_msgs__msg__Loop__init(rmf_task_msgs__msg__Loop * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__Loop__fini(msg);
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__init(&msg->robot_type)) {
    rmf_task_msgs__msg__Loop__fini(msg);
    return false;
  }
  // num_loops
  // start_name
  if (!rosidl_runtime_c__String__init(&msg->start_name)) {
    rmf_task_msgs__msg__Loop__fini(msg);
    return false;
  }
  // finish_name
  if (!rosidl_runtime_c__String__init(&msg->finish_name)) {
    rmf_task_msgs__msg__Loop__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__Loop__fini(rmf_task_msgs__msg__Loop * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // robot_type
  rosidl_runtime_c__String__fini(&msg->robot_type);
  // num_loops
  // start_name
  rosidl_runtime_c__String__fini(&msg->start_name);
  // finish_name
  rosidl_runtime_c__String__fini(&msg->finish_name);
}

bool
rmf_task_msgs__msg__Loop__are_equal(const rmf_task_msgs__msg__Loop * lhs, const rmf_task_msgs__msg__Loop * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_type), &(rhs->robot_type)))
  {
    return false;
  }
  // num_loops
  if (lhs->num_loops != rhs->num_loops) {
    return false;
  }
  // start_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->start_name), &(rhs->start_name)))
  {
    return false;
  }
  // finish_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->finish_name), &(rhs->finish_name)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__Loop__copy(
  const rmf_task_msgs__msg__Loop * input,
  rmf_task_msgs__msg__Loop * output)
{
  if (!input || !output) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // robot_type
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_type), &(output->robot_type)))
  {
    return false;
  }
  // num_loops
  output->num_loops = input->num_loops;
  // start_name
  if (!rosidl_runtime_c__String__copy(
      &(input->start_name), &(output->start_name)))
  {
    return false;
  }
  // finish_name
  if (!rosidl_runtime_c__String__copy(
      &(input->finish_name), &(output->finish_name)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__Loop *
rmf_task_msgs__msg__Loop__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Loop * msg = (rmf_task_msgs__msg__Loop *)allocator.allocate(sizeof(rmf_task_msgs__msg__Loop), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__Loop));
  bool success = rmf_task_msgs__msg__Loop__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__Loop__destroy(rmf_task_msgs__msg__Loop * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__Loop__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__Loop__Sequence__init(rmf_task_msgs__msg__Loop__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Loop * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__Loop *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__Loop), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__Loop__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__Loop__fini(&data[i - 1]);
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
rmf_task_msgs__msg__Loop__Sequence__fini(rmf_task_msgs__msg__Loop__Sequence * array)
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
      rmf_task_msgs__msg__Loop__fini(&array->data[i]);
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

rmf_task_msgs__msg__Loop__Sequence *
rmf_task_msgs__msg__Loop__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__Loop__Sequence * array = (rmf_task_msgs__msg__Loop__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__Loop__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__Loop__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__Loop__Sequence__destroy(rmf_task_msgs__msg__Loop__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__Loop__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__Loop__Sequence__are_equal(const rmf_task_msgs__msg__Loop__Sequence * lhs, const rmf_task_msgs__msg__Loop__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__Loop__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__Loop__Sequence__copy(
  const rmf_task_msgs__msg__Loop__Sequence * input,
  rmf_task_msgs__msg__Loop__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__Loop);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__Loop * data =
      (rmf_task_msgs__msg__Loop *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__Loop__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__Loop__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__Loop__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
