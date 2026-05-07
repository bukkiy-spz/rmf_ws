#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeCancel() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__BlockadeCancel__init(msg: *mut BlockadeCancel) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeCancel__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockadeCancel>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeCancel__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockadeCancel>);
    fn rmf_traffic_msgs__msg__BlockadeCancel__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockadeCancel>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockadeCancel>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__BlockadeCancel
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeCancel {
    /// The participant whose reservation is being canceled
    pub participant: u64,

    /// True if all reservations for this participants should be considered cancelled
    pub all_reservations: bool,

    /// If all_reservations is false, then this is the last reservation that should
    /// be considered cancelled. If all_reservations is true, then this field is
    /// meaningless
    pub reservation: u64,

}



impl Default for BlockadeCancel {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__BlockadeCancel__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__BlockadeCancel__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockadeCancel {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeCancel__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeCancel__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeCancel__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockadeCancel {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockadeCancel where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/BlockadeCancel";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeCancel() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeCheckpoint() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__BlockadeCheckpoint__init(msg: *mut BlockadeCheckpoint) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockadeCheckpoint>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockadeCheckpoint>);
    fn rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockadeCheckpoint>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockadeCheckpoint>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__BlockadeCheckpoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeCheckpoint {
    /// The position of the checkpoint
    pub position: [f64; 2],

    /// The name of the map that the checkpoint is on
    pub map_name: rosidl_runtime_rs::String,

    /// Whether or not the participant can hold at this checkpoint
    pub can_hold: bool,

}



impl Default for BlockadeCheckpoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__BlockadeCheckpoint__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__BlockadeCheckpoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockadeCheckpoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeCheckpoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockadeCheckpoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockadeCheckpoint where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/BlockadeCheckpoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeCheckpoint() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeHeartbeat() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__BlockadeHeartbeat__init(msg: *mut BlockadeHeartbeat) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockadeHeartbeat>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockadeHeartbeat>);
    fn rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockadeHeartbeat>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockadeHeartbeat>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__BlockadeHeartbeat
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeHeartbeat {
    /// An array of the current blockade statuses which describe the most recent
    /// information
    pub statuses: rosidl_runtime_rs::Sequence<super::super::msg::rmw::BlockadeStatus>,

    /// This will be true when the blockade moderator has identified a gridlock that
    /// cannot be undone. This should never happen if a system is setup correctly. But
    /// it may happen if a robot is given a path whose first or last checkpoint is in
    /// conflict with the path of another robot.
    pub has_gridlock: bool,

}



impl Default for BlockadeHeartbeat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__BlockadeHeartbeat__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__BlockadeHeartbeat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockadeHeartbeat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeHeartbeat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockadeHeartbeat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockadeHeartbeat where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/BlockadeHeartbeat";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeHeartbeat() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeReached() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__BlockadeReached__init(msg: *mut BlockadeReached) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeReached__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockadeReached>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeReached__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockadeReached>);
    fn rmf_traffic_msgs__msg__BlockadeReached__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockadeReached>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockadeReached>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__BlockadeReached
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeReached {
    /// The ID of the blockade participant
    pub participant: u64,

    /// The reservation ID that this update refers to
    pub reservation: u64,

    /// The checkpoint that has been reached
    pub checkpoint: u64,

}



impl Default for BlockadeReached {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__BlockadeReached__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__BlockadeReached__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockadeReached {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeReached__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeReached__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeReached__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockadeReached {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockadeReached where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/BlockadeReached";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeReached() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeReady() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__BlockadeReady__init(msg: *mut BlockadeReady) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeReady__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockadeReady>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeReady__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockadeReady>);
    fn rmf_traffic_msgs__msg__BlockadeReady__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockadeReady>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockadeReady>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__BlockadeReady
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeReady {
    /// The ID of the blockade participant
    pub participant: u64,

    /// The reservation ID that this update refers to
    pub reservation: u64,

    /// The checkpoint that is ready to be left
    pub checkpoint: u64,

}



impl Default for BlockadeReady {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__BlockadeReady__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__BlockadeReady__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockadeReady {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeReady__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeReady__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeReady__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockadeReady {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockadeReady where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/BlockadeReady";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeReady() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeRelease() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__BlockadeRelease__init(msg: *mut BlockadeRelease) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeRelease__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockadeRelease>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeRelease__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockadeRelease>);
    fn rmf_traffic_msgs__msg__BlockadeRelease__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockadeRelease>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockadeRelease>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__BlockadeRelease
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeRelease {
    /// The ID of the blockade participant
    pub participant: u64,

    /// The reservation ID that this update refers to
    pub reservation: u64,

    /// The checkpoint that should be released
    pub checkpoint: u64,

}



impl Default for BlockadeRelease {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__BlockadeRelease__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__BlockadeRelease__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockadeRelease {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeRelease__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeRelease__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeRelease__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockadeRelease {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockadeRelease where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/BlockadeRelease";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeRelease() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeSet() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__BlockadeSet__init(msg: *mut BlockadeSet) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeSet__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockadeSet>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeSet__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockadeSet>);
    fn rmf_traffic_msgs__msg__BlockadeSet__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockadeSet>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockadeSet>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__BlockadeSet
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeSet {
    /// The ID of the participant that is setting its path
    pub participant: u64,

    /// The ID of the reservation that is being set
    pub reservation: u64,

    /// The radius to inflate the path
    pub radius: f64,

    /// The path that is being reserved
    pub path: rosidl_runtime_rs::Sequence<super::super::msg::rmw::BlockadeCheckpoint>,

}



impl Default for BlockadeSet {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__BlockadeSet__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__BlockadeSet__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockadeSet {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeSet__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeSet__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeSet__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockadeSet {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockadeSet where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/BlockadeSet";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeSet() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeStatus() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__BlockadeStatus__init(msg: *mut BlockadeStatus) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BlockadeStatus>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__BlockadeStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BlockadeStatus>);
    fn rmf_traffic_msgs__msg__BlockadeStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BlockadeStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<BlockadeStatus>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__BlockadeStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeStatus {
    /// The Participant ID that this status is for
    pub participant: u64,

    /// The latest reservation known for this participant
    pub reservation: u64,

    /// This is true if and only if the moderator has ever received a ready notice
    /// from the participant
    pub any_ready: bool,

    /// If any_ready is true, then this is the most recent ready checkpoint that the
    /// moderator knows about. If any_ready is false, then this field is meaningless.
    pub last_ready: u64,

    /// The last checkpoint that the moderator knows of the participant reaching
    pub last_reached: u64,

    /// The first checkpoint that's currently blockaded for this participant
    pub assignment_begin: u64,

    /// The last checkpoint that's currently blockaded for this participant
    pub assignment_end: u64,

}



impl Default for BlockadeStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__BlockadeStatus__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__BlockadeStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BlockadeStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__BlockadeStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BlockadeStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BlockadeStatus where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/BlockadeStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__BlockadeStatus() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Circle() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Circle__init(msg: *mut Circle) -> bool;
    fn rmf_traffic_msgs__msg__Circle__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Circle>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Circle__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Circle>);
    fn rmf_traffic_msgs__msg__Circle__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Circle>, out_seq: *mut rosidl_runtime_rs::Sequence<Circle>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Circle
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Circle {
    /// The radius of the circle. The circle will be centered around the origin of its
    /// frame of reference.
    pub radius: f64,

}



impl Default for Circle {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Circle__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Circle__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Circle {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Circle__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Circle__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Circle__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Circle {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Circle where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Circle";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Circle() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ConvexShape() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ConvexShape__init(msg: *mut ConvexShape) -> bool;
    fn rmf_traffic_msgs__msg__ConvexShape__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConvexShape>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ConvexShape__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConvexShape>);
    fn rmf_traffic_msgs__msg__ConvexShape__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConvexShape>, out_seq: *mut rosidl_runtime_rs::Sequence<ConvexShape>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ConvexShape
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConvexShape {
    /// Choose between the BOX and CIRCLE types
    pub type_: u8,

    /// Specify the index of the shape. We support 256 different convex shapes per
    /// context.
    pub index: u8,

}

impl ConvexShape {
    /// A 2D box or circle shape reference.
    pub const NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BOX: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CIRCLE: u8 = 2;

}


impl Default for ConvexShape {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ConvexShape__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ConvexShape__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConvexShape {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ConvexShape__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ConvexShape__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ConvexShape__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConvexShape {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConvexShape where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ConvexShape";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ConvexShape() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ConvexShapeContext() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ConvexShapeContext__init(msg: *mut ConvexShapeContext) -> bool;
    fn rmf_traffic_msgs__msg__ConvexShapeContext__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ConvexShapeContext>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ConvexShapeContext__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ConvexShapeContext>);
    fn rmf_traffic_msgs__msg__ConvexShapeContext__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ConvexShapeContext>, out_seq: *mut rosidl_runtime_rs::Sequence<ConvexShapeContext>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ConvexShapeContext
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConvexShapeContext {
    /// Circle descriptions which can be used by the ConvexShape message
    pub circles: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Circle>,

}



impl Default for ConvexShapeContext {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ConvexShapeContext__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ConvexShapeContext__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ConvexShapeContext {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ConvexShapeContext__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ConvexShapeContext__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ConvexShapeContext__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ConvexShapeContext {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ConvexShapeContext where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ConvexShapeContext";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ConvexShapeContext() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Heartbeat() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Heartbeat__init(msg: *mut Heartbeat) -> bool;
    fn rmf_traffic_msgs__msg__Heartbeat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Heartbeat>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Heartbeat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Heartbeat>);
    fn rmf_traffic_msgs__msg__Heartbeat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Heartbeat>, out_seq: *mut rosidl_runtime_rs::Sequence<Heartbeat>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Heartbeat
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Heartbeat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Heartbeat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Heartbeat__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Heartbeat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Heartbeat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Heartbeat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Heartbeat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Heartbeat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Heartbeat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Heartbeat where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Heartbeat";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Heartbeat() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Itinerary() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Itinerary__init(msg: *mut Itinerary) -> bool;
    fn rmf_traffic_msgs__msg__Itinerary__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Itinerary>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Itinerary__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Itinerary>);
    fn rmf_traffic_msgs__msg__Itinerary__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Itinerary>, out_seq: *mut rosidl_runtime_rs::Sequence<Itinerary>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Itinerary
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Itinerary {

    // This member is not documented.
    #[allow(missing_docs)]
    pub routes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Route>,

}



impl Default for Itinerary {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Itinerary__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Itinerary__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Itinerary {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Itinerary__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Itinerary__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Itinerary__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Itinerary {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Itinerary where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Itinerary";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Itinerary() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItineraryClear() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ItineraryClear__init(msg: *mut ItineraryClear) -> bool;
    fn rmf_traffic_msgs__msg__ItineraryClear__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ItineraryClear>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ItineraryClear__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ItineraryClear>);
    fn rmf_traffic_msgs__msg__ItineraryClear__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ItineraryClear>, out_seq: *mut rosidl_runtime_rs::Sequence<ItineraryClear>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ItineraryClear
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItineraryClear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,

}



impl Default for ItineraryClear {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ItineraryClear__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ItineraryClear__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ItineraryClear {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryClear__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryClear__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryClear__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ItineraryClear {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ItineraryClear where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ItineraryClear";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItineraryClear() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItineraryDelay() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ItineraryDelay__init(msg: *mut ItineraryDelay) -> bool;
    fn rmf_traffic_msgs__msg__ItineraryDelay__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ItineraryDelay>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ItineraryDelay__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ItineraryDelay>);
    fn rmf_traffic_msgs__msg__ItineraryDelay__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ItineraryDelay>, out_seq: *mut rosidl_runtime_rs::Sequence<ItineraryDelay>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ItineraryDelay
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItineraryDelay {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delay: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,

}



impl Default for ItineraryDelay {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ItineraryDelay__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ItineraryDelay__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ItineraryDelay {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryDelay__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryDelay__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryDelay__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ItineraryDelay {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ItineraryDelay where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ItineraryDelay";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItineraryDelay() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItineraryReached() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ItineraryReached__init(msg: *mut ItineraryReached) -> bool;
    fn rmf_traffic_msgs__msg__ItineraryReached__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ItineraryReached>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ItineraryReached__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ItineraryReached>);
    fn rmf_traffic_msgs__msg__ItineraryReached__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ItineraryReached>, out_seq: *mut rosidl_runtime_rs::Sequence<ItineraryReached>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ItineraryReached
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItineraryReached {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plan: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_checkpoints: rosidl_runtime_rs::Sequence<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress_version: u64,

}



impl Default for ItineraryReached {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ItineraryReached__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ItineraryReached__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ItineraryReached {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryReached__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryReached__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryReached__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ItineraryReached {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ItineraryReached where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ItineraryReached";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItineraryReached() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItineraryExtend() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ItineraryExtend__init(msg: *mut ItineraryExtend) -> bool;
    fn rmf_traffic_msgs__msg__ItineraryExtend__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ItineraryExtend>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ItineraryExtend__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ItineraryExtend>);
    fn rmf_traffic_msgs__msg__ItineraryExtend__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ItineraryExtend>, out_seq: *mut rosidl_runtime_rs::Sequence<ItineraryExtend>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ItineraryExtend
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItineraryExtend {
    /// ID of the schedule participant whose itinerary is being extended
    pub participant: u64,

    /// The new routes that are being added to the itinerary
    pub routes: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Route>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,

}



impl Default for ItineraryExtend {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ItineraryExtend__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ItineraryExtend__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ItineraryExtend {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryExtend__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryExtend__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItineraryExtend__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ItineraryExtend {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ItineraryExtend where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ItineraryExtend";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItineraryExtend() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItinerarySet() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ItinerarySet__init(msg: *mut ItinerarySet) -> bool;
    fn rmf_traffic_msgs__msg__ItinerarySet__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ItinerarySet>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ItinerarySet__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ItinerarySet>);
    fn rmf_traffic_msgs__msg__ItinerarySet__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ItinerarySet>, out_seq: *mut rosidl_runtime_rs::Sequence<ItinerarySet>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ItinerarySet
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItinerarySet {
    /// ID of the schedule participant whose itinerary is being set
    pub participant: u64,

    /// ID of this plan
    pub plan: u64,

    /// The new itinerary for this participant
    pub itinerary: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Route>,

    /// The storage location for these routes
    pub storage_base: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,

}



impl Default for ItinerarySet {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ItinerarySet__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ItinerarySet__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ItinerarySet {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItinerarySet__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItinerarySet__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ItinerarySet__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ItinerarySet {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ItinerarySet where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ItinerarySet";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ItinerarySet() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__MirrorUpdate() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__MirrorUpdate__init(msg: *mut MirrorUpdate) -> bool;
    fn rmf_traffic_msgs__msg__MirrorUpdate__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MirrorUpdate>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__MirrorUpdate__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MirrorUpdate>);
    fn rmf_traffic_msgs__msg__MirrorUpdate__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MirrorUpdate>, out_seq: *mut rosidl_runtime_rs::Sequence<MirrorUpdate>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__MirrorUpdate
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The version of the schedule node that provided this update

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirrorUpdate {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: super::super::msg::rmw::ScheduleIdentity,

    /// The version of the database this update provides
    pub database_version: u64,

    /// The patch for the query
    pub patch: super::super::msg::rmw::SchedulePatch,

    /// True if this update is meant to remedy a mirror that has fallen
    /// out of sync
    pub is_remedial_update: bool,

}



impl Default for MirrorUpdate {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__MirrorUpdate__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__MirrorUpdate__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MirrorUpdate {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__MirrorUpdate__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__MirrorUpdate__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__MirrorUpdate__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MirrorUpdate {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MirrorUpdate where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/MirrorUpdate";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__MirrorUpdate() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ParticipantDescription() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ParticipantDescription__init(msg: *mut ParticipantDescription) -> bool;
    fn rmf_traffic_msgs__msg__ParticipantDescription__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ParticipantDescription>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ParticipantDescription__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ParticipantDescription>);
    fn rmf_traffic_msgs__msg__ParticipantDescription__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ParticipantDescription>, out_seq: *mut rosidl_runtime_rs::Sequence<ParticipantDescription>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ParticipantDescription
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParticipantDescription {
    /// Name of the participant
    pub name: rosidl_runtime_rs::String,

    /// Owner of the participant (e.g. fleet name)
    pub owner: rosidl_runtime_rs::String,

    /// Whether or not this participant will automatically respond to conflicts
    pub responsiveness: u8,

    /// The physical profile of this Participant
    pub profile: super::super::msg::rmw::Profile,

}

impl ParticipantDescription {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RX_INVALID: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RX_UNRESPONSIVE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RX_RESPONSIVE: u8 = 2;

}


impl Default for ParticipantDescription {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ParticipantDescription__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ParticipantDescription__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ParticipantDescription {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ParticipantDescription__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ParticipantDescription__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ParticipantDescription__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ParticipantDescription {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ParticipantDescription where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ParticipantDescription";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ParticipantDescription() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Profile() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Profile__init(msg: *mut Profile) -> bool;
    fn rmf_traffic_msgs__msg__Profile__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Profile>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Profile__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Profile>);
    fn rmf_traffic_msgs__msg__Profile__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Profile>, out_seq: *mut rosidl_runtime_rs::Sequence<Profile>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Profile
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Profile {
    /// The shape that specifies the footprint of a schedule participant
    pub footprint: super::super::msg::rmw::ConvexShape,

    /// The shape that specifies the vicinity around a schedule participant
    pub vicinity: super::super::msg::rmw::ConvexShape,

    /// The buffer that contains the shape descriptions
    pub shape_context: super::super::msg::rmw::ConvexShapeContext,

}



impl Default for Profile {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Profile__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Profile__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Profile {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Profile__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Profile__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Profile__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Profile {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Profile where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Profile";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Profile() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Region() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Region__init(msg: *mut Region) -> bool;
    fn rmf_traffic_msgs__msg__Region__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Region>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Region__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Region>);
    fn rmf_traffic_msgs__msg__Region__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Region>, out_seq: *mut rosidl_runtime_rs::Sequence<Region>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Region
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Region {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spaces: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Space>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timespan: super::super::msg::rmw::Timespan,

}



impl Default for Region {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Region__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Region__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Region {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Region__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Region__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Region__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Region {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Region where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Region";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Region() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Route() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Route__init(msg: *mut Route) -> bool;
    fn rmf_traffic_msgs__msg__Route__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Route>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Route__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Route>);
    fn rmf_traffic_msgs__msg__Route__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Route>, out_seq: *mut rosidl_runtime_rs::Sequence<Route>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Route
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Route {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trajectory: super::super::msg::rmw::Trajectory,


    // This member is not documented.
    #[allow(missing_docs)]
    pub checkpoints: rosidl_runtime_rs::Sequence<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dependencies: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TrafficDependency>,

}



impl Default for Route {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Route__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Route__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Route {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Route__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Route__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Route__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Route {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Route where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Route";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Route() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeAdd() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleChangeAdd__init(msg: *mut ScheduleChangeAdd) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeAdd>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeAdd>);
    fn rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleChangeAdd>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeAdd>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeAdd
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeAdd {
    /// The Plan ID for the new routes
    pub plan_id: u64,

    /// The new route items to add
    pub items: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ScheduleChangeAddItem>,

}



impl Default for ScheduleChangeAdd {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleChangeAdd__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleChangeAdd__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleChangeAdd {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeAdd__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeAdd {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleChangeAdd where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleChangeAdd";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeAdd() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeAddItem() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleChangeAddItem__init(msg: *mut ScheduleChangeAddItem) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeAddItem>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeAddItem>);
    fn rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleChangeAddItem>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeAddItem>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeAddItem
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeAddItem {
    /// The ID for this route
    pub route_id: u64,

    /// The storage location for this route
    pub storage_id: u64,

    /// The description of this route
    pub route: super::super::msg::rmw::Route,

}



impl Default for ScheduleChangeAddItem {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleChangeAddItem__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleChangeAddItem__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleChangeAddItem {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeAddItem__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeAddItem {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleChangeAddItem where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleChangeAddItem";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeAddItem() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeCull() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleChangeCull__init(msg: *mut ScheduleChangeCull) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeCull>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeCull>);
    fn rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleChangeCull>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeCull>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeCull
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeCull {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: i64,

}



impl Default for ScheduleChangeCull {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleChangeCull__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleChangeCull__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleChangeCull {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeCull__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeCull {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleChangeCull where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleChangeCull";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeCull() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeDelay() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleChangeDelay__init(msg: *mut ScheduleChangeDelay) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeDelay>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeDelay>);
    fn rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleChangeDelay>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeDelay>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeDelay
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeDelay {

    // This member is not documented.
    #[allow(missing_docs)]
    pub delay: i64,

}



impl Default for ScheduleChangeDelay {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleChangeDelay__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleChangeDelay__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleChangeDelay {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeDelay__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeDelay {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleChangeDelay where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleChangeDelay";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeDelay() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeProgress() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleChangeProgress__init(msg: *mut ScheduleChangeProgress) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeProgress__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeProgress>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleChangeProgress__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeProgress>);
    fn rmf_traffic_msgs__msg__ScheduleChangeProgress__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleChangeProgress>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleChangeProgress>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeProgress
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeProgress {
    /// Indicate whether any progress has actually been made. If false, then the
    /// rest of the fields can be ignored
    pub has_progress: bool,

    /// The version of the progress within the plan
    pub version: u64,

    /// The checkpoints in the itinerary that have been reached
    pub checkpoints: rosidl_runtime_rs::Sequence<u64>,

}



impl Default for ScheduleChangeProgress {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleChangeProgress__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleChangeProgress__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleChangeProgress {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeProgress__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeProgress__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleChangeProgress__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeProgress {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleChangeProgress where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleChangeProgress";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleChangeProgress() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationAck() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationAck__init(msg: *mut NegotiationAck) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationAck__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationAck>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationAck__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationAck>);
    fn rmf_traffic_msgs__msg__NegotiationAck__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationAck>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationAck>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationAck
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationAck {
    /// The version number of the conflict whose conclusion is being acknowledged
    pub conflict_version: u64,

    /// The participants who are acknowledging the conclusion of the conflict
    /// negotiation
    pub acknowledgments: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationParticipantAck>,

}



impl Default for NegotiationAck {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationAck__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationAck__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationAck {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationAck__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationAck__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationAck__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationAck {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationAck where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationAck";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationAck() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationKey() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationKey__init(msg: *mut NegotiationKey) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationKey__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationKey>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationKey__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationKey>);
    fn rmf_traffic_msgs__msg__NegotiationKey__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationKey>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationKey>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationKey
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationKey {
    /// The participant ID of the negotiation table
    pub participant: u64,

    /// The version of the negotiation table that we care about
    pub version: u64,

}



impl Default for NegotiationKey {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationKey__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationKey__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationKey {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationKey__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationKey__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationKey__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationKey {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationKey where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationKey";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationKey() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationConclusion() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationConclusion__init(msg: *mut NegotiationConclusion) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationConclusion>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationConclusion>);
    fn rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationConclusion>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationConclusion>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationConclusion
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationConclusion {
    /// The version number assigned to this conflict
    pub conflict_version: u64,

    /// True if the conflict was resolved. False if the negotiation was abandoned.
    pub resolved: bool,

    /// The ID sequence for the negotiation table that was selected
    pub table: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationKey>,

}



impl Default for NegotiationConclusion {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationConclusion__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationConclusion__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationConclusion {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationConclusion__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationConclusion {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationConclusion where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationConclusion";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationConclusion() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationForfeit() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationForfeit__init(msg: *mut NegotiationForfeit) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationForfeit>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationForfeit>);
    fn rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationForfeit>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationForfeit>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationForfeit
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationForfeit {
    /// The conflict ID that this forfeit is targeted at
    pub conflict_version: u64,

    /// Forfeit this negotiation table
    pub table: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationKey>,

}



impl Default for NegotiationForfeit {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationForfeit__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationForfeit__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationForfeit {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationForfeit__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationForfeit {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationForfeit where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationForfeit";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationForfeit() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationNotice() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationNotice__init(msg: *mut NegotiationNotice) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationNotice__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationNotice>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationNotice__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationNotice>);
    fn rmf_traffic_msgs__msg__NegotiationNotice__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationNotice>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationNotice>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationNotice
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationNotice {
    /// The version number assigned to this conflict
    pub conflict_version: u64,

    /// The IDs of the participants that are in conflict.
    pub participants: rosidl_runtime_rs::Sequence<u64>,

}



impl Default for NegotiationNotice {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationNotice__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationNotice__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationNotice {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationNotice__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationNotice__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationNotice__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationNotice {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationNotice where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationNotice";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationNotice() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationParticipantAck() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationParticipantAck__init(msg: *mut NegotiationParticipantAck) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationParticipantAck>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationParticipantAck>);
    fn rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationParticipantAck>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationParticipantAck>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationParticipantAck
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationParticipantAck {
    /// The participant that is acknowledging
    pub participant: u64,

    /// Whether this participant will be updating
    pub updating: bool,

    /// The itinerary version that will provide the update to
    /// conform to the negotiation result
    pub itinerary_version: u64,

}



impl Default for NegotiationParticipantAck {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationParticipantAck__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationParticipantAck__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationParticipantAck {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationParticipantAck__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationParticipantAck {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationParticipantAck where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationParticipantAck";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationParticipantAck() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationProposal() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationProposal__init(msg: *mut NegotiationProposal) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationProposal>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationProposal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationProposal>);
    fn rmf_traffic_msgs__msg__NegotiationProposal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationProposal>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationProposal>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationProposal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationProposal {
    /// The conflict ID that this proposal is targeted at
    pub conflict_version: u64,

    /// The version number for this proposal within the negotiation
    pub proposal_version: u64,

    /// The participant ID that this proposal is coming from
    pub for_participant: u64,

    /// The participant IDs that this proposal is trying to accommodate. As each
    /// participant proposes their ideal itinerary, the other participants in the
    /// conflict will propose itineraries which accommodate it.
    ///
    /// The order of IDs in this dynamic array have important semantic meaning about
    /// which itineraries are being accommodated. For example:
    ///
    /// [] (empty):  This proposal does not accommodate any other participants. This
    ///              is the best possible itinerary for this participant.
    ///
    /// [3]:         This proposal is the best itinerary that can accommodate the
    ///              ideal itinerary of participant 3.
    ///
    /// [3, 7]:      This proposal is the best itinerary for this participant that can
    ///              accommodate both the ideal itinerary of participant 3 and the
    ///              best itinerary of participant 7 that accommodates the ideal
    ///              itinerary of participant 3.
    ///
    /// [3, 7, ...]: This proposal is the best itinerary that can accommodate the
    ///              ideal itinerary of participant 3 and the best itineraries that
    ///              accommodate the best itineraries of the participants that precede
    ///              them in the list, recursively.
    pub to_accommodate: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationKey>,

    /// The unique ID for the plan that is being proposed
    pub plan_id: u64,

    /// The itinerary that is being proposed for this participant
    pub itinerary: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Route>,

}



impl Default for NegotiationProposal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationProposal__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationProposal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationProposal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationProposal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationProposal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationProposal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationProposal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationProposal where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationProposal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationProposal() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationRefusal() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationRefusal__init(msg: *mut NegotiationRefusal) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationRefusal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationRefusal>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationRefusal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationRefusal>);
    fn rmf_traffic_msgs__msg__NegotiationRefusal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationRefusal>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationRefusal>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationRefusal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationRefusal {
    /// The ID of the conflict negotiation that is being refused
    pub conflict_version: u64,

}



impl Default for NegotiationRefusal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationRefusal__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationRefusal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationRefusal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRefusal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRefusal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRefusal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationRefusal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationRefusal where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationRefusal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationRefusal() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationRejection() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationRejection__init(msg: *mut NegotiationRejection) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationRejection__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationRejection>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationRejection__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationRejection>);
    fn rmf_traffic_msgs__msg__NegotiationRejection__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationRejection>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationRejection>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationRejection
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationRejection {
    /// The conflict ID that this rejection is targeted at
    pub conflict_version: u64,

    /// Reject this negotiation table
    pub table: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationKey>,

    /// The rejection is by this participant
    pub rejected_by: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alternatives: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Itinerary>,

}



impl Default for NegotiationRejection {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationRejection__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationRejection__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationRejection {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRejection__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRejection__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRejection__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationRejection {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationRejection where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationRejection";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationRejection() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationRepeat() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationRepeat__init(msg: *mut NegotiationRepeat) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationRepeat>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationRepeat>);
    fn rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationRepeat>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationRepeat>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationRepeat
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationRepeat {
    /// Repeat conflict information related to this version
    pub conflict_version: u64,

    /// Repeat conflict information related to this table. If this is empty, then
    /// only the initial NegotiationNotice will be repeated.
    pub table: rosidl_runtime_rs::Sequence<u64>,

}



impl Default for NegotiationRepeat {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationRepeat__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationRepeat__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationRepeat {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationRepeat__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationRepeat {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationRepeat where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationRepeat";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationRepeat() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationState__init(msg: *mut NegotiationState) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationState>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationState>);
    fn rmf_traffic_msgs__msg__NegotiationState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationState>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationState>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: super::super::msg::rmw::NegotiationStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tree: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationTreeNode>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orphan_proposals: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationProposal>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orphan_rejections: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationRejection>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orphan_forfeits: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationForfeit>,

}



impl Default for NegotiationState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationState__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationState() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationStates() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationStates__init(msg: *mut NegotiationStates) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationStates>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationStates>);
    fn rmf_traffic_msgs__msg__NegotiationStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationStates>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationStates>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub negotiations: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationState>,

}



impl Default for NegotiationStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationStates__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationStates where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationStates() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationStatus() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationStatus__init(msg: *mut NegotiationStatus) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationStatus__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationStatus>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationStatus__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationStatus>);
    fn rmf_traffic_msgs__msg__NegotiationStatus__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationStatus>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationStatus>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationStatus
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub conflict_version: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub participants: rosidl_runtime_rs::Sequence<u64>,

    /// Time that this negotiation began
    pub start_time: builtin_interfaces::msg::rmw::Time,

    /// Time that the last response from a participant was seen
    pub last_response_time: builtin_interfaces::msg::rmw::Time,

}



impl Default for NegotiationStatus {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationStatus__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationStatus__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationStatus {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStatus__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStatus__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStatus__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationStatus {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationStatus where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationStatus";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationStatus() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationStatuses() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationStatuses__init(msg: *mut NegotiationStatuses) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationStatuses__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationStatuses>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationStatuses__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationStatuses>);
    fn rmf_traffic_msgs__msg__NegotiationStatuses__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationStatuses>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationStatuses>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationStatuses
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationStatuses {

    // This member is not documented.
    #[allow(missing_docs)]
    pub negotiations: rosidl_runtime_rs::Sequence<super::super::msg::rmw::NegotiationStatus>,

}



impl Default for NegotiationStatuses {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationStatuses__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationStatuses__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationStatuses {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStatuses__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStatuses__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationStatuses__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationStatuses {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationStatuses where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationStatuses";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationStatuses() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationTreeNode() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__NegotiationTreeNode__init(msg: *mut NegotiationTreeNode) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<NegotiationTreeNode>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<NegotiationTreeNode>);
    fn rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<NegotiationTreeNode>, out_seq: *mut rosidl_runtime_rs::Sequence<NegotiationTreeNode>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__NegotiationTreeNode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationTreeNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub parent: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub key: super::super::msg::rmw::NegotiationKey,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rejected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Route>,

}



impl Default for NegotiationTreeNode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__NegotiationTreeNode__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__NegotiationTreeNode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for NegotiationTreeNode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__NegotiationTreeNode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for NegotiationTreeNode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for NegotiationTreeNode where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/NegotiationTreeNode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__NegotiationTreeNode() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Participant() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Participant__init(msg: *mut Participant) -> bool;
    fn rmf_traffic_msgs__msg__Participant__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Participant>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Participant__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Participant>);
    fn rmf_traffic_msgs__msg__Participant__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Participant>, out_seq: *mut rosidl_runtime_rs::Sequence<Participant>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Participant
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The unique ID for this participant

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Participant {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u64,

    /// Description of this participant (name, shape, etc.)
    pub description: super::super::msg::rmw::ParticipantDescription,

}



impl Default for Participant {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Participant__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Participant__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Participant {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Participant__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Participant__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Participant__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Participant {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Participant where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Participant";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Participant() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Participants() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Participants__init(msg: *mut Participants) -> bool;
    fn rmf_traffic_msgs__msg__Participants__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Participants>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Participants__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Participants>);
    fn rmf_traffic_msgs__msg__Participants__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Participants>, out_seq: *mut rosidl_runtime_rs::Sequence<Participants>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Participants
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The version of the schedule node that provided this update

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Participants {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: super::super::msg::rmw::ScheduleIdentity,

    /// A list of participants with their IDs
    pub participants: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Participant>,

}



impl Default for Participants {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Participants__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Participants__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Participants {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Participants__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Participants__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Participants__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Participants {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Participants where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Participants";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Participants() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleIdentity() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleIdentity__init(msg: *mut ScheduleIdentity) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleIdentity__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleIdentity>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleIdentity__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleIdentity>);
    fn rmf_traffic_msgs__msg__ScheduleIdentity__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleIdentity>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleIdentity>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleIdentity
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The UUID of the new schedule node
/// TODO(MXG): Consider using uuid_msgs here: https://github.com/ros-geographic-info/unique_identifier/blob/master/uuid_msgs/msg/UniqueID.msg

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleIdentity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_uuid: rosidl_runtime_rs::String,

    /// The time that the new schedule node was started. In the event that multiple
    /// schedule nodes have been started, the one with the newest timestamp will be
    /// considered the active node, and the rest of the nodes will shut down.
    pub timestamp: builtin_interfaces::msg::rmw::Time,

}



impl Default for ScheduleIdentity {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleIdentity__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleIdentity__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleIdentity {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleIdentity__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleIdentity__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleIdentity__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleIdentity {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleIdentity where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleIdentity";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleIdentity() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleInconsistency() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleInconsistency__init(msg: *mut ScheduleInconsistency) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleInconsistency>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleInconsistency>);
    fn rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleInconsistency>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleInconsistency>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleInconsistency
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleInconsistency {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ranges: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ScheduleInconsistencyRange>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_known_itinerary: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_known_progress: u64,

}



impl Default for ScheduleInconsistency {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleInconsistency__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleInconsistency__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleInconsistency {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleInconsistency__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleInconsistency {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleInconsistency where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleInconsistency";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleInconsistency() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleInconsistencyRange() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleInconsistencyRange__init(msg: *mut ScheduleInconsistencyRange) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleInconsistencyRange>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleInconsistencyRange>);
    fn rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleInconsistencyRange>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleInconsistencyRange>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleInconsistencyRange
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleInconsistencyRange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lower: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub upper: u64,

}



impl Default for ScheduleInconsistencyRange {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleInconsistencyRange__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleInconsistencyRange__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleInconsistencyRange {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleInconsistencyRange__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleInconsistencyRange {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleInconsistencyRange where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleInconsistencyRange";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleInconsistencyRange() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleParticipantPatch() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleParticipantPatch__init(msg: *mut ScheduleParticipantPatch) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleParticipantPatch>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleParticipantPatch>);
    fn rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleParticipantPatch>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleParticipantPatch>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleParticipantPatch
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleParticipantPatch {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub erasures: rosidl_runtime_rs::Sequence<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delays: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ScheduleChangeDelay>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub additions: super::super::msg::rmw::ScheduleChangeAdd,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: super::super::msg::rmw::ScheduleChangeProgress,

}



impl Default for ScheduleParticipantPatch {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleParticipantPatch__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleParticipantPatch__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleParticipantPatch {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleParticipantPatch__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleParticipantPatch {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleParticipantPatch where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleParticipantPatch";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleParticipantPatch() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__SchedulePatch() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__SchedulePatch__init(msg: *mut SchedulePatch) -> bool;
    fn rmf_traffic_msgs__msg__SchedulePatch__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SchedulePatch>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__SchedulePatch__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SchedulePatch>);
    fn rmf_traffic_msgs__msg__SchedulePatch__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SchedulePatch>, out_seq: *mut rosidl_runtime_rs::Sequence<SchedulePatch>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__SchedulePatch
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SchedulePatch {
    /// The changes to the schedule, grouped into the different participants
    pub participants: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ScheduleParticipantPatch>,

    /// TODO(MXG): The database will only ever report 1 cull per update. Consider
    /// making this a single field instead of a dynamic array.
    pub cull: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ScheduleChangeCull>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_base_version: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_version: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latest_version: u64,

}



impl Default for SchedulePatch {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__SchedulePatch__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__SchedulePatch__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SchedulePatch {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__SchedulePatch__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__SchedulePatch__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__SchedulePatch__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SchedulePatch {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SchedulePatch where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/SchedulePatch";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__SchedulePatch() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleQuery() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleQuery__init(msg: *mut ScheduleQuery) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleQuery__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleQuery>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleQuery__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleQuery>);
    fn rmf_traffic_msgs__msg__ScheduleQuery__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleQuery>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleQuery>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleQuery
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleQuery {

    // This member is not documented.
    #[allow(missing_docs)]
    pub spacetime: super::super::msg::rmw::ScheduleQuerySpacetime,


    // This member is not documented.
    #[allow(missing_docs)]
    pub participants: super::super::msg::rmw::ScheduleQueryParticipants,

}



impl Default for ScheduleQuery {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleQuery__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleQuery__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleQuery {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQuery__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQuery__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQuery__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleQuery {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleQuery where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleQuery";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleQuery() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleQueries() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleQueries__init(msg: *mut ScheduleQueries) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleQueries__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleQueries>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleQueries__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleQueries>);
    fn rmf_traffic_msgs__msg__ScheduleQueries__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleQueries>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleQueries>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleQueries
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The version of the schedule node that provided this update

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleQueries {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: super::super::msg::rmw::ScheduleIdentity,

    /// The list of known queries
    pub queries: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ScheduleQuery>,

    /// The list of IDs for those queries
    pub query_ids: rosidl_runtime_rs::Sequence<u64>,

}



impl Default for ScheduleQueries {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleQueries__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleQueries__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleQueries {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQueries__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQueries__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQueries__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleQueries {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleQueries where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleQueries";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleQueries() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleQueryParticipants() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleQueryParticipants__init(msg: *mut ScheduleQueryParticipants) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleQueryParticipants__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleQueryParticipants>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleQueryParticipants__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleQueryParticipants>);
    fn rmf_traffic_msgs__msg__ScheduleQueryParticipants__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleQueryParticipants>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleQueryParticipants>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleQueryParticipants
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleQueryParticipants {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ids: rosidl_runtime_rs::Sequence<u64>,

}

impl ScheduleQueryParticipants {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ALL: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INCLUDE: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EXCLUDE: u16 = 3;

}


impl Default for ScheduleQueryParticipants {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleQueryParticipants__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleQueryParticipants__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleQueryParticipants {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQueryParticipants__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQueryParticipants__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQueryParticipants__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleQueryParticipants {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleQueryParticipants where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleQueryParticipants";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleQueryParticipants() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleQuerySpacetime() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ScheduleQuerySpacetime__init(msg: *mut ScheduleQuerySpacetime) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ScheduleQuerySpacetime>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ScheduleQuerySpacetime>);
    fn rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ScheduleQuerySpacetime>, out_seq: *mut rosidl_runtime_rs::Sequence<ScheduleQuerySpacetime>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ScheduleQuerySpacetime
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleQuerySpacetime {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u16,

    /// =====================
    /// ===== REGIONS =====
    /// If REGIONS mode is chosen, this will contain the regions to query
    pub regions: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Region>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shape_context: super::super::msg::rmw::ShapeContext,

    /// =====================
    /// ===== TIMESPAN ======
    pub timespan: super::super::msg::rmw::Timespan,

}

impl ScheduleQuerySpacetime {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ALL: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REGIONS: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TIMESPAN: u16 = 3;

}


impl Default for ScheduleQuerySpacetime {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ScheduleQuerySpacetime__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ScheduleQuerySpacetime__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ScheduleQuerySpacetime {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ScheduleQuerySpacetime__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ScheduleQuerySpacetime {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ScheduleQuerySpacetime where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ScheduleQuerySpacetime";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ScheduleQuerySpacetime() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Shape() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Shape__init(msg: *mut Shape) -> bool;
    fn rmf_traffic_msgs__msg__Shape__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Shape>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Shape__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Shape>);
    fn rmf_traffic_msgs__msg__Shape__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Shape>, out_seq: *mut rosidl_runtime_rs::Sequence<Shape>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Shape
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Shape {
    /// TODO(MXG): Add support for the SimplePolygon class
    /// uint8 SIMPLE_POLYGON=3
    /// Choose between the BOX and CIRCLE types
    pub type_: u8,

    /// Specify the index of the shape. We support 256 different convex shapes per
    /// trajectory. If more shapes are needed than that, then the trajectory must be
    /// split into more trajectories.
    pub index: u8,

}

impl Shape {
    /// A 2D shape reference.
    pub const NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BOX: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CIRCLE: u8 = 2;

}


impl Default for Shape {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Shape__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Shape__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Shape {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Shape__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Shape__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Shape__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Shape {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Shape where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Shape";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Shape() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ShapeContext() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__ShapeContext__init(msg: *mut ShapeContext) -> bool;
    fn rmf_traffic_msgs__msg__ShapeContext__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ShapeContext>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__ShapeContext__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ShapeContext>);
    fn rmf_traffic_msgs__msg__ShapeContext__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ShapeContext>, out_seq: *mut rosidl_runtime_rs::Sequence<ShapeContext>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__ShapeContext
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShapeContext {
    /// The convex shape descriptions that are available
    pub convex_shapes: super::super::msg::rmw::ConvexShapeContext,

}



impl Default for ShapeContext {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__ShapeContext__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__ShapeContext__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ShapeContext {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ShapeContext__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ShapeContext__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__ShapeContext__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ShapeContext {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ShapeContext where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/ShapeContext";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__ShapeContext() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Space() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Space__init(msg: *mut Space) -> bool;
    fn rmf_traffic_msgs__msg__Space__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Space>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Space__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Space>);
    fn rmf_traffic_msgs__msg__Space__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Space>, out_seq: *mut rosidl_runtime_rs::Sequence<Space>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Space
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Space {
    /// The shape of this space
    pub shape: super::super::msg::rmw::Shape,

    /// The pose of this space
    pub pose: geometry_msgs::msg::rmw::Pose2D,

}



impl Default for Space {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Space__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Space__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Space {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Space__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Space__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Space__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Space {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Space where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Space";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Space() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Timespan() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Timespan__init(msg: *mut Timespan) -> bool;
    fn rmf_traffic_msgs__msg__Timespan__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Timespan>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Timespan__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Timespan>);
    fn rmf_traffic_msgs__msg__Timespan__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Timespan>, out_seq: *mut rosidl_runtime_rs::Sequence<Timespan>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Timespan
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Timespan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub maps: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// TODO(MXG): Find out if it's more efficient to use a bool+value pair, or to use
    /// a dynamic array of the value (which will only ever have 1 or 0 entries)
    pub has_lower_bound: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lower_bound: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_upper_bound: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub upper_bound: i64,

}



impl Default for Timespan {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Timespan__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Timespan__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Timespan {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Timespan__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Timespan__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Timespan__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Timespan {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Timespan where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Timespan";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Timespan() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__TrafficDependency() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__TrafficDependency__init(msg: *mut TrafficDependency) -> bool;
    fn rmf_traffic_msgs__msg__TrafficDependency__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrafficDependency>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__TrafficDependency__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrafficDependency>);
    fn rmf_traffic_msgs__msg__TrafficDependency__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrafficDependency>, out_seq: *mut rosidl_runtime_rs::Sequence<TrafficDependency>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__TrafficDependency
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrafficDependency {

    // This member is not documented.
    #[allow(missing_docs)]
    pub dependent_checkpoint: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub on_participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub on_plan: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub on_route: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub on_checkpoint: u64,

}



impl Default for TrafficDependency {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__TrafficDependency__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__TrafficDependency__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrafficDependency {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__TrafficDependency__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__TrafficDependency__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__TrafficDependency__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrafficDependency {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrafficDependency where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/TrafficDependency";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__TrafficDependency() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Trajectory() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__Trajectory__init(msg: *mut Trajectory) -> bool;
    fn rmf_traffic_msgs__msg__Trajectory__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Trajectory>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__Trajectory__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Trajectory>);
    fn rmf_traffic_msgs__msg__Trajectory__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Trajectory>, out_seq: *mut rosidl_runtime_rs::Sequence<Trajectory>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__Trajectory
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trajectory {
    /// A Trajectory is a container of Waypoints. The standard way to interpret the
    /// motion of a Trajectory is as a piecewise cubic spline connecting the
    /// waypoints.
    pub waypoints: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TrajectoryWaypoint>,

}



impl Default for Trajectory {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__Trajectory__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__Trajectory__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Trajectory {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Trajectory__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Trajectory__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__Trajectory__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Trajectory {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Trajectory where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/Trajectory";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__Trajectory() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__TrajectoryWaypoint() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__msg__TrajectoryWaypoint__init(msg: *mut TrajectoryWaypoint) -> bool;
    fn rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryWaypoint>, size: usize) -> bool;
    fn rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TrajectoryWaypoint>);
    fn rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TrajectoryWaypoint>, out_seq: *mut rosidl_runtime_rs::Sequence<TrajectoryWaypoint>) -> bool;
}

// Corresponds to rmf_traffic_msgs__msg__TrajectoryWaypoint
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryWaypoint {
    /// The time when this Waypoint should be reached
    pub time: i64,

    /// This is a 2D homogeneous position which mixes 2 translation coordinates (x, y)
    /// with 1 rotation coordinate (yaw).
    ///
    /// The position of this Waypoint
    pub position: [f64; 3],

    /// This is a 2D homogeneous screw velocity with 2 translational components (x, y)
    /// and 1 rotational component (yaw).
    ///
    /// The velocity that this vehicle should have when it reaches this Waypoint
    pub velocity: [f64; 3],

}



impl Default for TrajectoryWaypoint {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__msg__TrajectoryWaypoint__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__msg__TrajectoryWaypoint__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TrajectoryWaypoint {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__msg__TrajectoryWaypoint__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TrajectoryWaypoint {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TrajectoryWaypoint where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/msg/TrajectoryWaypoint";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__msg__TrajectoryWaypoint() }
  }
}


