#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__Payload() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__msg__Payload__init(msg: *mut Payload) -> bool;
    fn rmf_scheduler_msgs__msg__Payload__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Payload>, size: usize) -> bool;
    fn rmf_scheduler_msgs__msg__Payload__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Payload>);
    fn rmf_scheduler_msgs__msg__Payload__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Payload>, out_seq: *mut rosidl_runtime_rs::Sequence<Payload>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__msg__Payload
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Denotes the type of payload

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Payload {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_type: rosidl_runtime_rs::String,

    /// max 2mb
    pub data: rosidl_runtime_rs::BoundedSequence<u8, 2097152>,

}

impl Payload {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PAYLOAD_TYPE_SERIALIZED_MESSAGE: u8 = 1;

}


impl Default for Payload {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__msg__Payload__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__msg__Payload__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Payload {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Payload__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Payload__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Payload__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Payload {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Payload where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/msg/Payload";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__Payload() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__Schedule() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__msg__Schedule__init(msg: *mut Schedule) -> bool;
    fn rmf_scheduler_msgs__msg__Schedule__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Schedule>, size: usize) -> bool;
    fn rmf_scheduler_msgs__msg__Schedule__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Schedule>);
    fn rmf_scheduler_msgs__msg__Schedule__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Schedule>, out_seq: *mut rosidl_runtime_rs::Sequence<Schedule>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__msg__Schedule
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Name to identify the schedule, must be unique across all schedules.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Schedule {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// unix timestamp in seconds
    pub created_at: i64,

    /// ┌─────────────seconds (0 - 59)
    /// │ ┌───────────── minute (0 - 59)
    /// │ │ ┌───────────── hour (0 - 23)
    /// │ │ │ ┌───────────── day of the month (1 - 31)
    /// │ │ │ │ ┌───────────── month (1 - 12)
    /// │ │ │ │ │ ┌───────────── day of the week (0 - 6) (Sunday to Saturday)
    /// │ │ │ │ │ │ ┌───────────── years (1970 - 2099) (optional)
    /// │ │ │ │ │ │ │
    /// * * * * * * *
    ///
    /// | Field | Required | Allowed value | Allowed special characters |
    /// | --- | --- | --- | --- |
    /// | seconds | yes | 0-59 | `*` `,` `-` |
    /// | minutes | yes | 0-59 | `*` `,` `-` |
    /// | hours | yes | 0-23 | `*` `,` `-` |
    /// | days of month | 1-31 | `*` `,` `-` `?` `L` `W` |
    /// | months | yes | 1-12 | `*` `,` `-` |
    /// | days of week | yes | `*` `,` `-` `?` `L` `#` |
    /// | years | no | 1970-2099 | `*` `,` `-` |
    ///
    /// The special characters have the following meaning:
    ///
    /// | Special character | Meaning | Description |
    /// | --- | --- | --- |
    /// | `*` | all values | selects all values within a field |
    /// | `?` | no specific value | specify one field and leave the other unspecified |
    /// | `-` | range | specify ranges |
    /// | `,` | comma | specify additional values |
    /// | `/` | slash | speficy increments |
    /// | `L` | last | last day of the month or last day of the week |
    /// | `W` | weekday | the weekday nearest to the given day |
    /// | `#` | nth |  specify the Nth day of the month |
    /// Examples:
    ///
    /// | CRON | Description |
    /// | --- | --- |
    /// | * * * * * * | Every second |
    /// | */5 * * * * ? | Every 5 seconds |
    /// | 0 */5 */2 * * ? | Every 5 minutes, every 2 hours |
    /// | 0 */2 */2 ? */2 */2 | Every 2 minutes, every 2 hours, every 2 days of the week, every 2 months |
    /// | 0 15 10 * * ? * | 10:15 AM every day |
    /// | 0 0/5 14 * * ? | Every 5 minutes starting at 2 PM and ending at 2:55 PM, every day |
    /// | 0 10,44 14 ? 3 WED | 2:10 PM and at 2:44 PM every Wednesday of March |
    /// | 0 15 10 ? * MON-FRI | 10:15 AM every Monday, Tuesday, Wednesday, Thursday and Friday |
    /// | 0 15 10 L * ? | 10:15 AM on the last day of every month |
    /// | 0 0 12 1/5 * ? | 12 PM every 5 days every month, starting on the first day of the month |
    /// | 0 11 11 11 11 ? | Every November 11th at 11:11 AM |
    ///
    /// Reference: https://github.com/mariusbancila/croncpp/blob/999f7685ab683b58872386c0aa019acf97c6570a/README.md
    pub schedule: rosidl_runtime_rs::String,

    /// unix time in secs
    pub start_at: i64,

    /// unix time in secs
    pub finish_at: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payload: super::super::msg::rmw::Payload,

}



impl Default for Schedule {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__msg__Schedule__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__msg__Schedule__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Schedule {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Schedule__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Schedule__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Schedule__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Schedule {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Schedule where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/msg/Schedule";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__Schedule() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__ScheduleState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__msg__ScheduleState__init(msg: *mut ScheduleState) -> bool;
    fn rmf_scheduler_msgs__msg__ScheduleState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleState>, size: usize) -> bool;
    fn rmf_scheduler_msgs__msg__ScheduleState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleState>);
    fn rmf_scheduler_msgs__msg__ScheduleState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleState>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleState>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__msg__ScheduleState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// unix time in seconds
    pub last_modified: i64,

    /// unix time in seconds
    pub last_ran: i64,

    /// unix time in seconds
    pub next_run: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,

}

impl ScheduleState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CREATED: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTED: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FINISHED: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLED: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: i8 = -1;

}


impl Default for ScheduleState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__msg__ScheduleState__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__msg__ScheduleState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__ScheduleState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__ScheduleState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__ScheduleState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/msg/ScheduleState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__ScheduleState() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__Trigger() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__msg__Trigger__init(msg: *mut Trigger) -> bool;
    fn rmf_scheduler_msgs__msg__Trigger__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Trigger>, size: usize) -> bool;
    fn rmf_scheduler_msgs__msg__Trigger__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Trigger>);
    fn rmf_scheduler_msgs__msg__Trigger__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Trigger>, out_seq: *mut rosidl_runtime_rs::Sequence<Trigger>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__msg__Trigger
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Name to identify the trigger, must be unique across all triggers.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trigger {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// unix timestamp in seconds
    pub created_at: i64,

    /// unix timestamp in seconds when the trigger should run
    pub at: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payload: super::super::msg::rmw::Payload,

}



impl Default for Trigger {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__msg__Trigger__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__msg__Trigger__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Trigger {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Trigger__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Trigger__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__Trigger__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Trigger {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Trigger where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/msg/Trigger";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__Trigger() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__TriggerState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__msg__TriggerState__init(msg: *mut TriggerState) -> bool;
    fn rmf_scheduler_msgs__msg__TriggerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TriggerState>, size: usize) -> bool;
    fn rmf_scheduler_msgs__msg__TriggerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TriggerState>);
    fn rmf_scheduler_msgs__msg__TriggerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TriggerState>, out_seq: *mut rosidl_runtime_rs::Sequence<TriggerState>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__msg__TriggerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// unix time in seconds
    pub last_modified: i64,

    /// unix time in seconds
    pub last_ran: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,

}

impl TriggerState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTED: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FINISHED: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLED: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: i8 = -1;

}


impl Default for TriggerState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__msg__TriggerState__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__msg__TriggerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TriggerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__TriggerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__TriggerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__msg__TriggerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TriggerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TriggerState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/msg/TriggerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__msg__TriggerState() }
  }
}


