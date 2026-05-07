// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:msg/NegotiationTreeNode.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/msg/detail/negotiation_tree_node__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `key`
#include "rmf_traffic_msgs/msg/detail/negotiation_key__functions.h"
// Member `itinerary`
#include "rmf_traffic_msgs/msg/detail/route__functions.h"

bool
rmf_traffic_msgs__msg__NegotiationTreeNode__init(rmf_traffic_msgs__msg__NegotiationTreeNode * msg)
{
  if (!msg) {
    return false;
  }
  // parent
  // key
  if (!rmf_traffic_msgs__msg__NegotiationKey__init(&msg->key)) {
    rmf_traffic_msgs__msg__NegotiationTreeNode__fini(msg);
    return false;
  }
  // rejected
  // itinerary
  if (!rmf_traffic_msgs__msg__Route__Sequence__init(&msg->itinerary, 0)) {
    rmf_traffic_msgs__msg__NegotiationTreeNode__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__msg__NegotiationTreeNode__fini(rmf_traffic_msgs__msg__NegotiationTreeNode * msg)
{
  if (!msg) {
    return;
  }
  // parent
  // key
  rmf_traffic_msgs__msg__NegotiationKey__fini(&msg->key);
  // rejected
  // itinerary
  rmf_traffic_msgs__msg__Route__Sequence__fini(&msg->itinerary);
}

bool
rmf_traffic_msgs__msg__NegotiationTreeNode__are_equal(const rmf_traffic_msgs__msg__NegotiationTreeNode * lhs, const rmf_traffic_msgs__msg__NegotiationTreeNode * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // parent
  if (lhs->parent != rhs->parent) {
    return false;
  }
  // key
  if (!rmf_traffic_msgs__msg__NegotiationKey__are_equal(
      &(lhs->key), &(rhs->key)))
  {
    return false;
  }
  // rejected
  if (lhs->rejected != rhs->rejected) {
    return false;
  }
  // itinerary
  if (!rmf_traffic_msgs__msg__Route__Sequence__are_equal(
      &(lhs->itinerary), &(rhs->itinerary)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationTreeNode__copy(
  const rmf_traffic_msgs__msg__NegotiationTreeNode * input,
  rmf_traffic_msgs__msg__NegotiationTreeNode * output)
{
  if (!input || !output) {
    return false;
  }
  // parent
  output->parent = input->parent;
  // key
  if (!rmf_traffic_msgs__msg__NegotiationKey__copy(
      &(input->key), &(output->key)))
  {
    return false;
  }
  // rejected
  output->rejected = input->rejected;
  // itinerary
  if (!rmf_traffic_msgs__msg__Route__Sequence__copy(
      &(input->itinerary), &(output->itinerary)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__msg__NegotiationTreeNode *
rmf_traffic_msgs__msg__NegotiationTreeNode__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationTreeNode * msg = (rmf_traffic_msgs__msg__NegotiationTreeNode *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationTreeNode), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__msg__NegotiationTreeNode));
  bool success = rmf_traffic_msgs__msg__NegotiationTreeNode__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__msg__NegotiationTreeNode__destroy(rmf_traffic_msgs__msg__NegotiationTreeNode * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__msg__NegotiationTreeNode__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__init(rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationTreeNode * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__msg__NegotiationTreeNode *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__msg__NegotiationTreeNode), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__msg__NegotiationTreeNode__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__msg__NegotiationTreeNode__fini(&data[i - 1]);
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
rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__fini(rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * array)
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
      rmf_traffic_msgs__msg__NegotiationTreeNode__fini(&array->data[i]);
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

rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence *
rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * array = (rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__destroy(rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__are_equal(const rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * lhs, const rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationTreeNode__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__copy(
  const rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * input,
  rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__msg__NegotiationTreeNode);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__msg__NegotiationTreeNode * data =
      (rmf_traffic_msgs__msg__NegotiationTreeNode *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__msg__NegotiationTreeNode__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__msg__NegotiationTreeNode__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__msg__NegotiationTreeNode__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
