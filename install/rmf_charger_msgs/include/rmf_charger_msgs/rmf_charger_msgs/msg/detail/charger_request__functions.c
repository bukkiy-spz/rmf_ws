// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_charger_msgs:msg/ChargerRequest.idl
// generated code does not contain a copyright notice
#include "rmf_charger_msgs/msg/detail/charger_request__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `charger_name`
// Member `fleet_name`
// Member `robot_name`
// Member `request_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `start_timeout`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
rmf_charger_msgs__msg__ChargerRequest__init(rmf_charger_msgs__msg__ChargerRequest * msg)
{
  if (!msg) {
    return false;
  }
  // charger_name
  if (!rosidl_runtime_c__String__init(&msg->charger_name)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  // start_timeout
  if (!builtin_interfaces__msg__Duration__init(&msg->start_timeout)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
    return false;
  }
  return true;
}

void
rmf_charger_msgs__msg__ChargerRequest__fini(rmf_charger_msgs__msg__ChargerRequest * msg)
{
  if (!msg) {
    return;
  }
  // charger_name
  rosidl_runtime_c__String__fini(&msg->charger_name);
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // start_timeout
  builtin_interfaces__msg__Duration__fini(&msg->start_timeout);
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
}

bool
rmf_charger_msgs__msg__ChargerRequest__are_equal(const rmf_charger_msgs__msg__ChargerRequest * lhs, const rmf_charger_msgs__msg__ChargerRequest * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // charger_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->charger_name), &(rhs->charger_name)))
  {
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
  // start_timeout
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->start_timeout), &(rhs->start_timeout)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_id), &(rhs->request_id)))
  {
    return false;
  }
  return true;
}

bool
rmf_charger_msgs__msg__ChargerRequest__copy(
  const rmf_charger_msgs__msg__ChargerRequest * input,
  rmf_charger_msgs__msg__ChargerRequest * output)
{
  if (!input || !output) {
    return false;
  }
  // charger_name
  if (!rosidl_runtime_c__String__copy(
      &(input->charger_name), &(output->charger_name)))
  {
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
  // start_timeout
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->start_timeout), &(output->start_timeout)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__copy(
      &(input->request_id), &(output->request_id)))
  {
    return false;
  }
  return true;
}

rmf_charger_msgs__msg__ChargerRequest *
rmf_charger_msgs__msg__ChargerRequest__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_charger_msgs__msg__ChargerRequest * msg = (rmf_charger_msgs__msg__ChargerRequest *)allocator.allocate(sizeof(rmf_charger_msgs__msg__ChargerRequest), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_charger_msgs__msg__ChargerRequest));
  bool success = rmf_charger_msgs__msg__ChargerRequest__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_charger_msgs__msg__ChargerRequest__destroy(rmf_charger_msgs__msg__ChargerRequest * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_charger_msgs__msg__ChargerRequest__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_charger_msgs__msg__ChargerRequest__Sequence__init(rmf_charger_msgs__msg__ChargerRequest__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_charger_msgs__msg__ChargerRequest * data = NULL;

  if (size) {
    data = (rmf_charger_msgs__msg__ChargerRequest *)allocator.zero_allocate(size, sizeof(rmf_charger_msgs__msg__ChargerRequest), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_charger_msgs__msg__ChargerRequest__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_charger_msgs__msg__ChargerRequest__fini(&data[i - 1]);
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
rmf_charger_msgs__msg__ChargerRequest__Sequence__fini(rmf_charger_msgs__msg__ChargerRequest__Sequence * array)
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
      rmf_charger_msgs__msg__ChargerRequest__fini(&array->data[i]);
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

rmf_charger_msgs__msg__ChargerRequest__Sequence *
rmf_charger_msgs__msg__ChargerRequest__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_charger_msgs__msg__ChargerRequest__Sequence * array = (rmf_charger_msgs__msg__ChargerRequest__Sequence *)allocator.allocate(sizeof(rmf_charger_msgs__msg__ChargerRequest__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_charger_msgs__msg__ChargerRequest__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_charger_msgs__msg__ChargerRequest__Sequence__destroy(rmf_charger_msgs__msg__ChargerRequest__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_charger_msgs__msg__ChargerRequest__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_charger_msgs__msg__ChargerRequest__Sequence__are_equal(const rmf_charger_msgs__msg__ChargerRequest__Sequence * lhs, const rmf_charger_msgs__msg__ChargerRequest__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_charger_msgs__msg__ChargerRequest__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_charger_msgs__msg__ChargerRequest__Sequence__copy(
  const rmf_charger_msgs__msg__ChargerRequest__Sequence * input,
  rmf_charger_msgs__msg__ChargerRequest__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_charger_msgs__msg__ChargerRequest);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_charger_msgs__msg__ChargerRequest * data =
      (rmf_charger_msgs__msg__ChargerRequest *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_charger_msgs__msg__ChargerRequest__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_charger_msgs__msg__ChargerRequest__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_charger_msgs__msg__ChargerRequest__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
