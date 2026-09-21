#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to my_chatter_msgs__msg__TimestampString

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimestampString {

    // This member is not documented.
    #[allow(missing_docs)]
    pub user_message: std::string::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: f64,

}



impl Default for TimestampString {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::TimestampString::default())
  }
}

impl rosidl_runtime_rs::Message for TimestampString {
  type RmwMsg = super::msg::rmw::TimestampString;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        user_message: msg.user_message.as_str().into(),
        timestamp: msg.timestamp,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        user_message: msg.user_message.as_str().into(),
      timestamp: msg.timestamp,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      user_message: msg.user_message.to_string(),
      timestamp: msg.timestamp,
    }
  }
}


