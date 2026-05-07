#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_workcell_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__Asset() -> *const std::ffi::c_void;
}

#[link(name = "rmf_workcell_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_workcell_msgs__msg__Asset__init(msg: *mut Asset) -> bool;
    fn rmf_workcell_msgs__msg__Asset__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Asset>, size: usize) -> bool;
    fn rmf_workcell_msgs__msg__Asset__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Asset>);
    fn rmf_workcell_msgs__msg__Asset__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Asset>, out_seq: *mut rosidl_runtime_rs::Sequence<Asset>) -> bool;
}

// Corresponds to rmf_workcell_msgs__msg__Asset
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Asset {

    // This member is not documented.
    #[allow(missing_docs)]
    pub guid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: rosidl_runtime_rs::String,

}



impl Default for Asset {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_workcell_msgs__msg__Asset__init(&mut msg as *mut _) {
        panic!("Call to rmf_workcell_msgs__msg__Asset__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Asset {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__Asset__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__Asset__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__Asset__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Asset {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Asset where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_workcell_msgs/msg/Asset";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__Asset() }
  }
}


#[link(name = "rmf_workcell_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__Trait() -> *const std::ffi::c_void;
}

#[link(name = "rmf_workcell_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_workcell_msgs__msg__Trait__init(msg: *mut Trait) -> bool;
    fn rmf_workcell_msgs__msg__Trait__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Trait>, size: usize) -> bool;
    fn rmf_workcell_msgs__msg__Trait__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Trait>);
    fn rmf_workcell_msgs__msg__Trait__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Trait>, out_seq: *mut rosidl_runtime_rs::Sequence<Trait>) -> bool;
}

// Corresponds to rmf_workcell_msgs__msg__Trait
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trait {

    // This member is not documented.
    #[allow(missing_docs)]
    pub key: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for Trait {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_workcell_msgs__msg__Trait__init(&mut msg as *mut _) {
        panic!("Call to rmf_workcell_msgs__msg__Trait__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Trait {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__Trait__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__Trait__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__Trait__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Trait {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Trait where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_workcell_msgs/msg/Trait";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__Trait() }
  }
}


#[link(name = "rmf_workcell_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__WorkcellConfiguration() -> *const std::ffi::c_void;
}

#[link(name = "rmf_workcell_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_workcell_msgs__msg__WorkcellConfiguration__init(msg: *mut WorkcellConfiguration) -> bool;
    fn rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WorkcellConfiguration>, size: usize) -> bool;
    fn rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WorkcellConfiguration>);
    fn rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WorkcellConfiguration>, out_seq: *mut rosidl_runtime_rs::Sequence<WorkcellConfiguration>) -> bool;
}

// Corresponds to rmf_workcell_msgs__msg__WorkcellConfiguration
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorkcellConfiguration {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub guid: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assets: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Asset>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub traits: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Trait>,

}



impl Default for WorkcellConfiguration {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_workcell_msgs__msg__WorkcellConfiguration__init(&mut msg as *mut _) {
        panic!("Call to rmf_workcell_msgs__msg__WorkcellConfiguration__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WorkcellConfiguration {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellConfiguration__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WorkcellConfiguration {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WorkcellConfiguration where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_workcell_msgs/msg/WorkcellConfiguration";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__WorkcellConfiguration() }
  }
}


#[link(name = "rmf_workcell_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__WorkcellState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_workcell_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_workcell_msgs__msg__WorkcellState__init(msg: *mut WorkcellState) -> bool;
    fn rmf_workcell_msgs__msg__WorkcellState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WorkcellState>, size: usize) -> bool;
    fn rmf_workcell_msgs__msg__WorkcellState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WorkcellState>);
    fn rmf_workcell_msgs__msg__WorkcellState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WorkcellState>, out_seq: *mut rosidl_runtime_rs::Sequence<WorkcellState>) -> bool;
}

// Corresponds to rmf_workcell_msgs__msg__WorkcellState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This is a template message for all types of workcells to build off from,
/// which allows generic workcell libraries to have access to common message
/// fields.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorkcellState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::rmw::Time,

    /// A unique ID for this workcell
    pub guid: rosidl_runtime_rs::String,

    /// Different basic modes that the workcell could be in
    pub mode: i32,

    /// Queued up requests that are being handled by this workcell
    pub request_guid_queue: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}

impl WorkcellState {

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


impl Default for WorkcellState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_workcell_msgs__msg__WorkcellState__init(&mut msg as *mut _) {
        panic!("Call to rmf_workcell_msgs__msg__WorkcellState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WorkcellState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WorkcellState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WorkcellState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_workcell_msgs/msg/WorkcellState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__WorkcellState() }
  }
}


#[link(name = "rmf_workcell_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__WorkcellRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_workcell_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_workcell_msgs__msg__WorkcellRequest__init(msg: *mut WorkcellRequest) -> bool;
    fn rmf_workcell_msgs__msg__WorkcellRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WorkcellRequest>, size: usize) -> bool;
    fn rmf_workcell_msgs__msg__WorkcellRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WorkcellRequest>);
    fn rmf_workcell_msgs__msg__WorkcellRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WorkcellRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<WorkcellRequest>) -> bool;
}

// Corresponds to rmf_workcell_msgs__msg__WorkcellRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This is a template message for all types of workcells to build off from,
/// which allows generic workcell libraries to have access to common message
/// fields.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorkcellRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: builtin_interfaces::msg::rmw::Time,

    /// A unique ID for this request
    pub request_guid: rosidl_runtime_rs::String,

    /// The unique ID of the workcell that this request is aimed at
    pub target_guid: rosidl_runtime_rs::String,

}



impl Default for WorkcellRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_workcell_msgs__msg__WorkcellRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_workcell_msgs__msg__WorkcellRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WorkcellRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WorkcellRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WorkcellRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_workcell_msgs/msg/WorkcellRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__WorkcellRequest() }
  }
}


#[link(name = "rmf_workcell_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__WorkcellResult() -> *const std::ffi::c_void;
}

#[link(name = "rmf_workcell_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_workcell_msgs__msg__WorkcellResult__init(msg: *mut WorkcellResult) -> bool;
    fn rmf_workcell_msgs__msg__WorkcellResult__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<WorkcellResult>, size: usize) -> bool;
    fn rmf_workcell_msgs__msg__WorkcellResult__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<WorkcellResult>);
    fn rmf_workcell_msgs__msg__WorkcellResult__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<WorkcellResult>, out_seq: *mut rosidl_runtime_rs::Sequence<WorkcellResult>) -> bool;
}

// Corresponds to rmf_workcell_msgs__msg__WorkcellResult
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This is a template message for all types of workcells to build off from,
/// which allows generic workcell libraries to have access to common message
/// fields.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct WorkcellResult {

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

impl WorkcellResult {

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


impl Default for WorkcellResult {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_workcell_msgs__msg__WorkcellResult__init(&mut msg as *mut _) {
        panic!("Call to rmf_workcell_msgs__msg__WorkcellResult__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for WorkcellResult {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellResult__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellResult__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_workcell_msgs__msg__WorkcellResult__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for WorkcellResult {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for WorkcellResult where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_workcell_msgs/msg/WorkcellResult";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_workcell_msgs__msg__WorkcellResult() }
  }
}


