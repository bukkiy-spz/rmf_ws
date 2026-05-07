#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__ApiRequest() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__ApiRequest__init(msg: *mut ApiRequest) -> bool;
    fn rmf_task_msgs__msg__ApiRequest__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApiRequest>, size: usize) -> bool;
    fn rmf_task_msgs__msg__ApiRequest__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApiRequest>);
    fn rmf_task_msgs__msg__ApiRequest__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApiRequest>, out_seq: *mut rosidl_runtime_rs::Sequence<ApiRequest>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__ApiRequest
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApiRequest {
    /// The JSON message that represents the request
    pub json_msg: rosidl_runtime_rs::String,

    /// The unique ID assigned to this request
    pub request_id: rosidl_runtime_rs::String,

}



impl Default for ApiRequest {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__ApiRequest__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__ApiRequest__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApiRequest {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__ApiRequest__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__ApiRequest__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__ApiRequest__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApiRequest {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApiRequest where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/ApiRequest";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__ApiRequest() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__ApiResponse() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__ApiResponse__init(msg: *mut ApiResponse) -> bool;
    fn rmf_task_msgs__msg__ApiResponse__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ApiResponse>, size: usize) -> bool;
    fn rmf_task_msgs__msg__ApiResponse__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ApiResponse>);
    fn rmf_task_msgs__msg__ApiResponse__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ApiResponse>, out_seq: *mut rosidl_runtime_rs::Sequence<ApiResponse>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__ApiResponse
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApiResponse {
    /// The type of response this is: Acknowledging or Responding
    /// (Uninitialized will result in the API Node issuing an error response)
    pub type_: u8,

    /// The JSON message that represents the response
    pub json_msg: rosidl_runtime_rs::String,

    /// The unique ID of the request that this response is targeted at
    pub request_id: rosidl_runtime_rs::String,

}

impl ApiResponse {
    /// This response type means the message was not initialized correctly and will
    /// result in an error
    pub const TYPE_UNINITIALIZED: u8 = 0;

    /// This response type means the request is being acknowledged which will grant it
    /// some extra time before the API Node has its response timeout. This can be used
    /// to extend the lifetime of a request which may take a long time to complete.
    /// Each time an acknowledgment is sent the lifetime will be extended.
    pub const TYPE_ACKNOWLEDGE: u8 = 1;

    /// This response type means this message is responding to the request and
    /// therefore fulfilling the request.
    pub const TYPE_RESPONDING: u8 = 2;

}


impl Default for ApiResponse {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__ApiResponse__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__ApiResponse__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ApiResponse {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__ApiResponse__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__ApiResponse__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__ApiResponse__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ApiResponse {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ApiResponse where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/ApiResponse";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__ApiResponse() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Assignment() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Assignment__init(msg: *mut Assignment) -> bool;
    fn rmf_task_msgs__msg__Assignment__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Assignment>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Assignment__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Assignment>);
    fn rmf_task_msgs__msg__Assignment__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Assignment>, out_seq: *mut rosidl_runtime_rs::Sequence<Assignment>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Assignment
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Assignment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_assigned: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_robot_name: rosidl_runtime_rs::String,

}



impl Default for Assignment {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Assignment__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Assignment__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Assignment {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Assignment__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Assignment__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Assignment__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Assignment {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Assignment where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Assignment";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Assignment() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Delivery() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Delivery__init(msg: *mut Delivery) -> bool;
    fn rmf_task_msgs__msg__Delivery__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Delivery>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Delivery__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Delivery>);
    fn rmf_task_msgs__msg__Delivery__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Delivery>, out_seq: *mut rosidl_runtime_rs::Sequence<Delivery>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Delivery
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// task_id is intended to be a pseudo-random string generated
/// by the caller which can be used to identify this task as it
/// moves between the queues to completion (or failure).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Delivery {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub items: rosidl_runtime_rs::Sequence<rmf_dispenser_msgs::msg::rmw::DispenserRequestItem>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_place_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_dispenser: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_behavior: super::super::msg::rmw::Behavior,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_place_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_ingestor: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_behavior: super::super::msg::rmw::Behavior,

}



impl Default for Delivery {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Delivery__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Delivery__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Delivery {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Delivery__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Delivery__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Delivery__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Delivery {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Delivery where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Delivery";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Delivery() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Behavior() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Behavior__init(msg: *mut Behavior) -> bool;
    fn rmf_task_msgs__msg__Behavior__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Behavior>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Behavior__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Behavior>);
    fn rmf_task_msgs__msg__Behavior__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Behavior>, out_seq: *mut rosidl_runtime_rs::Sequence<Behavior>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Behavior
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Behavior {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameters: rosidl_runtime_rs::Sequence<super::super::msg::rmw::BehaviorParameter>,

}



impl Default for Behavior {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Behavior__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Behavior__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Behavior {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Behavior__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Behavior__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Behavior__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Behavior {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Behavior where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Behavior";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Behavior() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__BehaviorParameter() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__BehaviorParameter__init(msg: *mut BehaviorParameter) -> bool;
    fn rmf_task_msgs__msg__BehaviorParameter__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BehaviorParameter>, size: usize) -> bool;
    fn rmf_task_msgs__msg__BehaviorParameter__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BehaviorParameter>);
    fn rmf_task_msgs__msg__BehaviorParameter__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BehaviorParameter>, out_seq: *mut rosidl_runtime_rs::Sequence<BehaviorParameter>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__BehaviorParameter
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BehaviorParameter {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: rosidl_runtime_rs::String,

}



impl Default for BehaviorParameter {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__BehaviorParameter__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__BehaviorParameter__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BehaviorParameter {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BehaviorParameter__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BehaviorParameter__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BehaviorParameter__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BehaviorParameter {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BehaviorParameter where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/BehaviorParameter";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__BehaviorParameter() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Station() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Station__init(msg: *mut Station) -> bool;
    fn rmf_task_msgs__msg__Station__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Station>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Station__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Station>);
    fn rmf_task_msgs__msg__Station__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Station>, out_seq: *mut rosidl_runtime_rs::Sequence<Station>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Station
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// task_id is intended to be a pseudo-random string generated
/// by the caller which can be used to identify this task as it
/// moves between the queues to completion (or failure).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Station {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,

    /// robot_type can be used to specify a particular robot fleet
    /// for this request
    pub robot_type: rosidl_runtime_rs::String,

    /// the place name where the robot is requested to station (park)
    pub place_name: rosidl_runtime_rs::String,

}



impl Default for Station {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Station__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Station__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Station {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Station__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Station__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Station__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Station {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Station where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Station";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Station() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__TaskDescription() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__TaskDescription__init(msg: *mut TaskDescription) -> bool;
    fn rmf_task_msgs__msg__TaskDescription__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskDescription>, size: usize) -> bool;
    fn rmf_task_msgs__msg__TaskDescription__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskDescription>);
    fn rmf_task_msgs__msg__TaskDescription__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskDescription>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskDescription>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__TaskDescription
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Desired start time of a task

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskDescription {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start_time: builtin_interfaces::msg::rmw::Time,

    /// Priority of the task
    pub priority: super::super::msg::rmw::Priority,

    /// Task type
    pub task_type: super::super::msg::rmw::TaskType,

    /// The corresponding field for the above TaskType should be populated
    pub station: super::super::msg::rmw::Station,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_: super::super::msg::rmw::Loop,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delivery: super::super::msg::rmw::Delivery,


    // This member is not documented.
    #[allow(missing_docs)]
    pub clean: super::super::msg::rmw::Clean,

}



impl Default for TaskDescription {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__TaskDescription__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__TaskDescription__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskDescription {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskDescription__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskDescription__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskDescription__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskDescription {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskDescription where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/TaskDescription";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__TaskDescription() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__TaskSummary() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__TaskSummary__init(msg: *mut TaskSummary) -> bool;
    fn rmf_task_msgs__msg__TaskSummary__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskSummary>, size: usize) -> bool;
    fn rmf_task_msgs__msg__TaskSummary__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskSummary>);
    fn rmf_task_msgs__msg__TaskSummary__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskSummary>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskSummary>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__TaskSummary
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Publish by Fleet Adapter (aka DispatchStatus)

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSummary {
    /// Fleet Adapter name
    pub fleet_name: rosidl_runtime_rs::String,

    /// *optional and duplicated in TaskProfile
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_profile: super::super::msg::rmw::TaskProfile,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u32,

    /// a brief summary of the current status of the task, for UI's
    /// *optional
    pub status: rosidl_runtime_rs::String,

    /// submission_time is when the task was submitted to rmf_core
    /// *optional and duplicated in TaskProfile
    pub submission_time: builtin_interfaces::msg::rmw::Time,

    /// when rmf_core actually began processing the task
    pub start_time: builtin_interfaces::msg::rmw::Time,

    /// When this message is a summary of an in-process task, the end_time field is
    /// an estimate. When this message is a summary of a completed or failed task,
    /// end_time is the actual time.
    pub end_time: builtin_interfaces::msg::rmw::Time,

    /// Allocated robot name
    /// *optional
    pub robot_name: rosidl_runtime_rs::String,

}

impl TaskSummary {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_QUEUED: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_ACTIVE: u32 = 1;

    /// hooray
    pub const STATE_COMPLETED: u32 = 2;

    /// oh no
    pub const STATE_FAILED: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_CANCELED: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATE_PENDING: u32 = 5;

}


impl Default for TaskSummary {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__TaskSummary__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__TaskSummary__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskSummary {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskSummary__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskSummary__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskSummary__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskSummary {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskSummary where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/TaskSummary";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__TaskSummary() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Tasks() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Tasks__init(msg: *mut Tasks) -> bool;
    fn rmf_task_msgs__msg__Tasks__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tasks>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Tasks__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tasks>);
    fn rmf_task_msgs__msg__Tasks__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tasks>, out_seq: *mut rosidl_runtime_rs::Sequence<Tasks>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Tasks
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tasks {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tasks: rosidl_runtime_rs::Sequence<super::super::msg::rmw::TaskSummary>,

}



impl Default for Tasks {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Tasks__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Tasks__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tasks {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Tasks__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Tasks__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Tasks__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tasks {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tasks where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Tasks";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Tasks() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Loop() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Loop__init(msg: *mut Loop) -> bool;
    fn rmf_task_msgs__msg__Loop__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Loop>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Loop__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Loop>);
    fn rmf_task_msgs__msg__Loop__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Loop>, out_seq: *mut rosidl_runtime_rs::Sequence<Loop>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Loop
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// task_id is intended to be a pseudo-random string generated
/// by the caller which can be used to identify this task as it
/// moves between the queues to completion (or failure).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Loop {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,

    /// robot_type can be used to specify a particular robot fleet
    /// for this request
    pub robot_type: rosidl_runtime_rs::String,

    /// The number of times the robot should loop between the specified points.
    pub num_loops: u32,

    /// The name of the waypoint where the robot should begin its loop. If the robot
    /// is not already at this point, it will begin the task by moving there.
    pub start_name: rosidl_runtime_rs::String,

    /// The name of the waypoint where the robot should end its looping. The robot
    /// will visit this waypoint num_loops times and then stop here on the last
    /// visit.
    pub finish_name: rosidl_runtime_rs::String,

}



impl Default for Loop {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Loop__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Loop__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Loop {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Loop__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Loop__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Loop__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Loop {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Loop where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Loop";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Loop() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Tow() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Tow__init(msg: *mut Tow) -> bool;
    fn rmf_task_msgs__msg__Tow__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Tow>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Tow__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Tow>);
    fn rmf_task_msgs__msg__Tow__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Tow>, out_seq: *mut rosidl_runtime_rs::Sequence<Tow>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Tow
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// task_id is intended to be a pseudo-random string generated
/// by the caller which can be used to identify this task as it
/// moves between the queues to completion (or failure).

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tow {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_type: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_object_id_known: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_place_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_dropoff_place_known: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_place_name: rosidl_runtime_rs::String,

}



impl Default for Tow {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Tow__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Tow__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Tow {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Tow__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Tow__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Tow__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Tow {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Tow where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Tow";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Tow() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__TaskType() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__TaskType__init(msg: *mut TaskType) -> bool;
    fn rmf_task_msgs__msg__TaskType__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskType>, size: usize) -> bool;
    fn rmf_task_msgs__msg__TaskType__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskType>);
    fn rmf_task_msgs__msg__TaskType__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskType>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskType>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__TaskType
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskType {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u32,

}

impl TaskType {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_STATION: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_LOOP: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_DELIVERY: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_CHARGE_BATTERY: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_CLEAN: u32 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_PATROL: u32 = 5;

}


impl Default for TaskType {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__TaskType__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__TaskType__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskType {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskType__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskType__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskType__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskType {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskType where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/TaskType";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__TaskType() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Clean() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Clean__init(msg: *mut Clean) -> bool;
    fn rmf_task_msgs__msg__Clean__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Clean>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Clean__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Clean>);
    fn rmf_task_msgs__msg__Clean__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Clean>, out_seq: *mut rosidl_runtime_rs::Sequence<Clean>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Clean
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// The name of the waypoint where the robot should begin its pre-configured
/// cleaning job.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Clean {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start_waypoint: rosidl_runtime_rs::String,

}



impl Default for Clean {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Clean__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Clean__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Clean {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Clean__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Clean__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Clean__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Clean {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Clean where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Clean";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Clean() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__TaskProfile() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__TaskProfile__init(msg: *mut TaskProfile) -> bool;
    fn rmf_task_msgs__msg__TaskProfile__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TaskProfile>, size: usize) -> bool;
    fn rmf_task_msgs__msg__TaskProfile__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TaskProfile>);
    fn rmf_task_msgs__msg__TaskProfile__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TaskProfile>, out_seq: *mut rosidl_runtime_rs::Sequence<TaskProfile>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__TaskProfile
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// Unique ID assigned to this task

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskProfile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,

    /// Task submission time
    pub submission_time: builtin_interfaces::msg::rmw::Time,

    /// Details of the task
    pub description: super::super::msg::rmw::TaskDescription,

}



impl Default for TaskProfile {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__TaskProfile__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__TaskProfile__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TaskProfile {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskProfile__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskProfile__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__TaskProfile__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TaskProfile {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TaskProfile where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/TaskProfile";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__TaskProfile() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__BidNotice() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__BidNotice__init(msg: *mut BidNotice) -> bool;
    fn rmf_task_msgs__msg__BidNotice__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BidNotice>, size: usize) -> bool;
    fn rmf_task_msgs__msg__BidNotice__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BidNotice>);
    fn rmf_task_msgs__msg__BidNotice__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BidNotice>, out_seq: *mut rosidl_runtime_rs::Sequence<BidNotice>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__BidNotice
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message is published by the Task Dispatcher node to notify all
/// Fleet Adapters to participate in a bidding process for a new task.
/// Fleet Adapters may then submit a BidProposal message with their best proposal
/// to accommodate the new task.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BidNotice {
    /// Details of the task request
    pub request: rosidl_runtime_rs::String,

    /// The ID for this request
    pub task_id: rosidl_runtime_rs::String,

    /// Duration for which the bidding is open
    pub time_window: builtin_interfaces::msg::rmw::Duration,

}



impl Default for BidNotice {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__BidNotice__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__BidNotice__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BidNotice {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidNotice__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidNotice__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidNotice__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BidNotice {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BidNotice where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/BidNotice";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__BidNotice() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__BidProposal() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__BidProposal__init(msg: *mut BidProposal) -> bool;
    fn rmf_task_msgs__msg__BidProposal__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BidProposal>, size: usize) -> bool;
    fn rmf_task_msgs__msg__BidProposal__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BidProposal>);
    fn rmf_task_msgs__msg__BidProposal__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BidProposal>, out_seq: *mut rosidl_runtime_rs::Sequence<BidProposal>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__BidProposal
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message is published by a Fleet Adapter in response to a BidNotice
/// message.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BidProposal {
    /// The name of the Fleet Adapter publishing this message
    pub fleet_name: rosidl_runtime_rs::String,

    /// The name of the robot in the fleet which will potentially execute the task
    pub expected_robot_name: rosidl_runtime_rs::String,

    /// The overall cost of task assignments prior to accommodating the new task
    pub prev_cost: f64,

    /// The overall cost of task assignments after accommodating the new task
    pub new_cost: f64,

    /// The estimated finish time of the new task
    pub finish_time: builtin_interfaces::msg::rmw::Time,

}



impl Default for BidProposal {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__BidProposal__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__BidProposal__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BidProposal {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidProposal__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidProposal__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidProposal__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BidProposal {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BidProposal where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/BidProposal";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__BidProposal() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__BidResponse() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__BidResponse__init(msg: *mut BidResponse) -> bool;
    fn rmf_task_msgs__msg__BidResponse__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BidResponse>, size: usize) -> bool;
    fn rmf_task_msgs__msg__BidResponse__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BidResponse>);
    fn rmf_task_msgs__msg__BidResponse__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BidResponse>, out_seq: *mut rosidl_runtime_rs::Sequence<BidResponse>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__BidResponse
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// ID of the task that is being bid on

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BidResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,

    /// True if this response contains a proposal
    pub has_proposal: bool,

    /// The proposal of this response, if has_proposal is true
    pub proposal: super::super::msg::rmw::BidProposal,

    /// Any errors related to this bid
    pub errors: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for BidResponse {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__BidResponse__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__BidResponse__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BidResponse {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidResponse__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidResponse__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__BidResponse__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BidResponse {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BidResponse where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/BidResponse";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__BidResponse() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__DispatchState() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__DispatchState__init(msg: *mut DispatchState) -> bool;
    fn rmf_task_msgs__msg__DispatchState__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DispatchState>, size: usize) -> bool;
    fn rmf_task_msgs__msg__DispatchState__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DispatchState>);
    fn rmf_task_msgs__msg__DispatchState__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DispatchState>, out_seq: *mut rosidl_runtime_rs::Sequence<DispatchState>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__DispatchState
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispatchState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assignment: super::super::msg::rmw::Assignment,


    // This member is not documented.
    #[allow(missing_docs)]
    pub errors: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}

impl DispatchState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_UNINITIALIZED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_QUEUED: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_SELECTED: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_DISPATCHED: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_FAILED_TO_ASSIGN: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STATUS_CANCELED_IN_FLIGHT: u8 = 5;

}


impl Default for DispatchState {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__DispatchState__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__DispatchState__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DispatchState {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchState__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchState__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchState__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DispatchState {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DispatchState where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/DispatchState";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__DispatchState() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__DispatchStates() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__DispatchStates__init(msg: *mut DispatchStates) -> bool;
    fn rmf_task_msgs__msg__DispatchStates__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DispatchStates>, size: usize) -> bool;
    fn rmf_task_msgs__msg__DispatchStates__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DispatchStates>);
    fn rmf_task_msgs__msg__DispatchStates__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DispatchStates>, out_seq: *mut rosidl_runtime_rs::Sequence<DispatchStates>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__DispatchStates
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// States of tasks that are currently in the process of being dispatched

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispatchStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub active: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DispatchState>,

    /// States of tasks that have recently finished being dispatched. This may mean
    /// the task was assigned or it may mean it failed to be dispatched or was
    /// canceled before the dispatch took place.
    pub finished: rosidl_runtime_rs::Sequence<super::super::msg::rmw::DispatchState>,

}



impl Default for DispatchStates {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__DispatchStates__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__DispatchStates__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DispatchStates {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchStates__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchStates__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchStates__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DispatchStates {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DispatchStates where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/DispatchStates";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__DispatchStates() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__DispatchCommand() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__DispatchCommand__init(msg: *mut DispatchCommand) -> bool;
    fn rmf_task_msgs__msg__DispatchCommand__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DispatchCommand>, size: usize) -> bool;
    fn rmf_task_msgs__msg__DispatchCommand__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DispatchCommand>);
    fn rmf_task_msgs__msg__DispatchCommand__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DispatchCommand>, out_seq: *mut rosidl_runtime_rs::Sequence<DispatchCommand>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__DispatchCommand
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message is published by Task Dispatcher Node to either award or cancel a
/// task for a Fleet Adapter

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispatchCommand {
    /// The selected Fleet Adapter to award/cancel the task
    pub fleet_name: rosidl_runtime_rs::String,

    /// The task_id of the task that
    pub task_id: rosidl_runtime_rs::String,

    /// Unique ID of this request message
    pub dispatch_id: u64,

    /// The time that this dispatch request was originally made. Dispatch requests may
    /// expire with an error if they get no response after an extended period of time.
    pub timestamp: builtin_interfaces::msg::rmw::Time,

    /// Add or Cancel a task
    pub type_: u8,

}

impl DispatchCommand {
    /// to award a task to a fleet
    pub const TYPE_AWARD: u8 = 1;

    /// to remove a task from a fleet
    pub const TYPE_REMOVE: u8 = 2;

}


impl Default for DispatchCommand {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__DispatchCommand__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__DispatchCommand__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DispatchCommand {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchCommand__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchCommand__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchCommand__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DispatchCommand {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DispatchCommand where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/DispatchCommand";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__DispatchCommand() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__DispatchAck() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__DispatchAck__init(msg: *mut DispatchAck) -> bool;
    fn rmf_task_msgs__msg__DispatchAck__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<DispatchAck>, size: usize) -> bool;
    fn rmf_task_msgs__msg__DispatchAck__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<DispatchAck>);
    fn rmf_task_msgs__msg__DispatchAck__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<DispatchAck>, out_seq: *mut rosidl_runtime_rs::Sequence<DispatchAck>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__DispatchAck
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// This message is published by the fleet adapter in response to a
/// DispatchRequest message. It indicates whether the requested task addition or
/// cancellation was successful.

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispatchAck {
    /// The ID of the DispatchRequest that is being responded to
    pub dispatch_id: u64,

    /// True if the addition or cancellation operation was successful
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub errors: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,

}



impl Default for DispatchAck {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__DispatchAck__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__DispatchAck__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for DispatchAck {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchAck__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchAck__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__DispatchAck__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for DispatchAck {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for DispatchAck where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/DispatchAck";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__DispatchAck() }
  }
}


#[link(name = "rmf_task_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Priority() -> *const std::ffi::c_void;
}

#[link(name = "rmf_task_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_task_msgs__msg__Priority__init(msg: *mut Priority) -> bool;
    fn rmf_task_msgs__msg__Priority__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Priority>, size: usize) -> bool;
    fn rmf_task_msgs__msg__Priority__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Priority>);
    fn rmf_task_msgs__msg__Priority__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Priority>, out_seq: *mut rosidl_runtime_rs::Sequence<Priority>) -> bool;
}

// Corresponds to rmf_task_msgs__msg__Priority
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Priority {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u64,

}



impl Default for Priority {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_task_msgs__msg__Priority__init(&mut msg as *mut _) {
        panic!("Call to rmf_task_msgs__msg__Priority__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Priority {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Priority__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Priority__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_task_msgs__msg__Priority__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Priority {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Priority where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_task_msgs/msg/Priority";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_task_msgs__msg__Priority() }
  }
}


