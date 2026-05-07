#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_obstacle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_obstacle_msgs__msg__BoundingBox3D() -> *const std::ffi::c_void;
}

#[link(name = "rmf_obstacle_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_obstacle_msgs__msg__BoundingBox3D__init(msg: *mut BoundingBox3D) -> bool;
    fn rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BoundingBox3D>, size: usize) -> bool;
    fn rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BoundingBox3D>);
    fn rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BoundingBox3D>, out_seq: *mut rosidl_runtime_rs::Sequence<BoundingBox3D>) -> bool;
}

// Corresponds to rmf_obstacle_msgs__msg__BoundingBox3D
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// A 3D bounding box

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoundingBox3D {
    /// The 3D position and orientation of the bounding box center
    pub center: geometry_msgs::msg::rmw::Pose,

    /// The total size of the bounding box, in meters, surrounding the object's center
    pub size: geometry_msgs::msg::rmw::Vector3,

}



impl Default for BoundingBox3D {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_obstacle_msgs__msg__BoundingBox3D__init(&mut msg as *mut _) {
        panic!("Call to rmf_obstacle_msgs__msg__BoundingBox3D__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BoundingBox3D {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__BoundingBox3D__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BoundingBox3D {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BoundingBox3D where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_obstacle_msgs/msg/BoundingBox3D";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_obstacle_msgs__msg__BoundingBox3D() }
  }
}


#[link(name = "rmf_obstacle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_obstacle_msgs__msg__Obstacle() -> *const std::ffi::c_void;
}

#[link(name = "rmf_obstacle_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_obstacle_msgs__msg__Obstacle__init(msg: *mut Obstacle) -> bool;
    fn rmf_obstacle_msgs__msg__Obstacle__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Obstacle>, size: usize) -> bool;
    fn rmf_obstacle_msgs__msg__Obstacle__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Obstacle>);
    fn rmf_obstacle_msgs__msg__Obstacle__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Obstacle>, out_seq: *mut rosidl_runtime_rs::Sequence<Obstacle>) -> bool;
}

// Corresponds to rmf_obstacle_msgs__msg__Obstacle
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]

/// All measurements should be w.r.t. header.frame_id

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Obstacle {
    /// Standard header
    pub header: std_msgs::msg::rmw::Header,

    /// An id for this specific message. This will be used for deletion.
    pub id: i32,

    /// Unique identifier of the publisher of this message.
    pub source: rosidl_runtime_rs::String,

    /// The level on which this obstacle exists
    pub level_name: rosidl_runtime_rs::String,

    /// A classification label for the detected obstacle. (human, chair, etc)
    pub classification: rosidl_runtime_rs::String,

    /// Bounding box of the obstacle
    pub bbox: super::super::msg::rmw::BoundingBox3D,

    /// 3D obstacle data that can be deserialized into an octree.
    /// Resolution (in m) of the smallest octree node.
    pub data_resolution: f64,

    /// Binary serialization of the obstacle octree
    pub data: rosidl_runtime_rs::Sequence<i8>,

    /// The expected lifetime of the obstacle
    pub lifetime: builtin_interfaces::msg::rmw::Duration,

    /// Whether to add or delete the obstacle of the id provided
    pub action: i32,

}

impl Obstacle {
    /// or modify
    pub const ACTION_ADD: i32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_DELETE: i32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ACTION_DELETEALL: i32 = 3;

}


impl Default for Obstacle {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_obstacle_msgs__msg__Obstacle__init(&mut msg as *mut _) {
        panic!("Call to rmf_obstacle_msgs__msg__Obstacle__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Obstacle {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__Obstacle__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__Obstacle__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__Obstacle__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Obstacle {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Obstacle where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_obstacle_msgs/msg/Obstacle";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_obstacle_msgs__msg__Obstacle() }
  }
}


#[link(name = "rmf_obstacle_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_obstacle_msgs__msg__Obstacles() -> *const std::ffi::c_void;
}

#[link(name = "rmf_obstacle_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_obstacle_msgs__msg__Obstacles__init(msg: *mut Obstacles) -> bool;
    fn rmf_obstacle_msgs__msg__Obstacles__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Obstacles>, size: usize) -> bool;
    fn rmf_obstacle_msgs__msg__Obstacles__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Obstacles>);
    fn rmf_obstacle_msgs__msg__Obstacles__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Obstacles>, out_seq: *mut rosidl_runtime_rs::Sequence<Obstacles>) -> bool;
}

// Corresponds to rmf_obstacle_msgs__msg__Obstacles
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Obstacles {

    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacles: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Obstacle>,

}



impl Default for Obstacles {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_obstacle_msgs__msg__Obstacles__init(&mut msg as *mut _) {
        panic!("Call to rmf_obstacle_msgs__msg__Obstacles__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Obstacles {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__Obstacles__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__Obstacles__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_obstacle_msgs__msg__Obstacles__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Obstacles {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Obstacles where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_obstacle_msgs/msg/Obstacles";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_obstacle_msgs__msg__Obstacles() }
  }
}


