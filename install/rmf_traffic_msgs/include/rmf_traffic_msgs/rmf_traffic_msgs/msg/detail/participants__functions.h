// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_traffic_msgs:msg/Participants.idl
// generated code does not contain a copyright notice

#ifndef RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__FUNCTIONS_H_
#define RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_traffic_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_traffic_msgs/msg/detail/participants__struct.h"

/// Initialize msg/Participants message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_traffic_msgs__msg__Participants
 * )) before or use
 * rmf_traffic_msgs__msg__Participants__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participants__init(rmf_traffic_msgs__msg__Participants * msg);

/// Finalize msg/Participants message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__Participants__fini(rmf_traffic_msgs__msg__Participants * msg);

/// Create msg/Participants message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_traffic_msgs__msg__Participants__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
rmf_traffic_msgs__msg__Participants *
rmf_traffic_msgs__msg__Participants__create();

/// Destroy msg/Participants message.
/**
 * It calls
 * rmf_traffic_msgs__msg__Participants__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__Participants__destroy(rmf_traffic_msgs__msg__Participants * msg);

/// Check for msg/Participants message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participants__are_equal(const rmf_traffic_msgs__msg__Participants * lhs, const rmf_traffic_msgs__msg__Participants * rhs);

/// Copy a msg/Participants message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participants__copy(
  const rmf_traffic_msgs__msg__Participants * input,
  rmf_traffic_msgs__msg__Participants * output);

/// Initialize array of msg/Participants messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_traffic_msgs__msg__Participants__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participants__Sequence__init(rmf_traffic_msgs__msg__Participants__Sequence * array, size_t size);

/// Finalize array of msg/Participants messages.
/**
 * It calls
 * rmf_traffic_msgs__msg__Participants__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__Participants__Sequence__fini(rmf_traffic_msgs__msg__Participants__Sequence * array);

/// Create array of msg/Participants messages.
/**
 * It allocates the memory for the array and calls
 * rmf_traffic_msgs__msg__Participants__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
rmf_traffic_msgs__msg__Participants__Sequence *
rmf_traffic_msgs__msg__Participants__Sequence__create(size_t size);

/// Destroy array of msg/Participants messages.
/**
 * It calls
 * rmf_traffic_msgs__msg__Participants__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
void
rmf_traffic_msgs__msg__Participants__Sequence__destroy(rmf_traffic_msgs__msg__Participants__Sequence * array);

/// Check for msg/Participants message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participants__Sequence__are_equal(const rmf_traffic_msgs__msg__Participants__Sequence * lhs, const rmf_traffic_msgs__msg__Participants__Sequence * rhs);

/// Copy an array of msg/Participants messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_traffic_msgs
bool
rmf_traffic_msgs__msg__Participants__Sequence__copy(
  const rmf_traffic_msgs__msg__Participants__Sequence * input,
  rmf_traffic_msgs__msg__Participants__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_TRAFFIC_MSGS__MSG__DETAIL__PARTICIPANTS__FUNCTIONS_H_
