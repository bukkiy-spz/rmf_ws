// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/TaskSummary.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/task_summary__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fleet_name`
// Member `task_id`
// Member `status`
// Member `robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `task_profile`
#include "rmf_task_msgs/msg/detail/task_profile__functions.h"
// Member `submission_time`
// Member `start_time`
// Member `end_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rmf_task_msgs__msg__TaskSummary__init(rmf_task_msgs__msg__TaskSummary * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
    return false;
  }
  // task_profile
  if (!rmf_task_msgs__msg__TaskProfile__init(&msg->task_profile)) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
    return false;
  }
  // state
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
    return false;
  }
  // submission_time
  if (!builtin_interfaces__msg__Time__init(&msg->submission_time)) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__init(&msg->start_time)) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__init(&msg->end_time)) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__init(&msg->robot_name)) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__TaskSummary__fini(rmf_task_msgs__msg__TaskSummary * msg)
{
  if (!msg) {
    return;
  }
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
  // task_profile
  rmf_task_msgs__msg__TaskProfile__fini(&msg->task_profile);
  // state
  // status
  rosidl_runtime_c__String__fini(&msg->status);
  // submission_time
  builtin_interfaces__msg__Time__fini(&msg->submission_time);
  // start_time
  builtin_interfaces__msg__Time__fini(&msg->start_time);
  // end_time
  builtin_interfaces__msg__Time__fini(&msg->end_time);
  // robot_name
  rosidl_runtime_c__String__fini(&msg->robot_name);
}

bool
rmf_task_msgs__msg__TaskSummary__are_equal(const rmf_task_msgs__msg__TaskSummary * lhs, const rmf_task_msgs__msg__TaskSummary * rhs)
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
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  // task_profile
  if (!rmf_task_msgs__msg__TaskProfile__are_equal(
      &(lhs->task_profile), &(rhs->task_profile)))
  {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->status), &(rhs->status)))
  {
    return false;
  }
  // submission_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->submission_time), &(rhs->submission_time)))
  {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->start_time), &(rhs->start_time)))
  {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->end_time), &(rhs->end_time)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->robot_name), &(rhs->robot_name)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__TaskSummary__copy(
  const rmf_task_msgs__msg__TaskSummary * input,
  rmf_task_msgs__msg__TaskSummary * output)
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
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  // task_profile
  if (!rmf_task_msgs__msg__TaskProfile__copy(
      &(input->task_profile), &(output->task_profile)))
  {
    return false;
  }
  // state
  output->state = input->state;
  // status
  if (!rosidl_runtime_c__String__copy(
      &(input->status), &(output->status)))
  {
    return false;
  }
  // submission_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->submission_time), &(output->submission_time)))
  {
    return false;
  }
  // start_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->start_time), &(output->start_time)))
  {
    return false;
  }
  // end_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->end_time), &(output->end_time)))
  {
    return false;
  }
  // robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->robot_name), &(output->robot_name)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__TaskSummary *
rmf_task_msgs__msg__TaskSummary__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__TaskSummary * msg = (rmf_task_msgs__msg__TaskSummary *)allocator.allocate(sizeof(rmf_task_msgs__msg__TaskSummary), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__TaskSummary));
  bool success = rmf_task_msgs__msg__TaskSummary__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__TaskSummary__destroy(rmf_task_msgs__msg__TaskSummary * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__TaskSummary__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__TaskSummary__Sequence__init(rmf_task_msgs__msg__TaskSummary__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__TaskSummary * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__TaskSummary *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__TaskSummary), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__TaskSummary__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__TaskSummary__fini(&data[i - 1]);
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
rmf_task_msgs__msg__TaskSummary__Sequence__fini(rmf_task_msgs__msg__TaskSummary__Sequence * array)
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
      rmf_task_msgs__msg__TaskSummary__fini(&array->data[i]);
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

rmf_task_msgs__msg__TaskSummary__Sequence *
rmf_task_msgs__msg__TaskSummary__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__TaskSummary__Sequence * array = (rmf_task_msgs__msg__TaskSummary__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__TaskSummary__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__TaskSummary__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__TaskSummary__Sequence__destroy(rmf_task_msgs__msg__TaskSummary__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__TaskSummary__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__TaskSummary__Sequence__are_equal(const rmf_task_msgs__msg__TaskSummary__Sequence * lhs, const rmf_task_msgs__msg__TaskSummary__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__TaskSummary__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__TaskSummary__Sequence__copy(
  const rmf_task_msgs__msg__TaskSummary__Sequence * input,
  rmf_task_msgs__msg__TaskSummary__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__TaskSummary);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__TaskSummary * data =
      (rmf_task_msgs__msg__TaskSummary *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__TaskSummary__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__TaskSummary__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__TaskSummary__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
