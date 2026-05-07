// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from rmf_scheduler_msgs:srv/CancelTrigger.idl
// generated code does not contain a copyright notice

#ifndef RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__FUNCTIONS_H_
#define RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "rmf_scheduler_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "rmf_scheduler_msgs/srv/detail/cancel_trigger__struct.h"

/// Initialize srv/CancelTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_scheduler_msgs__srv__CancelTrigger_Request
 * )) before or use
 * rmf_scheduler_msgs__srv__CancelTrigger_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Request__init(rmf_scheduler_msgs__srv__CancelTrigger_Request * msg);

/// Finalize srv/CancelTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__srv__CancelTrigger_Request__fini(rmf_scheduler_msgs__srv__CancelTrigger_Request * msg);

/// Create srv/CancelTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
rmf_scheduler_msgs__srv__CancelTrigger_Request *
rmf_scheduler_msgs__srv__CancelTrigger_Request__create();

/// Destroy srv/CancelTrigger message.
/**
 * It calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__srv__CancelTrigger_Request__destroy(rmf_scheduler_msgs__srv__CancelTrigger_Request * msg);

/// Check for srv/CancelTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Request__are_equal(const rmf_scheduler_msgs__srv__CancelTrigger_Request * lhs, const rmf_scheduler_msgs__srv__CancelTrigger_Request * rhs);

/// Copy a srv/CancelTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Request__copy(
  const rmf_scheduler_msgs__srv__CancelTrigger_Request * input,
  rmf_scheduler_msgs__srv__CancelTrigger_Request * output);

/// Initialize array of srv/CancelTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__init(rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence * array, size_t size);

/// Finalize array of srv/CancelTrigger messages.
/**
 * It calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__fini(rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence * array);

/// Create array of srv/CancelTrigger messages.
/**
 * It allocates the memory for the array and calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence *
rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__create(size_t size);

/// Destroy array of srv/CancelTrigger messages.
/**
 * It calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__destroy(rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence * array);

/// Check for srv/CancelTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__are_equal(const rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence * lhs, const rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence * rhs);

/// Copy an array of srv/CancelTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__copy(
  const rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence * input,
  rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence * output);

/// Initialize srv/CancelTrigger message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * rmf_scheduler_msgs__srv__CancelTrigger_Response
 * )) before or use
 * rmf_scheduler_msgs__srv__CancelTrigger_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Response__init(rmf_scheduler_msgs__srv__CancelTrigger_Response * msg);

/// Finalize srv/CancelTrigger message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__srv__CancelTrigger_Response__fini(rmf_scheduler_msgs__srv__CancelTrigger_Response * msg);

/// Create srv/CancelTrigger message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
rmf_scheduler_msgs__srv__CancelTrigger_Response *
rmf_scheduler_msgs__srv__CancelTrigger_Response__create();

/// Destroy srv/CancelTrigger message.
/**
 * It calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__srv__CancelTrigger_Response__destroy(rmf_scheduler_msgs__srv__CancelTrigger_Response * msg);

/// Check for srv/CancelTrigger message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Response__are_equal(const rmf_scheduler_msgs__srv__CancelTrigger_Response * lhs, const rmf_scheduler_msgs__srv__CancelTrigger_Response * rhs);

/// Copy a srv/CancelTrigger message.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Response__copy(
  const rmf_scheduler_msgs__srv__CancelTrigger_Response * input,
  rmf_scheduler_msgs__srv__CancelTrigger_Response * output);

/// Initialize array of srv/CancelTrigger messages.
/**
 * It allocates the memory for the number of elements and calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__init(rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence * array, size_t size);

/// Finalize array of srv/CancelTrigger messages.
/**
 * It calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__fini(rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence * array);

/// Create array of srv/CancelTrigger messages.
/**
 * It allocates the memory for the array and calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence *
rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__create(size_t size);

/// Destroy array of srv/CancelTrigger messages.
/**
 * It calls
 * rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
void
rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__destroy(rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence * array);

/// Check for srv/CancelTrigger message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__are_equal(const rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence * lhs, const rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence * rhs);

/// Copy an array of srv/CancelTrigger messages.
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
ROSIDL_GENERATOR_C_PUBLIC_rmf_scheduler_msgs
bool
rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__copy(
  const rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence * input,
  rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // RMF_SCHEDULER_MSGS__SRV__DETAIL__CANCEL_TRIGGER__FUNCTIONS_H_
