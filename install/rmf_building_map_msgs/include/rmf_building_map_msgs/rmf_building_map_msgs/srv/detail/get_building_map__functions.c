// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_building_map_msgs:srv/GetBuildingMap.idl
// generated code does not contain a copyright notice
#include "rmf_building_map_msgs/srv/detail/get_building_map__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rmf_building_map_msgs__srv__GetBuildingMap_Request__init(rmf_building_map_msgs__srv__GetBuildingMap_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(rmf_building_map_msgs__srv__GetBuildingMap_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
rmf_building_map_msgs__srv__GetBuildingMap_Request__are_equal(const rmf_building_map_msgs__srv__GetBuildingMap_Request * lhs, const rmf_building_map_msgs__srv__GetBuildingMap_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__srv__GetBuildingMap_Request__copy(
  const rmf_building_map_msgs__srv__GetBuildingMap_Request * input,
  rmf_building_map_msgs__srv__GetBuildingMap_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

rmf_building_map_msgs__srv__GetBuildingMap_Request *
rmf_building_map_msgs__srv__GetBuildingMap_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__srv__GetBuildingMap_Request * msg = (rmf_building_map_msgs__srv__GetBuildingMap_Request *)allocator.allocate(sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request));
  bool success = rmf_building_map_msgs__srv__GetBuildingMap_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Request__destroy(rmf_building_map_msgs__srv__GetBuildingMap_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__init(rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__srv__GetBuildingMap_Request * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__srv__GetBuildingMap_Request *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__srv__GetBuildingMap_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(&data[i - 1]);
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
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__fini(rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * array)
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
      rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(&array->data[i]);
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

rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence *
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * array = (rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__destroy(rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__are_equal(const rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * lhs, const rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__srv__GetBuildingMap_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__copy(
  const rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * input,
  rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__srv__GetBuildingMap_Request * data =
      (rmf_building_map_msgs__srv__GetBuildingMap_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__srv__GetBuildingMap_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__srv__GetBuildingMap_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__srv__GetBuildingMap_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `building_map`
#include "rmf_building_map_msgs/msg/detail/building_map__functions.h"

bool
rmf_building_map_msgs__srv__GetBuildingMap_Response__init(rmf_building_map_msgs__srv__GetBuildingMap_Response * msg)
{
  if (!msg) {
    return false;
  }
  // building_map
  if (!rmf_building_map_msgs__msg__BuildingMap__init(&msg->building_map)) {
    rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(msg);
    return false;
  }
  return true;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(rmf_building_map_msgs__srv__GetBuildingMap_Response * msg)
{
  if (!msg) {
    return;
  }
  // building_map
  rmf_building_map_msgs__msg__BuildingMap__fini(&msg->building_map);
}

bool
rmf_building_map_msgs__srv__GetBuildingMap_Response__are_equal(const rmf_building_map_msgs__srv__GetBuildingMap_Response * lhs, const rmf_building_map_msgs__srv__GetBuildingMap_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // building_map
  if (!rmf_building_map_msgs__msg__BuildingMap__are_equal(
      &(lhs->building_map), &(rhs->building_map)))
  {
    return false;
  }
  return true;
}

bool
rmf_building_map_msgs__srv__GetBuildingMap_Response__copy(
  const rmf_building_map_msgs__srv__GetBuildingMap_Response * input,
  rmf_building_map_msgs__srv__GetBuildingMap_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // building_map
  if (!rmf_building_map_msgs__msg__BuildingMap__copy(
      &(input->building_map), &(output->building_map)))
  {
    return false;
  }
  return true;
}

rmf_building_map_msgs__srv__GetBuildingMap_Response *
rmf_building_map_msgs__srv__GetBuildingMap_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__srv__GetBuildingMap_Response * msg = (rmf_building_map_msgs__srv__GetBuildingMap_Response *)allocator.allocate(sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response));
  bool success = rmf_building_map_msgs__srv__GetBuildingMap_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Response__destroy(rmf_building_map_msgs__srv__GetBuildingMap_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__init(rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__srv__GetBuildingMap_Response * data = NULL;

  if (size) {
    data = (rmf_building_map_msgs__srv__GetBuildingMap_Response *)allocator.zero_allocate(size, sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_building_map_msgs__srv__GetBuildingMap_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(&data[i - 1]);
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
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__fini(rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * array)
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
      rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(&array->data[i]);
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

rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence *
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * array = (rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence *)allocator.allocate(sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__destroy(rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__are_equal(const rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * lhs, const rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_building_map_msgs__srv__GetBuildingMap_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__copy(
  const rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * input,
  rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_building_map_msgs__srv__GetBuildingMap_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_building_map_msgs__srv__GetBuildingMap_Response * data =
      (rmf_building_map_msgs__srv__GetBuildingMap_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_building_map_msgs__srv__GetBuildingMap_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_building_map_msgs__srv__GetBuildingMap_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_building_map_msgs__srv__GetBuildingMap_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
