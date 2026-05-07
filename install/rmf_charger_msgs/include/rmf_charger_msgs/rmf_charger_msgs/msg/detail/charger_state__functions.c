// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_charger_msgs:msg/ChargerState.idl
// generated code does not contain a copyright notice
#include "rmf_charger_msgs/msg/detail/charger_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `charger_time`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `charger_name`
// Member `error_message`
// Member `request_id`
// Member `robot_fleet`
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `time_to_fully_charged`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
rmf_charger_msgs__msg__ChargerState__init(rmf_charger_msgs__msg__ChargerState * msg)
{
  if (!msg) {
    return false;
  }
  // charger_time
  if (!builtin_interfaces__msg__Time__init(&msg->charger_time)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // state
  // charger_name
  if (!rosidl_runtime_c__String__init(&msg->charger_name)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__init(&msg->error_message)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__init(&msg->request_id)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // robot_fleet
  if (!rosidl_runtime_c__String__init(&msg->robot_fleet)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  // time_to_fully_charged
  if (!builtin_interfaces__msg__Duration__init(&msg->time_to_fully_charged)) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
    return false;
  }
  return true;
}

void
rmf_charger_msgs__msg__ChargerState__fini(rmf_charger_msgs__msg__ChargerState * msg)
{
  if (!msg) {
    return;
  }
  // charger_time
  builtin_interfaces__msg__Time__fini(&msg->charger_time);
  // state
  // charger_name
  rosidl_runtime_c__String__fini(&msg->charger_name);
  // error_message
  rosidl_runtime_c__String__fini(&msg->error_message);
  // request_id
  rosidl_runtime_c__String__fini(&msg->request_id);
  // robot_fleet
  rosidl_runtime_c__String__fini(&msg->robot_fleet);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // time_to_fully_charged
  builtin_interfaces__msg__Duration__fini(&msg->time_to_fully_charged);
}

bool
rmf_charger_msgs__msg__ChargerState__are_equal(const rmf_charger_msgs__msg__ChargerState * lhs, const rmf_charger_msgs__msg__ChargerState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // charger_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->charger_time), &(rhs->charger_time)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // charger_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->charger_name), &(rhs->charger_name)))
  {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_message), &(rhs->error_message)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->request_id), &(rhs->request_id)))
  {
    return false;
  }
  // robot_fleet
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_fleet), &(rhs->robot_fleet)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // time_to_fully_charged
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->time_to_fully_charged), &(rhs->time_to_fully_charged)))
  {
    return false;
  }
  return true;
}

bool
rmf_charger_msgs__msg__ChargerState__copy(
  const rmf_charger_msgs__msg__ChargerState * input,
  rmf_charger_msgs__msg__ChargerState * output)
{
  if (!input || !output) {
    return false;
  }
  // charger_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->charger_time), &(output->charger_time)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // charger_name
  if (!rosidl_runtime_c__String__copy(
      &(input->charger_name), &(output->charger_name)))
  {
    return false;
  }
  // error_message
  if (!rosidl_runtime_c__String__copy(
      &(input->error_message), &(output->error_message)))
  {
    return false;
  }
  // request_id
  if (!rosidl_runtime_c__String__copy(
      &(input->request_id), &(output->request_id)))
  {
    return false;
  }
  // robot_fleet
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_fleet), &(output->robot_fleet)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // time_to_fully_charged
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->time_to_fully_charged), &(output->time_to_fully_charged)))
  {
    return false;
  }
  return true;
}

rmf_charger_msgs__msg__ChargerState *
rmf_charger_msgs__msg__ChargerState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_charger_msgs__msg__ChargerState * msg = (rmf_charger_msgs__msg__ChargerState *)allocator.allocate(sizeof(rmf_charger_msgs__msg__ChargerState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_charger_msgs__msg__ChargerState));
  bool success = rmf_charger_msgs__msg__ChargerState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_charger_msgs__msg__ChargerState__destroy(rmf_charger_msgs__msg__ChargerState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_charger_msgs__msg__ChargerState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_charger_msgs__msg__ChargerState__Sequence__init(rmf_charger_msgs__msg__ChargerState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_charger_msgs__msg__ChargerState * data = NULL;

  if (size) {
    data = (rmf_charger_msgs__msg__ChargerState *)allocator.zero_allocate(size, sizeof(rmf_charger_msgs__msg__ChargerState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_charger_msgs__msg__ChargerState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_charger_msgs__msg__ChargerState__fini(&data[i - 1]);
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
rmf_charger_msgs__msg__ChargerState__Sequence__fini(rmf_charger_msgs__msg__ChargerState__Sequence * array)
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
      rmf_charger_msgs__msg__ChargerState__fini(&array->data[i]);
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

rmf_charger_msgs__msg__ChargerState__Sequence *
rmf_charger_msgs__msg__ChargerState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_charger_msgs__msg__ChargerState__Sequence * array = (rmf_charger_msgs__msg__ChargerState__Sequence *)allocator.allocate(sizeof(rmf_charger_msgs__msg__ChargerState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_charger_msgs__msg__ChargerState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_charger_msgs__msg__ChargerState__Sequence__destroy(rmf_charger_msgs__msg__ChargerState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_charger_msgs__msg__ChargerState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_charger_msgs__msg__ChargerState__Sequence__are_equal(const rmf_charger_msgs__msg__ChargerState__Sequence * lhs, const rmf_charger_msgs__msg__ChargerState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_charger_msgs__msg__ChargerState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_charger_msgs__msg__ChargerState__Sequence__copy(
  const rmf_charger_msgs__msg__ChargerState__Sequence * input,
  rmf_charger_msgs__msg__ChargerState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_charger_msgs__msg__ChargerState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_charger_msgs__msg__ChargerState * data =
      (rmf_charger_msgs__msg__ChargerState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_charger_msgs__msg__ChargerState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_charger_msgs__msg__ChargerState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_charger_msgs__msg__ChargerState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
