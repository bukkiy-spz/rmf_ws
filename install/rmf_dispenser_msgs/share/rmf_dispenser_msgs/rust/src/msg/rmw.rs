#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_dispenser_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_dispenser_msgs__msg__DispenserRequestItem() -> *const std::ffi::c_void;
}

#[link(name = "rmf_dispenser_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_dispenser_msgs__msg__DispenserRequestItem__init(msg: *mut DispenserRequestItem) -> bool;
    fn rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DispenserRequestItem>, size: usize) -> bool;
    fn rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DispenserRequestItem>);
    fn rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DispenserRequestItem>, out_seq: *mut rosidl_runtime_rs::Sequence<DispenserRequestItem>) -> bool;
}

// Corresponds to rmf_dispenser_msgs__msg__DispenserRequestItem
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispenserRequestItem {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_guid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub quantity: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub compartment_name: rosidl_runtime_rs::String,

}



impl Default for DispenserRequestItem {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_dispenser_msgs__msg__DispenserRequestItem__init(&mut msg as *mut _) {
        panic!("Call to rmf_dispenser_msgs__msg__DispenserRequestItem__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DispenserRequestItem {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserRequestItem__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DispenserRequestItem {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DispenserRequestItem where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_dispenser_msgs/msg/DispenserRequestItem";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_dispenser_msgs__msg__DispenserRequestItem() }
  }
}


#[link(name = "rmf_dispenser_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_dispenser_msgs__msg__DispenserRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_dispenser_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_dispenser_msgs__msg__DispenserRequest__init(msg: *mut DispenserRequest) -> bool;
    fn rmf_dispenser_msgs__msg__DispenserRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DispenserRequest>, size: usize) -> bool;
    fn rmf_dispenser_msgs__msg__DispenserRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DispenserRequest>);
    fn rmf_dispenser_msgs__msg__DispenserRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DispenserRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<DispenserRequest>) -> bool;
}

// Corresponds to rmf_dispenser_msgs__msg__DispenserRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispenserRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::rmw::Time,

    /// A unique ID for this request
    pub request_guid: rosidl_runtime_rs::String,

    /// The unique name of the dispenser that this request is aimed at
    pub target_guid: rosidl_runtime_rs::String,

    /// below are custom workcell message fields
    pub transporter_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub items: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DispenserRequestItem>,

}



impl Default for DispenserRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_dispenser_msgs__msg__DispenserRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_dispenser_msgs__msg__DispenserRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DispenserRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DispenserRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DispenserRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_dispenser_msgs/msg/DispenserRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_dispenser_msgs__msg__DispenserRequest() }
  }
}


#[link(name = "rmf_dispenser_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_dispenser_msgs__msg__DispenserResult() -> *const std::ffi::c_void;
}

#[link(name = "rmf_dispenser_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_dispenser_msgs__msg__DispenserResult__init(msg: *mut DispenserResult) -> bool;
    fn rmf_dispenser_msgs__msg__DispenserResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DispenserResult>, size: usize) -> bool;
    fn rmf_dispenser_msgs__msg__DispenserResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DispenserResult>);
    fn rmf_dispenser_msgs__msg__DispenserResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DispenserResult>, out_seq: *mut rosidl_runtime_rs::Sequence<DispenserResult>) -> bool;
}

// Corresponds to rmf_dispenser_msgs__msg__DispenserResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispenserResult {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::rmw::Time,

    /// A unique ID for the request which this result is for
    pub request_guid: rosidl_runtime_rs::String,

    /// The unique ID of the workcell that this result was sent from
    pub source_guid: rosidl_runtime_rs::String,

    /// Different basic result statuses
    pub status: u8,

}

impl DispenserResult {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACKNOWLEDGED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const SUCCESS: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: u8 = 2;

}


impl Default for DispenserResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_dispenser_msgs__msg__DispenserResult__init(&mut msg as *mut _) {
        panic!("Call to rmf_dispenser_msgs__msg__DispenserResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DispenserResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DispenserResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DispenserResult where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_dispenser_msgs/msg/DispenserResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_dispenser_msgs__msg__DispenserResult() }
  }
}


#[link(name = "rmf_dispenser_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_dispenser_msgs__msg__DispenserState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_dispenser_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_dispenser_msgs__msg__DispenserState__init(msg: *mut DispenserState) -> bool;
    fn rmf_dispenser_msgs__msg__DispenserState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DispenserState>, size: usize) -> bool;
    fn rmf_dispenser_msgs__msg__DispenserState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DispenserState>);
    fn rmf_dispenser_msgs__msg__DispenserState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DispenserState>, out_seq: *mut rosidl_runtime_rs::Sequence<DispenserState>) -> bool;
}

// Corresponds to rmf_dispenser_msgs__msg__DispenserState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispenserState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::rmw::Time,

    /// A unique ID for this workcell
    pub guid: rosidl_runtime_rs::String,

    /// Different basic modes that the workcell could be in
    pub mode: i32,

    /// Queued up requests that are being handled by this workcell
    pub request_guid_queue: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// below are custom workcell message fields
    pub seconds_remaining: f32,

}

impl DispenserState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const IDLE: i32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BUSY: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OFFLINE: i32 = 2;

}


impl Default for DispenserState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_dispenser_msgs__msg__DispenserState__init(&mut msg as *mut _) {
        panic!("Call to rmf_dispenser_msgs__msg__DispenserState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DispenserState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_dispenser_msgs__msg__DispenserState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DispenserState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DispenserState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_dispenser_msgs/msg/DispenserState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_dispenser_msgs__msg__DispenserState() }
  }
}


