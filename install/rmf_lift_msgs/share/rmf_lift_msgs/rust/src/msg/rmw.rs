#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_lift_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_lift_msgs__msg__LiftState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_lift_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_lift_msgs__msg__LiftState__init(msg: *mut LiftState) -> bool;
    fn rmf_lift_msgs__msg__LiftState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LiftState>, size: usize) -> bool;
    fn rmf_lift_msgs__msg__LiftState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LiftState>);
    fn rmf_lift_msgs__msg__LiftState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LiftState>, out_seq: *mut rosidl_runtime_rs::Sequence<LiftState>) -> bool;
}

// Corresponds to rmf_lift_msgs__msg__LiftState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// lift_time records when the information in this message was generated

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LiftState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lift_time: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lift_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub available_floors: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_floor: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub destination_floor: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_state: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_state: u8,

    /// We can only set human or agv mode, but we can read other modes: fire, etc.
    pub available_modes: rosidl_runtime_rs::Sequence<u8>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub current_mode: u8,

    /// we can add more "read-only" modes as we come across more of them.
    /// this field records the session_id that has been granted control of the lift
    /// until it sends a request with a request_type of REQUEST_END_SESSION
    pub session_id: rosidl_runtime_rs::String,

}

impl LiftState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_CLOSED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_MOVING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_OPEN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_STOPPED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_UP: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_DOWN: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MOTION_UNKNOWN: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_UNKNOWN: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_HUMAN: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_AGV: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_FIRE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_OFFLINE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_EMERGENCY: u8 = 5;

}


impl Default for LiftState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_lift_msgs__msg__LiftState__init(&mut msg as *mut _) {
        panic!("Call to rmf_lift_msgs__msg__LiftState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LiftState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_lift_msgs__msg__LiftState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_lift_msgs__msg__LiftState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_lift_msgs__msg__LiftState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LiftState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LiftState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_lift_msgs/msg/LiftState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_lift_msgs__msg__LiftState() }
  }
}


#[link(name = "rmf_lift_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_lift_msgs__msg__LiftRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_lift_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_lift_msgs__msg__LiftRequest__init(msg: *mut LiftRequest) -> bool;
    fn rmf_lift_msgs__msg__LiftRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LiftRequest>, size: usize) -> bool;
    fn rmf_lift_msgs__msg__LiftRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LiftRequest>);
    fn rmf_lift_msgs__msg__LiftRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LiftRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<LiftRequest>) -> bool;
}

// Corresponds to rmf_lift_msgs__msg__LiftRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LiftRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lift_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub request_time: builtin_interfaces::msg::rmw::Time,

    /// session_id should be unique at least between different requesters.
    /// For example, session_id could be the requester's node name.
    pub session_id: rosidl_runtime_rs::String,

    /// AGV mode means that the doors are always open when the lift is stopped
    /// Human mode means that LiftDoorRequest messages must be used to open/close
    /// the doors explicitly, since they may "time out" and close automatically.
    pub request_type: u8,

    /// The destination_floor must be one of the values returned in a LiftState.
    pub destination_floor: rosidl_runtime_rs::String,

    /// Explicit door requests are necessary in "human" mode to open/close doors.
    /// Door requests are not necessary in "AGV" mode, when the doors are always
    /// held open when the lift cabin is stopped.
    pub door_state: u8,

}

impl LiftRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_END_SESSION: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_AGV_MODE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_HUMAN_MODE: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_CLOSED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_OPEN: u8 = 2;

}


impl Default for LiftRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_lift_msgs__msg__LiftRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_lift_msgs__msg__LiftRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LiftRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_lift_msgs__msg__LiftRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_lift_msgs__msg__LiftRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_lift_msgs__msg__LiftRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LiftRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LiftRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_lift_msgs/msg/LiftRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_lift_msgs__msg__LiftRequest() }
  }
}


