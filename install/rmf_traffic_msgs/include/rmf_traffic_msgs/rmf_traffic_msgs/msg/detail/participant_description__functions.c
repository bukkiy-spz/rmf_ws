// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/ParticipantDescription.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/participant_description__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
// Member `owner`
#include "rosidl_runtime_c/string_functions.h"
// Member `profile`
#include "rmf_traffic_msgs/msg/detail/profile__functions.h"

bool
rmf_traffic_msgs__msg__ParticipantDescription__init(rmf_traffic_msgs__msg__ParticipantDescription * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    rmf_traffic_msgs__msg__ParticipantDescription__fini(msg);
    return false;
  }
  // owner
  if (!rosidl_runtime_c__String__init(&msg->owner)) {
    rmf_traffic_msgs__msg__ParticipantDescription__fini(msg);
    return false;
  }
  // responsiveness
  // profile
  if (!rmf_traffic_msgs__msg__Profile__init(&msg->profile)) {
    rmf_traffic_msgs__msg__ParticipantDescription__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__ParticipantDescription__fini(rmf_traffic_msgs__msg__ParticipantDescription * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // owner
  rosidl_runtime_c__String__fini(&msg->owner);
  // responsiveness
  // profile
  rmf_traffic_msgs__msg__Profile__fini(&msg->profile);
}

bool
rmf_traffic_msgs__msg__ParticipantDescription__are_equal(const rmf_traffic_msgs__msg__ParticipantDescription * lhs, const rmf_traffic_msgs__msg__ParticipantDescription * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // owner
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->owner), &(rhs->owner)))
  {
    return false;
  }
  // responsiveness
  if (lhs->responsiveness != rhs->responsiveness) {
    return false;
  }
  // profile
  if (!rmf_traffic_msgs__msg__Profile__are_equal(
      &(lhs->profile), &(rhs->profile)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ParticipantDescription__copy(
  const rmf_traffic_msgs__msg__ParticipantDescription * input,
  rmf_traffic_msgs__msg__ParticipantDescription * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // owner
  if (!rosidl_runtime_c__String__copy(
      &(input->owner), &(output->owner)))
  {
    return false;
  }
  // responsiveness
  output->responsiveness = input->responsiveness;
  // profile
  if (!rmf_traffic_msgs__msg__Profile__copy(
      &(input->profile), &(output->profile)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__ParticipantDescription *
rmf_traffic_msgs__msg__ParticipantDescription__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ParticipantDescription * msg = (rmf_traffic_msgs__msg__ParticipantDescription *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ParticipantDescription), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__ParticipantDescription));
  bool success = rmf_traffic_msgs__msg__ParticipantDescription__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__ParticipantDescription__destroy(rmf_traffic_msgs__msg__ParticipantDescription * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__ParticipantDescription__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__init(rmf_traffic_msgs__msg__ParticipantDescription__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ParticipantDescription * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__ParticipantDescription *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__ParticipantDescription), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__ParticipantDescription__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__ParticipantDescription__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__fini(rmf_traffic_msgs__msg__ParticipantDescription__Sequence * array)
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
      rmf_traffic_msgs__msg__ParticipantDescription__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__ParticipantDescription__Sequence *
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__ParticipantDescription__Sequence * array = (rmf_traffic_msgs__msg__ParticipantDescription__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__ParticipantDescription__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__ParticipantDescription__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__destroy(rmf_traffic_msgs__msg__ParticipantDescription__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__ParticipantDescription__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__are_equal(const rmf_traffic_msgs__msg__ParticipantDescription__Sequence * lhs, const rmf_traffic_msgs__msg__ParticipantDescription__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__ParticipantDescription__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__ParticipantDescription__Sequence__copy(
  const rmf_traffic_msgs__msg__ParticipantDescription__Sequence * input,
  rmf_traffic_msgs__msg__ParticipantDescription__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__ParticipantDescription);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__ParticipantDescription * data =
      (rmf_traffic_msgs__msg__ParticipantDescription *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__ParticipantDescription__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__ParticipantDescription__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__ParticipantDescription__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
