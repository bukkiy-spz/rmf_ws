#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_building_map_msgs__msg__AffineImage

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct AffineImage {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


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
    pub encoding: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub data: Vec<u8>,

}



impl Default for AffineImage {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::AffineImage::default())
  }
}

impl rosidl_runtime_rs::Message for AffineImage {
  type RmwMsg = super::msg::rmw::AffineImage;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        x_offset: msg.x_offset,
        y_offset: msg.y_offset,
        yaw: msg.yaw,
        scale: msg.scale,
        encoding: msg.encoding.as_str().into(),
        data: msg.data.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      x_offset: msg.x_offset,
      y_offset: msg.y_offset,
      yaw: msg.yaw,
      scale: msg.scale,
        encoding: msg.encoding.as_str().into(),
        data: msg.data.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      x_offset: msg.x_offset,
      y_offset: msg.y_offset,
      yaw: msg.yaw,
      scale: msg.scale,
      encoding: msg.encoding.to_string(),
      data: msg.data
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__BuildingMap

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BuildingMap {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub levels: Vec<super::msg::Level>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lifts: Vec<super::msg::Lift>,

}



impl Default for BuildingMap {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BuildingMap::default())
  }
}

impl rosidl_runtime_rs::Message for BuildingMap {
  type RmwMsg = super::msg::rmw::BuildingMap;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        levels: msg.levels
          .into_iter()
          .map(|elem| super::msg::Level::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        lifts: msg.lifts
          .into_iter()
          .map(|elem| super::msg::Lift::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        levels: msg.levels
          .iter()
          .map(|elem| super::msg::Level::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        lifts: msg.lifts
          .iter()
          .map(|elem| super::msg::Lift::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      levels: msg.levels
          .into_iter()
          .map(super::msg::Level::from_rmw_message)
          .collect(),
      lifts: msg.lifts
          .into_iter()
          .map(super::msg::Lift::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__Door

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Door {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Door::default())
  }
}

impl rosidl_runtime_rs::Message for Door {
  type RmwMsg = super::msg::rmw::Door;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        v1_x: msg.v1_x,
        v1_y: msg.v1_y,
        v2_x: msg.v2_x,
        v2_y: msg.v2_y,
        door_type: msg.door_type,
        motion_range: msg.motion_range,
        motion_direction: msg.motion_direction,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      v1_x: msg.v1_x,
      v1_y: msg.v1_y,
      v2_x: msg.v2_x,
      v2_y: msg.v2_y,
      door_type: msg.door_type,
      motion_range: msg.motion_range,
      motion_direction: msg.motion_direction,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      v1_x: msg.v1_x,
      v1_y: msg.v1_y,
      v2_x: msg.v2_x,
      v2_y: msg.v2_y,
      door_type: msg.door_type,
      motion_range: msg.motion_range,
      motion_direction: msg.motion_direction,
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__Graph

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Graph {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub vertices: Vec<super::msg::GraphNode>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub edges: Vec<super::msg::GraphEdge>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: Vec<super::msg::Param>,

}



impl Default for Graph {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Graph::default())
  }
}

impl rosidl_runtime_rs::Message for Graph {
  type RmwMsg = super::msg::rmw::Graph;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        vertices: msg.vertices
          .into_iter()
          .map(|elem| super::msg::GraphNode::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        edges: msg.edges
          .into_iter()
          .map(|elem| super::msg::GraphEdge::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        params: msg.params
          .into_iter()
          .map(|elem| super::msg::Param::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        vertices: msg.vertices
          .iter()
          .map(|elem| super::msg::GraphNode::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        edges: msg.edges
          .iter()
          .map(|elem| super::msg::GraphEdge::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        params: msg.params
          .iter()
          .map(|elem| super::msg::Param::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      vertices: msg.vertices
          .into_iter()
          .map(super::msg::GraphNode::from_rmw_message)
          .collect(),
      edges: msg.edges
          .into_iter()
          .map(super::msg::GraphEdge::from_rmw_message)
          .collect(),
      params: msg.params
          .into_iter()
          .map(super::msg::Param::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__GraphEdge

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub params: Vec<super::msg::Param>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GraphEdge::default())
  }
}

impl rosidl_runtime_rs::Message for GraphEdge {
  type RmwMsg = super::msg::rmw::GraphEdge;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        v1_idx: msg.v1_idx,
        v2_idx: msg.v2_idx,
        params: msg.params
          .into_iter()
          .map(|elem| super::msg::Param::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        edge_type: msg.edge_type,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      v1_idx: msg.v1_idx,
      v2_idx: msg.v2_idx,
        params: msg.params
          .iter()
          .map(|elem| super::msg::Param::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      edge_type: msg.edge_type,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      v1_idx: msg.v1_idx,
      v2_idx: msg.v2_idx,
      params: msg.params
          .into_iter()
          .map(super::msg::Param::from_rmw_message)
          .collect(),
      edge_type: msg.edge_type,
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__GraphNode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub params: Vec<super::msg::Param>,

}



impl Default for GraphNode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::GraphNode::default())
  }
}

impl rosidl_runtime_rs::Message for GraphNode {
  type RmwMsg = super::msg::rmw::GraphNode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        x: msg.x,
        y: msg.y,
        name: msg.name.as_str().into(),
        params: msg.params
          .into_iter()
          .map(|elem| super::msg::Param::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      x: msg.x,
      y: msg.y,
        name: msg.name.as_str().into(),
        params: msg.params
          .iter()
          .map(|elem| super::msg::Param::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      x: msg.x,
      y: msg.y,
      name: msg.name.to_string(),
      params: msg.params
          .into_iter()
          .map(super::msg::Param::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__Level

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Level {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub elevation: f32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub images: Vec<super::msg::AffineImage>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub places: Vec<super::msg::Place>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub doors: Vec<super::msg::Door>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub nav_graphs: Vec<super::msg::Graph>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wall_graph: super::msg::Graph,

}



impl Default for Level {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Level::default())
  }
}

impl rosidl_runtime_rs::Message for Level {
  type RmwMsg = super::msg::rmw::Level;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        elevation: msg.elevation,
        images: msg.images
          .into_iter()
          .map(|elem| super::msg::AffineImage::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        places: msg.places
          .into_iter()
          .map(|elem| super::msg::Place::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        doors: msg.doors
          .into_iter()
          .map(|elem| super::msg::Door::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        nav_graphs: msg.nav_graphs
          .into_iter()
          .map(|elem| super::msg::Graph::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        wall_graph: super::msg::Graph::into_rmw_message(std::borrow::Cow::Owned(msg.wall_graph)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      elevation: msg.elevation,
        images: msg.images
          .iter()
          .map(|elem| super::msg::AffineImage::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        places: msg.places
          .iter()
          .map(|elem| super::msg::Place::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        doors: msg.doors
          .iter()
          .map(|elem| super::msg::Door::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        nav_graphs: msg.nav_graphs
          .iter()
          .map(|elem| super::msg::Graph::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        wall_graph: super::msg::Graph::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wall_graph)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      elevation: msg.elevation,
      images: msg.images
          .into_iter()
          .map(super::msg::AffineImage::from_rmw_message)
          .collect(),
      places: msg.places
          .into_iter()
          .map(super::msg::Place::from_rmw_message)
          .collect(),
      doors: msg.doors
          .into_iter()
          .map(super::msg::Door::from_rmw_message)
          .collect(),
      nav_graphs: msg.nav_graphs
          .into_iter()
          .map(super::msg::Graph::from_rmw_message)
          .collect(),
      wall_graph: super::msg::Graph::from_rmw_message(msg.wall_graph),
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__Lift

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Lift {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub levels: Vec<std::string::String>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub doors: Vec<super::msg::Door>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub wall_graph: super::msg::Graph,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Lift::default())
  }
}

impl rosidl_runtime_rs::Message for Lift {
  type RmwMsg = super::msg::rmw::Lift;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        levels: msg.levels
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        doors: msg.doors
          .into_iter()
          .map(|elem| super::msg::Door::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        wall_graph: super::msg::Graph::into_rmw_message(std::borrow::Cow::Owned(msg.wall_graph)).into_owned(),
        ref_x: msg.ref_x,
        ref_y: msg.ref_y,
        ref_yaw: msg.ref_yaw,
        width: msg.width,
        depth: msg.depth,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        levels: msg.levels
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        doors: msg.doors
          .iter()
          .map(|elem| super::msg::Door::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        wall_graph: super::msg::Graph::into_rmw_message(std::borrow::Cow::Borrowed(&msg.wall_graph)).into_owned(),
      ref_x: msg.ref_x,
      ref_y: msg.ref_y,
      ref_yaw: msg.ref_yaw,
      width: msg.width,
      depth: msg.depth,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      levels: msg.levels
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      doors: msg.doors
          .into_iter()
          .map(super::msg::Door::from_rmw_message)
          .collect(),
      wall_graph: super::msg::Graph::from_rmw_message(msg.wall_graph),
      ref_x: msg.ref_x,
      ref_y: msg.ref_y,
      ref_yaw: msg.ref_yaw,
      width: msg.width,
      depth: msg.depth,
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__Param

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Param {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


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
    pub value_string: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Param::default())
  }
}

impl rosidl_runtime_rs::Message for Param {
  type RmwMsg = super::msg::rmw::Param;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        type_: msg.type_,
        value_int: msg.value_int,
        value_float: msg.value_float,
        value_string: msg.value_string.as_str().into(),
        value_bool: msg.value_bool,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      type_: msg.type_,
      value_int: msg.value_int,
      value_float: msg.value_float,
        value_string: msg.value_string.as_str().into(),
      value_bool: msg.value_bool,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      type_: msg.type_,
      value_int: msg.value_int,
      value_float: msg.value_float,
      value_string: msg.value_string.to_string(),
      value_bool: msg.value_bool,
    }
  }
}


// Corresponds to rmf_building_map_msgs__msg__Place

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Place {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Place::default())
  }
}

impl rosidl_runtime_rs::Message for Place {
  type RmwMsg = super::msg::rmw::Place;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        x: msg.x,
        y: msg.y,
        yaw: msg.yaw,
        position_tolerance: msg.position_tolerance,
        yaw_tolerance: msg.yaw_tolerance,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      position_tolerance: msg.position_tolerance,
      yaw_tolerance: msg.yaw_tolerance,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      x: msg.x,
      y: msg.y,
      yaw: msg.yaw,
      position_tolerance: msg.position_tolerance,
      yaw_tolerance: msg.yaw_tolerance,
    }
  }
}


