#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_charger_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_charger_msgs__msg__ChargerState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_charger_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_charger_msgs__msg__ChargerState__init(msg: *mut ChargerState) -> bool;
    fn rmf_charger_msgs__msg__ChargerState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargerState>, size: usize) -> bool;
    fn rmf_charger_msgs__msg__ChargerState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargerState>);
    fn rmf_charger_msgs__msg__ChargerState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargerState>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargerState>) -> bool;
}

// Corresponds to rmf_charger_msgs__msg__ChargerState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Time when this state message was created

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub charger_time: builtin_interfaces::msg::rmw::Time,

    /// One of the previously enumerated states
    pub state: u32,

    /// The charger name should be unique in the RMF system and
    /// should match a charger name appearing in the traffic map
    pub charger_name: rosidl_runtime_rs::String,

    /// The error_message field should be blank unless state is CHARGER_ERROR
    pub error_message: rosidl_runtime_rs::String,

    /// The request_id field will be populated with the ID that started the
    /// charging cycle if state is anything other than CHARGER_IDLE
    pub request_id: rosidl_runtime_rs::String,

    /// The robot that is currently assigned to this charger (if any)
    pub robot_fleet: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,

    /// This contains the duration till the robot becomes fully charged.
    pub time_to_fully_charged: builtin_interfaces::msg::rmw::Duration,

}

impl ChargerState {
    /// Charger is not occupied
    pub const CHARGER_IDLE: u32 = 1;

    /// Charger has been assigned a robot
    pub const CHARGER_ASSIGNED: u32 = 2;

    /// Charger is charging
    pub const CHARGER_CHARGING: u32 = 3;

    /// Charger has been disconnected from a robot
    pub const CHARGER_RELEASED: u32 = 4;

    /// Error state, see error_message for info
    pub const CHARGER_ERROR: u32 = 200;

}


impl Default for ChargerState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_charger_msgs__msg__ChargerState__init(&mut msg as *mut _) {
        panic!("Call to rmf_charger_msgs__msg__ChargerState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargerState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargerState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargerState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_charger_msgs/msg/ChargerState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_charger_msgs__msg__ChargerState() }
  }
}


#[link(name = "rmf_charger_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_charger_msgs__msg__ChargerRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_charger_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_charger_msgs__msg__ChargerRequest__init(msg: *mut ChargerRequest) -> bool;
    fn rmf_charger_msgs__msg__ChargerRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargerRequest>, size: usize) -> bool;
    fn rmf_charger_msgs__msg__ChargerRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargerRequest>);
    fn rmf_charger_msgs__msg__ChargerRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargerRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargerRequest>) -> bool;
}

// Corresponds to rmf_charger_msgs__msg__ChargerRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The name of the charger that should process this message

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargerRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub charger_name: rosidl_runtime_rs::String,

    /// The robot that wishes to charge
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,

    /// The maximum amount of time to wait for the charging to start.
    /// If the robot takes longer than this to arrive and start charging,
    /// the charge request will be canceled.
    pub start_timeout: builtin_interfaces::msg::rmw::Duration,

    /// A unique ID for each request. It is advised that you prefix this
    /// with the sender's node name. This is used for error tracking
    /// later on
    pub request_id: rosidl_runtime_rs::String,

}



impl Default for ChargerRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_charger_msgs__msg__ChargerRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_charger_msgs__msg__ChargerRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargerRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargerRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargerRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_charger_msgs/msg/ChargerRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_charger_msgs__msg__ChargerRequest() }
  }
}


#[link(name = "rmf_charger_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_charger_msgs__msg__ChargerCancel() -> *const std::ffi::c_void;
}

#[link(name = "rmf_charger_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_charger_msgs__msg__ChargerCancel__init(msg: *mut ChargerCancel) -> bool;
    fn rmf_charger_msgs__msg__ChargerCancel__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargerCancel>, size: usize) -> bool;
    fn rmf_charger_msgs__msg__ChargerCancel__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargerCancel>);
    fn rmf_charger_msgs__msg__ChargerCancel__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargerCancel>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargerCancel>) -> bool;
}

// Corresponds to rmf_charger_msgs__msg__ChargerCancel
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargerCancel {
    /// the charger that should process this message
    pub charger_name: rosidl_runtime_rs::String,

    /// A unique ID for each request. It is advised that you prefix this
    /// with the sender's node name. This is used for error tracking
    /// later on
    pub request_id: rosidl_runtime_rs::String,

}



impl Default for ChargerCancel {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_charger_msgs__msg__ChargerCancel__init(&mut msg as *mut _) {
        panic!("Call to rmf_charger_msgs__msg__ChargerCancel__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargerCancel {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerCancel__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerCancel__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_charger_msgs__msg__ChargerCancel__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargerCancel {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargerCancel where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_charger_msgs/msg/ChargerCancel";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_charger_msgs__msg__ChargerCancel() }
  }
}


