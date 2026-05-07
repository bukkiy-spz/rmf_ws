#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_ingestor_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_ingestor_msgs__msg__IngestorRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_ingestor_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_ingestor_msgs__msg__IngestorRequest__init(msg: *mut IngestorRequest) -> bool;
    fn rmf_ingestor_msgs__msg__IngestorRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IngestorRequest>, size: usize) -> bool;
    fn rmf_ingestor_msgs__msg__IngestorRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IngestorRequest>);
    fn rmf_ingestor_msgs__msg__IngestorRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IngestorRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<IngestorRequest>) -> bool;
}

// Corresponds to rmf_ingestor_msgs__msg__IngestorRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IngestorRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::rmw::Time,

    /// A unique ID for this request
    pub request_guid: rosidl_runtime_rs::String,

    /// The unique name of the ingestor that this request is aimed at
    pub target_guid: rosidl_runtime_rs::String,

    /// below are custom workcell message fields
    pub transporter_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub items: rosidl_runtime_rs::Sequence<super::super::msg::rmw::IngestorRequestItem>,

}



impl Default for IngestorRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_ingestor_msgs__msg__IngestorRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_ingestor_msgs__msg__IngestorRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IngestorRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IngestorRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IngestorRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_ingestor_msgs/msg/IngestorRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_ingestor_msgs__msg__IngestorRequest() }
  }
}


#[link(name = "rmf_ingestor_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_ingestor_msgs__msg__IngestorRequestItem() -> *const std::ffi::c_void;
}

#[link(name = "rmf_ingestor_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_ingestor_msgs__msg__IngestorRequestItem__init(msg: *mut IngestorRequestItem) -> bool;
    fn rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IngestorRequestItem>, size: usize) -> bool;
    fn rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IngestorRequestItem>);
    fn rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IngestorRequestItem>, out_seq: *mut rosidl_runtime_rs::Sequence<IngestorRequestItem>) -> bool;
}

// Corresponds to rmf_ingestor_msgs__msg__IngestorRequestItem
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IngestorRequestItem {

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



impl Default for IngestorRequestItem {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_ingestor_msgs__msg__IngestorRequestItem__init(&mut msg as *mut _) {
        panic!("Call to rmf_ingestor_msgs__msg__IngestorRequestItem__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IngestorRequestItem {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorRequestItem__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IngestorRequestItem {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IngestorRequestItem where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_ingestor_msgs/msg/IngestorRequestItem";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_ingestor_msgs__msg__IngestorRequestItem() }
  }
}


#[link(name = "rmf_ingestor_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_ingestor_msgs__msg__IngestorResult() -> *const std::ffi::c_void;
}

#[link(name = "rmf_ingestor_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_ingestor_msgs__msg__IngestorResult__init(msg: *mut IngestorResult) -> bool;
    fn rmf_ingestor_msgs__msg__IngestorResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IngestorResult>, size: usize) -> bool;
    fn rmf_ingestor_msgs__msg__IngestorResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IngestorResult>);
    fn rmf_ingestor_msgs__msg__IngestorResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IngestorResult>, out_seq: *mut rosidl_runtime_rs::Sequence<IngestorResult>) -> bool;
}

// Corresponds to rmf_ingestor_msgs__msg__IngestorResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IngestorResult {

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

impl IngestorResult {

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


impl Default for IngestorResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_ingestor_msgs__msg__IngestorResult__init(&mut msg as *mut _) {
        panic!("Call to rmf_ingestor_msgs__msg__IngestorResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IngestorResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IngestorResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IngestorResult where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_ingestor_msgs/msg/IngestorResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_ingestor_msgs__msg__IngestorResult() }
  }
}


#[link(name = "rmf_ingestor_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_ingestor_msgs__msg__IngestorState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_ingestor_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_ingestor_msgs__msg__IngestorState__init(msg: *mut IngestorState) -> bool;
    fn rmf_ingestor_msgs__msg__IngestorState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<IngestorState>, size: usize) -> bool;
    fn rmf_ingestor_msgs__msg__IngestorState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<IngestorState>);
    fn rmf_ingestor_msgs__msg__IngestorState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<IngestorState>, out_seq: *mut rosidl_runtime_rs::Sequence<IngestorState>) -> bool;
}

// Corresponds to rmf_ingestor_msgs__msg__IngestorState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct IngestorState {

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

impl IngestorState {

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


impl Default for IngestorState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_ingestor_msgs__msg__IngestorState__init(&mut msg as *mut _) {
        panic!("Call to rmf_ingestor_msgs__msg__IngestorState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for IngestorState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_ingestor_msgs__msg__IngestorState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for IngestorState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for IngestorState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_ingestor_msgs/msg/IngestorState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_ingestor_msgs__msg__IngestorState() }
  }
}


