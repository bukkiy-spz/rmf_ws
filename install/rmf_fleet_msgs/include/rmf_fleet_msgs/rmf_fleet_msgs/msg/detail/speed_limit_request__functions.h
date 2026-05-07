// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_fleet_msgs:msg/SpeedLimitRequest.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__FUNCTIONS_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_fleet_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_fleet_msgs/msg/detail/speed_limit_request__struct.h"

/// Initialize msg/SpeedLimitRequest message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_fleet_msgs__msg__SpeedLimitRequest
 * )) before or use
 * rmf_fleet_msgs__msg__SpeedLimitRequest__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__msg__SpeedLimitRequest__init(rmf_fleet_msgs__msg__SpeedLimitRequest * msg);

/// Finalize msg/SpeedLimitRequest message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__msg__SpeedLimitRequest__fini(rmf_fleet_msgs__msg__SpeedLimitRequest * msg);

/// Create msg/SpeedLimitRequest message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_fleet_msgs__msg__SpeedLimitRequest__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
rmf_fleet_msgs__msg__SpeedLimitRequest *
rmf_fleet_msgs__msg__SpeedLimitRequest__create();

/// Destroy msg/SpeedLimitRequest message.
/**
 * It calls
 * rmf_fleet_msgs__msg__SpeedLimitRequest__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__msg__SpeedLimitRequest__destroy(rmf_fleet_msgs__msg__SpeedLimitRequest * msg);

/// Check for msg/SpeedLimitRequest message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__msg__SpeedLimitRequest__are_equal(const rmf_fleet_msgs__msg__SpeedLimitRequest * lhs, const rmf_fleet_msgs__msg__SpeedLimitRequest * rhs);

/// Copy a msg/SpeedLimitRequest message.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__msg__SpeedLimitRequest__copy(
  const rmf_fleet_msgs__msg__SpeedLimitRequest * input,
  rmf_fleet_msgs__msg__SpeedLimitRequest * output);

/// Initialize array of msg/SpeedLimitRequest messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_fleet_msgs__msg__SpeedLimitRequest__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__init(rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence * array, size_t size);

/// Finalize array of msg/SpeedLimitRequest messages.
/**
 * It calls
 * rmf_fleet_msgs__msg__SpeedLimitRequest__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__fini(rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence * array);

/// Create array of msg/SpeedLimitRequest messages.
/**
 * It allocates the memory for the array and calls
 * rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence *
rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__create(size_t size);

/// Destroy array of msg/SpeedLimitRequest messages.
/**
 * It calls
 * rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
void
rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__destroy(rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence * array);

/// Check for msg/SpeedLimitRequest message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__are_equal(const rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence * lhs, const rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence * rhs);

/// Copy an array of msg/SpeedLimitRequest messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_fleet_msgs
bool
rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__copy(
  const rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence * input,
  rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__SPEED_LIMIT_REQUEST__FUNCTIONS_H_
