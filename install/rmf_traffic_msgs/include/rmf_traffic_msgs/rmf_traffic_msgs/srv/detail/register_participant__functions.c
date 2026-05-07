// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rmf_traffic_msgs:srv/RegisterParticipant.idl
// generated code does not contain a copyright notice
#include "rmf_traffic_msgs/srv/detail/register_participant__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `description`
#include "rmf_traffic_msgs/msg/detail/participant_description__functions.h"

bool
rmf_traffic_msgs__srv__RegisterParticipant_Request__init(rmf_traffic_msgs__srv__RegisterParticipant_Request * msg)
{
  if (!msg) {
    return false;
  }
  // description
  if (!rmf_traffic_msgs__msg__ParticipantDescription__init(&msg->description)) {
    rmf_traffic_msgs__srv__RegisterParticipant_Request__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__srv__RegisterParticipant_Request__fini(rmf_traffic_msgs__srv__RegisterParticipant_Request * msg)
{
  if (!msg) {
    return;
  }
  // description
  rmf_traffic_msgs__msg__ParticipantDescription__fini(&msg->description);
}

bool
rmf_traffic_msgs__srv__RegisterParticipant_Request__are_equal(const rmf_traffic_msgs__srv__RegisterParticipant_Request * lhs, const rmf_traffic_msgs__srv__RegisterParticipant_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // description
  if (!rmf_traffic_msgs__msg__ParticipantDescription__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__srv__RegisterParticipant_Request__copy(
  const rmf_traffic_msgs__srv__RegisterParticipant_Request * input,
  rmf_traffic_msgs__srv__RegisterParticipant_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // description
  if (!rmf_traffic_msgs__msg__ParticipantDescription__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__srv__RegisterParticipant_Request *
rmf_traffic_msgs__srv__RegisterParticipant_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__srv__RegisterParticipant_Request * msg = (rmf_traffic_msgs__srv__RegisterParticipant_Request *)allocator.allocate(sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Request));
  bool success = rmf_traffic_msgs__srv__RegisterParticipant_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__srv__RegisterParticipant_Request__destroy(rmf_traffic_msgs__srv__RegisterParticipant_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__srv__RegisterParticipant_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__init(rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__srv__RegisterParticipant_Request * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__srv__RegisterParticipant_Request *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__srv__RegisterParticipant_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__srv__RegisterParticipant_Request__fini(&data[i - 1]);
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
rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__fini(rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence * array)
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
      rmf_traffic_msgs__srv__RegisterParticipant_Request__fini(&array->data[i]);
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

rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence *
rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence * array = (rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__destroy(rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__are_equal(const rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence * lhs, const rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__srv__RegisterParticipant_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__copy(
  const rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence * input,
  rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__srv__RegisterParticipant_Request * data =
      (rmf_traffic_msgs__srv__RegisterParticipant_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__srv__RegisterParticipant_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__srv__RegisterParticipant_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__srv__RegisterParticipant_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `error`
#include "rosidl_runtime_c/string_functions.h"

bool
rmf_traffic_msgs__srv__RegisterParticipant_Response__init(rmf_traffic_msgs__srv__RegisterParticipant_Response * msg)
{
  if (!msg) {
    return false;
  }
  // participant_id
  // last_itinerary_version
  // last_plan_id
  // next_storage_base
  // error
  if (!rosidl_runtime_c__String__init(&msg->error)) {
    rmf_traffic_msgs__srv__RegisterParticipant_Response__fini(msg);
    return false;
  }
  return true;
}

void
rmf_traffic_msgs__srv__RegisterParticipant_Response__fini(rmf_traffic_msgs__srv__RegisterParticipant_Response * msg)
{
  if (!msg) {
    return;
  }
  // participant_id
  // last_itinerary_version
  // last_plan_id
  // next_storage_base
  // error
  rosidl_runtime_c__String__fini(&msg->error);
}

bool
rmf_traffic_msgs__srv__RegisterParticipant_Response__are_equal(const rmf_traffic_msgs__srv__RegisterParticipant_Response * lhs, const rmf_traffic_msgs__srv__RegisterParticipant_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // participant_id
  if (lhs->participant_id != rhs->participant_id) {
    return false;
  }
  // last_itinerary_version
  if (lhs->last_itinerary_version != rhs->last_itinerary_version) {
    return false;
  }
  // last_plan_id
  if (lhs->last_plan_id != rhs->last_plan_id) {
    return false;
  }
  // next_storage_base
  if (lhs->next_storage_base != rhs->next_storage_base) {
    return false;
  }
  // error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error), &(rhs->error)))
  {
    return false;
  }
  return true;
}

bool
rmf_traffic_msgs__srv__RegisterParticipant_Response__copy(
  const rmf_traffic_msgs__srv__RegisterParticipant_Response * input,
  rmf_traffic_msgs__srv__RegisterParticipant_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // participant_id
  output->participant_id = input->participant_id;
  // last_itinerary_version
  output->last_itinerary_version = input->last_itinerary_version;
  // last_plan_id
  output->last_plan_id = input->last_plan_id;
  // next_storage_base
  output->next_storage_base = input->next_storage_base;
  // error
  if (!rosidl_runtime_c__String__copy(
      &(input->error), &(output->error)))
  {
    return false;
  }
  return true;
}

rmf_traffic_msgs__srv__RegisterParticipant_Response *
rmf_traffic_msgs__srv__RegisterParticipant_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__srv__RegisterParticipant_Response * msg = (rmf_traffic_msgs__srv__RegisterParticipant_Response *)allocator.allocate(sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Response));
  bool success = rmf_traffic_msgs__srv__RegisterParticipant_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rmf_traffic_msgs__srv__RegisterParticipant_Response__destroy(rmf_traffic_msgs__srv__RegisterParticipant_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rmf_traffic_msgs__srv__RegisterParticipant_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__init(rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__srv__RegisterParticipant_Response * data = NULL;

  if (size) {
    data = (rmf_traffic_msgs__srv__RegisterParticipant_Response *)allocator.zero_allocate(size, sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rmf_traffic_msgs__srv__RegisterParticipant_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rmf_traffic_msgs__srv__RegisterParticipant_Response__fini(&data[i - 1]);
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
rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__fini(rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence * array)
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
      rmf_traffic_msgs__srv__RegisterParticipant_Response__fini(&array->data[i]);
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

rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence *
rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence * array = (rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence *)allocator.allocate(sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__destroy(rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__are_equal(const rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence * lhs, const rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rmf_traffic_msgs__srv__RegisterParticipant_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__copy(
  const rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence * input,
  rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rmf_traffic_msgs__srv__RegisterParticipant_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rmf_traffic_msgs__srv__RegisterParticipant_Response * data =
      (rmf_traffic_msgs__srv__RegisterParticipant_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rmf_traffic_msgs__srv__RegisterParticipant_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rmf_traffic_msgs__srv__RegisterParticipant_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rmf_traffic_msgs__srv__RegisterParticipant_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
