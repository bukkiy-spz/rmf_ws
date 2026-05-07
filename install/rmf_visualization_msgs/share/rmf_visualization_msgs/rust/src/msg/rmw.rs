#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_visualization_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_visualization_msgs__msg__RvizParam() -> *const std::ffi::c_void;
}

#[link(name = "rmf_visualization_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_visualization_msgs__msg__RvizParam__init(msg: *mut RvizParam) -> bool;
    fn rmf_visualization_msgs__msg__RvizParam__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<RvizParam>, size: usize) -> bool;
    fn rmf_visualization_msgs__msg__RvizParam__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<RvizParam>);
    fn rmf_visualization_msgs__msg__RvizParam__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<RvizParam>, out_seq: *mut rosidl_runtime_rs::Sequence<RvizParam>) -> bool;
}

// Corresponds to rmf_visualization_msgs__msg__RvizParam
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RvizParam {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map_name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub query_duration: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub start_duration: i64,

}



impl Default for RvizParam {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_visualization_msgs__msg__RvizParam__init(&mut msg as *mut _) {
        panic!("Call to rmf_visualization_msgs__msg__RvizParam__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for RvizParam {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_visualization_msgs__msg__RvizParam__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_visualization_msgs__msg__RvizParam__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_visualization_msgs__msg__RvizParam__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for RvizParam {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for RvizParam where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_visualization_msgs/msg/RvizParam";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_visualization_msgs__msg__RvizParam() }
  }
}


