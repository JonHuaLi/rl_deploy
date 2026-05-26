#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to node_driver_msgs__msg__Sensormsgcontrol

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sensormsgcontrol {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 传感器类型，例如 0:IMU, 1:激光, 2:超声波等
    pub sensor_type: i8,

    /// 控制内容，0:关闭，1:开启，2:状态查询等
    pub control_command: i8,

}



impl Default for Sensormsgcontrol {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Sensormsgcontrol::default())
  }
}

impl rosidl_runtime_rs::Message for Sensormsgcontrol {
  type RmwMsg = super::msg::rmw::Sensormsgcontrol;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_type: msg.sensor_type,
        control_command: msg.control_command,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      sensor_type: msg.sensor_type,
      control_command: msg.control_command,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sensor_type: msg.sensor_type,
      control_command: msg.control_command,
    }
  }
}


// Corresponds to node_driver_msgs__msg__Sensormsgstate

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Sensormsgstate {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 传感器类型，例如 0:IMU, 1:激光, 2:超声波等
    pub sensor_type: i8,

    /// 传感器状态，例如 0:关闭, 1:开启,
    pub sensor_state: i8,

    /// 错误信息，例如 "IMU 异常"
    pub error_message: std::string::String,

}



impl Default for Sensormsgstate {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Sensormsgstate::default())
  }
}

impl rosidl_runtime_rs::Message for Sensormsgstate {
  type RmwMsg = super::msg::rmw::Sensormsgstate;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        sensor_type: msg.sensor_type,
        sensor_state: msg.sensor_state,
        error_message: msg.error_message.as_str().into(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      sensor_type: msg.sensor_type,
      sensor_state: msg.sensor_state,
        error_message: msg.error_message.as_str().into(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      sensor_type: msg.sensor_type,
      sensor_state: msg.sensor_state,
      error_message: msg.error_message.to_string(),
    }
  }
}


