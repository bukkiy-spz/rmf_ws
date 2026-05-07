#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__srv__LiftClearance_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__srv__LiftClearance_Request__init(msg: *mut LiftClearance_Request) -> bool;
    fn rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LiftClearance_Request>, size: usize) -> bool;
    fn rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LiftClearance_Request>);
    fn rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LiftClearance_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<LiftClearance_Request>) -> bool;
}

// Corresponds to rmf_fleet_msgs__srv__LiftClearance_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LiftClearance_Request {
    /// Name of the robot that wants to enter a lift
    pub robot_name: rosidl_runtime_rs::String,

    /// Name of the lift that the robot wants to enter
    pub lift_name: rosidl_runtime_rs::String,

}



impl Default for LiftClearance_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__srv__LiftClearance_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__srv__LiftClearance_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LiftClearance_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__srv__LiftClearance_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LiftClearance_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LiftClearance_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/srv/LiftClearance_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__srv__LiftClearance_Request() }
  }
}


#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__srv__LiftClearance_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_fleet_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_fleet_msgs__srv__LiftClearance_Response__init(msg: *mut LiftClearance_Response) -> bool;
    fn rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<LiftClearance_Response>, size: usize) -> bool;
    fn rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<LiftClearance_Response>);
    fn rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<LiftClearance_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<LiftClearance_Response>) -> bool;
}

// Corresponds to rmf_fleet_msgs__srv__LiftClearance_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct LiftClearance_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub decision: u32,

}

impl LiftClearance_Response {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DECISION_CLEAR: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DECISION_CROWDED: u32 = 2;

}


impl Default for LiftClearance_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_fleet_msgs__srv__LiftClearance_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_fleet_msgs__srv__LiftClearance_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for LiftClearance_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_fleet_msgs__srv__LiftClearance_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for LiftClearance_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for LiftClearance_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_fleet_msgs/srv/LiftClearance_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_fleet_msgs__srv__LiftClearance_Response() }
  }
}






#[link(name = "rmf_fleet_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_fleet_msgs__srv__LiftClearance() -> *const std::ffi::c_void;
}

// Corresponds to rmf_fleet_msgs__srv__LiftClearance
#[allow(missing_docs, non_camel_case_types)]
pub struct LiftClearance;

impl rosidl_runtime_rs::Service for LiftClearance {
    type Request = LiftClearance_Request;
    type Response = LiftClearance_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_fleet_msgs__srv__LiftClearance() }
    }
}


