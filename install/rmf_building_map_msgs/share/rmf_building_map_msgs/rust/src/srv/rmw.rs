#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__srv__GetBuildingMap_Request() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__srv__GetBuildingMap_Request__init(msg: *mut GetBuildingMap_Request) -> bool;
    fn rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBuildingMap_Request>, size: usize) -> bool;
    fn rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBuildingMap_Request>);
    fn rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBuildingMap_Request>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBuildingMap_Request>) -> bool;
}

// Corresponds to rmf_building_map_msgs__srv__GetBuildingMap_Request
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBuildingMap_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for GetBuildingMap_Request {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__srv__GetBuildingMap_Request__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__srv__GetBuildingMap_Request__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBuildingMap_Request {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__srv__GetBuildingMap_Request__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBuildingMap_Request {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBuildingMap_Request where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/srv/GetBuildingMap_Request";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__srv__GetBuildingMap_Request() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__srv__GetBuildingMap_Response() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__srv__GetBuildingMap_Response__init(msg: *mut GetBuildingMap_Response) -> bool;
    fn rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GetBuildingMap_Response>, size: usize) -> bool;
    fn rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GetBuildingMap_Response>);
    fn rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GetBuildingMap_Response>, out_seq: *mut rosidl_runtime_rs::Sequence<GetBuildingMap_Response>) -> bool;
}

// Corresponds to rmf_building_map_msgs__srv__GetBuildingMap_Response
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GetBuildingMap_Response {

    // This member is not documented.
    #[allow(missing_docs)]
    pub building_map: super::super::msg::rmw::BuildingMap,

}



impl Default for GetBuildingMap_Response {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__srv__GetBuildingMap_Response__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__srv__GetBuildingMap_Response__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GetBuildingMap_Response {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__srv__GetBuildingMap_Response__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GetBuildingMap_Response {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GetBuildingMap_Response where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/srv/GetBuildingMap_Response";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__srv__GetBuildingMap_Response() }
  }
}






#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_building_map_msgs__srv__GetBuildingMap() -> *const std::ffi::c_void;
}

// Corresponds to rmf_building_map_msgs__srv__GetBuildingMap
#[allow(missing_docs, non_camel_case_types)]
pub struct GetBuildingMap;

impl rosidl_runtime_rs::Service for GetBuildingMap {
    type Request = GetBuildingMap_Request;
    type Response = GetBuildingMap_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_building_map_msgs__srv__GetBuildingMap() }
    }
}


