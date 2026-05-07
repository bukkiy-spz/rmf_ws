#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};




// Corresponds to rmf_scheduler_msgs__srv__CancelAll_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelAll_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub group: std::string::String,

}



impl Default for CancelAll_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelAll_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CancelAll_Request {
  type RmwMsg = super::srv::rmw::CancelAll_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group: msg.group.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        group: msg.group.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      group: msg.group.to_string(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CancelAll_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelAll_Response {
    /// Confirmation that the schedule is successfully registered
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,

}



impl Default for CancelAll_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelAll_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CancelAll_Response {
  type RmwMsg = super::srv::rmw::CancelAll_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CancelSchedule_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelSchedule_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// Indicate that the schedule is considered finished successfully.
    pub finished: bool,

}



impl Default for CancelSchedule_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelSchedule_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CancelSchedule_Request {
  type RmwMsg = super::srv::rmw::CancelSchedule_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        finished: msg.finished,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      finished: msg.finished,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      finished: msg.finished,
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CancelSchedule_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelSchedule_Response {
    /// Confirmation that the schedule is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,

}



impl Default for CancelSchedule_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelSchedule_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CancelSchedule_Response {
  type RmwMsg = super::srv::rmw::CancelSchedule_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CancelTrigger_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTrigger_Request {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

}



impl Default for CancelTrigger_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelTrigger_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CancelTrigger_Request {
  type RmwMsg = super::srv::rmw::CancelTrigger_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CancelTrigger_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CancelTrigger_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,

}



impl Default for CancelTrigger_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CancelTrigger_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CancelTrigger_Response {
  type RmwMsg = super::srv::rmw::CancelTrigger_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CreateSchedule_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateSchedule_Request {
    /// The following fields are ignored:
    ///   - created_at
    pub schedule: super::msg::Schedule,

}



impl Default for CreateSchedule_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CreateSchedule_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CreateSchedule_Request {
  type RmwMsg = super::srv::rmw::CreateSchedule_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        schedule: super::msg::Schedule::into_rmw_message(std::borrow::Cow::Owned(msg.schedule)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        schedule: super::msg::Schedule::into_rmw_message(std::borrow::Cow::Borrowed(&msg.schedule)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      schedule: super::msg::Schedule::from_rmw_message(msg.schedule),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CreateSchedule_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateSchedule_Response {
    /// Confirmation that the schedule is successfully registered
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,

}



impl Default for CreateSchedule_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CreateSchedule_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CreateSchedule_Response {
  type RmwMsg = super::srv::rmw::CreateSchedule_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CreateTrigger_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateTrigger_Request {
    /// The following fields are ignored:
    ///   - created_at
    pub trigger: super::msg::Trigger,

}



impl Default for CreateTrigger_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CreateTrigger_Request::default())
  }
}

impl rosidl_runtime_rs::Message for CreateTrigger_Request {
  type RmwMsg = super::srv::rmw::CreateTrigger_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        trigger: super::msg::Trigger::into_rmw_message(std::borrow::Cow::Owned(msg.trigger)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        trigger: super::msg::Trigger::into_rmw_message(std::borrow::Cow::Borrowed(&msg.trigger)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      trigger: super::msg::Trigger::from_rmw_message(msg.trigger),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__CreateTrigger_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct CreateTrigger_Response {
    /// Confirmation that the trigger is successfully registered
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,

}



impl Default for CreateTrigger_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::CreateTrigger_Response::default())
  }
}

impl rosidl_runtime_rs::Message for CreateTrigger_Response {
  type RmwMsg = super::srv::rmw::CreateTrigger_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__ListSchedules_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListSchedules_Request {
    /// unix time in seconds
    pub created_after: i64,

}



impl Default for ListSchedules_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListSchedules_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ListSchedules_Request {
  type RmwMsg = super::srv::rmw::ListSchedules_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        created_after: msg.created_after,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      created_after: msg.created_after,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      created_after: msg.created_after,
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__ListSchedules_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListSchedules_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub schedules: Vec<super::msg::Schedule>,

}



impl Default for ListSchedules_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListSchedules_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ListSchedules_Response {
  type RmwMsg = super::srv::rmw::ListSchedules_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        schedules: msg.schedules
          .into_iter()
          .map(|elem| super::msg::Schedule::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        schedules: msg.schedules
          .iter()
          .map(|elem| super::msg::Schedule::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      schedules: msg.schedules
          .into_iter()
          .map(super::msg::Schedule::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__ListScheduleStates_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListScheduleStates_Request {
    /// unix time in seconds
    pub modified_after: i64,

}



impl Default for ListScheduleStates_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListScheduleStates_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ListScheduleStates_Request {
  type RmwMsg = super::srv::rmw::ListScheduleStates_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        modified_after: msg.modified_after,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      modified_after: msg.modified_after,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      modified_after: msg.modified_after,
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__ListScheduleStates_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListScheduleStates_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub schedules: Vec<super::msg::ScheduleState>,

}



impl Default for ListScheduleStates_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListScheduleStates_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ListScheduleStates_Response {
  type RmwMsg = super::srv::rmw::ListScheduleStates_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        schedules: msg.schedules
          .into_iter()
          .map(|elem| super::msg::ScheduleState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        schedules: msg.schedules
          .iter()
          .map(|elem| super::msg::ScheduleState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      schedules: msg.schedules
          .into_iter()
          .map(super::msg::ScheduleState::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__ListTriggers_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListTriggers_Request {
    /// unix time in seconds
    pub created_after: i64,

}



impl Default for ListTriggers_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListTriggers_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ListTriggers_Request {
  type RmwMsg = super::srv::rmw::ListTriggers_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        created_after: msg.created_after,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      created_after: msg.created_after,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      created_after: msg.created_after,
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__ListTriggers_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListTriggers_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub triggers: Vec<super::msg::Trigger>,

}



impl Default for ListTriggers_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListTriggers_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ListTriggers_Response {
  type RmwMsg = super::srv::rmw::ListTriggers_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        triggers: msg.triggers
          .into_iter()
          .map(|elem| super::msg::Trigger::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        triggers: msg.triggers
          .iter()
          .map(|elem| super::msg::Trigger::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      triggers: msg.triggers
          .into_iter()
          .map(super::msg::Trigger::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__ListTriggerStates_Request

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListTriggerStates_Request {
    /// unix time in seconds
    pub modified_after: i64,

}



impl Default for ListTriggerStates_Request {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListTriggerStates_Request::default())
  }
}

impl rosidl_runtime_rs::Message for ListTriggerStates_Request {
  type RmwMsg = super::srv::rmw::ListTriggerStates_Request;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        modified_after: msg.modified_after,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      modified_after: msg.modified_after,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      modified_after: msg.modified_after,
    }
  }
}


// Corresponds to rmf_scheduler_msgs__srv__ListTriggerStates_Response

// This struct is not documented.
#[allow(missing_docs)]

#[allow(non_camel_case_types)]
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ListTriggerStates_Response {
    /// Confirmation that the trigger is successfully cancelled.
    pub success: bool,

    /// If success is false, this provides a reason for the failure.
    pub message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub triggers: Vec<super::msg::TriggerState>,

}



impl Default for ListTriggerStates_Response {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::srv::rmw::ListTriggerStates_Response::default())
  }
}

impl rosidl_runtime_rs::Message for ListTriggerStates_Response {
  type RmwMsg = super::srv::rmw::ListTriggerStates_Response;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        success: msg.success,
        message: msg.message.as_str().into(),
        triggers: msg.triggers
          .into_iter()
          .map(|elem| super::msg::TriggerState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      success: msg.success,
        message: msg.message.as_str().into(),
        triggers: msg.triggers
          .iter()
          .map(|elem| super::msg::TriggerState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      success: msg.success,
      message: msg.message.to_string(),
      triggers: msg.triggers
          .into_iter()
          .map(super::msg::TriggerState::from_rmw_message)
          .collect(),
    }
  }
}






#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelAll() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelAll
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelAll;

impl rosidl_runtime_rs::Service for CancelAll {
    type Request = CancelAll_Request;
    type Response = CancelAll_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelAll() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelSchedule() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelSchedule
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelSchedule;

impl rosidl_runtime_rs::Service for CancelSchedule {
    type Request = CancelSchedule_Request;
    type Response = CancelSchedule_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelSchedule() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelTrigger() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CancelTrigger
#[allow(missing_docs, non_camel_case_types)]
pub struct CancelTrigger;

impl rosidl_runtime_rs::Service for CancelTrigger {
    type Request = CancelTrigger_Request;
    type Response = CancelTrigger_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CancelTrigger() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CreateSchedule() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CreateSchedule
#[allow(missing_docs, non_camel_case_types)]
pub struct CreateSchedule;

impl rosidl_runtime_rs::Service for CreateSchedule {
    type Request = CreateSchedule_Request;
    type Response = CreateSchedule_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CreateSchedule() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CreateTrigger() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__CreateTrigger
#[allow(missing_docs, non_camel_case_types)]
pub struct CreateTrigger;

impl rosidl_runtime_rs::Service for CreateTrigger {
    type Request = CreateTrigger_Request;
    type Response = CreateTrigger_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__CreateTrigger() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListSchedules() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__ListSchedules
#[allow(missing_docs, non_camel_case_types)]
pub struct ListSchedules;

impl rosidl_runtime_rs::Service for ListSchedules {
    type Request = ListSchedules_Request;
    type Response = ListSchedules_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListSchedules() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListScheduleStates() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__ListScheduleStates
#[allow(missing_docs, non_camel_case_types)]
pub struct ListScheduleStates;

impl rosidl_runtime_rs::Service for ListScheduleStates {
    type Request = ListScheduleStates_Request;
    type Response = ListScheduleStates_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListScheduleStates() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListTriggers() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__ListTriggers
#[allow(missing_docs, non_camel_case_types)]
pub struct ListTriggers;

impl rosidl_runtime_rs::Service for ListTriggers {
    type Request = ListTriggers_Request;
    type Response = ListTriggers_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListTriggers() }
    }
}




#[link(name = "rmf_scheduler_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListTriggerStates() -> *const std::ffi::c_void;
}

// Corresponds to rmf_scheduler_msgs__srv__ListTriggerStates
#[allow(missing_docs, non_camel_case_types)]
pub struct ListTriggerStates;

impl rosidl_runtime_rs::Service for ListTriggerStates {
    type Request = ListTriggerStates_Request;
    type Response = ListTriggerStates_Response;

    fn get_type_support() -> *const std::ffi::c_void {
        // SAFETY: No preconditions for this function.
        unsafe { rosidl_typesupport_c__get_service_type_support_handle__rmf_scheduler_msgs__srv__ListTriggerStates() }
    }
}


