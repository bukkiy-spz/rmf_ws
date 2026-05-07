// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/MirrorUpdate.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/mirror_update__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `node_id`
#include "rmf_traffic_msgs/msg/detail/schedule_identity__functions.h"
// Member `patch`
#include "rmf_traffic_msgs/msg/detail/schedule_patch__functions.h"

bool
rmf_traffic_msgs__msg__MirrorUpdate__init(rmf_traffic_msgs__msg__MirrorUpdate * msg)
{
  if (!msg) {
    return false;
  }
  // node_id
  if (!rmf_traffic_msgs__msg__ScheduleIdentity__init(&msg->node_id)) {
    rmf_traffic_msgs__msg__MirrorUpdate__fini(msg);
    return false;
  }
  // database_version
  // patch
  if (!rmf_traffic_msgs__msg__SchedulePatch__init(&msg->patch)) {
    rmf_traffic_msgs__msg__MirrorUpdate__fini(msg);
    return false;
  }
  // is_remedial_update
  return true;
}

void
rmf_traffic_msgs__msg__MirrorUpdate__fini(rmf_traffic_msgs__msg__MirrorUpdate * msg)
{
  if (!msg) {
    return;
  }
  // node_id
  rmf_traffic_msgs__msg__ScheduleIdentity__fini(&msg->node_id);
  // database_version
  // patch
  rmf_traffic_msgs__msg__SchedulePatch__fini(&msg->patch);
  // is_remedial_update
}

bool
rmf_traffic_msgs__msg__MirrorUpdate__are_equal(const rmf_traffic_msgs__msg__MirrorUpdate * lhs, const rmf_traffic_msgs__msg__MirrorUpdate * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_id
  if (!rmf_traffic_msgs__msg__ScheduleIdentity__are_equal(
      &(lhs->node_id), &(rhs->node_id)))
  {
    return false;
  }
  // database_version
  if (lhs->database_version != rhs->database_version) {
    return false;
  }
  // patch
  if (!rmf_traffic_msgs__msg__SchedulePatch__are_equal(
      &(lhs->patch), &(rhs->patch)))
  {
    return false;
  }
  // is_remedial_update
  if (lhs->is_remedial_update != rhs->is_remedial_update) {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__MirrorUpdate__copy(
  const rmf_traffic_msgs__msg__MirrorUpdate * input,
  rmf_traffic_msgs__msg__MirrorUpdate * output)
{
  if (!input || !output) {
    return false;
  }
  // node_id
  if (!rmf_traffic_msgs__msg__ScheduleIdentity__copy(
      &(input->node_id), &(output->node_id)))
  {
    return false;
  }
  // database_version
  output->database_version = input->database_version;
  // patch
  if (!rmf_traffic_msgs__msg__SchedulePatch__copy(
      &(input->patch), &(output->patch)))
  {
    return false;
  }
  // is_remedial_update
  output->is_remedial_update = input->is_remedial_update;
  return true;
}

rmf_traffic_msgs__msg__MirrorUpdate *
rmf_traffic_msgs__msg__MirrorUpdate__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__MirrorUpdate * msg = (rmf_traffic_msgs__msg__MirrorUpdate *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__MirrorUpdate), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__MirrorUpdate));
  bool success = rmf_traffic_msgs__msg__MirrorUpdate__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__MirrorUpdate__destroy(rmf_traffic_msgs__msg__MirrorUpdate * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__MirrorUpdate__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__init(rmf_traffic_msgs__msg__MirrorUpdate__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__MirrorUpdate * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__MirrorUpdate *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__MirrorUpdate), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__MirrorUpdate__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__MirrorUpdate__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__fini(rmf_traffic_msgs__msg__MirrorUpdate__Sequence * array)
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
      rmf_traffic_msgs__msg__MirrorUpdate__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__MirrorUpdate__Sequence *
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__MirrorUpdate__Sequence * array = (rmf_traffic_msgs__msg__MirrorUpdate__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__MirrorUpdate__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__MirrorUpdate__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__destroy(rmf_traffic_msgs__msg__MirrorUpdate__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__MirrorUpdate__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__are_equal(const rmf_traffic_msgs__msg__MirrorUpdate__Sequence * lhs, const rmf_traffic_msgs__msg__MirrorUpdate__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__MirrorUpdate__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__MirrorUpdate__Sequence__copy(
  const rmf_traffic_msgs__msg__MirrorUpdate__Sequence * input,
  rmf_traffic_msgs__msg__MirrorUpdate__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__MirrorUpdate);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__MirrorUpdate * data =
      (rmf_traffic_msgs__msg__MirrorUpdate *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__MirrorUpdate__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__MirrorUpdate__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__MirrorUpdate__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
