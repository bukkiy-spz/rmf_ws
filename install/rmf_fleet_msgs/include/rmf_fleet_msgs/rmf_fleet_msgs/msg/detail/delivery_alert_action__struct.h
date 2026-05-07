// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertAction.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_ACTION__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WAITING'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertAction__WAITING = 0ul
};

/// Constant 'CANCEL'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertAction__CANCEL = 1ul
};

/// Constant 'OVERRIDE'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertAction__OVERRIDE = 2ul
};

/// Constant 'RESUME'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertAction__RESUME = 3ul
};

/// Struct defined in msg/DeliveryAlertAction in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__DeliveryAlertAction
{
  uint32_t value;
} rmf_fleet_msgs__msg__DeliveryAlertAction;

// Struct for a sequence of rmf_fleet_msgs__msg__DeliveryAlertAction.
typedef struct rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence
{
  rmf_fleet_msgs__msg__DeliveryAlertAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_ACTION__STRUCT_H_
