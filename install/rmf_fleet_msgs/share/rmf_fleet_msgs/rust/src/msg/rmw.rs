#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__Location() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__Location__init(msg: *mut Location) -> bool;
    fn rmf_fleet_msgs__msg__Location__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Location>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__Location__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Location>);
    fn rmf_fleet_msgs__msg__Location__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Location>, out_seq: *mut rosidl_runtime_rs::Sequence<Location>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__Location
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Location {

    // This member is not documented.
    #[allow(missing_docs)]
    pub t: builtin_interfaces::msg::rmw::Time,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub obey_approach_speed_limit: bool,

    /// Speed limit of the lane leading to this waypoint in m/s
    pub approach_speed_limit: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub index: u64,

}



impl Default for Location {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__Location__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__Location__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Location {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__Location__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__Location__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__Location__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Location {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Location where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/Location";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__Location() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__RobotMode() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__RobotMode__init(msg: *mut RobotMode) -> bool;
    fn rmf_fleet_msgs__msg__RobotMode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotMode>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__RobotMode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotMode>);
    fn rmf_fleet_msgs__msg__RobotMode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotMode>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotMode>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__RobotMode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotMode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_request_id: u64,

}

impl RobotMode {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_IDLE: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CHARGING: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_MOVING: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_PAUSED: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_WAITING: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_EMERGENCY: u32 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_GOING_HOME: u32 = 6;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_DOCKING: u32 = 7;

    /// Use this when a command received from the fleet adapter
    /// has a problem and needs to be recomputed.
    pub const MODE_ADAPTER_ERROR: u32 = 8;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CLEANING: u32 = 9;

}


impl Default for RobotMode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__RobotMode__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__RobotMode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotMode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__RobotMode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__RobotMode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__RobotMode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotMode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotMode where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/RobotMode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__RobotMode() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__RobotState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__RobotState__init(msg: *mut RobotState) -> bool;
    fn rmf_fleet_msgs__msg__RobotState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RobotState>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__RobotState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RobotState>);
    fn rmf_fleet_msgs__msg__RobotState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RobotState>, out_seq: *mut rosidl_runtime_rs::Sequence<RobotState>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__RobotState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub model: rosidl_runtime_rs::String,

    /// task_id is copied in from the most recent Request message,
    /// such as ModeRequest, DestinationRequest, or PathRequest
    pub task_id: rosidl_runtime_rs::String,

    /// The sequence number of this message. Every new message should increment the
    /// sequence number by 1.
    pub seq: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::super::msg::rmw::RobotMode,


    // This member is not documented.
    #[allow(missing_docs)]
    pub battery_percent: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub location: super::super::msg::rmw::Location,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Location>,

}



impl Default for RobotState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__RobotState__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__RobotState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RobotState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__RobotState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__RobotState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__RobotState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RobotState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RobotState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/RobotState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__RobotState() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__FleetState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__FleetState__init(msg: *mut FleetState) -> bool;
    fn rmf_fleet_msgs__msg__FleetState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<FleetState>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__FleetState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<FleetState>);
    fn rmf_fleet_msgs__msg__FleetState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<FleetState>, out_seq: *mut rosidl_runtime_rs::Sequence<FleetState>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__FleetState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct FleetState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robots: rosidl_runtime_rs::Sequence<super::super::msg::rmw::RobotState>,

}



impl Default for FleetState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__FleetState__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__FleetState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for FleetState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__FleetState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__FleetState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__FleetState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for FleetState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for FleetState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/FleetState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__FleetState() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ModeRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__ModeRequest__init(msg: *mut ModeRequest) -> bool;
    fn rmf_fleet_msgs__msg__ModeRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ModeRequest>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__ModeRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ModeRequest>);
    fn rmf_fleet_msgs__msg__ModeRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ModeRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<ModeRequest>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__ModeRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModeRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: super::super::msg::rmw::RobotMode,

    /// task_id must be copied into future RobotState messages
    pub task_id: rosidl_runtime_rs::String,

    /// Some mode changes require parameters. For example, the name of a dock.
    pub parameters: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ModeParameter>,

}



impl Default for ModeRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__ModeRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__ModeRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ModeRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ModeRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ModeRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ModeRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ModeRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ModeRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/ModeRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ModeRequest() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DestinationRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__DestinationRequest__init(msg: *mut DestinationRequest) -> bool;
    fn rmf_fleet_msgs__msg__DestinationRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DestinationRequest>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__DestinationRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DestinationRequest>);
    fn rmf_fleet_msgs__msg__DestinationRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DestinationRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<DestinationRequest>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__DestinationRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DestinationRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub destination: super::super::msg::rmw::Location,

    /// task_id must be copied into future RobotState messages
    pub task_id: rosidl_runtime_rs::String,

}



impl Default for DestinationRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__DestinationRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__DestinationRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DestinationRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DestinationRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DestinationRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DestinationRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DestinationRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DestinationRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/DestinationRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DestinationRequest() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__PathRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__PathRequest__init(msg: *mut PathRequest) -> bool;
    fn rmf_fleet_msgs__msg__PathRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PathRequest>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__PathRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PathRequest>);
    fn rmf_fleet_msgs__msg__PathRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PathRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<PathRequest>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__PathRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PathRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub path: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Location>,

    /// task_id must be copied into future RobotState messages
    pub task_id: rosidl_runtime_rs::String,

}



impl Default for PathRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__PathRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__PathRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PathRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__PathRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__PathRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__PathRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PathRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PathRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/PathRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__PathRequest() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__PauseRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__PauseRequest__init(msg: *mut PauseRequest) -> bool;
    fn rmf_fleet_msgs__msg__PauseRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<PauseRequest>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__PauseRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<PauseRequest>);
    fn rmf_fleet_msgs__msg__PauseRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<PauseRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<PauseRequest>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__PauseRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct PauseRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode_request_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub at_checkpoint: u32,

}

impl PauseRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_PAUSE_IMMEDIATELY: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_PAUSE_AT_CHECKPOINT: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_RESUME: u32 = 2;

}


impl Default for PauseRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__PauseRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__PauseRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for PauseRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__PauseRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__PauseRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__PauseRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for PauseRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for PauseRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/PauseRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__PauseRequest() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ModeParameter() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__ModeParameter__init(msg: *mut ModeParameter) -> bool;
    fn rmf_fleet_msgs__msg__ModeParameter__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ModeParameter>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__ModeParameter__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ModeParameter>);
    fn rmf_fleet_msgs__msg__ModeParameter__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ModeParameter>, out_seq: *mut rosidl_runtime_rs::Sequence<ModeParameter>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__ModeParameter
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ModeParameter {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::String,

}



impl Default for ModeParameter {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__ModeParameter__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__ModeParameter__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ModeParameter {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ModeParameter__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ModeParameter__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ModeParameter__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ModeParameter {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ModeParameter where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/ModeParameter";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ModeParameter() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DockParameter() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__DockParameter__init(msg: *mut DockParameter) -> bool;
    fn rmf_fleet_msgs__msg__DockParameter__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DockParameter>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__DockParameter__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DockParameter>);
    fn rmf_fleet_msgs__msg__DockParameter__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DockParameter>, out_seq: *mut rosidl_runtime_rs::Sequence<DockParameter>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__DockParameter
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The name of the waypoint where the docking begins

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockParameter {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start: rosidl_runtime_rs::String,

    /// The name of the waypoint where the docking ends
    pub finish: rosidl_runtime_rs::String,

    /// The points in the docking path
    pub path: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Location>,

}



impl Default for DockParameter {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__DockParameter__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__DockParameter__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DockParameter {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DockParameter__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DockParameter__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DockParameter__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DockParameter {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DockParameter where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/DockParameter";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DockParameter() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__Dock() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__Dock__init(msg: *mut Dock) -> bool;
    fn rmf_fleet_msgs__msg__Dock__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Dock>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__Dock__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Dock>);
    fn rmf_fleet_msgs__msg__Dock__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Dock>, out_seq: *mut rosidl_runtime_rs::Sequence<Dock>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__Dock
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Dock {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DockParameter>,

}



impl Default for Dock {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__Dock__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__Dock__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Dock {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__Dock__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__Dock__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__Dock__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Dock {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Dock where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/Dock";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__Dock() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DockSummary() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__DockSummary__init(msg: *mut DockSummary) -> bool;
    fn rmf_fleet_msgs__msg__DockSummary__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DockSummary>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__DockSummary__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DockSummary>);
    fn rmf_fleet_msgs__msg__DockSummary__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DockSummary>, out_seq: *mut rosidl_runtime_rs::Sequence<DockSummary>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__DockSummary
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DockSummary {

    // This member is not documented.
    #[allow(missing_docs)]
    pub docks: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Dock>,

}



impl Default for DockSummary {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__DockSummary__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__DockSummary__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DockSummary {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DockSummary__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DockSummary__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DockSummary__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DockSummary {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DockSummary where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/DockSummary";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DockSummary() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__LaneRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__LaneRequest__init(msg: *mut LaneRequest) -> bool;
    fn rmf_fleet_msgs__msg__LaneRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LaneRequest>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__LaneRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LaneRequest>);
    fn rmf_fleet_msgs__msg__LaneRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LaneRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<LaneRequest>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__LaneRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub open_lanes: rosidl_runtime_rs::Sequence<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub close_lanes: rosidl_runtime_rs::Sequence<u64>,

}



impl Default for LaneRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__LaneRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__LaneRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LaneRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__LaneRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__LaneRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__LaneRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LaneRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LaneRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/LaneRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__LaneRequest() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ClosedLanes() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__ClosedLanes__init(msg: *mut ClosedLanes) -> bool;
    fn rmf_fleet_msgs__msg__ClosedLanes__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ClosedLanes>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__ClosedLanes__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ClosedLanes>);
    fn rmf_fleet_msgs__msg__ClosedLanes__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ClosedLanes>, out_seq: *mut rosidl_runtime_rs::Sequence<ClosedLanes>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__ClosedLanes
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ClosedLanes {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub closed_lanes: rosidl_runtime_rs::Sequence<u64>,

}



impl Default for ClosedLanes {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__ClosedLanes__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__ClosedLanes__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ClosedLanes {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ClosedLanes__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ClosedLanes__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ClosedLanes__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ClosedLanes {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ClosedLanes where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/ClosedLanes";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ClosedLanes() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__InterruptRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__InterruptRequest__init(msg: *mut InterruptRequest) -> bool;
    fn rmf_fleet_msgs__msg__InterruptRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<InterruptRequest>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__InterruptRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<InterruptRequest>);
    fn rmf_fleet_msgs__msg__InterruptRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<InterruptRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<InterruptRequest>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__InterruptRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct InterruptRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub interrupt_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub labels: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,

}

impl InterruptRequest {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_INTERRUPT: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_RESUME: u8 = 1;

}


impl Default for InterruptRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__InterruptRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__InterruptRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for InterruptRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__InterruptRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__InterruptRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__InterruptRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for InterruptRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for InterruptRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/InterruptRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__InterruptRequest() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__SpeedLimitedLane() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__SpeedLimitedLane__init(msg: *mut SpeedLimitedLane) -> bool;
    fn rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpeedLimitedLane>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpeedLimitedLane>);
    fn rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpeedLimitedLane>, out_seq: *mut rosidl_runtime_rs::Sequence<SpeedLimitedLane>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__SpeedLimitedLane
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The index of the lane with a speed limit

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpeedLimitedLane {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lane_index: u64,

    /// The imposed speed limit for the lane
    pub speed_limit: f64,

}



impl Default for SpeedLimitedLane {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__SpeedLimitedLane__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__SpeedLimitedLane__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpeedLimitedLane {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__SpeedLimitedLane__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpeedLimitedLane {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpeedLimitedLane where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/SpeedLimitedLane";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__SpeedLimitedLane() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__SpeedLimitRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__SpeedLimitRequest__init(msg: *mut SpeedLimitRequest) -> bool;
    fn rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SpeedLimitRequest>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SpeedLimitRequest>);
    fn rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SpeedLimitRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<SpeedLimitRequest>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__SpeedLimitRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The name of the fleet

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SpeedLimitRequest {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,

    /// The lanes to impose speed limits upon.
    pub speed_limits: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SpeedLimitedLane>,

    /// The indices of lanes to remove speed limits
    pub remove_limits: rosidl_runtime_rs::Sequence<u64>,

}



impl Default for SpeedLimitRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__SpeedLimitRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__SpeedLimitRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SpeedLimitRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__SpeedLimitRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SpeedLimitRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SpeedLimitRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/SpeedLimitRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__SpeedLimitRequest() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__LaneStates() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__LaneStates__init(msg: *mut LaneStates) -> bool;
    fn rmf_fleet_msgs__msg__LaneStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LaneStates>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__LaneStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LaneStates>);
    fn rmf_fleet_msgs__msg__LaneStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LaneStates>, out_seq: *mut rosidl_runtime_rs::Sequence<LaneStates>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__LaneStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The name of the fleet with closed or speed limited lanes

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LaneStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,

    /// The indices of the lanes that are currently closed
    pub closed_lanes: rosidl_runtime_rs::Sequence<u64>,

    /// Lanes that have speed limits
    pub speed_limits: rosidl_runtime_rs::Sequence<super::super::msg::rmw::SpeedLimitedLane>,

}



impl Default for LaneStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__LaneStates__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__LaneStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LaneStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__LaneStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__LaneStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__LaneStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LaneStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LaneStates where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/LaneStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__LaneStates() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ChargingAssignment() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__ChargingAssignment__init(msg: *mut ChargingAssignment) -> bool;
    fn rmf_fleet_msgs__msg__ChargingAssignment__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargingAssignment>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__ChargingAssignment__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargingAssignment>);
    fn rmf_fleet_msgs__msg__ChargingAssignment__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargingAssignment>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargingAssignment>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__ChargingAssignment
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargingAssignment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub robot_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub waypoint_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub mode: u8,

}

impl ChargingAssignment {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_CHARGE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MODE_WAIT: u8 = 1;

}


impl Default for ChargingAssignment {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__ChargingAssignment__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__ChargingAssignment__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargingAssignment {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ChargingAssignment__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ChargingAssignment__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ChargingAssignment__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargingAssignment {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargingAssignment where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/ChargingAssignment";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ChargingAssignment() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ChargingAssignments() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__ChargingAssignments__init(msg: *mut ChargingAssignments) -> bool;
    fn rmf_fleet_msgs__msg__ChargingAssignments__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ChargingAssignments>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__ChargingAssignments__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ChargingAssignments>);
    fn rmf_fleet_msgs__msg__ChargingAssignments__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ChargingAssignments>, out_seq: *mut rosidl_runtime_rs::Sequence<ChargingAssignments>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__ChargingAssignments
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ChargingAssignments {

    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assignments: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ChargingAssignment>,

}



impl Default for ChargingAssignments {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__ChargingAssignments__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__ChargingAssignments__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ChargingAssignments {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ChargingAssignments__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ChargingAssignments__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__ChargingAssignments__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ChargingAssignments {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ChargingAssignments where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/ChargingAssignments";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__ChargingAssignments() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__MutexGroupAssignment() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__MutexGroupAssignment__init(msg: *mut MutexGroupAssignment) -> bool;
    fn rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MutexGroupAssignment>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MutexGroupAssignment>);
    fn rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MutexGroupAssignment>, out_seq: *mut rosidl_runtime_rs::Sequence<MutexGroupAssignment>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__MutexGroupAssignment
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message maps a mutex group name to the name of an agent that is currently
/// holding the claim to that group.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MutexGroupAssignment {
    /// Name of the mutex group that is being described.
    pub group: rosidl_runtime_rs::String,

    /// Traffic Participant ID of the agent that has currently claimed the group.
    /// If the group is unclaimed, this will be the max uint64 value.
    pub claimant: u64,

    /// Time stamp of when the claim request began.
    pub claim_time: builtin_interfaces::msg::rmw::Time,

}



impl Default for MutexGroupAssignment {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__MutexGroupAssignment__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__MutexGroupAssignment__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MutexGroupAssignment {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupAssignment__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MutexGroupAssignment {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MutexGroupAssignment where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/MutexGroupAssignment";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__MutexGroupAssignment() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__MutexGroupManualRelease() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__MutexGroupManualRelease__init(msg: *mut MutexGroupManualRelease) -> bool;
    fn rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MutexGroupManualRelease>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MutexGroupManualRelease>);
    fn rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MutexGroupManualRelease>, out_seq: *mut rosidl_runtime_rs::Sequence<MutexGroupManualRelease>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__MutexGroupManualRelease
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message allows operators to manually request that a robot release one or
/// more mutex groups that it is currently holding.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MutexGroupManualRelease {
    /// Name of the mutex groups to release
    pub release_mutex_groups: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

    /// The name of the fleet that the robot belongs to
    pub fleet: rosidl_runtime_rs::String,

    /// The name of the robot that needs to release the mutex groups
    pub robot: rosidl_runtime_rs::String,

}



impl Default for MutexGroupManualRelease {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__MutexGroupManualRelease__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__MutexGroupManualRelease__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MutexGroupManualRelease {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupManualRelease__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MutexGroupManualRelease {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MutexGroupManualRelease where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/MutexGroupManualRelease";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__MutexGroupManualRelease() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__MutexGroupRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__MutexGroupRequest__init(msg: *mut MutexGroupRequest) -> bool;
    fn rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MutexGroupRequest>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MutexGroupRequest>);
    fn rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MutexGroupRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<MutexGroupRequest>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__MutexGroupRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message is used to attempt to claim a mutex group. It should be sent
/// periodically for the entire duration that the claimer needs the mutex because
/// mutex groups have a limited-time leasing period that will timeout if a request
/// heartbeat is not received in some amount of time.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MutexGroupRequest {
    /// Name of the mutex group that is being claimed
    pub group: rosidl_runtime_rs::String,

    /// Name of the agent that is trying to claim the mutex group.
    pub claimant: u64,

    /// Time stamp of when the claim request began. The same time stamp should be used
    /// for all subsequent heartbeat messages related to this claim. If the claim time
    /// changes then this claim will be treated a new claim and may be deprioritized.
    /// Earlier claims have priority over later claims.
    pub claim_time: builtin_interfaces::msg::rmw::Time,

    /// What kind of request is this?
    pub mode: u32,

}

impl MutexGroupRequest {
    /// Request to release the mutex group from this claimer
    pub const MODE_RELEASE: u32 = 0;

    /// Request to lock the mutex group for this claimer
    pub const MODE_LOCK: u32 = 1;

}


impl Default for MutexGroupRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__MutexGroupRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__MutexGroupRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MutexGroupRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MutexGroupRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MutexGroupRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/MutexGroupRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__MutexGroupRequest() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__MutexGroupStates() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__MutexGroupStates__init(msg: *mut MutexGroupStates) -> bool;
    fn rmf_fleet_msgs__msg__MutexGroupStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<MutexGroupStates>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__MutexGroupStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<MutexGroupStates>);
    fn rmf_fleet_msgs__msg__MutexGroupStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<MutexGroupStates>, out_seq: *mut rosidl_runtime_rs::Sequence<MutexGroupStates>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__MutexGroupStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A map of all the current mutex group assignments

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MutexGroupStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub assignments: rosidl_runtime_rs::Sequence<super::super::msg::rmw::MutexGroupAssignment>,

}



impl Default for MutexGroupStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__MutexGroupStates__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__MutexGroupStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for MutexGroupStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__MutexGroupStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for MutexGroupStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for MutexGroupStates where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/MutexGroupStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__MutexGroupStates() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__BeaconState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__BeaconState__init(msg: *mut BeaconState) -> bool;
    fn rmf_fleet_msgs__msg__BeaconState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BeaconState>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__BeaconState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BeaconState>);
    fn rmf_fleet_msgs__msg__BeaconState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BeaconState>, out_seq: *mut rosidl_runtime_rs::Sequence<BeaconState>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__BeaconState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message defines data from a robot beacon

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BeaconState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub online: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub category: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub activated: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub level: rosidl_runtime_rs::String,

}



impl Default for BeaconState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__BeaconState__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__BeaconState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BeaconState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__BeaconState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__BeaconState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__BeaconState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BeaconState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BeaconState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/BeaconState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__BeaconState() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DeliveryAlert() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__DeliveryAlert__init(msg: *mut DeliveryAlert) -> bool;
    fn rmf_fleet_msgs__msg__DeliveryAlert__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlert>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__DeliveryAlert__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlert>);
    fn rmf_fleet_msgs__msg__DeliveryAlert__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryAlert>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlert>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__DeliveryAlert
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryAlert {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub category: super::super::msg::rmw::DeliveryAlertCategory,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tier: super::super::msg::rmw::DeliveryAlertTier,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub action: super::super::msg::rmw::DeliveryAlertAction,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message: rosidl_runtime_rs::String,

}



impl Default for DeliveryAlert {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__DeliveryAlert__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__DeliveryAlert__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryAlert {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlert__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlert__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlert__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryAlert {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryAlert where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/DeliveryAlert";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DeliveryAlert() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DeliveryAlertAction() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__DeliveryAlertAction__init(msg: *mut DeliveryAlertAction) -> bool;
    fn rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertAction>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertAction>);
    fn rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryAlertAction>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertAction>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__DeliveryAlertAction
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryAlertAction {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl DeliveryAlertAction {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WAITING: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCEL: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OVERRIDE: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RESUME: u32 = 3;

}


impl Default for DeliveryAlertAction {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__DeliveryAlertAction__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__DeliveryAlertAction__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryAlertAction {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertAction__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryAlertAction {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryAlertAction where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/DeliveryAlertAction";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DeliveryAlertAction() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DeliveryAlertCategory() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__DeliveryAlertCategory__init(msg: *mut DeliveryAlertCategory) -> bool;
    fn rmf_fleet_msgs__msg__DeliveryAlertCategory__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertCategory>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__DeliveryAlertCategory__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertCategory>);
    fn rmf_fleet_msgs__msg__DeliveryAlertCategory__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryAlertCategory>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertCategory>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__DeliveryAlertCategory
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryAlertCategory {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl DeliveryAlertCategory {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MISSING: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WRONG: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const OBSTRUCTED: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLED: u32 = 3;

}


impl Default for DeliveryAlertCategory {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__DeliveryAlertCategory__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__DeliveryAlertCategory__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryAlertCategory {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertCategory__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertCategory__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertCategory__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryAlertCategory {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryAlertCategory where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/DeliveryAlertCategory";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DeliveryAlertCategory() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DeliveryAlertTier() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__msg__DeliveryAlertTier__init(msg: *mut DeliveryAlertTier) -> bool;
    fn rmf_fleet_msgs__msg__DeliveryAlertTier__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertTier>, size: usize) -> bool;
    fn rmf_fleet_msgs__msg__DeliveryAlertTier__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertTier>);
    fn rmf_fleet_msgs__msg__DeliveryAlertTier__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DeliveryAlertTier>, out_seq: *mut rosidl_runtime_rs::Sequence<DeliveryAlertTier>) -> bool;
}

// Corresponds to rmf_fleet_msgs__msg__DeliveryAlertTier
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DeliveryAlertTier {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u32,

}

impl DeliveryAlertTier {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const WARNING: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR: u32 = 1;

}


impl Default for DeliveryAlertTier {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__msg__DeliveryAlertTier__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__msg__DeliveryAlertTier__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DeliveryAlertTier {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertTier__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertTier__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__msg__DeliveryAlertTier__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DeliveryAlertTier {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DeliveryAlertTier where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/msg/DeliveryAlertTier";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__msg__DeliveryAlertTier() }
  }
}


