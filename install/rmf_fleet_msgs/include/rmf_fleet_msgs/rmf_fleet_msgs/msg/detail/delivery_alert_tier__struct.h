// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rmf_fleet_msgs:msg/DeliveryAlertTier.idl
// generated code does not contain a copyright notice

#ifndef RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__STRUCT_H_
#define RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'WARNING'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertTier__WARNING = 0ul
};

/// Constant 'ERROR'.
enum
{
  rmf_fleet_msgs__msg__DeliveryAlertTier__ERROR = 1ul
};

/// Struct defined in msg/DeliveryAlertTier in the package rmf_fleet_msgs.
typedef struct rmf_fleet_msgs__msg__DeliveryAlertTier
{
  uint32_t value;
} rmf_fleet_msgs__msg__DeliveryAlertTier;

// Struct for a sequence of rmf_fleet_msgs__msg__DeliveryAlertTier.
typedef struct rmf_fleet_msgs__msg__DeliveryAlertTier__Sequence
{
  rmf_fleet_msgs__msg__DeliveryAlertTier * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rmf_fleet_msgs__msg__DeliveryAlertTier__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RMF_FLEET_MSGS__MSG__DETAIL__DELIVERY_ALERT_TIER__STRUCT_H_
