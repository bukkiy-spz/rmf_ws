#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__AffineImage() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__AffineImage__init(msg: *mut AffineImage) -> bool;
    fn rmf_building_map_msgs__msg__AffineImage__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<AffineImage>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__AffineImage__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<AffineImage>);
    fn rmf_building_map_msgs__msg__AffineImage__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<AffineImage>, out_seq: *mut rosidl_runtime_rs::Sequence<AffineImage>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__AffineImage
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AffineImage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub x_offset: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y_offset: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub scale: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub encoding: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: rosidl_runtime_rs::Sequence<u8>,

}



impl Default for AffineImage {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__AffineImage__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__AffineImage__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for AffineImage {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__AffineImage__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__AffineImage__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__AffineImage__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for AffineImage {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for AffineImage where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/AffineImage";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__AffineImage() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__BuildingMap() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__BuildingMap__init(msg: *mut BuildingMap) -> bool;
    fn rmf_building_map_msgs__msg__BuildingMap__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<BuildingMap>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__BuildingMap__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<BuildingMap>);
    fn rmf_building_map_msgs__msg__BuildingMap__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<BuildingMap>, out_seq: *mut rosidl_runtime_rs::Sequence<BuildingMap>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__BuildingMap
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BuildingMap {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub levels: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Level>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lifts: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Lift>,

}



impl Default for BuildingMap {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__BuildingMap__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__BuildingMap__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for BuildingMap {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__BuildingMap__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__BuildingMap__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__BuildingMap__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for BuildingMap {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for BuildingMap where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/BuildingMap";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__BuildingMap() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Door() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__Door__init(msg: *mut Door) -> bool;
    fn rmf_building_map_msgs__msg__Door__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Door>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__Door__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Door>);
    fn rmf_building_map_msgs__msg__Door__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Door>, out_seq: *mut rosidl_runtime_rs::Sequence<Door>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__Door
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Door {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,

    /// CONVENTIONS
    /// ===========
    /// single hinge doors:
    ///   * hinge is located at (v1_x, v1_y)
    ///   * door extends till (v2_x, v2_y)
    ///   * motion_range = door swing range in DEGREES
    ///   * there are two possible motions: clockwise and anti-clockwise
    ///     selected by the motion_direction parameter, which is +1 or -1
    ///
    /// double hinge doors:
    ///   * hinges are located at both (v1_x, v1_y) and (v2_x, v2_y)
    ///   * motion range = door swing ranges in DEGREES (assume symmetric)
    ///   * same motion-direction selection as single hinge
    ///
    /// single sliding doors:
    ///   * the door slides from (v2_x, v2_y) towards (v1_x, v1_y)
    ///   * range of motion is entire distance from v2->v1. No need to specify.
    ///
    /// double sliding doors:
    ///   * door panels slide from the centerpoint of v1<->v2 towards v1 and v2
    ///
    /// single/double telescoping doors:
    ///   * common in elevators; same parameters as sliding doors; they just
    ///     open/close faster and take up less space inside the wall.
    pub v1_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v1_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v2_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v2_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub door_type: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_range: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motion_direction: i32,

}

impl Door {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_TYPE_UNDEFINED: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_TYPE_SINGLE_SLIDING: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_TYPE_DOUBLE_SLIDING: u8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_TYPE_SINGLE_TELESCOPE: u8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_TYPE_DOUBLE_TELESCOPE: u8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_TYPE_SINGLE_SWING: u8 = 5;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const DOOR_TYPE_DOUBLE_SWING: u8 = 6;

}


impl Default for Door {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__Door__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__Door__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Door {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Door__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Door__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Door__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Door {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Door where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/Door";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Door() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Graph() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__Graph__init(msg: *mut Graph) -> bool;
    fn rmf_building_map_msgs__msg__Graph__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Graph>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__Graph__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Graph>);
    fn rmf_building_map_msgs__msg__Graph__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Graph>, out_seq: *mut rosidl_runtime_rs::Sequence<Graph>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__Graph
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Graph {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vertices: rosidl_runtime_rs::Sequence<super::super::msg::rmw::GraphNode>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges: rosidl_runtime_rs::Sequence<super::super::msg::rmw::GraphEdge>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Param>,

}



impl Default for Graph {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__Graph__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__Graph__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Graph {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Graph__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Graph__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Graph__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Graph {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Graph where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/Graph";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Graph() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__GraphEdge() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__GraphEdge__init(msg: *mut GraphEdge) -> bool;
    fn rmf_building_map_msgs__msg__GraphEdge__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GraphEdge>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__GraphEdge__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GraphEdge>);
    fn rmf_building_map_msgs__msg__GraphEdge__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GraphEdge>, out_seq: *mut rosidl_runtime_rs::Sequence<GraphEdge>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__GraphEdge
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphEdge {

    // This member is not documented.
    #[allow(missing_docs)]
    pub v1_idx: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub v2_idx: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Param>,

    /// when edge_type is UNIDIRECTIONAL, it means v1 -> v2
    /// when edge_type is BIDIRECTIONAL, it means v1 <-> v2
    pub edge_type: u8,

}

impl GraphEdge {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EDGE_TYPE_BIDIRECTIONAL: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EDGE_TYPE_UNIDIRECTIONAL: u8 = 1;

}


impl Default for GraphEdge {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__GraphEdge__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__GraphEdge__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GraphEdge {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__GraphEdge__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__GraphEdge__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__GraphEdge__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GraphEdge {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GraphEdge where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/GraphEdge";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__GraphEdge() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__GraphNode() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__GraphNode__init(msg: *mut GraphNode) -> bool;
    fn rmf_building_map_msgs__msg__GraphNode__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<GraphNode>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__GraphNode__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<GraphNode>);
    fn rmf_building_map_msgs__msg__GraphNode__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<GraphNode>, out_seq: *mut rosidl_runtime_rs::Sequence<GraphNode>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__GraphNode
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct GraphNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Param>,

}



impl Default for GraphNode {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__GraphNode__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__GraphNode__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for GraphNode {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__GraphNode__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__GraphNode__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__GraphNode__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for GraphNode {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for GraphNode where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/GraphNode";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__GraphNode() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Level() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__Level__init(msg: *mut Level) -> bool;
    fn rmf_building_map_msgs__msg__Level__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Level>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__Level__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Level>);
    fn rmf_building_map_msgs__msg__Level__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Level>, out_seq: *mut rosidl_runtime_rs::Sequence<Level>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__Level
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Level {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elevation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub images: rosidl_runtime_rs::Sequence<super::super::msg::rmw::AffineImage>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub places: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Place>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub doors: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Door>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nav_graphs: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Graph>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wall_graph: super::super::msg::rmw::Graph,

}



impl Default for Level {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__Level__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__Level__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Level {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Level__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Level__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Level__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Level {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Level where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/Level";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Level() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Lift() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__Lift__init(msg: *mut Lift) -> bool;
    fn rmf_building_map_msgs__msg__Lift__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Lift>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__Lift__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Lift>);
    fn rmf_building_map_msgs__msg__Lift__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Lift>, out_seq: *mut rosidl_runtime_rs::Sequence<Lift>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__Lift
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Lift {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub levels: rosidl_runtime_rs::Sequence<rosidl_runtime_rs::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub doors: rosidl_runtime_rs::Sequence<super::super::msg::rmw::Door>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wall_graph: super::super::msg::rmw::Graph,

    /// (ref_x, ref_y, ref_yaw) is a "reference orientation" of the lift cabin
    /// which can be used to align floors.
    pub ref_x: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref_y: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ref_yaw: f32,

    /// width and depth of the cabin
    pub width: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub depth: f32,

}



impl Default for Lift {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__Lift__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__Lift__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Lift {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Lift__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Lift__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Lift__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Lift {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Lift where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/Lift";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Lift() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Param() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__Param__init(msg: *mut Param) -> bool;
    fn rmf_building_map_msgs__msg__Param__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Param>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__Param__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Param>);
    fn rmf_building_map_msgs__msg__Param__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Param>, out_seq: *mut rosidl_runtime_rs::Sequence<Param>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__Param
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Param {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value_int: i32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value_float: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value_string: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value_bool: bool,

}

impl Param {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_UNDEFINED: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_STRING: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_INT: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_DOUBLE: u32 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TYPE_BOOL: u32 = 4;

}


impl Default for Param {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__Param__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__Param__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Param {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Param__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Param__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Param__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Param {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Param where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/Param";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Param() }
  }
}


#[link(name = "rmf_building_map_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Place() -> *const std::ffi::c_void;
}

#[link(name = "rmf_building_map_msgs__rosidl_generator_c")]
extern "C" {
    fn rmf_building_map_msgs__msg__Place__init(msg: *mut Place) -> bool;
    fn rmf_building_map_msgs__msg__Place__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Place>, size: usize) -> bool;
    fn rmf_building_map_msgs__msg__Place__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Place>);
    fn rmf_building_map_msgs__msg__Place__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Place>, out_seq: *mut rosidl_runtime_rs::Sequence<Place>) -> bool;
}

// Corresponds to rmf_building_map_msgs__msg__Place
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Place {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: rosidl_runtime_rs::String,


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
    pub position_tolerance: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub yaw_tolerance: f32,

}



impl Default for Place {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !rmf_building_map_msgs__msg__Place__init(&mut msg as *mut _) {
        panic!("Call to rmf_building_map_msgs__msg__Place__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Place {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Place__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Place__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { rmf_building_map_msgs__msg__Place__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Place {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Place where Self: Sized {
  const TYPE_NAME: &'static str = "rmf_building_map_msgs/msg/Place";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__rmf_building_map_msgs__msg__Place() }
  }
}


