#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to robot_msgs__msg__RobotState
/// RobotState.msg - 统一的机器人状态消息
/// 包含IMU和电机反馈数据

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct RobotState {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub imu: sensor_msgs::msg::Imu,


    // This member is not documented.
    #[allow(missing_docs)]
    pub motor_feedback: node_control_msgs::msg::MotorCommandFeedback,

}



impl Default for RobotState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::RobotState::default())
  }
}

impl rosidl_runtime_rs::Message for RobotState {
  type RmwMsg = super::msg::rmw::RobotState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        imu: sensor_msgs::msg::Imu::into_rmw_message(std::borrow::Cow::Owned(msg.imu)).into_owned(),
        motor_feedback: node_control_msgs::msg::MotorCommandFeedback::into_rmw_message(std::borrow::Cow::Owned(msg.motor_feedback)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        imu: sensor_msgs::msg::Imu::into_rmw_message(std::borrow::Cow::Borrowed(&msg.imu)).into_owned(),
        motor_feedback: node_control_msgs::msg::MotorCommandFeedback::into_rmw_message(std::borrow::Cow::Borrowed(&msg.motor_feedback)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      imu: sensor_msgs::msg::Imu::from_rmw_message(msg.imu),
      motor_feedback: node_control_msgs::msg::MotorCommandFeedback::from_rmw_message(msg.motor_feedback),
    }
  }
}


