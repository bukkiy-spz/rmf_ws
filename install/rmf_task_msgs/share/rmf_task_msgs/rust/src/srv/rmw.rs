#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__ApiService_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__ApiService_Request__init(msg: *mut ApiService_Request) -> bool;
    fn rmf_task_msgs__srv__ApiService_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApiService_Request>, size: usize) -> bool;
    fn rmf_task_msgs__srv__ApiService_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApiService_Request>);
    fn rmf_task_msgs__srv__ApiService_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApiService_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ApiService_Request>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__ApiService_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApiService_Request {
    /// The JSON message that represents the request
    pub json_msg: rosidl_runtime_rs::String,

}



impl Default for ApiService_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__ApiService_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__ApiService_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApiService_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ApiService_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ApiService_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ApiService_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApiService_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApiService_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/ApiService_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__ApiService_Request() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__ApiService_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__ApiService_Response__init(msg: *mut ApiService_Response) -> bool;
    fn rmf_task_msgs__srv__ApiService_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApiService_Response>, size: usize) -> bool;
    fn rmf_task_msgs__srv__ApiService_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApiService_Response>);
    fn rmf_task_msgs__srv__ApiService_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApiService_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ApiService_Response>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__ApiService_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApiService_Response {
    /// The JSON message that represents the response
    pub json_msg: rosidl_runtime_rs::String,

}



impl Default for ApiService_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__ApiService_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__ApiService_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApiService_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ApiService_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ApiService_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ApiService_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApiService_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApiService_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/ApiService_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__ApiService_Response() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__SubmitTask_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__SubmitTask_Request__init(msg: *mut SubmitTask_Request) -> bool;
    fn rmf_task_msgs__srv__SubmitTask_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SubmitTask_Request>, size: usize) -> bool;
    fn rmf_task_msgs__srv__SubmitTask_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SubmitTask_Request>);
    fn rmf_task_msgs__srv__SubmitTask_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SubmitTask_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<SubmitTask_Request>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__SubmitTask_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SubmitTask_Request {
    /// Identifier for who is requesting the service
    pub requester: rosidl_runtime_rs::String,

    /// desciption of task
    pub description: super::super::msg::rmw::TaskDescription,

}



impl Default for SubmitTask_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__SubmitTask_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__SubmitTask_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SubmitTask_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__SubmitTask_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__SubmitTask_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__SubmitTask_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SubmitTask_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SubmitTask_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/SubmitTask_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__SubmitTask_Request() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__SubmitTask_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__SubmitTask_Response__init(msg: *mut SubmitTask_Response) -> bool;
    fn rmf_task_msgs__srv__SubmitTask_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SubmitTask_Response>, size: usize) -> bool;
    fn rmf_task_msgs__srv__SubmitTask_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SubmitTask_Response>);
    fn rmf_task_msgs__srv__SubmitTask_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SubmitTask_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<SubmitTask_Response>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__SubmitTask_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SubmitTask_Response {
    /// Confirmation that this service call is processed
    pub success: bool,

    /// generated task ID by dispatcher node
    pub task_id: rosidl_runtime_rs::String,

    /// This will provide a verbose message regarding task submission
    pub message: rosidl_runtime_rs::String,

}



impl Default for SubmitTask_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__SubmitTask_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__SubmitTask_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SubmitTask_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__SubmitTask_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__SubmitTask_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__SubmitTask_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SubmitTask_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SubmitTask_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/SubmitTask_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__SubmitTask_Response() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__CancelTask_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__CancelTask_Request__init(msg: *mut CancelTask_Request) -> bool;
    fn rmf_task_msgs__srv__CancelTask_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Request>, size: usize) -> bool;
    fn rmf_task_msgs__srv__CancelTask_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Request>);
    fn rmf_task_msgs__srv__CancelTask_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelTask_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Request>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__CancelTask_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTask_Request {
    /// Identifier for who is requesting the service
    pub requester: rosidl_runtime_rs::String,

    /// generated task ID by dispatcher node
    pub task_id: rosidl_runtime_rs::String,

}



impl Default for CancelTask_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__CancelTask_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__CancelTask_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelTask_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__CancelTask_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__CancelTask_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__CancelTask_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelTask_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelTask_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/CancelTask_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__CancelTask_Request() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__CancelTask_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__CancelTask_Response__init(msg: *mut CancelTask_Response) -> bool;
    fn rmf_task_msgs__srv__CancelTask_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Response>, size: usize) -> bool;
    fn rmf_task_msgs__srv__CancelTask_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Response>);
    fn rmf_task_msgs__srv__CancelTask_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<CancelTask_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<CancelTask_Response>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__CancelTask_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTask_Response {
    /// Confirmation that this service call is processed
    pub success: bool,

    /// This will provide a verbose message regarding task cancellation
    pub message: rosidl_runtime_rs::String,

}



impl Default for CancelTask_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__CancelTask_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__CancelTask_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for CancelTask_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__CancelTask_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__CancelTask_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__CancelTask_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for CancelTask_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for CancelTask_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/CancelTask_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__CancelTask_Response() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__ReviveTask_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__ReviveTask_Request__init(msg: *mut ReviveTask_Request) -> bool;
    fn rmf_task_msgs__srv__ReviveTask_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReviveTask_Request>, size: usize) -> bool;
    fn rmf_task_msgs__srv__ReviveTask_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReviveTask_Request>);
    fn rmf_task_msgs__srv__ReviveTask_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReviveTask_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<ReviveTask_Request>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__ReviveTask_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReviveTask_Request {
    /// Identifier for who is requesting the service
    pub requester: rosidl_runtime_rs::String,

    /// task that was previously cancelled or failed
    pub task_id: rosidl_runtime_rs::String,

}



impl Default for ReviveTask_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__ReviveTask_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__ReviveTask_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReviveTask_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ReviveTask_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ReviveTask_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ReviveTask_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReviveTask_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReviveTask_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/ReviveTask_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__ReviveTask_Request() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__ReviveTask_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__ReviveTask_Response__init(msg: *mut ReviveTask_Response) -> bool;
    fn rmf_task_msgs__srv__ReviveTask_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ReviveTask_Response>, size: usize) -> bool;
    fn rmf_task_msgs__srv__ReviveTask_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ReviveTask_Response>);
    fn rmf_task_msgs__srv__ReviveTask_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ReviveTask_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<ReviveTask_Response>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__ReviveTask_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ReviveTask_Response {
    /// Confirmation that this service call is processed
    pub success: bool,

}



impl Default for ReviveTask_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__ReviveTask_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__ReviveTask_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ReviveTask_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ReviveTask_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ReviveTask_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__ReviveTask_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ReviveTask_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ReviveTask_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/ReviveTask_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__ReviveTask_Response() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__GetDispatchStates_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__GetDispatchStates_Request__init(msg: *mut GetDispatchStates_Request) -> bool;
    fn rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDispatchStates_Request>, size: usize) -> bool;
    fn rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDispatchStates_Request>);
    fn rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDispatchStates_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDispatchStates_Request>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__GetDispatchStates_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDispatchStates_Request {
    /// Input the generated task ID during submission
    /// if empty, provide all Submitted Tasks
    pub task_ids: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for GetDispatchStates_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__GetDispatchStates_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__GetDispatchStates_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDispatchStates_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__GetDispatchStates_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDispatchStates_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDispatchStates_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/GetDispatchStates_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__GetDispatchStates_Request() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__GetDispatchStates_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__srv__GetDispatchStates_Response__init(msg: *mut GetDispatchStates_Response) -> bool;
    fn rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetDispatchStates_Response>, size: usize) -> bool;
    fn rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetDispatchStates_Response>);
    fn rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetDispatchStates_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetDispatchStates_Response>) -> bool;
}

// Corresponds to rmf_task_msgs__srv__GetDispatchStates_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetDispatchStates_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub states: super::super::msg::rmw::DispatchStates,

}



impl Default for GetDispatchStates_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__srv__GetDispatchStates_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__srv__GetDispatchStates_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetDispatchStates_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__srv__GetDispatchStates_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetDispatchStates_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetDispatchStates_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/srv/GetDispatchStates_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__srv__GetDispatchStates_Response() }
  }
}






#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__ApiService() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__ApiService
#[allow(missing_docs, non_camel_case_types)]
pub struct ApiService;

impl rosidl_runtime_rs::Service for ApiService {
    type Request = ApiService_Request;
    type Response = ApiService_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__ApiService() }
    }
}




#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__SubmitTask() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__SubmitTask
#[allow(missing_docs, non_camel_case_types)]
pub struct SubmitTask;

impl rosidl_runtime_rs::Service for SubmitTask {
    type Request = SubmitTask_Request;
    type Response = SubmitTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__SubmitTask() }
    }
}




#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__CancelTask() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__CancelTask
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelTask;

impl rosidl_runtime_rs::Service for CancelTask {
    type Request = CancelTask_Request;
    type Response = CancelTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__CancelTask() }
    }
}




#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__ReviveTask() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__ReviveTask
#[allow(missing_docs, non_camel_case_types)]
pub struct ReviveTask;

impl rosidl_runtime_rs::Service for ReviveTask {
    type Request = ReviveTask_Request;
    type Response = ReviveTask_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__ReviveTask() }
    }
}




#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__GetDispatchStates() -> *const std::ffi::c_void;
}

// Corresponds to rmf_task_msgs__srv__GetDispatchStates
#[allow(missing_docs, non_camel_case_types)]
pub struct GetDispatchStates;

impl rosidl_runtime_rs::Service for GetDispatchStates {
    type Request = GetDispatchStates_Request;
    type Response = GetDispatchStates_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_task_msgs__srv__GetDispatchStates() }
    }
}


