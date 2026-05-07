// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/PathRequest.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/path_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fleet_name`
// Member `robot_name`
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `path`
#include "rmf_fleet_msgs/msg/detail/location__functions.h"

bool
rmf_fleet_msgs__msg__PathRequest__init(rmf_fleet_msgs__msg__PathRequest * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
    return false;
  }
  // path
  if (!rmf_fleet_msgs__msg__Location__Sequence__init(&msg->path, 0)) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__PathRequest__fini(rmf_fleet_msgs__msg__PathRequest * msg)
{
  if (!msg) {
    return;
  }
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // path
  rmf_fleet_msgs__msg__Location__Sequence__fini(&msg->path);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
}

bool
rmf_fleet_msgs__msg__PathRequest__are_equal(const rmf_fleet_msgs__msg__PathRequest * lhs, const rmf_fleet_msgs__msg__PathRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->fleet_name), &(rhs->fleet_name)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // path
  if (!rmf_fleet_msgs__msg__Location__Sequence__are_equal(
      &(lhs->path), &(rhs->path)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__PathRequest__copy(
  const rmf_fleet_msgs__msg__PathRequest * input,
  rmf_fleet_msgs__msg__PathRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__copy(
      &(input->fleet_name), &(output->fleet_name)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // path
  if (!rmf_fleet_msgs__msg__Location__Sequence__copy(
      &(input->path), &(output->path)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__PathRequest *
rmf_fleet_msgs__msg__PathRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__PathRequest * msg = (rmf_fleet_msgs__msg__PathRequest *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__PathRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__PathRequest));
  bool success = rmf_fleet_msgs__msg__PathRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__PathRequest__destroy(rmf_fleet_msgs__msg__PathRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__PathRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__PathRequest__Sequence__init(rmf_fleet_msgs__msg__PathRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__PathRequest * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__PathRequest *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__PathRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__PathRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__PathRequest__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__PathRequest__Sequence__fini(rmf_fleet_msgs__msg__PathRequest__Sequence * array)
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
      rmf_fleet_msgs__msg__PathRequest__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__PathRequest__Sequence *
rmf_fleet_msgs__msg__PathRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__PathRequest__Sequence * array = (rmf_fleet_msgs__msg__PathRequest__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__PathRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__PathRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__PathRequest__Sequence__destroy(rmf_fleet_msgs__msg__PathRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__PathRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__PathRequest__Sequence__are_equal(const rmf_fleet_msgs__msg__PathRequest__Sequence * lhs, const rmf_fleet_msgs__msg__PathRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__PathRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__PathRequest__Sequence__copy(
  const rmf_fleet_msgs__msg__PathRequest__Sequence * input,
  rmf_fleet_msgs__msg__PathRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__PathRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__PathRequest * data =
      (rmf_fleet_msgs__msg__PathRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__PathRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__PathRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__PathRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
