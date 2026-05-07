#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RegisterQuery_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__srv__RegisterQuery_Request__init(msg: *mut RegisterQuery_Request) -> bool;
    fn rmf_traffic_msgs__srv__RegisterQuery_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RegisterQuery_Request>, size: usize) -> bool;
    fn rmf_traffic_msgs__srv__RegisterQuery_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RegisterQuery_Request>);
    fn rmf_traffic_msgs__srv__RegisterQuery_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RegisterQuery_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RegisterQuery_Request>) -> bool;
}

// Corresponds to rmf_traffic_msgs__srv__RegisterQuery_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterQuery_Request {
    /// The query to be registered
    pub query: super::super::msg::rmw::ScheduleQuery,

}



impl Default for RegisterQuery_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__srv__RegisterQuery_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__srv__RegisterQuery_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RegisterQuery_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterQuery_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterQuery_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterQuery_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RegisterQuery_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RegisterQuery_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/srv/RegisterQuery_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RegisterQuery_Request() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RegisterQuery_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__srv__RegisterQuery_Response__init(msg: *mut RegisterQuery_Response) -> bool;
    fn rmf_traffic_msgs__srv__RegisterQuery_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RegisterQuery_Response>, size: usize) -> bool;
    fn rmf_traffic_msgs__srv__RegisterQuery_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RegisterQuery_Response>);
    fn rmf_traffic_msgs__srv__RegisterQuery_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RegisterQuery_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RegisterQuery_Response>) -> bool;
}

// Corresponds to rmf_traffic_msgs__srv__RegisterQuery_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterQuery_Response {
    /// The identity of the schedule node that provided this registration
    pub node_id: super::super::msg::rmw::ScheduleIdentity,

    /// The ID given to the registered query. Use this ID when making a query request.
    pub query_id: u64,

    /// A string to notify exceptional issues that came up while trying to fulfill the
    /// request.
    pub error: rosidl_runtime_rs::String,

}



impl Default for RegisterQuery_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__srv__RegisterQuery_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__srv__RegisterQuery_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RegisterQuery_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterQuery_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterQuery_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterQuery_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RegisterQuery_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RegisterQuery_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/srv/RegisterQuery_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RegisterQuery_Response() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RequestChanges_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__srv__RequestChanges_Request__init(msg: *mut RequestChanges_Request) -> bool;
    fn rmf_traffic_msgs__srv__RequestChanges_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RequestChanges_Request>, size: usize) -> bool;
    fn rmf_traffic_msgs__srv__RequestChanges_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RequestChanges_Request>);
    fn rmf_traffic_msgs__srv__RequestChanges_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RequestChanges_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RequestChanges_Request>) -> bool;
}

// Corresponds to rmf_traffic_msgs__srv__RequestChanges_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestChanges_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub query_id: u64,

    /// Version to request changes from; ignored if full_update is true
    pub version: u64,

    /// Request a full update rather than from a specific version
    pub full_update: bool,

}



impl Default for RequestChanges_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__srv__RequestChanges_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__srv__RequestChanges_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RequestChanges_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RequestChanges_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RequestChanges_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RequestChanges_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RequestChanges_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RequestChanges_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/srv/RequestChanges_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RequestChanges_Request() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RequestChanges_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__srv__RequestChanges_Response__init(msg: *mut RequestChanges_Response) -> bool;
    fn rmf_traffic_msgs__srv__RequestChanges_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RequestChanges_Response>, size: usize) -> bool;
    fn rmf_traffic_msgs__srv__RequestChanges_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RequestChanges_Response>);
    fn rmf_traffic_msgs__srv__RequestChanges_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RequestChanges_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RequestChanges_Response>) -> bool;
}

// Corresponds to rmf_traffic_msgs__srv__RequestChanges_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RequestChanges_Response {
    /// Response to the request
    pub node_id: super::super::msg::rmw::ScheduleIdentity,


    // This member is not documented.
    #[allow(missing_docs)]
    pub result: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub error: rosidl_runtime_rs::String,

}

impl RequestChanges_Response {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REQUEST_ACCEPTED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const UNKNOWN_QUERY_ID: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ERROR: u8 = 3;

}


impl Default for RequestChanges_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__srv__RequestChanges_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__srv__RequestChanges_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RequestChanges_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RequestChanges_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RequestChanges_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RequestChanges_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RequestChanges_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RequestChanges_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/srv/RequestChanges_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RequestChanges_Response() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RegisterParticipant_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__srv__RegisterParticipant_Request__init(msg: *mut RegisterParticipant_Request) -> bool;
    fn rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RegisterParticipant_Request>, size: usize) -> bool;
    fn rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RegisterParticipant_Request>);
    fn rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RegisterParticipant_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<RegisterParticipant_Request>) -> bool;
}

// Corresponds to rmf_traffic_msgs__srv__RegisterParticipant_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterParticipant_Request {
    /// The description of the participant that is being registered
    pub description: super::super::msg::rmw::ParticipantDescription,

}



impl Default for RegisterParticipant_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__srv__RegisterParticipant_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__srv__RegisterParticipant_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RegisterParticipant_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterParticipant_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RegisterParticipant_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RegisterParticipant_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/srv/RegisterParticipant_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RegisterParticipant_Request() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RegisterParticipant_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__srv__RegisterParticipant_Response__init(msg: *mut RegisterParticipant_Response) -> bool;
    fn rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RegisterParticipant_Response>, size: usize) -> bool;
    fn rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RegisterParticipant_Response>);
    fn rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RegisterParticipant_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<RegisterParticipant_Response>) -> bool;
}

// Corresponds to rmf_traffic_msgs__srv__RegisterParticipant_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RegisterParticipant_Response {
    /// The ID given to the registered participant
    pub participant_id: u64,

    /// The last itinerary version that this participant had
    pub last_itinerary_version: u64,

    /// The last Route ID that this participant had
    pub last_plan_id: u64,

    /// The next storage base for this participant to use
    pub next_storage_base: u64,

    /// A string to notify about exceptional issues that came up while trying to
    /// fulfill the request
    pub error: rosidl_runtime_rs::String,

}



impl Default for RegisterParticipant_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__srv__RegisterParticipant_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__srv__RegisterParticipant_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RegisterParticipant_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__RegisterParticipant_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RegisterParticipant_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RegisterParticipant_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/srv/RegisterParticipant_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__RegisterParticipant_Response() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__UnregisterParticipant_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__srv__UnregisterParticipant_Request__init(msg: *mut UnregisterParticipant_Request) -> bool;
    fn rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnregisterParticipant_Request>, size: usize) -> bool;
    fn rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnregisterParticipant_Request>);
    fn rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnregisterParticipant_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<UnregisterParticipant_Request>) -> bool;
}

// Corresponds to rmf_traffic_msgs__srv__UnregisterParticipant_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnregisterParticipant_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant_id: u64,

}



impl Default for UnregisterParticipant_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__srv__UnregisterParticipant_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__srv__UnregisterParticipant_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnregisterParticipant_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__UnregisterParticipant_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnregisterParticipant_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnregisterParticipant_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/srv/UnregisterParticipant_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__UnregisterParticipant_Request() }
  }
}


#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__UnregisterParticipant_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_traffic_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_traffic_msgs__srv__UnregisterParticipant_Response__init(msg: *mut UnregisterParticipant_Response) -> bool;
    fn rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<UnregisterParticipant_Response>, size: usize) -> bool;
    fn rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<UnregisterParticipant_Response>);
    fn rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<UnregisterParticipant_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<UnregisterParticipant_Response>) -> bool;
}

// Corresponds to rmf_traffic_msgs__srv__UnregisterParticipant_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct UnregisterParticipant_Response {
    /// Confirmation that the participant was unregistered
    pub confirmation: bool,

    /// A description of any errors that were encountered, such as the participant_id
    /// being unknown
    pub error: rosidl_runtime_rs::String,

}



impl Default for UnregisterParticipant_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_traffic_msgs__srv__UnregisterParticipant_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_traffic_msgs__srv__UnregisterParticipant_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for UnregisterParticipant_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_traffic_msgs__srv__UnregisterParticipant_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for UnregisterParticipant_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for UnregisterParticipant_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_traffic_msgs/srv/UnregisterParticipant_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_traffic_msgs__srv__UnregisterParticipant_Response() }
  }
}






#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RegisterQuery() -> *const std::ffi::c_void;
}

// Corresponds to rmf_traffic_msgs__srv__RegisterQuery
#[allow(missing_docs, non_camel_case_types)]
pub struct RegisterQuery;

impl rosidl_runtime_rs::Service for RegisterQuery {
    type Request = RegisterQuery_Request;
    type Response = RegisterQuery_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RegisterQuery() }
    }
}




#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RequestChanges() -> *const std::ffi::c_void;
}

// Corresponds to rmf_traffic_msgs__srv__RequestChanges
#[allow(missing_docs, non_camel_case_types)]
pub struct RequestChanges;

impl rosidl_runtime_rs::Service for RequestChanges {
    type Request = RequestChanges_Request;
    type Response = RequestChanges_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RequestChanges() }
    }
}




#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RegisterParticipant() -> *const std::ffi::c_void;
}

// Corresponds to rmf_traffic_msgs__srv__RegisterParticipant
#[allow(missing_docs, non_camel_case_types)]
pub struct RegisterParticipant;

impl rosidl_runtime_rs::Service for RegisterParticipant {
    type Request = RegisterParticipant_Request;
    type Response = RegisterParticipant_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__RegisterParticipant() }
    }
}




#[link(name = "rmf_traffic_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__UnregisterParticipant() -> *const std::ffi::c_void;
}

// Corresponds to rmf_traffic_msgs__srv__UnregisterParticipant
#[allow(missing_docs, non_camel_case_types)]
pub struct UnregisterParticipant;

impl rosidl_runtime_rs::Service for UnregisterParticipant {
    type Request = UnregisterParticipant_Request;
    type Response = UnregisterParticipant_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_traffic_msgs__srv__UnregisterParticipant() }
    }
}


