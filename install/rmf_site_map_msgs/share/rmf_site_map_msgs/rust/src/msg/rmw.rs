#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_site_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_site_map_msgs__msg__SiteMap() -> *const std::ffi::c_void;
}

#[link(name = "rmf_site_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_site_map_msgs__msg__SiteMap__init(msg: *mut SiteMap) -> bool;
    fn rmf_site_map_msgs__msg__SiteMap__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<SiteMap>, size: usize) -> bool;
    fn rmf_site_map_msgs__msg__SiteMap__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<SiteMap>);
    fn rmf_site_map_msgs__msg__SiteMap__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<SiteMap>, out_seq: *mut rosidl_runtime_rs::Sequence<SiteMap>) -> bool;
}

// Corresponds to rmf_site_map_msgs__msg__SiteMap
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SiteMap {

    // This member is not documented.
    #[allow(missing_docs)]
    pub encoding: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<u8>,

}

impl SiteMap {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_UNDEFINED: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_GPKG: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_GPKG_GZ: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_GEOJSON: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const MAP_DATA_GEOJSON_GZ: u32 = 4;

}


impl Default for SiteMap {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_site_map_msgs__msg__SiteMap__init(&mut msg as *mut _) {
        panic!("Call to rmf_site_map_msgs__msg__SiteMap__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for SiteMap {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_site_map_msgs__msg__SiteMap__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_site_map_msgs__msg__SiteMap__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_site_map_msgs__msg__SiteMap__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for SiteMap {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for SiteMap where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_site_map_msgs/msg/SiteMap";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_site_map_msgs__msg__SiteMap() }
  }
}


