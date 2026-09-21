#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "my_chatter_msgs__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__my_chatter_msgs__msg__TimestampString() -> *const std::ffi::c_void;
}

#[link(name = "my_chatter_msgs__rosidl_generator_c")]
extern "C" {
    fn my_chatter_msgs__msg__TimestampString__init(msg: *mut TimestampString) -> bool;
    fn my_chatter_msgs__msg__TimestampString__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<TimestampString>, size: usize) -> bool;
    fn my_chatter_msgs__msg__TimestampString__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<TimestampString>);
    fn my_chatter_msgs__msg__TimestampString__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<TimestampString>, out_seq: *mut rosidl_runtime_rs::Sequence<TimestampString>) -> bool;
}

// Corresponds to my_chatter_msgs__msg__TimestampString
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct TimestampString {

    // This member is not documented.
    #[allow(missing_docs)]
    pub user_message: rosidl_runtime_rs::String,


    // This member is not documented.
    #[allow(missing_docs)]
    pub timestamp: f64,

}



impl Default for TimestampString {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !my_chatter_msgs__msg__TimestampString__init(&mut msg as *mut _) {
        panic!("Call to my_chatter_msgs__msg__TimestampString__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for TimestampString {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_chatter_msgs__msg__TimestampString__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_chatter_msgs__msg__TimestampString__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { my_chatter_msgs__msg__TimestampString__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for TimestampString {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for TimestampString where Self: Sized {
  const TYPE_NAME: &'static str = "my_chatter_msgs/msg/TimestampString";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__my_chatter_msgs__msg__TimestampString() }
  }
}


