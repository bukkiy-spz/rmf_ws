#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to rmf_scheduler_msgs__msg__Payload
/// Denotes the type of payload

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Payload {

    // This member is not documented.
    #[allow(missing_docs)]
    pub type_: u8,


    // This member is not documented.
    #[allow(missing_docs)]
    pub topic: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub message_type: std::string::String,

    /// max 2mb
    pub data: rosidl_runtime_rs::BoundedSequence<u8, 2097152>,

}

impl Payload {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PAYLOAD_TYPE_SERIALIZED_MESSAGE: u8 = 1;

}


impl Default for Payload {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Payload::default())
  }
}

impl rosidl_runtime_rs::Message for Payload {
  type RmwMsg = super::msg::rmw::Payload;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        type_: msg.type_,
        topic: msg.topic.as_str().into(),
        message_type: msg.message_type.as_str().into(),
        data: msg.data,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      type_: msg.type_,
        topic: msg.topic.as_str().into(),
        message_type: msg.message_type.as_str().into(),
        data: msg.data.clone(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      type_: msg.type_,
      topic: msg.topic.to_string(),
      message_type: msg.message_type.to_string(),
      data: msg.data,
    }
  }
}


// Corresponds to rmf_scheduler_msgs__msg__Schedule
/// Name to identify the schedule, must be unique across all schedules.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Schedule {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// unix timestamp in seconds
    pub created_at: i64,

    /// ┌─────────────seconds (0 - 59)
    /// │ ┌───────────── minute (0 - 59)
    /// │ │ ┌───────────── hour (0 - 23)
    /// │ │ │ ┌───────────── day of the month (1 - 31)
    /// │ │ │ │ ┌───────────── month (1 - 12)
    /// │ │ │ │ │ ┌───────────── day of the week (0 - 6) (Sunday to Saturday)
    /// │ │ │ │ │ │ ┌───────────── years (1970 - 2099) (optional)
    /// │ │ │ │ │ │ │
    /// * * * * * * *
    ///
    /// | Field | Required | Allowed value | Allowed special characters |
    /// | --- | --- | --- | --- |
    /// | seconds | yes | 0-59 | `*` `,` `-` |
    /// | minutes | yes | 0-59 | `*` `,` `-` |
    /// | hours | yes | 0-23 | `*` `,` `-` |
    /// | days of month | 1-31 | `*` `,` `-` `?` `L` `W` |
    /// | months | yes | 1-12 | `*` `,` `-` |
    /// | days of week | yes | `*` `,` `-` `?` `L` `#` |
    /// | years | no | 1970-2099 | `*` `,` `-` |
    ///
    /// The special characters have the following meaning:
    ///
    /// | Special character | Meaning | Description |
    /// | --- | --- | --- |
    /// | `*` | all values | selects all values within a field |
    /// | `?` | no specific value | specify one field and leave the other unspecified |
    /// | `-` | range | specify ranges |
    /// | `,` | comma | specify additional values |
    /// | `/` | slash | speficy increments |
    /// | `L` | last | last day of the month or last day of the week |
    /// | `W` | weekday | the weekday nearest to the given day |
    /// | `#` | nth |  specify the Nth day of the month |
    /// Examples:
    ///
    /// | CRON | Description |
    /// | --- | --- |
    /// | * * * * * * | Every second |
    /// | */5 * * * * ? | Every 5 seconds |
    /// | 0 */5 */2 * * ? | Every 5 minutes, every 2 hours |
    /// | 0 */2 */2 ? */2 */2 | Every 2 minutes, every 2 hours, every 2 days of the week, every 2 months |
    /// | 0 15 10 * * ? * | 10:15 AM every day |
    /// | 0 0/5 14 * * ? | Every 5 minutes starting at 2 PM and ending at 2:55 PM, every day |
    /// | 0 10,44 14 ? 3 WED | 2:10 PM and at 2:44 PM every Wednesday of March |
    /// | 0 15 10 ? * MON-FRI | 10:15 AM every Monday, Tuesday, Wednesday, Thursday and Friday |
    /// | 0 15 10 L * ? | 10:15 AM on the last day of every month |
    /// | 0 0 12 1/5 * ? | 12 PM every 5 days every month, starting on the first day of the month |
    /// | 0 11 11 11 11 ? | Every November 11th at 11:11 AM |
    ///
    /// Reference: https://github.com/mariusbancila/croncpp/blob/999f7685ab683b58872386c0aa019acf97c6570a/README.md
    pub schedule: std::string::String,

    /// unix time in secs
    pub start_at: i64,

    /// unix time in secs
    pub finish_at: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payload: super::msg::Payload,

}



impl Default for Schedule {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Schedule::default())
  }
}

impl rosidl_runtime_rs::Message for Schedule {
  type RmwMsg = super::msg::rmw::Schedule;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        created_at: msg.created_at,
        schedule: msg.schedule.as_str().into(),
        start_at: msg.start_at,
        finish_at: msg.finish_at,
        group: msg.group.as_str().into(),
        payload: super::msg::Payload::into_rmw_message(std::borrow::Cow::Owned(msg.payload)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      created_at: msg.created_at,
        schedule: msg.schedule.as_str().into(),
      start_at: msg.start_at,
      finish_at: msg.finish_at,
        group: msg.group.as_str().into(),
        payload: super::msg::Payload::into_rmw_message(std::borrow::Cow::Borrowed(&msg.payload)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      created_at: msg.created_at,
      schedule: msg.schedule.to_string(),
      start_at: msg.start_at,
      finish_at: msg.finish_at,
      group: msg.group.to_string(),
      payload: super::msg::Payload::from_rmw_message(msg.payload),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__msg__ScheduleState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ScheduleState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// unix time in seconds
    pub last_modified: i64,

    /// unix time in seconds
    pub last_ran: i64,

    /// unix time in seconds
    pub next_run: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,

}

impl ScheduleState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CREATED: i8 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTED: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FINISHED: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLED: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: i8 = -1;

}


impl Default for ScheduleState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::ScheduleState::default())
  }
}

impl rosidl_runtime_rs::Message for ScheduleState {
  type RmwMsg = super::msg::rmw::ScheduleState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        last_modified: msg.last_modified,
        last_ran: msg.last_ran,
        next_run: msg.next_run,
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      last_modified: msg.last_modified,
      last_ran: msg.last_ran,
      next_run: msg.next_run,
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      last_modified: msg.last_modified,
      last_ran: msg.last_ran,
      next_run: msg.next_run,
      status: msg.status,
    }
  }
}


// Corresponds to rmf_scheduler_msgs__msg__Trigger
/// Name to identify the trigger, must be unique across all triggers.

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Trigger {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// unix timestamp in seconds
    pub created_at: i64,

    /// unix timestamp in seconds when the trigger should run
    pub at: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub group: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub payload: super::msg::Payload,

}



impl Default for Trigger {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Trigger::default())
  }
}

impl rosidl_runtime_rs::Message for Trigger {
  type RmwMsg = super::msg::rmw::Trigger;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        created_at: msg.created_at,
        at: msg.at,
        group: msg.group.as_str().into(),
        payload: super::msg::Payload::into_rmw_message(std::borrow::Cow::Owned(msg.payload)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      created_at: msg.created_at,
      at: msg.at,
        group: msg.group.as_str().into(),
        payload: super::msg::Payload::into_rmw_message(std::borrow::Cow::Borrowed(&msg.payload)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      created_at: msg.created_at,
      at: msg.at,
      group: msg.group.to_string(),
      payload: super::msg::Payload::from_rmw_message(msg.payload),
    }
  }
}


// Corresponds to rmf_scheduler_msgs__msg__TriggerState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TriggerState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub name: std::string::String,

    /// unix time in seconds
    pub last_modified: i64,

    /// unix time in seconds
    pub last_ran: i64,


    // This member is not documented.
    #[allow(missing_docs)]
    pub status: i8,

}

impl TriggerState {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const STARTED: i8 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FINISHED: i8 = 3;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const CANCELLED: i8 = 4;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const FAILED: i8 = -1;

}


impl Default for TriggerState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TriggerState::default())
  }
}

impl rosidl_runtime_rs::Message for TriggerState {
  type RmwMsg = super::msg::rmw::TriggerState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
        last_modified: msg.last_modified,
        last_ran: msg.last_ran,
        status: msg.status,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        name: msg.name.as_str().into(),
      last_modified: msg.last_modified,
      last_ran: msg.last_ran,
      status: msg.status,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      name: msg.name.to_string(),
      last_modified: msg.last_modified,
      last_ran: msg.last_ran,
      status: msg.status,
    }
  }
}


