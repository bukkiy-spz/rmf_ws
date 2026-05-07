#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelAll_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CancelAll_Request__init(msg: *mut CancelAll_Request) -> bool;
    fn rmf_scheduler_msgs__srv__CancelAll_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelAll_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CancelAll_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelAll_Request>);
    fn rmf_scheduler_msgs__srv__CancelAll_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelAll_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelAll_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelAll_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelAll_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub group: rosidl_runtime_rs::String,

}



impl Default for CancelAll_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CancelAll_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CancelAll_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelAll_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelAll_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelAll_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelAll_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelAll_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelAll_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CancelAll_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelAll_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelAll_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CancelAll_Response__init(msg: *mut CancelAll_Response) -> bool;
    fn rmf_scheduler_msgs__srv__CancelAll_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelAll_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CancelAll_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelAll_Response>);
    fn rmf_scheduler_msgs__srv__CancelAll_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelAll_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelAll_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelAll_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelAll_Response {
    /// Confirmation that the schedule is successfully registered
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,

}



impl Default for CancelAll_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CancelAll_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CancelAll_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelAll_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelAll_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelAll_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelAll_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelAll_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelAll_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CancelAll_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelAll_Response() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelSchedule_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CancelSchedule_Request__init(msg: *mut CancelSchedule_Request) -> bool;
    fn rmf_scheduler_msgs__srv__CancelSchedule_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelSchedule_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CancelSchedule_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelSchedule_Request>);
    fn rmf_scheduler_msgs__srv__CancelSchedule_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelSchedule_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelSchedule_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelSchedule_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelSchedule_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// Indicate that the schedule is considered finished successfully.
    pub finished: bool,

}



impl Default for CancelSchedule_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CancelSchedule_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CancelSchedule_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelSchedule_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelSchedule_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelSchedule_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelSchedule_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelSchedule_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelSchedule_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CancelSchedule_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelSchedule_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelSchedule_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CancelSchedule_Response__init(msg: *mut CancelSchedule_Response) -> bool;
    fn rmf_scheduler_msgs__srv__CancelSchedule_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelSchedule_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CancelSchedule_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelSchedule_Response>);
    fn rmf_scheduler_msgs__srv__CancelSchedule_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelSchedule_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelSchedule_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelSchedule_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelSchedule_Response {
    /// Confirmation that the schedule is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,

}



impl Default for CancelSchedule_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CancelSchedule_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CancelSchedule_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelSchedule_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelSchedule_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelSchedule_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelSchedule_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelSchedule_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelSchedule_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CancelSchedule_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelSchedule_Response() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelTrigger_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CancelTrigger_Request__init(msg: *mut CancelTrigger_Request) -> bool;
    fn rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelTrigger_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelTrigger_Request>);
    fn rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelTrigger_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelTrigger_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelTrigger_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTrigger_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

}



impl Default for CancelTrigger_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CancelTrigger_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CancelTrigger_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelTrigger_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelTrigger_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelTrigger_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelTrigger_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CancelTrigger_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelTrigger_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelTrigger_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CancelTrigger_Response__init(msg: *mut CancelTrigger_Response) -> bool;
    fn rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelTrigger_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelTrigger_Response>);
    fn rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelTrigger_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelTrigger_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelTrigger_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTrigger_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,

}



impl Default for CancelTrigger_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CancelTrigger_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CancelTrigger_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelTrigger_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CancelTrigger_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelTrigger_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelTrigger_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CancelTrigger_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CancelTrigger_Response() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CreateSchedule_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CreateSchedule_Request__init(msg: *mut CreateSchedule_Request) -> bool;
    fn rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CreateSchedule_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CreateSchedule_Request>);
    fn rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CreateSchedule_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CreateSchedule_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CreateSchedule_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateSchedule_Request {
    /// The following fields are ignored:
    ///   - created_at
    pub schedule: super::super::msg::rmw::Schedule,

}



impl Default for CreateSchedule_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CreateSchedule_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CreateSchedule_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CreateSchedule_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateSchedule_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CreateSchedule_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CreateSchedule_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CreateSchedule_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CreateSchedule_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CreateSchedule_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CreateSchedule_Response__init(msg: *mut CreateSchedule_Response) -> bool;
    fn rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CreateSchedule_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CreateSchedule_Response>);
    fn rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CreateSchedule_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CreateSchedule_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CreateSchedule_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateSchedule_Response {
    /// Confirmation that the schedule is successfully registered
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,

}



impl Default for CreateSchedule_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CreateSchedule_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CreateSchedule_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CreateSchedule_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateSchedule_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CreateSchedule_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CreateSchedule_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CreateSchedule_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CreateSchedule_Response() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CreateTrigger_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CreateTrigger_Request__init(msg: *mut CreateTrigger_Request) -> bool;
    fn rmf_scheduler_msgs__srv__CreateTrigger_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CreateTrigger_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CreateTrigger_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CreateTrigger_Request>);
    fn rmf_scheduler_msgs__srv__CreateTrigger_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CreateTrigger_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CreateTrigger_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CreateTrigger_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateTrigger_Request {
    /// The following fields are ignored:
    ///   - created_at
    pub trigger: super::super::msg::rmw::Trigger,

}



impl Default for CreateTrigger_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CreateTrigger_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CreateTrigger_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CreateTrigger_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateTrigger_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateTrigger_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateTrigger_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CreateTrigger_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CreateTrigger_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CreateTrigger_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CreateTrigger_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CreateTrigger_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__CreateTrigger_Response__init(msg: *mut CreateTrigger_Response) -> bool;
    fn rmf_scheduler_msgs__srv__CreateTrigger_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CreateTrigger_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__CreateTrigger_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CreateTrigger_Response>);
    fn rmf_scheduler_msgs__srv__CreateTrigger_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CreateTrigger_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CreateTrigger_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__CreateTrigger_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateTrigger_Response {
    /// Confirmation that the trigger is successfully registered
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,

}



impl Default for CreateTrigger_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__CreateTrigger_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__CreateTrigger_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CreateTrigger_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateTrigger_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateTrigger_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__CreateTrigger_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CreateTrigger_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CreateTrigger_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/CreateTrigger_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__CreateTrigger_Response() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListSchedules_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__ListSchedules_Request__init(msg: *mut ListSchedules_Request) -> bool;
    fn rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListSchedules_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListSchedules_Request>);
    fn rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListSchedules_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListSchedules_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__ListSchedules_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListSchedules_Request {
    /// unix time in seconds
    pub created_after: i64,

}



impl Default for ListSchedules_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__ListSchedules_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__ListSchedules_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListSchedules_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListSchedules_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListSchedules_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListSchedules_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/ListSchedules_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListSchedules_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListSchedules_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__ListSchedules_Response__init(msg: *mut ListSchedules_Response) -> bool;
    fn rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListSchedules_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListSchedules_Response>);
    fn rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListSchedules_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListSchedules_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__ListSchedules_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListSchedules_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub schedules: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Schedule>,

}



impl Default for ListSchedules_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__ListSchedules_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__ListSchedules_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListSchedules_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListSchedules_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListSchedules_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListSchedules_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/ListSchedules_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListSchedules_Response() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListScheduleStates_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__ListScheduleStates_Request__init(msg: *mut ListScheduleStates_Request) -> bool;
    fn rmf_scheduler_msgs__srv__ListScheduleStates_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListScheduleStates_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__ListScheduleStates_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListScheduleStates_Request>);
    fn rmf_scheduler_msgs__srv__ListScheduleStates_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListScheduleStates_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListScheduleStates_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__ListScheduleStates_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListScheduleStates_Request {
    /// unix time in seconds
    pub modified_after: i64,

}



impl Default for ListScheduleStates_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__ListScheduleStates_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__ListScheduleStates_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListScheduleStates_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListScheduleStates_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListScheduleStates_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListScheduleStates_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListScheduleStates_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListScheduleStates_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/ListScheduleStates_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListScheduleStates_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListScheduleStates_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__ListScheduleStates_Response__init(msg: *mut ListScheduleStates_Response) -> bool;
    fn rmf_scheduler_msgs__srv__ListScheduleStates_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListScheduleStates_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__ListScheduleStates_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListScheduleStates_Response>);
    fn rmf_scheduler_msgs__srv__ListScheduleStates_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListScheduleStates_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListScheduleStates_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__ListScheduleStates_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListScheduleStates_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub schedules: rosidl_runtime_rs::Sequence<super::super::msg::rmw::ScheduleState>,

}



impl Default for ListScheduleStates_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__ListScheduleStates_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__ListScheduleStates_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListScheduleStates_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListScheduleStates_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListScheduleStates_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListScheduleStates_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListScheduleStates_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListScheduleStates_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/ListScheduleStates_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListScheduleStates_Response() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListTriggers_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__ListTriggers_Request__init(msg: *mut ListTriggers_Request) -> bool;
    fn rmf_scheduler_msgs__srv__ListTriggers_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListTriggers_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__ListTriggers_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListTriggers_Request>);
    fn rmf_scheduler_msgs__srv__ListTriggers_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListTriggers_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListTriggers_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__ListTriggers_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListTriggers_Request {
    /// unix time in seconds
    pub created_after: i64,

}



impl Default for ListTriggers_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__ListTriggers_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__ListTriggers_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListTriggers_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggers_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggers_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggers_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListTriggers_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListTriggers_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/ListTriggers_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListTriggers_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListTriggers_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__ListTriggers_Response__init(msg: *mut ListTriggers_Response) -> bool;
    fn rmf_scheduler_msgs__srv__ListTriggers_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListTriggers_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__ListTriggers_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListTriggers_Response>);
    fn rmf_scheduler_msgs__srv__ListTriggers_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListTriggers_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListTriggers_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__ListTriggers_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListTriggers_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub triggers: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Trigger>,

}



impl Default for ListTriggers_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__ListTriggers_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__ListTriggers_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListTriggers_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggers_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggers_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggers_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListTriggers_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListTriggers_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/ListTriggers_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListTriggers_Response() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListTriggerStates_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__ListTriggerStates_Request__init(msg: *mut ListTriggerStates_Request) -> bool;
    fn rmf_scheduler_msgs__srv__ListTriggerStates_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListTriggerStates_Request>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__ListTriggerStates_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListTriggerStates_Request>);
    fn rmf_scheduler_msgs__srv__ListTriggerStates_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListTriggerStates_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ListTriggerStates_Request>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__ListTriggerStates_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListTriggerStates_Request {
    /// unix time in seconds
    pub modified_after: i64,

}



impl Default for ListTriggerStates_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__ListTriggerStates_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__ListTriggerStates_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListTriggerStates_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggerStates_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggerStates_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggerStates_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListTriggerStates_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListTriggerStates_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/ListTriggerStates_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListTriggerStates_Request() }
  }
}


#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListTriggerStates_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_scheduler_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_scheduler_msgs__srv__ListTriggerStates_Response__init(msg: *mut ListTriggerStates_Response) -> bool;
    fn rmf_scheduler_msgs__srv__ListTriggerStates_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ListTriggerStates_Response>, size: usize) -> bool;
    fn rmf_scheduler_msgs__srv__ListTriggerStates_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ListTriggerStates_Response>);
    fn rmf_scheduler_msgs__srv__ListTriggerStates_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ListTriggerStates_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ListTriggerStates_Response>) -> bool;
}

// Corresponds to rmf_scheduler_msgs__srv__ListTriggerStates_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListTriggerStates_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub triggers: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TriggerState>,

}



impl Default for ListTriggerStates_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_scheduler_msgs__srv__ListTriggerStates_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_scheduler_msgs__srv__ListTriggerStates_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ListTriggerStates_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggerStates_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggerStates_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_scheduler_msgs__srv__ListTriggerStates_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ListTriggerStates_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ListTriggerStates_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_scheduler_msgs/srv/ListTriggerStates_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_scheduler_msgs__srv__ListTriggerStates_Response() }
  }
}






#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelAll() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelAll
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelAll;

impl rosidl_runtime_rs::Service for CancelAll {
    type Request = CancelAll_Request;
    type Response = CancelAll_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelAll() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelSchedule() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelSchedule
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelSchedule;

impl rosidl_runtime_rs::Service for CancelSchedule {
    type Request = CancelSchedule_Request;
    type Response = CancelSchedule_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelSchedule() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelTrigger() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelTrigger
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelTrigger;

impl rosidl_runtime_rs::Service for CancelTrigger {
    type Request = CancelTrigger_Request;
    type Response = CancelTrigger_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelTrigger() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CreateSchedule() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CreateSchedule
#[allow(missing_docs, non_camel_case_types)]
pub struct CreateSchedule;

impl rosidl_runtime_rs::Service for CreateSchedule {
    type Request = CreateSchedule_Request;
    type Response = CreateSchedule_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CreateSchedule() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CreateTrigger() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CreateTrigger
#[allow(missing_docs, non_camel_case_types)]
pub struct CreateTrigger;

impl rosidl_runtime_rs::Service for CreateTrigger {
    type Request = CreateTrigger_Request;
    type Response = CreateTrigger_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CreateTrigger() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListSchedules() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__ListSchedules
#[allow(missing_docs, non_camel_case_types)]
pub struct ListSchedules;

impl rosidl_runtime_rs::Service for ListSchedules {
    type Request = ListSchedules_Request;
    type Response = ListSchedules_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListSchedules() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListScheduleStates() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__ListScheduleStates
#[allow(missing_docs, non_camel_case_types)]
pub struct ListScheduleStates;

impl rosidl_runtime_rs::Service for ListScheduleStates {
    type Request = ListScheduleStates_Request;
    type Response = ListScheduleStates_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListScheduleStates() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListTriggers() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__ListTriggers
#[allow(missing_docs, non_camel_case_types)]
pub struct ListTriggers;

impl rosidl_runtime_rs::Service for ListTriggers {
    type Request = ListTriggers_Request;
    type Response = ListTriggers_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListTriggers() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListTriggerStates() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__ListTriggerStates
#[allow(missing_docs, non_camel_case_types)]
pub struct ListTriggerStates;

impl rosidl_runtime_rs::Service for ListTriggerStates {
    type Request = ListTriggerStates_Request;
    type Response = ListTriggerStates_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListTriggerStates() }
    }
}


