#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_obstacle_msgs__msg__BoundingBox3D
/// A 3D bounding box

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BoundingBox3D {
    /// The 3D position and orientation of the bounding box center
    pub center: geometry_msgs::msg::Pose,

    /// The total size of the bounding box, in meters, surrounding the object's center
    pub size: geometry_msgs::msg::Vector3,

}



impl Default for BoundingBox3D {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BoundingBox3D::default())
  }
}

impl rosidl_runtime_rs::Message for BoundingBox3D {
  type RmwMsg = super::msg::rmw::BoundingBox3D;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        center: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Owned(msg.center)).into_owned(),
        size: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Owned(msg.size)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        center: geometry_msgs::msg::Pose::into_rmw_message(std::borrow::Cow::Borrowed(&msg.center)).into_owned(),
        size: geometry_msgs::msg::Vector3::into_rmw_message(std::borrow::Cow::Borrowed(&msg.size)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      center: geometry_msgs::msg::Pose::from_rmw_message(msg.center),
      size: geometry_msgs::msg::Vector3::from_rmw_message(msg.size),
    }
  }
}


// Corresponds to rmf_obstacle_msgs__msg__Obstacle
/// All measurements should be w.r.t. header.frame_id

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Obstacle {
    /// Standard header
    pub header: std_msgs::msg::Header,

    /// An id for this specific message. This will be used for deletion.
    pub id: i32,

    /// Unique identifier of the publisher of this message.
    pub source: std::string::String,

    /// The level on which this obstacle exists
    pub level_name: std::string::String,

    /// A classification label for the detected obstacle. (human, chair, etc)
    pub classification: std::string::String,

    /// Bounding box of the obstacle
    pub bbox: super::msg::BoundingBox3D,

    /// 3D obstacle data that can be deserialized into an octree.
    /// Resolution (in m) of the smallest octree node.
    pub data_resolution: f64,

    /// Binary serialization of the obstacle octree
    pub data: Vec<i8>,

    /// The expected lifetime of the obstacle
    pub lifetime: builtin_interfaces::msg::Duration,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Obstacle::default())
  }
}

impl rosidl_runtime_rs::Message for Obstacle {
  type RmwMsg = super::msg::rmw::Obstacle;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        id: msg.id,
        source: msg.source.as_str().into(),
        level_name: msg.level_name.as_str().into(),
        classification: msg.classification.as_str().into(),
        bbox: super::msg::BoundingBox3D::into_rmw_message(std::borrow::Cow::Owned(msg.bbox)).into_owned(),
        data_resolution: msg.data_resolution,
        data: msg.data.into(),
        lifetime: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.lifetime)).into_owned(),
        action: msg.action,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      id: msg.id,
        source: msg.source.as_str().into(),
        level_name: msg.level_name.as_str().into(),
        classification: msg.classification.as_str().into(),
        bbox: super::msg::BoundingBox3D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.bbox)).into_owned(),
      data_resolution: msg.data_resolution,
        data: msg.data.as_slice().into(),
        lifetime: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.lifetime)).into_owned(),
      action: msg.action,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      id: msg.id,
      source: msg.source.to_string(),
      level_name: msg.level_name.to_string(),
      classification: msg.classification.to_string(),
      bbox: super::msg::BoundingBox3D::from_rmw_message(msg.bbox),
      data_resolution: msg.data_resolution,
      data: msg.data
          .into_iter()
          .collect(),
      lifetime: builtin_interfaces::msg::Duration::from_rmw_message(msg.lifetime),
      action: msg.action,
    }
  }
}


// Corresponds to rmf_obstacle_msgs__msg__Obstacles

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Obstacles {

    // This member is not documented.
    #[allow(missing_docs)]
    pub obstacles: Vec<super::msg::Obstacle>,

}



impl Default for Obstacles {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Obstacles::default())
  }
}

impl rosidl_runtime_rs::Message for Obstacles {
  type RmwMsg = super::msg::rmw::Obstacles;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        obstacles: msg.obstacles
          .into_iter()
          .map(|elem| super::msg::Obstacle::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        obstacles: msg.obstacles
          .iter()
          .map(|elem| super::msg::Obstacle::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      obstacles: msg.obstacles
          .into_iter()
          .map(super::msg::Obstacle::from_rmw_message)
          .collect(),
    }
  }
}


