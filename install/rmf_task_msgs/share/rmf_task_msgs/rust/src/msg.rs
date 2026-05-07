#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_task_msgs__msg__ApiRequest

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApiRequest {
    /// The JSON message that represents the request
    pub json_msg: std::string::String,

    /// The unique ID assigned to this request
    pub request_id: std::string::String,

}



impl Default for ApiRequest {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ApiRequest::default())
  }
}

impl rosidl_runtime_rs::Message for ApiRequest {
  type RmwMsg = super::msg::rmw::ApiRequest;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        json_msg: msg.json_msg.as_str().into(),
        request_id: msg.request_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        json_msg: msg.json_msg.as_str().into(),
        request_id: msg.request_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      json_msg: msg.json_msg.to_string(),
      request_id: msg.request_id.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__ApiResponse

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ApiResponse {
    /// The type of response this is: Acknowledging or Responding
    /// (Uninitialized will result in the API Node issuing an error response)
    pub type_: u8,

    /// The JSON message that represents the response
    pub json_msg: std::string::String,

    /// The unique ID of the request that this response is targeted at
    pub request_id: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ApiResponse::default())
  }
}

impl rosidl_runtime_rs::Message for ApiResponse {
  type RmwMsg = super::msg::rmw::ApiResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        json_msg: msg.json_msg.as_str().into(),
        request_id: msg.request_id.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
        json_msg: msg.json_msg.as_str().into(),
        request_id: msg.request_id.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      json_msg: msg.json_msg.to_string(),
      request_id: msg.request_id.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Assignment

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Assignment {

    // This member is not documented.
    #[allow(missing_docs)]
    pub is_assigned: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub fleet_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub expected_robot_name: std::string::String,

}



impl Default for Assignment {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Assignment::default())
  }
}

impl rosidl_runtime_rs::Message for Assignment {
  type RmwMsg = super::msg::rmw::Assignment;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        is_assigned: msg.is_assigned,
        fleet_name: msg.fleet_name.as_str().into(),
        expected_robot_name: msg.expected_robot_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      is_assigned: msg.is_assigned,
        fleet_name: msg.fleet_name.as_str().into(),
        expected_robot_name: msg.expected_robot_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      is_assigned: msg.is_assigned,
      fleet_name: msg.fleet_name.to_string(),
      expected_robot_name: msg.expected_robot_name.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Delivery
/// task_id is intended to be a pseudo-random string generated
/// by the caller which can be used to identify this task as it
/// moves between the queues to completion (or failure).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Delivery {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub items: Vec<rmf_dispenser_msgs::msg::DispenserRequestItem>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_place_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_dispenser: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_behavior: super::msg::Behavior,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_place_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_ingestor: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_behavior: super::msg::Behavior,

}



impl Default for Delivery {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Delivery::default())
  }
}

impl rosidl_runtime_rs::Message for Delivery {
  type RmwMsg = super::msg::rmw::Delivery;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        items: msg.items
          .into_iter()
          .map(|elem| rmf_dispenser_msgs::msg::DispenserRequestItem::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        pickup_place_name: msg.pickup_place_name.as_str().into(),
        pickup_dispenser: msg.pickup_dispenser.as_str().into(),
        pickup_behavior: super::msg::Behavior::into_rmw_message(std::borrow::Cow::Owned(msg.pickup_behavior)).into_owned(),
        dropoff_place_name: msg.dropoff_place_name.as_str().into(),
        dropoff_ingestor: msg.dropoff_ingestor.as_str().into(),
        dropoff_behavior: super::msg::Behavior::into_rmw_message(std::borrow::Cow::Owned(msg.dropoff_behavior)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        items: msg.items
          .iter()
          .map(|elem| rmf_dispenser_msgs::msg::DispenserRequestItem::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        pickup_place_name: msg.pickup_place_name.as_str().into(),
        pickup_dispenser: msg.pickup_dispenser.as_str().into(),
        pickup_behavior: super::msg::Behavior::into_rmw_message(std::borrow::Cow::Borrowed(&msg.pickup_behavior)).into_owned(),
        dropoff_place_name: msg.dropoff_place_name.as_str().into(),
        dropoff_ingestor: msg.dropoff_ingestor.as_str().into(),
        dropoff_behavior: super::msg::Behavior::into_rmw_message(std::borrow::Cow::Borrowed(&msg.dropoff_behavior)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      items: msg.items
          .into_iter()
          .map(rmf_dispenser_msgs::msg::DispenserRequestItem::from_rmw_message)
          .collect(),
      pickup_place_name: msg.pickup_place_name.to_string(),
      pickup_dispenser: msg.pickup_dispenser.to_string(),
      pickup_behavior: super::msg::Behavior::from_rmw_message(msg.pickup_behavior),
      dropoff_place_name: msg.dropoff_place_name.to_string(),
      dropoff_ingestor: msg.dropoff_ingestor.to_string(),
      dropoff_behavior: super::msg::Behavior::from_rmw_message(msg.dropoff_behavior),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Behavior

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Behavior {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameters: Vec<super::msg::BehaviorParameter>,

}



impl Default for Behavior {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Behavior::default())
  }
}

impl rosidl_runtime_rs::Message for Behavior {
  type RmwMsg = super::msg::rmw::Behavior;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        parameters: msg.parameters
          .into_iter()
          .map(|elem| super::msg::BehaviorParameter::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        parameters: msg.parameters
          .iter()
          .map(|elem| super::msg::BehaviorParameter::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      parameters: msg.parameters
          .into_iter()
          .map(super::msg::BehaviorParameter::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__BehaviorParameter

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BehaviorParameter {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub value: std::string::String,

}



impl Default for BehaviorParameter {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BehaviorParameter::default())
  }
}

impl rosidl_runtime_rs::Message for BehaviorParameter {
  type RmwMsg = super::msg::rmw::BehaviorParameter;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        value: msg.value.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      value: msg.value.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Station
/// task_id is intended to be a pseudo-random string generated
/// by the caller which can be used to identify this task as it
/// moves between the queues to completion (or failure).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Station {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,

    /// robot_type can be used to specify a particular robot fleet
    /// for this request
    pub robot_type: std::string::String,

    /// the place name where the robot is requested to station (park)
    pub place_name: std::string::String,

}



impl Default for Station {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Station::default())
  }
}

impl rosidl_runtime_rs::Message for Station {
  type RmwMsg = super::msg::rmw::Station;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        robot_type: msg.robot_type.as_str().into(),
        place_name: msg.place_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        robot_type: msg.robot_type.as_str().into(),
        place_name: msg.place_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      robot_type: msg.robot_type.to_string(),
      place_name: msg.place_name.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__TaskDescription
/// Desired start time of a task

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskDescription {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start_time: builtin_interfaces::msg::Time,

    /// Priority of the task
    pub priority: super::msg::Priority,

    /// Task type
    pub task_type: super::msg::TaskType,

    /// The corresponding field for the above TaskType should be populated
    pub station: super::msg::Station,


    // This member is not documented.
    #[allow(missing_docs)]
    pub loop_: super::msg::Loop,


    // This member is not documented.
    #[allow(missing_docs)]
    pub delivery: super::msg::Delivery,


    // This member is not documented.
    #[allow(missing_docs)]
    pub clean: super::msg::Clean,

}



impl Default for TaskDescription {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskDescription::default())
  }
}

impl rosidl_runtime_rs::Message for TaskDescription {
  type RmwMsg = super::msg::rmw::TaskDescription;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.start_time)).into_owned(),
        priority: super::msg::Priority::into_rmw_message(std::borrow::Cow::Owned(msg.priority)).into_owned(),
        task_type: super::msg::TaskType::into_rmw_message(std::borrow::Cow::Owned(msg.task_type)).into_owned(),
        station: super::msg::Station::into_rmw_message(std::borrow::Cow::Owned(msg.station)).into_owned(),
        loop_: super::msg::Loop::into_rmw_message(std::borrow::Cow::Owned(msg.loop_)).into_owned(),
        delivery: super::msg::Delivery::into_rmw_message(std::borrow::Cow::Owned(msg.delivery)).into_owned(),
        clean: super::msg::Clean::into_rmw_message(std::borrow::Cow::Owned(msg.clean)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_time)).into_owned(),
        priority: super::msg::Priority::into_rmw_message(std::borrow::Cow::Borrowed(&msg.priority)).into_owned(),
        task_type: super::msg::TaskType::into_rmw_message(std::borrow::Cow::Borrowed(&msg.task_type)).into_owned(),
        station: super::msg::Station::into_rmw_message(std::borrow::Cow::Borrowed(&msg.station)).into_owned(),
        loop_: super::msg::Loop::into_rmw_message(std::borrow::Cow::Borrowed(&msg.loop_)).into_owned(),
        delivery: super::msg::Delivery::into_rmw_message(std::borrow::Cow::Borrowed(&msg.delivery)).into_owned(),
        clean: super::msg::Clean::into_rmw_message(std::borrow::Cow::Borrowed(&msg.clean)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start_time: builtin_interfaces::msg::Time::from_rmw_message(msg.start_time),
      priority: super::msg::Priority::from_rmw_message(msg.priority),
      task_type: super::msg::TaskType::from_rmw_message(msg.task_type),
      station: super::msg::Station::from_rmw_message(msg.station),
      loop_: super::msg::Loop::from_rmw_message(msg.loop_),
      delivery: super::msg::Delivery::from_rmw_message(msg.delivery),
      clean: super::msg::Clean::from_rmw_message(msg.clean),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__TaskSummary
/// Publish by Fleet Adapter (aka DispatchStatus)

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskSummary {
    /// Fleet Adapter name
    pub fleet_name: std::string::String,

    /// *optional and duplicated in TaskProfile
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub task_profile: super::msg::TaskProfile,


    // This member is not documented.
    #[allow(missing_docs)]
    pub state: u32,

    /// a brief summary of the current status of the task, for UI's
    /// *optional
    pub status: std::string::String,

    /// submission_time is when the task was submitted to rmf_core
    /// *optional and duplicated in TaskProfile
    pub submission_time: builtin_interfaces::msg::Time,

    /// when rmf_core actually began processing the task
    pub start_time: builtin_interfaces::msg::Time,

    /// When this message is a summary of an in-process task, the end_time field is
    /// an estimate. When this message is a summary of a completed or failed task,
    /// end_time is the actual time.
    pub end_time: builtin_interfaces::msg::Time,

    /// Allocated robot name
    /// *optional
    pub robot_name: std::string::String,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskSummary::default())
  }
}

impl rosidl_runtime_rs::Message for TaskSummary {
  type RmwMsg = super::msg::rmw::TaskSummary;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        task_profile: super::msg::TaskProfile::into_rmw_message(std::borrow::Cow::Owned(msg.task_profile)).into_owned(),
        state: msg.state,
        status: msg.status.as_str().into(),
        submission_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.submission_time)).into_owned(),
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.start_time)).into_owned(),
        end_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.end_time)).into_owned(),
        robot_name: msg.robot_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        task_profile: super::msg::TaskProfile::into_rmw_message(std::borrow::Cow::Borrowed(&msg.task_profile)).into_owned(),
      state: msg.state,
        status: msg.status.as_str().into(),
        submission_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.submission_time)).into_owned(),
        start_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.start_time)).into_owned(),
        end_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.end_time)).into_owned(),
        robot_name: msg.robot_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      task_id: msg.task_id.to_string(),
      task_profile: super::msg::TaskProfile::from_rmw_message(msg.task_profile),
      state: msg.state,
      status: msg.status.to_string(),
      submission_time: builtin_interfaces::msg::Time::from_rmw_message(msg.submission_time),
      start_time: builtin_interfaces::msg::Time::from_rmw_message(msg.start_time),
      end_time: builtin_interfaces::msg::Time::from_rmw_message(msg.end_time),
      robot_name: msg.robot_name.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Tasks

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tasks {

    // This member is not documented.
    #[allow(missing_docs)]
    pub tasks: Vec<super::msg::TaskSummary>,

}



impl Default for Tasks {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Tasks::default())
  }
}

impl rosidl_runtime_rs::Message for Tasks {
  type RmwMsg = super::msg::rmw::Tasks;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tasks: msg.tasks
          .into_iter()
          .map(|elem| super::msg::TaskSummary::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        tasks: msg.tasks
          .iter()
          .map(|elem| super::msg::TaskSummary::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      tasks: msg.tasks
          .into_iter()
          .map(super::msg::TaskSummary::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Loop
/// task_id is intended to be a pseudo-random string generated
/// by the caller which can be used to identify this task as it
/// moves between the queues to completion (or failure).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Loop {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,

    /// robot_type can be used to specify a particular robot fleet
    /// for this request
    pub robot_type: std::string::String,

    /// The number of times the robot should loop between the specified points.
    pub num_loops: u32,

    /// The name of the waypoint where the robot should begin its loop. If the robot
    /// is not already at this point, it will begin the task by moving there.
    pub start_name: std::string::String,

    /// The name of the waypoint where the robot should end its looping. The robot
    /// will visit this waypoint num_loops times and then stop here on the last
    /// visit.
    pub finish_name: std::string::String,

}



impl Default for Loop {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Loop::default())
  }
}

impl rosidl_runtime_rs::Message for Loop {
  type RmwMsg = super::msg::rmw::Loop;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        robot_type: msg.robot_type.as_str().into(),
        num_loops: msg.num_loops,
        start_name: msg.start_name.as_str().into(),
        finish_name: msg.finish_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        robot_type: msg.robot_type.as_str().into(),
      num_loops: msg.num_loops,
        start_name: msg.start_name.as_str().into(),
        finish_name: msg.finish_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      robot_type: msg.robot_type.to_string(),
      num_loops: msg.num_loops,
      start_name: msg.start_name.to_string(),
      finish_name: msg.finish_name.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Tow
/// task_id is intended to be a pseudo-random string generated
/// by the caller which can be used to identify this task as it
/// moves between the queues to completion (or failure).

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Tow {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_type: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_object_id_known: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub object_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub pickup_place_name: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub is_dropoff_place_known: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub dropoff_place_name: std::string::String,

}



impl Default for Tow {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Tow::default())
  }
}

impl rosidl_runtime_rs::Message for Tow {
  type RmwMsg = super::msg::rmw::Tow;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        object_type: msg.object_type.as_str().into(),
        is_object_id_known: msg.is_object_id_known,
        object_id: msg.object_id.as_str().into(),
        pickup_place_name: msg.pickup_place_name.as_str().into(),
        is_dropoff_place_known: msg.is_dropoff_place_known,
        dropoff_place_name: msg.dropoff_place_name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        object_type: msg.object_type.as_str().into(),
      is_object_id_known: msg.is_object_id_known,
        object_id: msg.object_id.as_str().into(),
        pickup_place_name: msg.pickup_place_name.as_str().into(),
      is_dropoff_place_known: msg.is_dropoff_place_known,
        dropoff_place_name: msg.dropoff_place_name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      object_type: msg.object_type.to_string(),
      is_object_id_known: msg.is_object_id_known,
      object_id: msg.object_id.to_string(),
      pickup_place_name: msg.pickup_place_name.to_string(),
      is_dropoff_place_known: msg.is_dropoff_place_known,
      dropoff_place_name: msg.dropoff_place_name.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__TaskType

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskType::default())
  }
}

impl rosidl_runtime_rs::Message for TaskType {
  type RmwMsg = super::msg::rmw::TaskType;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Clean
/// The name of the waypoint where the robot should begin its pre-configured
/// cleaning job.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Clean {

    // This member is not documented.
    #[allow(missing_docs)]
    pub start_waypoint: std::string::String,

}



impl Default for Clean {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Clean::default())
  }
}

impl rosidl_runtime_rs::Message for Clean {
  type RmwMsg = super::msg::rmw::Clean;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start_waypoint: msg.start_waypoint.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        start_waypoint: msg.start_waypoint.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      start_waypoint: msg.start_waypoint.to_string(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__TaskProfile
/// Unique ID assigned to this task

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TaskProfile {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,

    /// Task submission time
    pub submission_time: builtin_interfaces::msg::Time,

    /// Details of the task
    pub description: super::msg::TaskDescription,

}



impl Default for TaskProfile {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TaskProfile::default())
  }
}

impl rosidl_runtime_rs::Message for TaskProfile {
  type RmwMsg = super::msg::rmw::TaskProfile;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        submission_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.submission_time)).into_owned(),
        description: super::msg::TaskDescription::into_rmw_message(std::borrow::Cow::Owned(msg.description)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        submission_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.submission_time)).into_owned(),
        description: super::msg::TaskDescription::into_rmw_message(std::borrow::Cow::Borrowed(&msg.description)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      submission_time: builtin_interfaces::msg::Time::from_rmw_message(msg.submission_time),
      description: super::msg::TaskDescription::from_rmw_message(msg.description),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__BidNotice
/// This message is published by the Task Dispatcher node to notify all
/// Fleet Adapters to participate in a bidding process for a new task.
/// Fleet Adapters may then submit a BidProposal message with their best proposal
/// to accommodate the new task.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BidNotice {
    /// Details of the task request
    pub request: std::string::String,

    /// The ID for this request
    pub task_id: std::string::String,

    /// Duration for which the bidding is open
    pub time_window: builtin_interfaces::msg::Duration,

}



impl Default for BidNotice {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BidNotice::default())
  }
}

impl rosidl_runtime_rs::Message for BidNotice {
  type RmwMsg = super::msg::rmw::BidNotice;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: msg.request.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        time_window: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Owned(msg.time_window)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        request: msg.request.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        time_window: builtin_interfaces::msg::Duration::into_rmw_message(std::borrow::Cow::Borrowed(&msg.time_window)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      request: msg.request.to_string(),
      task_id: msg.task_id.to_string(),
      time_window: builtin_interfaces::msg::Duration::from_rmw_message(msg.time_window),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__BidProposal
/// This message is published by a Fleet Adapter in response to a BidNotice
/// message.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BidProposal {
    /// The name of the Fleet Adapter publishing this message
    pub fleet_name: std::string::String,

    /// The name of the robot in the fleet which will potentially execute the task
    pub expected_robot_name: std::string::String,

    /// The overall cost of task assignments prior to accommodating the new task
    pub prev_cost: f64,

    /// The overall cost of task assignments after accommodating the new task
    pub new_cost: f64,

    /// The estimated finish time of the new task
    pub finish_time: builtin_interfaces::msg::Time,

}



impl Default for BidProposal {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BidProposal::default())
  }
}

impl rosidl_runtime_rs::Message for BidProposal {
  type RmwMsg = super::msg::rmw::BidProposal;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        expected_robot_name: msg.expected_robot_name.as_str().into(),
        prev_cost: msg.prev_cost,
        new_cost: msg.new_cost,
        finish_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.finish_time)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        expected_robot_name: msg.expected_robot_name.as_str().into(),
      prev_cost: msg.prev_cost,
      new_cost: msg.new_cost,
        finish_time: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.finish_time)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      expected_robot_name: msg.expected_robot_name.to_string(),
      prev_cost: msg.prev_cost,
      new_cost: msg.new_cost,
      finish_time: builtin_interfaces::msg::Time::from_rmw_message(msg.finish_time),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__BidResponse
/// ID of the task that is being bid on

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct BidResponse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,

    /// True if this response contains a proposal
    pub has_proposal: bool,

    /// The proposal of this response, if has_proposal is true
    pub proposal: super::msg::BidProposal,

    /// Any errors related to this bid
    pub errors: Vec<std::string::String>,

}



impl Default for BidResponse {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::BidResponse::default())
  }
}

impl rosidl_runtime_rs::Message for BidResponse {
  type RmwMsg = super::msg::rmw::BidResponse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        has_proposal: msg.has_proposal,
        proposal: super::msg::BidProposal::into_rmw_message(std::borrow::Cow::Owned(msg.proposal)).into_owned(),
        errors: msg.errors
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
      has_proposal: msg.has_proposal,
        proposal: super::msg::BidProposal::into_rmw_message(std::borrow::Cow::Borrowed(&msg.proposal)).into_owned(),
        errors: msg.errors
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      has_proposal: msg.has_proposal,
      proposal: super::msg::BidProposal::from_rmw_message(msg.proposal),
      errors: msg.errors
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__DispatchState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispatchState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub task_id: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub assignment: super::msg::Assignment,


    // This member is not documented.
    #[allow(missing_docs)]
    pub errors: Vec<std::string::String>,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DispatchState::default())
  }
}

impl rosidl_runtime_rs::Message for DispatchState {
  type RmwMsg = super::msg::rmw::DispatchState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
        status: msg.status,
        assignment: super::msg::Assignment::into_rmw_message(std::borrow::Cow::Owned(msg.assignment)).into_owned(),
        errors: msg.errors
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        task_id: msg.task_id.as_str().into(),
      status: msg.status,
        assignment: super::msg::Assignment::into_rmw_message(std::borrow::Cow::Borrowed(&msg.assignment)).into_owned(),
        errors: msg.errors
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      task_id: msg.task_id.to_string(),
      status: msg.status,
      assignment: super::msg::Assignment::from_rmw_message(msg.assignment),
      errors: msg.errors
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__DispatchStates
/// States of tasks that are currently in the process of being dispatched

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispatchStates {

    // This member is not documented.
    #[allow(missing_docs)]
    pub active: Vec<super::msg::DispatchState>,

    /// States of tasks that have recently finished being dispatched. This may mean
    /// the task was assigned or it may mean it failed to be dispatched or was
    /// canceled before the dispatch took place.
    pub finished: Vec<super::msg::DispatchState>,

}



impl Default for DispatchStates {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DispatchStates::default())
  }
}

impl rosidl_runtime_rs::Message for DispatchStates {
  type RmwMsg = super::msg::rmw::DispatchStates;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        active: msg.active
          .into_iter()
          .map(|elem| super::msg::DispatchState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        finished: msg.finished
          .into_iter()
          .map(|elem| super::msg::DispatchState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        active: msg.active
          .iter()
          .map(|elem| super::msg::DispatchState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        finished: msg.finished
          .iter()
          .map(|elem| super::msg::DispatchState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      active: msg.active
          .into_iter()
          .map(super::msg::DispatchState::from_rmw_message)
          .collect(),
      finished: msg.finished
          .into_iter()
          .map(super::msg::DispatchState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__DispatchCommand
/// This message is published by Task Dispatcher Node to either award or cancel a
/// task for a Fleet Adapter

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispatchCommand {
    /// The selected Fleet Adapter to award/cancel the task
    pub fleet_name: std::string::String,

    /// The task_id of the task that
    pub task_id: std::string::String,

    /// Unique ID of this request message
    pub dispatch_id: u64,

    /// The time that this dispatch request was originally made. Dispatch requests may
    /// expire with an error if they get no response after an extended period of time.
    pub timestamp: builtin_interfaces::msg::Time,

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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DispatchCommand::default())
  }
}

impl rosidl_runtime_rs::Message for DispatchCommand {
  type RmwMsg = super::msg::rmw::DispatchCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        task_id: msg.task_id.as_str().into(),
        dispatch_id: msg.dispatch_id,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Owned(msg.timestamp)).into_owned(),
        type_: msg.type_,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        fleet_name: msg.fleet_name.as_str().into(),
        task_id: msg.task_id.as_str().into(),
      dispatch_id: msg.dispatch_id,
        timestamp: builtin_interfaces::msg::Time::into_rmw_message(std::borrow::Cow::Borrowed(&msg.timestamp)).into_owned(),
      type_: msg.type_,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      fleet_name: msg.fleet_name.to_string(),
      task_id: msg.task_id.to_string(),
      dispatch_id: msg.dispatch_id,
      timestamp: builtin_interfaces::msg::Time::from_rmw_message(msg.timestamp),
      type_: msg.type_,
    }
  }
}


// Corresponds to rmf_task_msgs__msg__DispatchAck
/// This message is published by the fleet adapter in response to a
/// DispatchRequest message. It indicates whether the requested task addition or
/// cancellation was successful.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct DispatchAck {
    /// The ID of the DispatchRequest that is being responded to
    pub dispatch_id: u64,

    /// True if the addition or cancellation operation was successful
    pub success: bool,


    // This member is not documented.
    #[allow(missing_docs)]
    pub errors: Vec<std::string::String>,

}



impl Default for DispatchAck {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::DispatchAck::default())
  }
}

impl rosidl_runtime_rs::Message for DispatchAck {
  type RmwMsg = super::msg::rmw::DispatchAck;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        dispatch_id: msg.dispatch_id,
        success: msg.success,
        errors: msg.errors
          .into_iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      dispatch_id: msg.dispatch_id,
      success: msg.success,
        errors: msg.errors
          .iter()
          .map(|elem| elem.as_str().into())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      dispatch_id: msg.dispatch_id,
      success: msg.success,
      errors: msg.errors
          .into_iter()
          .map(|elem| elem.to_string())
          .collect(),
    }
  }
}


// Corresponds to rmf_task_msgs__msg__Priority

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Priority {

    // This member is not documented.
    #[allow(missing_docs)]
    pub value: u64,

}



impl Default for Priority {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Priority::default())
  }
}

impl rosidl_runtime_rs::Message for Priority {
  type RmwMsg = super::msg::rmw::Priority;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        value: msg.value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      value: msg.value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      value: msg.value,
    }
  }
}


