// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertAction.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/msg/detail/delivery_alert_action__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
rmf_fleet_msgs__msg__DeliveryAlertAction__init(rmf_fleet_msgs__msg__DeliveryAlertAction * msg)
{
  if (!msg) {
    return false;
  }
  // value
  return true;
}

void
rmf_fleet_msgs__msg__DeliveryAlertAction__fini(rmf_fleet_msgs__msg__DeliveryAlertAction * msg)
{
  if (!msg) {
    return;
  }
  // value
}

bool
rmf_fleet_msgs__msg__DeliveryAlertAction__are_equal(const rmf_fleet_msgs__msg__DeliveryAlertAction * lhs, const rmf_fleet_msgs__msg__DeliveryAlertAction * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value
  if (lhs->value != rhs->value) {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__msg__DeliveryAlertAction__copy(
  const rmf_fleet_msgs__msg__DeliveryAlertAction * input,
  rmf_fleet_msgs__msg__DeliveryAlertAction * output)
{
  if (!input || !output) {
    return false;
  }
  // value
  output->value = input->value;
  return true;
}

rmf_fleet_msgs__msg__DeliveryAlertAction *
rmf_fleet_msgs__msg__DeliveryAlertAction__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__DeliveryAlertAction * msg = (rmf_fleet_msgs__msg__DeliveryAlertAction *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__DeliveryAlertAction), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__msg__DeliveryAlertAction));
  bool success = rmf_fleet_msgs__msg__DeliveryAlertAction__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__msg__DeliveryAlertAction__destroy(rmf_fleet_msgs__msg__DeliveryAlertAction * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__msg__DeliveryAlertAction__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__init(rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__DeliveryAlertAction * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__msg__DeliveryAlertAction *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__msg__DeliveryAlertAction), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__msg__DeliveryAlertAction__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__msg__DeliveryAlertAction__fini(&data[i - 1]);
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
rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__fini(rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence * array)
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
      rmf_fleet_msgs__msg__DeliveryAlertAction__fini(&array->data[i]);
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

rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence *
rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence * array = (rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__destroy(rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__are_equal(const rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence * lhs, const rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__msg__DeliveryAlertAction__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__copy(
  const rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence * input,
  rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__msg__DeliveryAlertAction);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__msg__DeliveryAlertAction * data =
      (rmf_fleet_msgs__msg__DeliveryAlertAction *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__msg__DeliveryAlertAction__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__msg__DeliveryAlertAction__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__msg__DeliveryAlertAction__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
