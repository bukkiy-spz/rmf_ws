// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/DeliveryAlert.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/delivery_alert__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `id`
// Member `task_id`
// Member `message`
#include "rosidl_runtime_c/string_functions.h"
// Member `category`
#include "rmf_fleet_msgs/msg/detail/delivery_alert_category__functions.h"
// Member `tier`
#include "rmf_fleet_msgs/msg/detail/delivery_alert_tier__functions.h"
// Member `action`
#include "rmf_fleet_msgs/msg/detail/delivery_alert_action__functions.h"

bool
rmf_fleet_msgs__msg__DeliveryAlert__init(rmf_fleet_msgs__msg__DeliveryAlert * msg)
{
  if (!msg) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__init(&msg->id)) {
    rmf_fleet_msgs__msg__DeliveryAlert__fini(msg);
    return false;
  }
  // category
  if (!rmf_fleet_msgs__msg__DeliveryAlertCategory__init(&msg->category)) {
    rmf_fleet_msgs__msg__DeliveryAlert__fini(msg);
    return false;
  }
  // tier
  if (!rmf_fleet_msgs__msg__DeliveryAlertTier__init(&msg->tier)) {
    rmf_fleet_msgs__msg__DeliveryAlert__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_fleet_msgs__msg__DeliveryAlert__fini(msg);
    return false;
  }
  // action
  if (!rmf_fleet_msgs__msg__DeliveryAlertAction__init(&msg->action)) {
    rmf_fleet_msgs__msg__DeliveryAlert__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    rmf_fleet_msgs__msg__DeliveryAlert__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__msg__DeliveryAlert__fini(rmf_fleet_msgs__msg__DeliveryAlert * msg)
{
  if (!msg) {
    return;
  }
  // id
  rosidl_runtime_c__String__fini(&msg->id);
  // category
  rmf_fleet_msgs__msg__DeliveryAlertCategory__fini(&msg->category);
  // tier
  rmf_fleet_msgs__msg__DeliveryAlertTier__fini(&msg->tier);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // action
  rmf_fleet_msgs__msg__DeliveryAlertAction__fini(&msg->action);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
rmf_fleet_msgs__msg__DeliveryAlert__are_equal(const rmf_fleet_msgs__msg__DeliveryAlert * lhs, const rmf_fleet_msgs__msg__DeliveryAlert * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->id), &(rhs->id)))
  {
    return false;
  }
  // category
  if (!rmf_fleet_msgs__msg__DeliveryAlertCategory__are_equal(
      &(lhs->category), &(rhs->category)))
  {
    return false;
  }
  // tier
  if (!rmf_fleet_msgs__msg__DeliveryAlertTier__are_equal(
      &(lhs->tier), &(rhs->tier)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // action
  if (!rmf_fleet_msgs__msg__DeliveryAlertAction__are_equal(
      &(lhs->action), &(rhs->action)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__DeliveryAlert__copy(
  const rmf_fleet_msgs__msg__DeliveryAlert * input,
  rmf_fleet_msgs__msg__DeliveryAlert * output)
{
  if (!input || !output) {
    return false;
  }
  // id
  if (!rosidl_runtime_c__String__copy(
      &(input->id), &(output->id)))
  {
    return false;
  }
  // category
  if (!rmf_fleet_msgs__msg__DeliveryAlertCategory__copy(
      &(input->category), &(output->category)))
  {
    return false;
  }
  // tier
  if (!rmf_fleet_msgs__msg__DeliveryAlertTier__copy(
      &(input->tier), &(output->tier)))
  {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // action
  if (!rmf_fleet_msgs__msg__DeliveryAlertAction__copy(
      &(input->action), &(output->action)))
  {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__msg__DeliveryAlert *
rmf_fleet_msgs__msg__DeliveryAlert__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__DeliveryAlert * msg = (rmf_fleet_msgs__msg__DeliveryAlert *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__DeliveryAlert), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__DeliveryAlert));
  bool success = rmf_fleet_msgs__msg__DeliveryAlert__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__DeliveryAlert__destroy(rmf_fleet_msgs__msg__DeliveryAlert * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__DeliveryAlert__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__DeliveryAlert__Sequence__init(rmf_fleet_msgs__msg__DeliveryAlert__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__DeliveryAlert * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__DeliveryAlert *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__DeliveryAlert), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__DeliveryAlert__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__DeliveryAlert__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__DeliveryAlert__Sequence__fini(rmf_fleet_msgs__msg__DeliveryAlert__Sequence * array)
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
      rmf_fleet_msgs__msg__DeliveryAlert__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__DeliveryAlert__Sequence *
rmf_fleet_msgs__msg__DeliveryAlert__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__DeliveryAlert__Sequence * array = (rmf_fleet_msgs__msg__DeliveryAlert__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__DeliveryAlert__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__DeliveryAlert__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__DeliveryAlert__Sequence__destroy(rmf_fleet_msgs__msg__DeliveryAlert__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__DeliveryAlert__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__DeliveryAlert__Sequence__are_equal(const rmf_fleet_msgs__msg__DeliveryAlert__Sequence * lhs, const rmf_fleet_msgs__msg__DeliveryAlert__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__DeliveryAlert__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__DeliveryAlert__Sequence__copy(
  const rmf_fleet_msgs__msg__DeliveryAlert__Sequence * input,
  rmf_fleet_msgs__msg__DeliveryAlert__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__DeliveryAlert);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__DeliveryAlert * data =
      (rmf_fleet_msgs__msg__DeliveryAlert *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__DeliveryAlert__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__DeliveryAlert__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__DeliveryAlert__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
