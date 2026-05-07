// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_fleet_msgs:srv/LiftClearance.idl
// generated code does not contain a copyright notice
#include "rmf_fleet_msgs/srv/detail/lift_clearance__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `robot_name`
// Member `lift_name`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_fleet_msgs__srv__LiftClearance_Request__init(rmf_fleet_msgs__srv__LiftClearance_Request * msg)
{
  if (!msg) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_fleet_msgs__srv__LiftClearance_Request__fini(msg);
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__init(&msg->lift_name)) {
    rmf_fleet_msgs__srv__LiftClearance_Request__fini(msg);
    return false;
  }
  return true;
}

void
rmf_fleet_msgs__srv__LiftClearance_Request__fini(rmf_fleet_msgs__srv__LiftClearance_Request * msg)
{
  if (!msg) {
    return;
  }
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
  // lift_name
  rosidl_runtime_c__String__fini(&msg->lift_name);
}

bool
rmf_fleet_msgs__srv__LiftClearance_Request__are_equal(const rmf_fleet_msgs__srv__LiftClearance_Request * lhs, const rmf_fleet_msgs__srv__LiftClearance_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->lift_name), &(rhs->lift_name)))
  {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__srv__LiftClearance_Request__copy(
  const rmf_fleet_msgs__srv__LiftClearance_Request * input,
  rmf_fleet_msgs__srv__LiftClearance_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  // lift_name
  if (!rosidl_runtime_c__String__copy(
      &(input->lift_name), &(output->lift_name)))
  {
    return false;
  }
  return true;
}

rmf_fleet_msgs__srv__LiftClearance_Request *
rmf_fleet_msgs__srv__LiftClearance_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__srv__LiftClearance_Request * msg = (rmf_fleet_msgs__srv__LiftClearance_Request *)allocator.allocate(sizeof(rmf_fleet_msgs__srv__LiftClearance_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__srv__LiftClearance_Request));
  bool success = rmf_fleet_msgs__srv__LiftClearance_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__srv__LiftClearance_Request__destroy(rmf_fleet_msgs__srv__LiftClearance_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__srv__LiftClearance_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__srv__LiftClearance_Request * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__srv__LiftClearance_Request *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__srv__LiftClearance_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__srv__LiftClearance_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__srv__LiftClearance_Request__fini(&data[i - 1]);
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
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array)
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
      rmf_fleet_msgs__srv__LiftClearance_Request__fini(&array->data[i]);
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

rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array = (rmf_fleet_msgs__srv__LiftClearance_Request__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__destroy(rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__are_equal(const rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * lhs, const rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__srv__LiftClearance_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__copy(
  const rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * input,
  rmf_fleet_msgs__srv__LiftClearance_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__srv__LiftClearance_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__srv__LiftClearance_Request * data =
      (rmf_fleet_msgs__srv__LiftClearance_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__srv__LiftClearance_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__srv__LiftClearance_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__srv__LiftClearance_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rmf_fleet_msgs__srv__LiftClearance_Response__init(rmf_fleet_msgs__srv__LiftClearance_Response * msg)
{
  if (!msg) {
    return false;
  }
  // decision
  return true;
}

void
rmf_fleet_msgs__srv__LiftClearance_Response__fini(rmf_fleet_msgs__srv__LiftClearance_Response * msg)
{
  if (!msg) {
    return;
  }
  // decision
}

bool
rmf_fleet_msgs__srv__LiftClearance_Response__are_equal(const rmf_fleet_msgs__srv__LiftClearance_Response * lhs, const rmf_fleet_msgs__srv__LiftClearance_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // decision
  if (lhs->decision != rhs->decision) {
    return false;
  }
  return true;
}

bool
rmf_fleet_msgs__srv__LiftClearance_Response__copy(
  const rmf_fleet_msgs__srv__LiftClearance_Response * input,
  rmf_fleet_msgs__srv__LiftClearance_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // decision
  output->decision = input->decision;
  return true;
}

rmf_fleet_msgs__srv__LiftClearance_Response *
rmf_fleet_msgs__srv__LiftClearance_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__srv__LiftClearance_Response * msg = (rmf_fleet_msgs__srv__LiftClearance_Response *)allocator.allocate(sizeof(rmf_fleet_msgs__srv__LiftClearance_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_fleet_msgs__srv__LiftClearance_Response));
  bool success = rmf_fleet_msgs__srv__LiftClearance_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_fleet_msgs__srv__LiftClearance_Response__destroy(rmf_fleet_msgs__srv__LiftClearance_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_fleet_msgs__srv__LiftClearance_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__srv__LiftClearance_Response * data = NULL;

  if (size) {
    data = (rmf_fleet_msgs__srv__LiftClearance_Response *)allocator.zero_allocate(size, sizeof(rmf_fleet_msgs__srv__LiftClearance_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_fleet_msgs__srv__LiftClearance_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_fleet_msgs__srv__LiftClearance_Response__fini(&data[i - 1]);
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
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array)
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
      rmf_fleet_msgs__srv__LiftClearance_Response__fini(&array->data[i]);
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

rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array = (rmf_fleet_msgs__srv__LiftClearance_Response__Sequence *)allocator.allocate(sizeof(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__destroy(rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__are_equal(const rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * lhs, const rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_fleet_msgs__srv__LiftClearance_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__copy(
  const rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * input,
  rmf_fleet_msgs__srv__LiftClearance_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_fleet_msgs__srv__LiftClearance_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_fleet_msgs__srv__LiftClearance_Response * data =
      (rmf_fleet_msgs__srv__LiftClearance_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_fleet_msgs__srv__LiftClearance_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_fleet_msgs__srv__LiftClearance_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_fleet_msgs__srv__LiftClearance_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
