#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_door_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__DoorMode() -> *const std::ffi::c_void;
}

#[link(name = "rmf_door_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_door_msgs__msg__DoorMode__init(msg: *mut DoorMode) -> bool;
    fn rmf_door_msgs__msg__DoorMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoorMode>, size: usize) -> bool;
    fn rmf_door_msgs__msg__DoorMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoorMode>);
    fn rmf_door_msgs__msg__DoorMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoorMode>, out_seq: *mut rosidl_runtime_rs::Sequence<DoorMode>) -> bool;
}

// Corresponds to rmf_door_msgs__msg__DoorMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The DoorMode message captures the "mode" of an automatic door controller.
/// Most door controllers default to running in "closed" mode, and transition
/// through some sort of "moving" mode until reaching the "open" mode.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoorMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl DoorMode {
    /// "value" must be one of the following enumerations:
    pub const MODE_CLOSED: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_MOVING: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_OPEN: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_OFFLINE: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNKNOWN: u32 = 4;

}


impl Default for DoorMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_door_msgs__msg__DoorMode__init(&mut msg as *mut _) {
        panic!("Call to rmf_door_msgs__msg__DoorMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoorMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoorMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoorMode where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_door_msgs/msg/DoorMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__DoorMode() }
  }
}


#[link(name = "rmf_door_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__DoorState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_door_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_door_msgs__msg__DoorState__init(msg: *mut DoorState) -> bool;
    fn rmf_door_msgs__msg__DoorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoorState>, size: usize) -> bool;
    fn rmf_door_msgs__msg__DoorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoorState>);
    fn rmf_door_msgs__msg__DoorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoorState>, out_seq: *mut rosidl_runtime_rs::Sequence<DoorState>) -> bool;
}

// Corresponds to rmf_door_msgs__msg__DoorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoorState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub door_time: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mode: super::super::msg::rmw::DoorMode,

}



impl Default for DoorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_door_msgs__msg__DoorState__init(&mut msg as *mut _) {
        panic!("Call to rmf_door_msgs__msg__DoorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoorState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_door_msgs/msg/DoorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__DoorState() }
  }
}


#[link(name = "rmf_door_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__DoorRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_door_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_door_msgs__msg__DoorRequest__init(msg: *mut DoorRequest) -> bool;
    fn rmf_door_msgs__msg__DoorRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoorRequest>, size: usize) -> bool;
    fn rmf_door_msgs__msg__DoorRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoorRequest>);
    fn rmf_door_msgs__msg__DoorRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoorRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<DoorRequest>) -> bool;
}

// Corresponds to rmf_door_msgs__msg__DoorRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoorRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request_time: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requester_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requested_mode: super::super::msg::rmw::DoorMode,

}



impl Default for DoorRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_door_msgs__msg__DoorRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_door_msgs__msg__DoorRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoorRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoorRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoorRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_door_msgs/msg/DoorRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__DoorRequest() }
  }
}


#[link(name = "rmf_door_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__DoorSessions() -> *const std::ffi::c_void;
}

#[link(name = "rmf_door_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_door_msgs__msg__DoorSessions__init(msg: *mut DoorSessions) -> bool;
    fn rmf_door_msgs__msg__DoorSessions__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DoorSessions>, size: usize) -> bool;
    fn rmf_door_msgs__msg__DoorSessions__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DoorSessions>);
    fn rmf_door_msgs__msg__DoorSessions__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DoorSessions>, out_seq: *mut rosidl_runtime_rs::Sequence<DoorSessions>) -> bool;
}

// Corresponds to rmf_door_msgs__msg__DoorSessions
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DoorSessions {

    // This member is not documented.
    #[allow(missing_docs)]
    pub door_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub sessions: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Session>,

}



impl Default for DoorSessions {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_door_msgs__msg__DoorSessions__init(&mut msg as *mut _) {
        panic!("Call to rmf_door_msgs__msg__DoorSessions__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DoorSessions {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorSessions__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorSessions__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__DoorSessions__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DoorSessions {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DoorSessions where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_door_msgs/msg/DoorSessions";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__DoorSessions() }
  }
}


#[link(name = "rmf_door_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__Session() -> *const std::ffi::c_void;
}

#[link(name = "rmf_door_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_door_msgs__msg__Session__init(msg: *mut Session) -> bool;
    fn rmf_door_msgs__msg__Session__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Session>, size: usize) -> bool;
    fn rmf_door_msgs__msg__Session__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Session>);
    fn rmf_door_msgs__msg__Session__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Session>, out_seq: *mut rosidl_runtime_rs::Sequence<Session>) -> bool;
}

// Corresponds to rmf_door_msgs__msg__Session
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Session {

    // This member is not documented.
    #[allow(missing_docs)]
    pub request_time: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub requester_id: rosidl_runtime_rs::String,

}



impl Default for Session {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_door_msgs__msg__Session__init(&mut msg as *mut _) {
        panic!("Call to rmf_door_msgs__msg__Session__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Session {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__Session__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__Session__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__Session__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Session {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Session where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_door_msgs/msg/Session";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__Session() }
  }
}


#[link(name = "rmf_door_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__SupervisorHeartbeat() -> *const std::ffi::c_void;
}

#[link(name = "rmf_door_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_door_msgs__msg__SupervisorHeartbeat__init(msg: *mut SupervisorHeartbeat) -> bool;
    fn rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SupervisorHeartbeat>, size: usize) -> bool;
    fn rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SupervisorHeartbeat>);
    fn rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SupervisorHeartbeat>, out_seq: *mut rosidl_runtime_rs::Sequence<SupervisorHeartbeat>) -> bool;
}

// Corresponds to rmf_door_msgs__msg__SupervisorHeartbeat
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SupervisorHeartbeat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub all_sessions: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DoorSessions>,

}



impl Default for SupervisorHeartbeat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_door_msgs__msg__SupervisorHeartbeat__init(&mut msg as *mut _) {
        panic!("Call to rmf_door_msgs__msg__SupervisorHeartbeat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SupervisorHeartbeat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_door_msgs__msg__SupervisorHeartbeat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SupervisorHeartbeat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SupervisorHeartbeat where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_door_msgs/msg/SupervisorHeartbeat";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_door_msgs__msg__SupervisorHeartbeat() }
  }
}


