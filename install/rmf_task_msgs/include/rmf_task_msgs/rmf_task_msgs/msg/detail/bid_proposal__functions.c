// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_task_msgs:msg/BidProposal.idl
// generated code does not contain a copyright notice
#include "rmf_task_msgs/msg/detail/bid_proposal__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `fleet_name`
// Member `expected_robot_name`
#include "rosidl_runtime_c/string_functions.h"
// Member `finish_time`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
rmf_task_msgs__msg__BidProposal__init(rmf_task_msgs__msg__BidProposal * msg)
{
  if (!msg) {
    return false;
  }
  // fleet_name
  if (!rosidl_runtime_c__String__init(&msg->fleet_name)) {
    rmf_task_msgs__msg__BidProposal__fini(msg);
    return false;
  }
  // expected_robot_name
  if (!rosidl_runtime_c__String__init(&msg->expected_robot_name)) {
    rmf_task_msgs__msg__BidProposal__fini(msg);
    return false;
  }
  // prev_cost
  // new_cost
  // finish_time
  if (!builtin_interfaces__msg__Time__init(&msg->finish_time)) {
    rmf_task_msgs__msg__BidProposal__fini(msg);
    return false;
  }
  return true;
}

void
rmf_task_msgs__msg__BidProposal__fini(rmf_task_msgs__msg__BidProposal * msg)
{
  if (!msg) {
    return;
  }
  // fleet_name
  rosidl_runtime_c__String__fini(&msg->fleet_name);
  // expected_robot_name
  rosidl_runtime_c__String__fini(&msg->expected_robot_name);
  // prev_cost
  // new_cost
  // finish_time
  builtin_interfaces__msg__Time__fini(&msg->finish_time);
}

bool
rmf_task_msgs__msg__BidProposal__are_equal(const rmf_task_msgs__msg__BidProposal * lhs, const rmf_task_msgs__msg__BidProposal * rhs)
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
  // expected_robot_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->expected_robot_name), &(rhs->expected_robot_name)))
  {
    return false;
  }
  // prev_cost
  if (lhs->prev_cost != rhs->prev_cost) {
    return false;
  }
  // new_cost
  if (lhs->new_cost != rhs->new_cost) {
    return false;
  }
  // finish_time
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->finish_time), &(rhs->finish_time)))
  {
    return false;
  }
  return true;
}

bool
rmf_task_msgs__msg__BidProposal__copy(
  const rmf_task_msgs__msg__BidProposal * input,
  rmf_task_msgs__msg__BidProposal * output)
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
  // expected_robot_name
  if (!rosidl_runtime_c__String__copy(
      &(input->expected_robot_name), &(output->expected_robot_name)))
  {
    return false;
  }
  // prev_cost
  output->prev_cost = input->prev_cost;
  // new_cost
  output->new_cost = input->new_cost;
  // finish_time
  if (!builtin_interfaces__msg__Time__copy(
      &(input->finish_time), &(output->finish_time)))
  {
    return false;
  }
  return true;
}

rmf_task_msgs__msg__BidProposal *
rmf_task_msgs__msg__BidProposal__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidProposal * msg = (rmf_task_msgs__msg__BidProposal *)allocator.allocate(sizeof(rmf_task_msgs__msg__BidProposal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_task_msgs__msg__BidProposal));
  bool success = rmf_task_msgs__msg__BidProposal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_task_msgs__msg__BidProposal__destroy(rmf_task_msgs__msg__BidProposal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_task_msgs__msg__BidProposal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_task_msgs__msg__BidProposal__Sequence__init(rmf_task_msgs__msg__BidProposal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidProposal * data = NULL;

  if (size) {
    data = (rmf_task_msgs__msg__BidProposal *)allocator.zero_allocate(size, sizeof(rmf_task_msgs__msg__BidProposal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_task_msgs__msg__BidProposal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_task_msgs__msg__BidProposal__fini(&data[i - 1]);
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
rmf_task_msgs__msg__BidProposal__Sequence__fini(rmf_task_msgs__msg__BidProposal__Sequence * array)
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
      rmf_task_msgs__msg__BidProposal__fini(&array->data[i]);
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

rmf_task_msgs__msg__BidProposal__Sequence *
rmf_task_msgs__msg__BidProposal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_task_msgs__msg__BidProposal__Sequence * array = (rmf_task_msgs__msg__BidProposal__Sequence *)allocator.allocate(sizeof(rmf_task_msgs__msg__BidProposal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_task_msgs__msg__BidProposal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_task_msgs__msg__BidProposal__Sequence__destroy(rmf_task_msgs__msg__BidProposal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_task_msgs__msg__BidProposal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_task_msgs__msg__BidProposal__Sequence__are_equal(const rmf_task_msgs__msg__BidProposal__Sequence * lhs, const rmf_task_msgs__msg__BidProposal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_task_msgs__msg__BidProposal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_task_msgs__msg__BidProposal__Sequence__copy(
  const rmf_task_msgs__msg__BidProposal__Sequence * input,
  rmf_task_msgs__msg__BidProposal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_task_msgs__msg__BidProposal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_task_msgs__msg__BidProposal * data =
      (rmf_task_msgs__msg__BidProposal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_task_msgs__msg__BidProposal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_task_msgs__msg__BidProposal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_task_msgs__msg__BidProposal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
