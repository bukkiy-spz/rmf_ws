#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_traffic_msgs__msg__BlockadeCancel

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeCancel {
    /// The participant whose reservation is being canceled
    pub participant: u64,

    /// True if all reservations for this participants should be considered cancelled
    pub all_reservations: bool,

    /// If all_reservations is false, then this is the last reservation that should
    /// be considered cancelled. If all_reservations is true, then this field is
    /// meaningless
    pub reservation: u64,

}



impl Default for BlockadeCancel {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockadeCancel::default())
  }
}

impl rosidl_runtime_rs::Message for BlockadeCancel {
  type RmwMsg = super::msg::rmw::BlockadeCancel;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        all_reservations: msg.all_reservations,
        reservation: msg.reservation,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      all_reservations: msg.all_reservations,
      reservation: msg.reservation,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      all_reservations: msg.all_reservations,
      reservation: msg.reservation,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__BlockadeCheckpoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeCheckpoint {
    /// The position of the checkpoint
    pub position: [f64; 2],

    /// The name of the map that the checkpoint is on
    pub map_name: std::string::String,

    /// Whether or not the participant can hold at this checkpoint
    pub can_hold: bool,

}



impl Default for BlockadeCheckpoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockadeCheckpoint::default())
  }
}

impl rosidl_runtime_rs::Message for BlockadeCheckpoint {
  type RmwMsg = super::msg::rmw::BlockadeCheckpoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        map_name: msg.map_name.as_str().into(),
        can_hold: msg.can_hold,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        map_name: msg.map_name.as_str().into(),
      can_hold: msg.can_hold,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: msg.position,
      map_name: msg.map_name.to_string(),
      can_hold: msg.can_hold,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__BlockadeHeartbeat

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeHeartbeat {
    /// An array of the current blockade statuses which describe the most recent
    /// information
    pub statuses: Vec<super::msg::BlockadeStatus>,

    /// This will be true when the blockade moderator has identified a gridlock that
    /// cannot be undone. This should never happen if a system is setup correctly. But
    /// it may happen if a robot is given a path whose first or last checkpoint is in
    /// conflict with the path of another robot.
    pub has_gridlock: bool,

}



impl Default for BlockadeHeartbeat {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockadeHeartbeat::default())
  }
}

impl rosidl_runtime_rs::Message for BlockadeHeartbeat {
  type RmwMsg = super::msg::rmw::BlockadeHeartbeat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        statuses: msg.statuses
          .into_iter()
          .map(|elem| super::msg::BlockadeStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        has_gridlock: msg.has_gridlock,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        statuses: msg.statuses
          .iter()
          .map(|elem| super::msg::BlockadeStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      has_gridlock: msg.has_gridlock,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      statuses: msg.statuses
          .into_iter()
          .map(super::msg::BlockadeStatus::from_rmw_message)
          .collect(),
      has_gridlock: msg.has_gridlock,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__BlockadeReached

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeReached {
    /// The ID of the blockade participant
    pub participant: u64,

    /// The reservation ID that this update refers to
    pub reservation: u64,

    /// The checkpoint that has been reached
    pub checkpoint: u64,

}



impl Default for BlockadeReached {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockadeReached::default())
  }
}

impl rosidl_runtime_rs::Message for BlockadeReached {
  type RmwMsg = super::msg::rmw::BlockadeReached;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        reservation: msg.reservation,
        checkpoint: msg.checkpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      reservation: msg.reservation,
      checkpoint: msg.checkpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      reservation: msg.reservation,
      checkpoint: msg.checkpoint,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__BlockadeReady

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeReady {
    /// The ID of the blockade participant
    pub participant: u64,

    /// The reservation ID that this update refers to
    pub reservation: u64,

    /// The checkpoint that is ready to be left
    pub checkpoint: u64,

}



impl Default for BlockadeReady {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockadeReady::default())
  }
}

impl rosidl_runtime_rs::Message for BlockadeReady {
  type RmwMsg = super::msg::rmw::BlockadeReady;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        reservation: msg.reservation,
        checkpoint: msg.checkpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      reservation: msg.reservation,
      checkpoint: msg.checkpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      reservation: msg.reservation,
      checkpoint: msg.checkpoint,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__BlockadeRelease

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeRelease {
    /// The ID of the blockade participant
    pub participant: u64,

    /// The reservation ID that this update refers to
    pub reservation: u64,

    /// The checkpoint that should be released
    pub checkpoint: u64,

}



impl Default for BlockadeRelease {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockadeRelease::default())
  }
}

impl rosidl_runtime_rs::Message for BlockadeRelease {
  type RmwMsg = super::msg::rmw::BlockadeRelease;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        reservation: msg.reservation,
        checkpoint: msg.checkpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      reservation: msg.reservation,
      checkpoint: msg.checkpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      reservation: msg.reservation,
      checkpoint: msg.checkpoint,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__BlockadeSet

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeSet {
    /// The ID of the participant that is setting its path
    pub participant: u64,

    /// The ID of the reservation that is being set
    pub reservation: u64,

    /// The radius to inflate the path
    pub radius: f64,

    /// The path that is being reserved
    pub path: Vec<super::msg::BlockadeCheckpoint>,

}



impl Default for BlockadeSet {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockadeSet::default())
  }
}

impl rosidl_runtime_rs::Message for BlockadeSet {
  type RmwMsg = super::msg::rmw::BlockadeSet;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        reservation: msg.reservation,
        radius: msg.radius,
        path: msg.path
          .into_iter()
          .map(|elem| super::msg::BlockadeCheckpoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      reservation: msg.reservation,
      radius: msg.radius,
        path: msg.path
          .iter()
          .map(|elem| super::msg::BlockadeCheckpoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      reservation: msg.reservation,
      radius: msg.radius,
      path: msg.path
          .into_iter()
          .map(super::msg::BlockadeCheckpoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__BlockadeStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BlockadeStatus {
    /// The Participant ID that this status is for
    pub participant: u64,

    /// The latest reservation known for this participant
    pub reservation: u64,

    /// This is true if and only if the moderator has ever received a ready notice
    /// from the participant
    pub any_ready: bool,

    /// If any_ready is true, then this is the most recent ready checkpoint that the
    /// moderator knows about. If any_ready is false, then this field is meaningless.
    pub last_ready: u64,

    /// The last checkpoint that the moderator knows of the participant reaching
    pub last_reached: u64,

    /// The first checkpoint that's currently blockaded for this participant
    pub assignment_begin: u64,

    /// The last checkpoint that's currently blockaded for this participant
    pub assignment_end: u64,

}



impl Default for BlockadeStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BlockadeStatus::default())
  }
}

impl rosidl_runtime_rs::Message for BlockadeStatus {
  type RmwMsg = super::msg::rmw::BlockadeStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        reservation: msg.reservation,
        any_ready: msg.any_ready,
        last_ready: msg.last_ready,
        last_reached: msg.last_reached,
        assignment_begin: msg.assignment_begin,
        assignment_end: msg.assignment_end,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      reservation: msg.reservation,
      any_ready: msg.any_ready,
      last_ready: msg.last_ready,
      last_reached: msg.last_reached,
      assignment_begin: msg.assignment_begin,
      assignment_end: msg.assignment_end,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      reservation: msg.reservation,
      any_ready: msg.any_ready,
      last_ready: msg.last_ready,
      last_reached: msg.last_reached,
      assignment_begin: msg.assignment_begin,
      assignment_end: msg.assignment_end,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Circle

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Circle {
    /// The radius of the circle. The circle will be centered around the origin of its
    /// frame of reference.
    pub radius: f64,

}



impl Default for Circle {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Circle::default())
  }
}

impl rosidl_runtime_rs::Message for Circle {
  type RmwMsg = super::msg::rmw::Circle;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        radius: msg.radius,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      radius: msg.radius,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      radius: msg.radius,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ConvexShape

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConvexShape {
    /// Choose between the BOX and CIRCLE types
    pub type_: u8,

    /// Specify the index of the shape. We support 256 different convex shapes per
    /// context.
    pub index: u8,

}

impl ConvexShape {
    /// A 2D box or circle shape reference.
    pub const NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BOX: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CIRCLE: u8 = 2;

}


impl Default for ConvexShape {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConvexShape::default())
  }
}

impl rosidl_runtime_rs::Message for ConvexShape {
  type RmwMsg = super::msg::rmw::ConvexShape;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        index: msg.index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
      index: msg.index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      index: msg.index,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ConvexShapeContext

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ConvexShapeContext {
    /// Circle descriptions which can be used by the ConvexShape message
    pub circles: Vec<super::msg::Circle>,

}



impl Default for ConvexShapeContext {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ConvexShapeContext::default())
  }
}

impl rosidl_runtime_rs::Message for ConvexShapeContext {
  type RmwMsg = super::msg::rmw::ConvexShapeContext;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        circles: msg.circles
          .into_iter()
          .map(|elem| super::msg::Circle::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        circles: msg.circles
          .iter()
          .map(|elem| super::msg::Circle::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      circles: msg.circles
          .into_iter()
          .map(super::msg::Circle::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Heartbeat

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Heartbeat {

    // This member is not documented.
    #[allow(missing_docs)]
    pub structure_needs_at_least_one_member: u8,

}



impl Default for Heartbeat {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Heartbeat::default())
  }
}

impl rosidl_runtime_rs::Message for Heartbeat {
  type RmwMsg = super::msg::rmw::Heartbeat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      structure_needs_at_least_one_member: msg.structure_needs_at_least_one_member,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Itinerary

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Itinerary {

    // This member is not documented.
    #[allow(missing_docs)]
    pub routes: Vec<super::msg::Route>,

}



impl Default for Itinerary {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Itinerary::default())
  }
}

impl rosidl_runtime_rs::Message for Itinerary {
  type RmwMsg = super::msg::rmw::Itinerary;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        routes: msg.routes
          .into_iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        routes: msg.routes
          .iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      routes: msg.routes
          .into_iter()
          .map(super::msg::Route::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ItineraryClear

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItineraryClear {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,

}



impl Default for ItineraryClear {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ItineraryClear::default())
  }
}

impl rosidl_runtime_rs::Message for ItineraryClear {
  type RmwMsg = super::msg::rmw::ItineraryClear;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        itinerary_version: msg.itinerary_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      itinerary_version: msg.itinerary_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      itinerary_version: msg.itinerary_version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ItineraryDelay

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItineraryDelay {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delay: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,

}



impl Default for ItineraryDelay {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ItineraryDelay::default())
  }
}

impl rosidl_runtime_rs::Message for ItineraryDelay {
  type RmwMsg = super::msg::rmw::ItineraryDelay;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        delay: msg.delay,
        itinerary_version: msg.itinerary_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      delay: msg.delay,
      itinerary_version: msg.itinerary_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      delay: msg.delay,
      itinerary_version: msg.itinerary_version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ItineraryReached

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItineraryReached {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub plan: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reached_checkpoints: Vec<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress_version: u64,

}



impl Default for ItineraryReached {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ItineraryReached::default())
  }
}

impl rosidl_runtime_rs::Message for ItineraryReached {
  type RmwMsg = super::msg::rmw::ItineraryReached;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        plan: msg.plan,
        reached_checkpoints: msg.reached_checkpoints.into(),
        progress_version: msg.progress_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      plan: msg.plan,
        reached_checkpoints: msg.reached_checkpoints.as_slice().into(),
      progress_version: msg.progress_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      plan: msg.plan,
      reached_checkpoints: msg.reached_checkpoints
          .into_iter()
          .collect(),
      progress_version: msg.progress_version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ItineraryExtend

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItineraryExtend {
    /// ID of the schedule participant whose itinerary is being extended
    pub participant: u64,

    /// The new routes that are being added to the itinerary
    pub routes: Vec<super::msg::Route>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,

}



impl Default for ItineraryExtend {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ItineraryExtend::default())
  }
}

impl rosidl_runtime_rs::Message for ItineraryExtend {
  type RmwMsg = super::msg::rmw::ItineraryExtend;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        routes: msg.routes
          .into_iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        itinerary_version: msg.itinerary_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
        routes: msg.routes
          .iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      itinerary_version: msg.itinerary_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      routes: msg.routes
          .into_iter()
          .map(super::msg::Route::from_rmw_message)
          .collect(),
      itinerary_version: msg.itinerary_version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ItinerarySet

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ItinerarySet {
    /// ID of the schedule participant whose itinerary is being set
    pub participant: u64,

    /// ID of this plan
    pub plan: u64,

    /// The new itinerary for this participant
    pub itinerary: Vec<super::msg::Route>,

    /// The storage location for these routes
    pub storage_base: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,

}



impl Default for ItinerarySet {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ItinerarySet::default())
  }
}

impl rosidl_runtime_rs::Message for ItinerarySet {
  type RmwMsg = super::msg::rmw::ItinerarySet;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        plan: msg.plan,
        itinerary: msg.itinerary
          .into_iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        storage_base: msg.storage_base,
        itinerary_version: msg.itinerary_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      plan: msg.plan,
        itinerary: msg.itinerary
          .iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      storage_base: msg.storage_base,
      itinerary_version: msg.itinerary_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      plan: msg.plan,
      itinerary: msg.itinerary
          .into_iter()
          .map(super::msg::Route::from_rmw_message)
          .collect(),
      storage_base: msg.storage_base,
      itinerary_version: msg.itinerary_version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__MirrorUpdate
/// The version of the schedule node that provided this update

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MirrorUpdate {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: super::msg::ScheduleIdentity,

    /// The version of the database this update provides
    pub database_version: u64,

    /// The patch for the query
    pub patch: super::msg::SchedulePatch,

    /// True if this update is meant to remedy a mirror that has fallen
    /// out of sync
    pub is_remedial_update: bool,

}



impl Default for MirrorUpdate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MirrorUpdate::default())
  }
}

impl rosidl_runtime_rs::Message for MirrorUpdate {
  type RmwMsg = super::msg::rmw::MirrorUpdate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Owned(msg.node_id)).into_owned(),
        database_version: msg.database_version,
        patch: super::msg::SchedulePatch::into_rmw_message(std::borrow::Cow::Owned(msg.patch)).into_owned(),
        is_remedial_update: msg.is_remedial_update,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Borrowed(&msg.node_id)).into_owned(),
      database_version: msg.database_version,
        patch: super::msg::SchedulePatch::into_rmw_message(std::borrow::Cow::Borrowed(&msg.patch)).into_owned(),
      is_remedial_update: msg.is_remedial_update,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: super::msg::ScheduleIdentity::from_rmw_message(msg.node_id),
      database_version: msg.database_version,
      patch: super::msg::SchedulePatch::from_rmw_message(msg.patch),
      is_remedial_update: msg.is_remedial_update,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ParticipantDescription

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ParticipantDescription {
    /// Name of the participant
    pub name: std::string::String,

    /// Owner of the participant (e.g. fleet name)
    pub owner: std::string::String,

    /// Whether or not this participant will automatically respond to conflicts
    pub responsiveness: u8,

    /// The physical profile of this Participant
    pub profile: super::msg::Profile,

}

impl ParticipantDescription {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RX_INVALID: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RX_UNRESPONSIVE: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const RX_RESPONSIVE: u8 = 2;

}


impl Default for ParticipantDescription {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ParticipantDescription::default())
  }
}

impl rosidl_runtime_rs::Message for ParticipantDescription {
  type RmwMsg = super::msg::rmw::ParticipantDescription;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        owner: msg.owner.as_str().into(),
        responsiveness: msg.responsiveness,
        profile: super::msg::Profile::into_rmw_message(std::borrow::Cow::Owned(msg.profile)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        owner: msg.owner.as_str().into(),
      responsiveness: msg.responsiveness,
        profile: super::msg::Profile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.profile)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      owner: msg.owner.to_string(),
      responsiveness: msg.responsiveness,
      profile: super::msg::Profile::from_rmw_message(msg.profile),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Profile

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Profile {
    /// The shape that specifies the footprint of a schedule participant
    pub footprint: super::msg::ConvexShape,

    /// The shape that specifies the vicinity around a schedule participant
    pub vicinity: super::msg::ConvexShape,

    /// The buffer that contains the shape descriptions
    pub shape_context: super::msg::ConvexShapeContext,

}



impl Default for Profile {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Profile::default())
  }
}

impl rosidl_runtime_rs::Message for Profile {
  type RmwMsg = super::msg::rmw::Profile;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        footprint: super::msg::ConvexShape::into_rmw_message(std::borrow::Cow::Owned(msg.footprint)).into_owned(),
        vicinity: super::msg::ConvexShape::into_rmw_message(std::borrow::Cow::Owned(msg.vicinity)).into_owned(),
        shape_context: super::msg::ConvexShapeContext::into_rmw_message(std::borrow::Cow::Owned(msg.shape_context)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        footprint: super::msg::ConvexShape::into_rmw_message(std::borrow::Cow::Borrowed(&msg.footprint)).into_owned(),
        vicinity: super::msg::ConvexShape::into_rmw_message(std::borrow::Cow::Borrowed(&msg.vicinity)).into_owned(),
        shape_context: super::msg::ConvexShapeContext::into_rmw_message(std::borrow::Cow::Borrowed(&msg.shape_context)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      footprint: super::msg::ConvexShape::from_rmw_message(msg.footprint),
      vicinity: super::msg::ConvexShape::from_rmw_message(msg.vicinity),
      shape_context: super::msg::ConvexShapeContext::from_rmw_message(msg.shape_context),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Region

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Region {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub spaces: Vec<super::msg::Space>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timespan: super::msg::Timespan,

}



impl Default for Region {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Region::default())
  }
}

impl rosidl_runtime_rs::Message for Region {
  type RmwMsg = super::msg::rmw::Region;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map: msg.map.as_str().into(),
        spaces: msg.spaces
          .into_iter()
          .map(|elem| super::msg::Space::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        timespan: super::msg::Timespan::into_rmw_message(std::borrow::Cow::Owned(msg.timespan)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map: msg.map.as_str().into(),
        spaces: msg.spaces
          .iter()
          .map(|elem| super::msg::Space::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        timespan: super::msg::Timespan::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timespan)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      map: msg.map.to_string(),
      spaces: msg.spaces
          .into_iter()
          .map(super::msg::Space::from_rmw_message)
          .collect(),
      timespan: super::msg::Timespan::from_rmw_message(msg.timespan),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Route

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Route {

    // This member is not documented.
    #[allow(missing_docs)]
    pub map: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub trajectory: super::msg::Trajectory,


    // This member is not documented.
    #[allow(missing_docs)]
    pub checkpoints: Vec<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dependencies: Vec<super::msg::TrafficDependency>,

}



impl Default for Route {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Route::default())
  }
}

impl rosidl_runtime_rs::Message for Route {
  type RmwMsg = super::msg::rmw::Route;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map: msg.map.as_str().into(),
        trajectory: super::msg::Trajectory::into_rmw_message(std::borrow::Cow::Owned(msg.trajectory)).into_owned(),
        checkpoints: msg.checkpoints.into(),
        dependencies: msg.dependencies
          .into_iter()
          .map(|elem| super::msg::TrafficDependency::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        map: msg.map.as_str().into(),
        trajectory: super::msg::Trajectory::into_rmw_message(std::borrow::Cow::Borrowed(&msg.trajectory)).into_owned(),
        checkpoints: msg.checkpoints.as_slice().into(),
        dependencies: msg.dependencies
          .iter()
          .map(|elem| super::msg::TrafficDependency::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      map: msg.map.to_string(),
      trajectory: super::msg::Trajectory::from_rmw_message(msg.trajectory),
      checkpoints: msg.checkpoints
          .into_iter()
          .collect(),
      dependencies: msg.dependencies
          .into_iter()
          .map(super::msg::TrafficDependency::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeAdd

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeAdd {
    /// The Plan ID for the new routes
    pub plan_id: u64,

    /// The new route items to add
    pub items: Vec<super::msg::ScheduleChangeAddItem>,

}



impl Default for ScheduleChangeAdd {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleChangeAdd::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeAdd {
  type RmwMsg = super::msg::rmw::ScheduleChangeAdd;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        plan_id: msg.plan_id,
        items: msg.items
          .into_iter()
          .map(|elem| super::msg::ScheduleChangeAddItem::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      plan_id: msg.plan_id,
        items: msg.items
          .iter()
          .map(|elem| super::msg::ScheduleChangeAddItem::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      plan_id: msg.plan_id,
      items: msg.items
          .into_iter()
          .map(super::msg::ScheduleChangeAddItem::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeAddItem

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeAddItem {
    /// The ID for this route
    pub route_id: u64,

    /// The storage location for this route
    pub storage_id: u64,

    /// The description of this route
    pub route: super::msg::Route,

}



impl Default for ScheduleChangeAddItem {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleChangeAddItem::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeAddItem {
  type RmwMsg = super::msg::rmw::ScheduleChangeAddItem;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        route_id: msg.route_id,
        storage_id: msg.storage_id,
        route: super::msg::Route::into_rmw_message(std::borrow::Cow::Owned(msg.route)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      route_id: msg.route_id,
      storage_id: msg.storage_id,
        route: super::msg::Route::into_rmw_message(std::borrow::Cow::Borrowed(&msg.route)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      route_id: msg.route_id,
      storage_id: msg.storage_id,
      route: super::msg::Route::from_rmw_message(msg.route),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeCull

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeCull {

    // This member is not documented.
    #[allow(missing_docs)]
    pub time: i64,

}



impl Default for ScheduleChangeCull {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleChangeCull::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeCull {
  type RmwMsg = super::msg::rmw::ScheduleChangeCull;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: msg.time,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      time: msg.time,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: msg.time,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeDelay

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeDelay {

    // This member is not documented.
    #[allow(missing_docs)]
    pub delay: i64,

}



impl Default for ScheduleChangeDelay {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleChangeDelay::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeDelay {
  type RmwMsg = super::msg::rmw::ScheduleChangeDelay;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        delay: msg.delay,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      delay: msg.delay,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      delay: msg.delay,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleChangeProgress

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleChangeProgress {
    /// Indicate whether any progress has actually been made. If false, then the
    /// rest of the fields can be ignored
    pub has_progress: bool,

    /// The version of the progress within the plan
    pub version: u64,

    /// The checkpoints in the itinerary that have been reached
    pub checkpoints: Vec<u64>,

}



impl Default for ScheduleChangeProgress {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleChangeProgress::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleChangeProgress {
  type RmwMsg = super::msg::rmw::ScheduleChangeProgress;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        has_progress: msg.has_progress,
        version: msg.version,
        checkpoints: msg.checkpoints.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      has_progress: msg.has_progress,
      version: msg.version,
        checkpoints: msg.checkpoints.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      has_progress: msg.has_progress,
      version: msg.version,
      checkpoints: msg.checkpoints
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationAck

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationAck {
    /// The version number of the conflict whose conclusion is being acknowledged
    pub conflict_version: u64,

    /// The participants who are acknowledging the conclusion of the conflict
    /// negotiation
    pub acknowledgments: Vec<super::msg::NegotiationParticipantAck>,

}



impl Default for NegotiationAck {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationAck::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationAck {
  type RmwMsg = super::msg::rmw::NegotiationAck;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
        acknowledgments: msg.acknowledgments
          .into_iter()
          .map(|elem| super::msg::NegotiationParticipantAck::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
        acknowledgments: msg.acknowledgments
          .iter()
          .map(|elem| super::msg::NegotiationParticipantAck::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
      acknowledgments: msg.acknowledgments
          .into_iter()
          .map(super::msg::NegotiationParticipantAck::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationKey

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationKey {
    /// The participant ID of the negotiation table
    pub participant: u64,

    /// The version of the negotiation table that we care about
    pub version: u64,

}



impl Default for NegotiationKey {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationKey::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationKey {
  type RmwMsg = super::msg::rmw::NegotiationKey;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        version: msg.version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      version: msg.version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      version: msg.version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationConclusion

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationConclusion {
    /// The version number assigned to this conflict
    pub conflict_version: u64,

    /// True if the conflict was resolved. False if the negotiation was abandoned.
    pub resolved: bool,

    /// The ID sequence for the negotiation table that was selected
    pub table: Vec<super::msg::NegotiationKey>,

}



impl Default for NegotiationConclusion {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationConclusion::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationConclusion {
  type RmwMsg = super::msg::rmw::NegotiationConclusion;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
        resolved: msg.resolved,
        table: msg.table
          .into_iter()
          .map(|elem| super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
      resolved: msg.resolved,
        table: msg.table
          .iter()
          .map(|elem| super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
      resolved: msg.resolved,
      table: msg.table
          .into_iter()
          .map(super::msg::NegotiationKey::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationForfeit

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationForfeit {
    /// The conflict ID that this forfeit is targeted at
    pub conflict_version: u64,

    /// Forfeit this negotiation table
    pub table: Vec<super::msg::NegotiationKey>,

}



impl Default for NegotiationForfeit {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationForfeit::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationForfeit {
  type RmwMsg = super::msg::rmw::NegotiationForfeit;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
        table: msg.table
          .into_iter()
          .map(|elem| super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
        table: msg.table
          .iter()
          .map(|elem| super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
      table: msg.table
          .into_iter()
          .map(super::msg::NegotiationKey::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationNotice

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationNotice {
    /// The version number assigned to this conflict
    pub conflict_version: u64,

    /// The IDs of the participants that are in conflict.
    pub participants: Vec<u64>,

}



impl Default for NegotiationNotice {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationNotice::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationNotice {
  type RmwMsg = super::msg::rmw::NegotiationNotice;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
        participants: msg.participants.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
        participants: msg.participants.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
      participants: msg.participants
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationParticipantAck

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationParticipantAck {
    /// The participant that is acknowledging
    pub participant: u64,

    /// Whether this participant will be updating
    pub updating: bool,

    /// The itinerary version that will provide the update to
    /// conform to the negotiation result
    pub itinerary_version: u64,

}



impl Default for NegotiationParticipantAck {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationParticipantAck::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationParticipantAck {
  type RmwMsg = super::msg::rmw::NegotiationParticipantAck;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        updating: msg.updating,
        itinerary_version: msg.itinerary_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
      updating: msg.updating,
      itinerary_version: msg.itinerary_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      updating: msg.updating,
      itinerary_version: msg.itinerary_version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationProposal

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationProposal {
    /// The conflict ID that this proposal is targeted at
    pub conflict_version: u64,

    /// The version number for this proposal within the negotiation
    pub proposal_version: u64,

    /// The participant ID that this proposal is coming from
    pub for_participant: u64,

    /// The participant IDs that this proposal is trying to accommodate. As each
    /// participant proposes their ideal itinerary, the other participants in the
    /// conflict will propose itineraries which accommodate it.
    ///
    /// The order of IDs in this dynamic array have important semantic meaning about
    /// which itineraries are being accommodated. For example:
    ///
    /// [] (empty):  This proposal does not accommodate any other participants. This
    ///              is the best possible itinerary for this participant.
    ///
    /// [3]:         This proposal is the best itinerary that can accommodate the
    ///              ideal itinerary of participant 3.
    ///
    /// [3, 7]:      This proposal is the best itinerary for this participant that can
    ///              accommodate both the ideal itinerary of participant 3 and the
    ///              best itinerary of participant 7 that accommodates the ideal
    ///              itinerary of participant 3.
    ///
    /// [3, 7, ...]: This proposal is the best itinerary that can accommodate the
    ///              ideal itinerary of participant 3 and the best itineraries that
    ///              accommodate the best itineraries of the participants that precede
    ///              them in the list, recursively.
    pub to_accommodate: Vec<super::msg::NegotiationKey>,

    /// The unique ID for the plan that is being proposed
    pub plan_id: u64,

    /// The itinerary that is being proposed for this participant
    pub itinerary: Vec<super::msg::Route>,

}



impl Default for NegotiationProposal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationProposal::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationProposal {
  type RmwMsg = super::msg::rmw::NegotiationProposal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
        proposal_version: msg.proposal_version,
        for_participant: msg.for_participant,
        to_accommodate: msg.to_accommodate
          .into_iter()
          .map(|elem| super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        plan_id: msg.plan_id,
        itinerary: msg.itinerary
          .into_iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
      proposal_version: msg.proposal_version,
      for_participant: msg.for_participant,
        to_accommodate: msg.to_accommodate
          .iter()
          .map(|elem| super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      plan_id: msg.plan_id,
        itinerary: msg.itinerary
          .iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
      proposal_version: msg.proposal_version,
      for_participant: msg.for_participant,
      to_accommodate: msg.to_accommodate
          .into_iter()
          .map(super::msg::NegotiationKey::from_rmw_message)
          .collect(),
      plan_id: msg.plan_id,
      itinerary: msg.itinerary
          .into_iter()
          .map(super::msg::Route::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationRefusal

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationRefusal {
    /// The ID of the conflict negotiation that is being refused
    pub conflict_version: u64,

}



impl Default for NegotiationRefusal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationRefusal::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationRefusal {
  type RmwMsg = super::msg::rmw::NegotiationRefusal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationRejection

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationRejection {
    /// The conflict ID that this rejection is targeted at
    pub conflict_version: u64,

    /// Reject this negotiation table
    pub table: Vec<super::msg::NegotiationKey>,

    /// The rejection is by this participant
    pub rejected_by: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub alternatives: Vec<super::msg::Itinerary>,

}



impl Default for NegotiationRejection {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationRejection::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationRejection {
  type RmwMsg = super::msg::rmw::NegotiationRejection;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
        table: msg.table
          .into_iter()
          .map(|elem| super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        rejected_by: msg.rejected_by,
        alternatives: msg.alternatives
          .into_iter()
          .map(|elem| super::msg::Itinerary::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
        table: msg.table
          .iter()
          .map(|elem| super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      rejected_by: msg.rejected_by,
        alternatives: msg.alternatives
          .iter()
          .map(|elem| super::msg::Itinerary::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
      table: msg.table
          .into_iter()
          .map(super::msg::NegotiationKey::from_rmw_message)
          .collect(),
      rejected_by: msg.rejected_by,
      alternatives: msg.alternatives
          .into_iter()
          .map(super::msg::Itinerary::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationRepeat

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationRepeat {
    /// Repeat conflict information related to this version
    pub conflict_version: u64,

    /// Repeat conflict information related to this table. If this is empty, then
    /// only the initial NegotiationNotice will be repeated.
    pub table: Vec<u64>,

}



impl Default for NegotiationRepeat {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationRepeat::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationRepeat {
  type RmwMsg = super::msg::rmw::NegotiationRepeat;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
        table: msg.table.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
        table: msg.table.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
      table: msg.table
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub status: super::msg::NegotiationStatus,


    // This member is not documented.
    #[allow(missing_docs)]
    pub tree: Vec<super::msg::NegotiationTreeNode>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orphan_proposals: Vec<super::msg::NegotiationProposal>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orphan_rejections: Vec<super::msg::NegotiationRejection>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub orphan_forfeits: Vec<super::msg::NegotiationForfeit>,

}



impl Default for NegotiationState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationState::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationState {
  type RmwMsg = super::msg::rmw::NegotiationState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: super::msg::NegotiationStatus::into_rmw_message(std::borrow::Cow::Owned(msg.status)).into_owned(),
        tree: msg.tree
          .into_iter()
          .map(|elem| super::msg::NegotiationTreeNode::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        orphan_proposals: msg.orphan_proposals
          .into_iter()
          .map(|elem| super::msg::NegotiationProposal::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        orphan_rejections: msg.orphan_rejections
          .into_iter()
          .map(|elem| super::msg::NegotiationRejection::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        orphan_forfeits: msg.orphan_forfeits
          .into_iter()
          .map(|elem| super::msg::NegotiationForfeit::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        status: super::msg::NegotiationStatus::into_rmw_message(std::borrow::Cow::Borrowed(&msg.status)).into_owned(),
        tree: msg.tree
          .iter()
          .map(|elem| super::msg::NegotiationTreeNode::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        orphan_proposals: msg.orphan_proposals
          .iter()
          .map(|elem| super::msg::NegotiationProposal::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        orphan_rejections: msg.orphan_rejections
          .iter()
          .map(|elem| super::msg::NegotiationRejection::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        orphan_forfeits: msg.orphan_forfeits
          .iter()
          .map(|elem| super::msg::NegotiationForfeit::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      status: super::msg::NegotiationStatus::from_rmw_message(msg.status),
      tree: msg.tree
          .into_iter()
          .map(super::msg::NegotiationTreeNode::from_rmw_message)
          .collect(),
      orphan_proposals: msg.orphan_proposals
          .into_iter()
          .map(super::msg::NegotiationProposal::from_rmw_message)
          .collect(),
      orphan_rejections: msg.orphan_rejections
          .into_iter()
          .map(super::msg::NegotiationRejection::from_rmw_message)
          .collect(),
      orphan_forfeits: msg.orphan_forfeits
          .into_iter()
          .map(super::msg::NegotiationForfeit::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationStates

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub negotiations: Vec<super::msg::NegotiationState>,

}



impl Default for NegotiationStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationStates::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationStates {
  type RmwMsg = super::msg::rmw::NegotiationStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        negotiations: msg.negotiations
          .into_iter()
          .map(|elem| super::msg::NegotiationState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        negotiations: msg.negotiations
          .iter()
          .map(|elem| super::msg::NegotiationState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      negotiations: msg.negotiations
          .into_iter()
          .map(super::msg::NegotiationState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationStatus

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationStatus {

    // This member is not documented.
    #[allow(missing_docs)]
    pub conflict_version: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub participants: Vec<u64>,

    /// Time that this negotiation began
    pub start_time: builtin_interfaces::msg::Time,

    /// Time that the last response from a participant was seen
    pub last_response_time: builtin_interfaces::msg::Time,

}



impl Default for NegotiationStatus {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationStatus::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationStatus {
  type RmwMsg = super::msg::rmw::NegotiationStatus;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        conflict_version: msg.conflict_version,
        participants: msg.participants.into(),
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.start_time)).into_owned(),
        last_response_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.last_response_time)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      conflict_version: msg.conflict_version,
        participants: msg.participants.as_slice().into(),
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_time)).into_owned(),
        last_response_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.last_response_time)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      conflict_version: msg.conflict_version,
      participants: msg.participants
          .into_iter()
          .collect(),
      start_time: builtin_interfaces::msg::Time::from_rmw_message(msg.start_time),
      last_response_time: builtin_interfaces::msg::Time::from_rmw_message(msg.last_response_time),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationStatuses

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationStatuses {

    // This member is not documented.
    #[allow(missing_docs)]
    pub negotiations: Vec<super::msg::NegotiationStatus>,

}



impl Default for NegotiationStatuses {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationStatuses::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationStatuses {
  type RmwMsg = super::msg::rmw::NegotiationStatuses;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        negotiations: msg.negotiations
          .into_iter()
          .map(|elem| super::msg::NegotiationStatus::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        negotiations: msg.negotiations
          .iter()
          .map(|elem| super::msg::NegotiationStatus::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      negotiations: msg.negotiations
          .into_iter()
          .map(super::msg::NegotiationStatus::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__NegotiationTreeNode

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct NegotiationTreeNode {

    // This member is not documented.
    #[allow(missing_docs)]
    pub parent: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub key: super::msg::NegotiationKey,


    // This member is not documented.
    #[allow(missing_docs)]
    pub rejected: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary: Vec<super::msg::Route>,

}



impl Default for NegotiationTreeNode {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::NegotiationTreeNode::default())
  }
}

impl rosidl_runtime_rs::Message for NegotiationTreeNode {
  type RmwMsg = super::msg::rmw::NegotiationTreeNode;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        parent: msg.parent,
        key: super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Owned(msg.key)).into_owned(),
        rejected: msg.rejected,
        itinerary: msg.itinerary
          .into_iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      parent: msg.parent,
        key: super::msg::NegotiationKey::into_rmw_message(std::borrow::Cow::Borrowed(&msg.key)).into_owned(),
      rejected: msg.rejected,
        itinerary: msg.itinerary
          .iter()
          .map(|elem| super::msg::Route::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      parent: msg.parent,
      key: super::msg::NegotiationKey::from_rmw_message(msg.key),
      rejected: msg.rejected,
      itinerary: msg.itinerary
          .into_iter()
          .map(super::msg::Route::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Participant
/// The unique ID for this participant

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Participant {

    // This member is not documented.
    #[allow(missing_docs)]
    pub id: u64,

    /// Description of this participant (name, shape, etc.)
    pub description: super::msg::ParticipantDescription,

}



impl Default for Participant {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Participant::default())
  }
}

impl rosidl_runtime_rs::Message for Participant {
  type RmwMsg = super::msg::rmw::Participant;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        id: msg.id,
        description: super::msg::ParticipantDescription::into_rmw_message(std::borrow::Cow::Owned(msg.description)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      id: msg.id,
        description: super::msg::ParticipantDescription::into_rmw_message(std::borrow::Cow::Borrowed(&msg.description)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      id: msg.id,
      description: super::msg::ParticipantDescription::from_rmw_message(msg.description),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Participants
/// The version of the schedule node that provided this update

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Participants {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: super::msg::ScheduleIdentity,

    /// A list of participants with their IDs
    pub participants: Vec<super::msg::Participant>,

}



impl Default for Participants {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Participants::default())
  }
}

impl rosidl_runtime_rs::Message for Participants {
  type RmwMsg = super::msg::rmw::Participants;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Owned(msg.node_id)).into_owned(),
        participants: msg.participants
          .into_iter()
          .map(|elem| super::msg::Participant::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Borrowed(&msg.node_id)).into_owned(),
        participants: msg.participants
          .iter()
          .map(|elem| super::msg::Participant::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: super::msg::ScheduleIdentity::from_rmw_message(msg.node_id),
      participants: msg.participants
          .into_iter()
          .map(super::msg::Participant::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleIdentity
/// The UUID of the new schedule node
/// TODO(MXG): Consider using uuid_msgs here: https://github.com/ros-geographic-info/unique_identifier/blob/master/uuid_msgs/msg/UniqueID.msg

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleIdentity {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_uuid: std::string::String,

    /// The time that the new schedule node was started. In the event that multiple
    /// schedule nodes have been started, the one with the newest timestamp will be
    /// considered the active node, and the rest of the nodes will shut down.
    pub timestamp: builtin_interfaces::msg::Time,

}



impl Default for ScheduleIdentity {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleIdentity::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleIdentity {
  type RmwMsg = super::msg::rmw::ScheduleIdentity;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_uuid: msg.node_uuid.as_str().into(),
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_uuid: msg.node_uuid.as_str().into(),
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_uuid: msg.node_uuid.to_string(),
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleInconsistency

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleInconsistency {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ranges: Vec<super::msg::ScheduleInconsistencyRange>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_known_itinerary: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub last_known_progress: u64,

}



impl Default for ScheduleInconsistency {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleInconsistency::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleInconsistency {
  type RmwMsg = super::msg::rmw::ScheduleInconsistency;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant: msg.participant,
        ranges: msg.ranges
          .into_iter()
          .map(|elem| super::msg::ScheduleInconsistencyRange::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        last_known_itinerary: msg.last_known_itinerary,
        last_known_progress: msg.last_known_progress,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant: msg.participant,
        ranges: msg.ranges
          .iter()
          .map(|elem| super::msg::ScheduleInconsistencyRange::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      last_known_itinerary: msg.last_known_itinerary,
      last_known_progress: msg.last_known_progress,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant: msg.participant,
      ranges: msg.ranges
          .into_iter()
          .map(super::msg::ScheduleInconsistencyRange::from_rmw_message)
          .collect(),
      last_known_itinerary: msg.last_known_itinerary,
      last_known_progress: msg.last_known_progress,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleInconsistencyRange

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleInconsistencyRange {

    // This member is not documented.
    #[allow(missing_docs)]
    pub lower: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub upper: u64,

}



impl Default for ScheduleInconsistencyRange {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleInconsistencyRange::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleInconsistencyRange {
  type RmwMsg = super::msg::rmw::ScheduleInconsistencyRange;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        lower: msg.lower,
        upper: msg.upper,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      lower: msg.lower,
      upper: msg.upper,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      lower: msg.lower,
      upper: msg.upper,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleParticipantPatch

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleParticipantPatch {

    // This member is not documented.
    #[allow(missing_docs)]
    pub participant_id: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub itinerary_version: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub erasures: Vec<u64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delays: Vec<super::msg::ScheduleChangeDelay>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub additions: super::msg::ScheduleChangeAdd,


    // This member is not documented.
    #[allow(missing_docs)]
    pub progress: super::msg::ScheduleChangeProgress,

}



impl Default for ScheduleParticipantPatch {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleParticipantPatch::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleParticipantPatch {
  type RmwMsg = super::msg::rmw::ScheduleParticipantPatch;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participant_id: msg.participant_id,
        itinerary_version: msg.itinerary_version,
        erasures: msg.erasures.into(),
        delays: msg.delays
          .into_iter()
          .map(|elem| super::msg::ScheduleChangeDelay::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        additions: super::msg::ScheduleChangeAdd::into_rmw_message(std::borrow::Cow::Owned(msg.additions)).into_owned(),
        progress: super::msg::ScheduleChangeProgress::into_rmw_message(std::borrow::Cow::Owned(msg.progress)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      participant_id: msg.participant_id,
      itinerary_version: msg.itinerary_version,
        erasures: msg.erasures.as_slice().into(),
        delays: msg.delays
          .iter()
          .map(|elem| super::msg::ScheduleChangeDelay::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        additions: super::msg::ScheduleChangeAdd::into_rmw_message(std::borrow::Cow::Borrowed(&msg.additions)).into_owned(),
        progress: super::msg::ScheduleChangeProgress::into_rmw_message(std::borrow::Cow::Borrowed(&msg.progress)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participant_id: msg.participant_id,
      itinerary_version: msg.itinerary_version,
      erasures: msg.erasures
          .into_iter()
          .collect(),
      delays: msg.delays
          .into_iter()
          .map(super::msg::ScheduleChangeDelay::from_rmw_message)
          .collect(),
      additions: super::msg::ScheduleChangeAdd::from_rmw_message(msg.additions),
      progress: super::msg::ScheduleChangeProgress::from_rmw_message(msg.progress),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__SchedulePatch

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct SchedulePatch {
    /// The changes to the schedule, grouped into the different participants
    pub participants: Vec<super::msg::ScheduleParticipantPatch>,

    /// TODO(MXG): The database will only ever report 1 cull per update. Consider
    /// making this a single field instead of a dynamic array.
    pub cull: Vec<super::msg::ScheduleChangeCull>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_base_version: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub base_version: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub latest_version: u64,

}



impl Default for SchedulePatch {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::SchedulePatch::default())
  }
}

impl rosidl_runtime_rs::Message for SchedulePatch {
  type RmwMsg = super::msg::rmw::SchedulePatch;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participants: msg.participants
          .into_iter()
          .map(|elem| super::msg::ScheduleParticipantPatch::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        cull: msg.cull
          .into_iter()
          .map(|elem| super::msg::ScheduleChangeCull::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        has_base_version: msg.has_base_version,
        base_version: msg.base_version,
        latest_version: msg.latest_version,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        participants: msg.participants
          .iter()
          .map(|elem| super::msg::ScheduleParticipantPatch::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        cull: msg.cull
          .iter()
          .map(|elem| super::msg::ScheduleChangeCull::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      has_base_version: msg.has_base_version,
      base_version: msg.base_version,
      latest_version: msg.latest_version,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      participants: msg.participants
          .into_iter()
          .map(super::msg::ScheduleParticipantPatch::from_rmw_message)
          .collect(),
      cull: msg.cull
          .into_iter()
          .map(super::msg::ScheduleChangeCull::from_rmw_message)
          .collect(),
      has_base_version: msg.has_base_version,
      base_version: msg.base_version,
      latest_version: msg.latest_version,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleQuery

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleQuery {

    // This member is not documented.
    #[allow(missing_docs)]
    pub spacetime: super::msg::ScheduleQuerySpacetime,


    // This member is not documented.
    #[allow(missing_docs)]
    pub participants: super::msg::ScheduleQueryParticipants,

}



impl Default for ScheduleQuery {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleQuery::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleQuery {
  type RmwMsg = super::msg::rmw::ScheduleQuery;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        spacetime: super::msg::ScheduleQuerySpacetime::into_rmw_message(std::borrow::Cow::Owned(msg.spacetime)).into_owned(),
        participants: super::msg::ScheduleQueryParticipants::into_rmw_message(std::borrow::Cow::Owned(msg.participants)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        spacetime: super::msg::ScheduleQuerySpacetime::into_rmw_message(std::borrow::Cow::Borrowed(&msg.spacetime)).into_owned(),
        participants: super::msg::ScheduleQueryParticipants::into_rmw_message(std::borrow::Cow::Borrowed(&msg.participants)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      spacetime: super::msg::ScheduleQuerySpacetime::from_rmw_message(msg.spacetime),
      participants: super::msg::ScheduleQueryParticipants::from_rmw_message(msg.participants),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleQueries
/// The version of the schedule node that provided this update

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleQueries {

    // This member is not documented.
    #[allow(missing_docs)]
    pub node_id: super::msg::ScheduleIdentity,

    /// The list of known queries
    pub queries: Vec<super::msg::ScheduleQuery>,

    /// The list of IDs for those queries
    pub query_ids: Vec<u64>,

}



impl Default for ScheduleQueries {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleQueries::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleQueries {
  type RmwMsg = super::msg::rmw::ScheduleQueries;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Owned(msg.node_id)).into_owned(),
        queries: msg.queries
          .into_iter()
          .map(|elem| super::msg::ScheduleQuery::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        query_ids: msg.query_ids.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        node_id: super::msg::ScheduleIdentity::into_rmw_message(std::borrow::Cow::Borrowed(&msg.node_id)).into_owned(),
        queries: msg.queries
          .iter()
          .map(|elem| super::msg::ScheduleQuery::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        query_ids: msg.query_ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      node_id: super::msg::ScheduleIdentity::from_rmw_message(msg.node_id),
      queries: msg.queries
          .into_iter()
          .map(super::msg::ScheduleQuery::from_rmw_message)
          .collect(),
      query_ids: msg.query_ids
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleQueryParticipants

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleQueryParticipants {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub ids: Vec<u64>,

}

impl ScheduleQueryParticipants {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ALL: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const INCLUDE: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const EXCLUDE: u16 = 3;

}


impl Default for ScheduleQueryParticipants {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleQueryParticipants::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleQueryParticipants {
  type RmwMsg = super::msg::rmw::ScheduleQueryParticipants;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        ids: msg.ids.into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
        ids: msg.ids.as_slice().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      ids: msg.ids
          .into_iter()
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ScheduleQuerySpacetime

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleQuerySpacetime {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u16,

    /// =====================
    /// ===== REGIONS =====
    /// If REGIONS mode is chosen, this will contain the regions to query
    pub regions: Vec<super::msg::Region>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub shape_context: super::msg::ShapeContext,

    /// =====================
    /// ===== TIMESPAN ======
    pub timespan: super::msg::Timespan,

}

impl ScheduleQuerySpacetime {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const ALL: u16 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const REGIONS: u16 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const TIMESPAN: u16 = 3;

}


impl Default for ScheduleQuerySpacetime {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleQuerySpacetime::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleQuerySpacetime {
  type RmwMsg = super::msg::rmw::ScheduleQuerySpacetime;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        regions: msg.regions
          .into_iter()
          .map(|elem| super::msg::Region::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        shape_context: super::msg::ShapeContext::into_rmw_message(std::borrow::Cow::Owned(msg.shape_context)).into_owned(),
        timespan: super::msg::Timespan::into_rmw_message(std::borrow::Cow::Owned(msg.timespan)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
        regions: msg.regions
          .iter()
          .map(|elem| super::msg::Region::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        shape_context: super::msg::ShapeContext::into_rmw_message(std::borrow::Cow::Borrowed(&msg.shape_context)).into_owned(),
        timespan: super::msg::Timespan::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timespan)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      regions: msg.regions
          .into_iter()
          .map(super::msg::Region::from_rmw_message)
          .collect(),
      shape_context: super::msg::ShapeContext::from_rmw_message(msg.shape_context),
      timespan: super::msg::Timespan::from_rmw_message(msg.timespan),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Shape

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Shape {
    /// TODO(MXG): Add support for the SimplePolygon class
    /// uint8 SIMPLE_POLYGON=3
    /// Choose between the BOX and CIRCLE types
    pub type_: u8,

    /// Specify the index of the shape. We support 256 different convex shapes per
    /// trajectory. If more shapes are needed than that, then the trajectory must be
    /// split into more trajectories.
    pub index: u8,

}

impl Shape {
    /// A 2D shape reference.
    pub const NONE: u8 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const BOX: u8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CIRCLE: u8 = 2;

}


impl Default for Shape {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Shape::default())
  }
}

impl rosidl_runtime_rs::Message for Shape {
  type RmwMsg = super::msg::rmw::Shape;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        index: msg.index,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
      index: msg.index,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      index: msg.index,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__ShapeContext

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ShapeContext {
    /// The convex shape descriptions that are available
    pub convex_shapes: super::msg::ConvexShapeContext,

}



impl Default for ShapeContext {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ShapeContext::default())
  }
}

impl rosidl_runtime_rs::Message for ShapeContext {
  type RmwMsg = super::msg::rmw::ShapeContext;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        convex_shapes: super::msg::ConvexShapeContext::into_rmw_message(std::borrow::Cow::Owned(msg.convex_shapes)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        convex_shapes: super::msg::ConvexShapeContext::into_rmw_message(std::borrow::Cow::Borrowed(&msg.convex_shapes)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      convex_shapes: super::msg::ConvexShapeContext::from_rmw_message(msg.convex_shapes),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Space

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Space {
    /// The shape of this space
    pub shape: super::msg::Shape,

    /// The pose of this space
    pub pose: geometry_msgs::msg::Pose2D,

}



impl Default for Space {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Space::default())
  }
}

impl rosidl_runtime_rs::Message for Space {
  type RmwMsg = super::msg::rmw::Space;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        shape: super::msg::Shape::into_rmw_message(std::borrow::Cow::Owned(msg.shape)).into_owned(),
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Owned(msg.pose)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        shape: super::msg::Shape::into_rmw_message(std::borrow::Cow::Borrowed(&msg.shape)).into_owned(),
        pose: geometry_msgs::msg::Pose2D::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pose)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      shape: super::msg::Shape::from_rmw_message(msg.shape),
      pose: geometry_msgs::msg::Pose2D::from_rmw_message(msg.pose),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Timespan

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Timespan {

    // This member is not documented.
    #[allow(missing_docs)]
    pub maps: Vec<std::string::String>,

    /// TODO(MXG): Find out if it's more efficient to use a bool+value pair, or to use
    /// a dynamic array of the value (which will only ever have 1 or 0 entries)
    pub has_lower_bound: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub lower_bound: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub has_upper_bound: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub upper_bound: i64,

}



impl Default for Timespan {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Timespan::default())
  }
}

impl rosidl_runtime_rs::Message for Timespan {
  type RmwMsg = super::msg::rmw::Timespan;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        maps: msg.maps
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
        has_lower_bound: msg.has_lower_bound,
        lower_bound: msg.lower_bound,
        has_upper_bound: msg.has_upper_bound,
        upper_bound: msg.upper_bound,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        maps: msg.maps
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      has_lower_bound: msg.has_lower_bound,
      lower_bound: msg.lower_bound,
      has_upper_bound: msg.has_upper_bound,
      upper_bound: msg.upper_bound,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      maps: msg.maps
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
      has_lower_bound: msg.has_lower_bound,
      lower_bound: msg.lower_bound,
      has_upper_bound: msg.has_upper_bound,
      upper_bound: msg.upper_bound,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__TrafficDependency

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrafficDependency {

    // This member is not documented.
    #[allow(missing_docs)]
    pub dependent_checkpoint: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub on_participant: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub on_plan: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub on_route: u64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub on_checkpoint: u64,

}



impl Default for TrafficDependency {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TrafficDependency::default())
  }
}

impl rosidl_runtime_rs::Message for TrafficDependency {
  type RmwMsg = super::msg::rmw::TrafficDependency;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dependent_checkpoint: msg.dependent_checkpoint,
        on_participant: msg.on_participant,
        on_plan: msg.on_plan,
        on_route: msg.on_route,
        on_checkpoint: msg.on_checkpoint,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      dependent_checkpoint: msg.dependent_checkpoint,
      on_participant: msg.on_participant,
      on_plan: msg.on_plan,
      on_route: msg.on_route,
      on_checkpoint: msg.on_checkpoint,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      dependent_checkpoint: msg.dependent_checkpoint,
      on_participant: msg.on_participant,
      on_plan: msg.on_plan,
      on_route: msg.on_route,
      on_checkpoint: msg.on_checkpoint,
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__Trajectory

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trajectory {
    /// A Trajectory is a container of Waypoints. The standard way to interpret the
    /// motion of a Trajectory is as a piecewise cubic spline connecting the
    /// waypoints.
    pub waypoints: Vec<super::msg::TrajectoryWaypoint>,

}



impl Default for Trajectory {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Trajectory::default())
  }
}

impl rosidl_runtime_rs::Message for Trajectory {
  type RmwMsg = super::msg::rmw::Trajectory;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        waypoints: msg.waypoints
          .into_iter()
          .map(|elem| super::msg::TrajectoryWaypoint::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        waypoints: msg.waypoints
          .iter()
          .map(|elem| super::msg::TrajectoryWaypoint::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      waypoints: msg.waypoints
          .into_iter()
          .map(super::msg::TrajectoryWaypoint::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_traffic_msgs__msg__TrajectoryWaypoint

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TrajectoryWaypoint {
    /// The time when this Waypoint should be reached
    pub time: i64,

    /// This is a 2D homogeneous position which mixes 2 translation coordinates (x, y)
    /// with 1 rotation coordinate (yaw).
    ///
    /// The position of this Waypoint
    pub position: [f64; 3],

    /// This is a 2D homogeneous screw velocity with 2 translational components (x, y)
    /// and 1 rotational component (yaw).
    ///
    /// The velocity that this vehicle should have when it reaches this Waypoint
    pub velocity: [f64; 3],

}



impl Default for TrajectoryWaypoint {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TrajectoryWaypoint::default())
  }
}

impl rosidl_runtime_rs::Message for TrajectoryWaypoint {
  type RmwMsg = super::msg::rmw::TrajectoryWaypoint;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        time: msg.time,
        position: msg.position,
        velocity: msg.velocity,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      time: msg.time,
        position: msg.position,
        velocity: msg.velocity,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      time: msg.time,
      position: msg.position,
      velocity: msg.velocity,
    }
  }
}


