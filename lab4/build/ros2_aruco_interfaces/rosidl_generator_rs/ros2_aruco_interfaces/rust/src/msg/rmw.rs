#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "ros2_aruco_interfaces__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__ros2_aruco_interfaces__msg__ArucoMarkers() -> *const std::ffi::c_void;
}

#[link(name = "ros2_aruco_interfaces__rosidl_generator_c")]
extern "C" {
    fn ros2_aruco_interfaces__msg__ArucoMarkers__init(msg: *mut ArucoMarkers) -> bool;
    fn ros2_aruco_interfaces__msg__ArucoMarkers__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<ArucoMarkers>, size: usize) -> bool;
    fn ros2_aruco_interfaces__msg__ArucoMarkers__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<ArucoMarkers>);
    fn ros2_aruco_interfaces__msg__ArucoMarkers__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<ArucoMarkers>, out_seq: *mut rosidl_runtime_rs::Sequence<ArucoMarkers>) -> bool;
}

// Corresponds to ros2_aruco_interfaces__msg__ArucoMarkers
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct ArucoMarkers {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::rmw::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub marker_ids: rosidl_runtime_rs::Sequence<i64>,


    // This member is not documented.
    #[allow(missing_docs)]
    pub poses: rosidl_runtime_rs::Sequence<geometry_msgs::msg::rmw::Pose>,

}



impl Default for ArucoMarkers {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !ros2_aruco_interfaces__msg__ArucoMarkers__init(&mut msg as *mut _) {
        panic!("Call to ros2_aruco_interfaces__msg__ArucoMarkers__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for ArucoMarkers {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_aruco_interfaces__msg__ArucoMarkers__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_aruco_interfaces__msg__ArucoMarkers__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { ros2_aruco_interfaces__msg__ArucoMarkers__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for ArucoMarkers {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for ArucoMarkers where Self: Sized {
  const TYPE_NAME: &'static str = "ros2_aruco_interfaces/msg/ArucoMarkers";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__ros2_aruco_interfaces__msg__ArucoMarkers() }
  }
}


