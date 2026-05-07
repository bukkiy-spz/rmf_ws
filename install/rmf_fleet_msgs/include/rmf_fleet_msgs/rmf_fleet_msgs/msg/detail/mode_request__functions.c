// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/ModeRequest.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/mode_request__functions.h"

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
// Member `mode`
#include "rmf_fleet_msgs/msg/detail/robot_mode__functions.h"
// Member `parameters`
#include "rmf_fleet_msgs/msg/detail/mode_parameter__functions.h"

bool
rmf_fleet_msgs__msg__ModeRequest__init(rmf_fleet_msgs__msg__ModeRequest * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_fleet_msgs__msg__ModeRequest__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_fleet_msgs__msg__ModeRequest__fini(msg);
    return false;
  }
  // mode
  if (!rmf_fleet_msgs__msg__RobotMode__init(&msg->mode)) {
    rmf_fleet_msgs__msg__ModeRequest__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_fleet_msgs__msg__ModeRequest__fini(msg);
    return false;
  }
  // parameters
  if (!rmf_fleet_msgs__msg__ModeParameter__Sequence__init(&msg->parameters, 0)) {
    rmf_fleet_msgs__msg__ModeRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__ModeRequest__fini(rmf_fleet_msgs__msg__ModeRequest * msg)
{
  if (!msg) {
    return;
  }
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // mode
  rmf_fleet_msgs__msg__RobotMode__fini(&msg->mode);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // parameters
  rmf_fleet_msgs__msg__ModeParameter__Sequence__fini(&msg->parameters);
}

bool
rmf_fleet_msgs__msg__ModeRequest__are_equal(const rmf_fleet_msgs__msg__ModeRequest * lhs, const rmf_fleet_msgs__msg__ModeRequest * rhs)
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
  // mode
  if (!rmf_fleet_msgs__msg__RobotMode__are_equal(
      &(lhs->mode), &(rhs->mode)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // parameters
  if (!rmf_fleet_msgs__msg__ModeParameter__Sequence__are_equal(
      &(lhs->parameters), &(rhs->parameters)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__ModeRequest__copy(
  const rmf_fleet_msgs__msg__ModeRequest * input,
  rmf_fleet_msgs__msg__ModeRequest * output)
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
  // mode
  if (!rmf_fleet_msgs__msg__RobotMode__copy(
      &(input->mode), &(output->mode)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // parameters
  if (!rmf_fleet_msgs__msg__ModeParameter__Sequence__copy(
      &(input->parameters), &(output->parameters)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__ModeRequest *
rmf_fleet_msgs__msg__ModeRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__ModeRequest * msg = (rmf_fleet_msgs__msg__ModeRequest *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__ModeRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__ModeRequest));
  bool success = rmf_fleet_msgs__msg__ModeRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__ModeRequest__destroy(rmf_fleet_msgs__msg__ModeRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__ModeRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__ModeRequest__Sequence__init(rmf_fleet_msgs__msg__ModeRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__ModeRequest * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__ModeRequest *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__ModeRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__ModeRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__ModeRequest__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__ModeRequest__Sequence__fini(rmf_fleet_msgs__msg__ModeRequest__Sequence * array)
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
      rmf_fleet_msgs__msg__ModeRequest__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__ModeRequest__Sequence *
rmf_fleet_msgs__msg__ModeRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__ModeRequest__Sequence * array = (rmf_fleet_msgs__msg__ModeRequest__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__ModeRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__ModeRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__ModeRequest__Sequence__destroy(rmf_fleet_msgs__msg__ModeRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__ModeRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__ModeRequest__Sequence__are_equal(const rmf_fleet_msgs__msg__ModeRequest__Sequence * lhs, const rmf_fleet_msgs__msg__ModeRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__ModeRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__ModeRequest__Sequence__copy(
  const rmf_fleet_msgs__msg__ModeRequest__Sequence * input,
  rmf_fleet_msgs__msg__ModeRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__ModeRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__ModeRequest * data =
      (rmf_fleet_msgs__msg__ModeRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__ModeRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__ModeRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__ModeRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
