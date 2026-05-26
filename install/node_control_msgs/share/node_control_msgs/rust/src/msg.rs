#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to node_control_msgs__msg__MotorCommandFeedback

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommandFeedback {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub seq: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub feedback: Vec<super::msg::MotorFeedback>,

}



impl Default for MotorCommandFeedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorCommandFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCommandFeedback {
  type RmwMsg = super::msg::rmw::MotorCommandFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        seq: msg.seq,
        feedback: msg.feedback
          .into_iter()
          .map(|elem| super::msg::MotorFeedback::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      seq: msg.seq,
        feedback: msg.feedback
          .iter()
          .map(|elem| super::msg::MotorFeedback::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      seq: msg.seq,
      feedback: msg.feedback
          .into_iter()
          .map(super::msg::MotorFeedback::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorCommand

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorCommand {
    /// 比例系数
    pub kp: u16,

    /// 微分系数
    pub kd: u16,

    /// rad
    pub position_des: f32,

    /// rad/s
    pub omega_des: f32,

    /// Nm
    pub torque_des: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: u16,

}



impl Default for MotorCommand {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorCommand::default())
  }
}

impl rosidl_runtime_rs::Message for MotorCommand {
  type RmwMsg = super::msg::rmw::MotorCommand;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        kp: msg.kp,
        kd: msg.kd,
        position_des: msg.position_des,
        omega_des: msg.omega_des,
        torque_des: msg.torque_des,
        reserved: msg.reserved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      kp: msg.kp,
      kd: msg.kd,
      position_des: msg.position_des,
      omega_des: msg.omega_des,
      torque_des: msg.torque_des,
      reserved: msg.reserved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      kp: msg.kp,
      kd: msg.kd,
      position_des: msg.position_des,
      omega_des: msg.omega_des,
      torque_des: msg.torque_des,
      reserved: msg.reserved,
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorConfig

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorConfig {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 0-25   ff 全配
    pub motor_id: u32,

    /// 各个关节电机配置
    pub config: super::msg::MotorConfigDev,

}



impl Default for MotorConfig {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorConfig::default())
  }
}

impl rosidl_runtime_rs::Message for MotorConfig {
  type RmwMsg = super::msg::rmw::MotorConfig;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        motor_id: msg.motor_id,
        config: super::msg::MotorConfigDev::into_rmw_message(std::borrow::Cow::Owned(msg.config)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      motor_id: msg.motor_id,
        config: super::msg::MotorConfigDev::into_rmw_message(std::borrow::Cow::Borrowed(&msg.config)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      motor_id: msg.motor_id,
      config: super::msg::MotorConfigDev::from_rmw_message(msg.config),
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorConfigDev

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorConfigDev {

    // This member is not documented.
    #[allow(missing_docs)]
    pub parameter_id: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub parameter_value: f32,

}

impl MotorConfigDev {

    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARAMETER_ID_MOTOR_DIRECTION: u32 = 0;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARAMETER_ID_MOTOR_STATUS: u32 = 1;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARAMETER_ID_ZERO_POSITION: u32 = 2;


    // This constant is not documented.
    #[allow(missing_docs)]
    pub const PARAMETER_ID_CLEAR_ERROR: u32 = 3;

}


impl Default for MotorConfigDev {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorConfigDev::default())
  }
}

impl rosidl_runtime_rs::Message for MotorConfigDev {
  type RmwMsg = super::msg::rmw::MotorConfigDev;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        parameter_id: msg.parameter_id,
        parameter_value: msg.parameter_value,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      parameter_id: msg.parameter_id,
      parameter_value: msg.parameter_value,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      parameter_id: msg.parameter_id,
      parameter_value: msg.parameter_value,
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorControl

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorControl {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,


    // This member is not documented.
    #[allow(missing_docs)]
    pub seq_num: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub cmd: Vec<super::msg::MotorCommand>,

}



impl Default for MotorControl {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorControl::default())
  }
}

impl rosidl_runtime_rs::Message for MotorControl {
  type RmwMsg = super::msg::rmw::MotorControl;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        seq_num: msg.seq_num,
        cmd: msg.cmd
          .into_iter()
          .map(|elem| super::msg::MotorCommand::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
      seq_num: msg.seq_num,
        cmd: msg.cmd
          .iter()
          .map(|elem| super::msg::MotorCommand::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      seq_num: msg.seq_num,
      cmd: msg.cmd
          .into_iter()
          .map(super::msg::MotorCommand::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorFeedback

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorFeedback {
    /// rad
    pub position: f32,

    /// rad/s
    pub omega: f32,

    /// Nm
    pub torque: i16,


    // This member is not documented.
    #[allow(missing_docs)]
    pub reserved: u16,

}



impl Default for MotorFeedback {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorFeedback::default())
  }
}

impl rosidl_runtime_rs::Message for MotorFeedback {
  type RmwMsg = super::msg::rmw::MotorFeedback;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        position: msg.position,
        omega: msg.omega,
        torque: msg.torque,
        reserved: msg.reserved,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      position: msg.position,
      omega: msg.omega,
      torque: msg.torque,
      reserved: msg.reserved,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      position: msg.position,
      omega: msg.omega,
      torque: msg.torque,
      reserved: msg.reserved,
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorHealth

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorHealth {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 各个关节电机状态
    pub state: Vec<super::msg::MotorHealthState>,

    /// 所有关节电机状态
    pub state_all: super::msg::MotorHealthState,

}



impl Default for MotorHealth {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorHealth::default())
  }
}

impl rosidl_runtime_rs::Message for MotorHealth {
  type RmwMsg = super::msg::rmw::MotorHealth;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        state: msg.state
          .into_iter()
          .map(|elem| super::msg::MotorHealthState::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
        state_all: super::msg::MotorHealthState::into_rmw_message(std::borrow::Cow::Owned(msg.state_all)).into_owned(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        state: msg.state
          .iter()
          .map(|elem| super::msg::MotorHealthState::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
        state_all: super::msg::MotorHealthState::into_rmw_message(std::borrow::Cow::Borrowed(&msg.state_all)).into_owned(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      state: msg.state
          .into_iter()
          .map(super::msg::MotorHealthState::from_rmw_message)
          .collect(),
      state_all: super::msg::MotorHealthState::from_rmw_message(msg.state_all),
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorHealthState

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorHealthState {
    /// 0-3 表示4种健康状态
    pub health: u16,

    /// 电机方向
    pub motor_direction: u8,

    /// 电机温度
    pub motor_temperature: u8,

    /// mos温度
    pub mos_temperature: u8,

    /// 母线电压
    pub bus_voltage: u8,

    /// 电机在线状态
    pub u1_online: u8,

    /// 电机位置零点
    pub position_zero: f32,

}



impl Default for MotorHealthState {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorHealthState::default())
  }
}

impl rosidl_runtime_rs::Message for MotorHealthState {
  type RmwMsg = super::msg::rmw::MotorHealthState;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        health: msg.health,
        motor_direction: msg.motor_direction,
        motor_temperature: msg.motor_temperature,
        mos_temperature: msg.mos_temperature,
        bus_voltage: msg.bus_voltage,
        u1_online: msg.u1_online,
        position_zero: msg.position_zero,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      health: msg.health,
      motor_direction: msg.motor_direction,
      motor_temperature: msg.motor_temperature,
      mos_temperature: msg.mos_temperature,
      bus_voltage: msg.bus_voltage,
      u1_online: msg.u1_online,
      position_zero: msg.position_zero,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      health: msg.health,
      motor_direction: msg.motor_direction,
      motor_temperature: msg.motor_temperature,
      mos_temperature: msg.mos_temperature,
      bus_voltage: msg.bus_voltage,
      u1_online: msg.u1_online,
      position_zero: msg.position_zero,
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorInfo

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorInfo {

    // This member is not documented.
    #[allow(missing_docs)]
    pub header: std_msgs::msg::Header,

    /// 两个关节板的电机信息
    pub info: Vec<super::msg::MotorInfoValue>,

}



impl Default for MotorInfo {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorInfo::default())
  }
}

impl rosidl_runtime_rs::Message for MotorInfo {
  type RmwMsg = super::msg::rmw::MotorInfo;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Owned(msg.header)).into_owned(),
        info: msg.info
          .into_iter()
          .map(|elem| super::msg::MotorInfoValue::into_rmw_message(std::borrow::Cow::Owned(elem)).into_owned())
          .collect(),
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        header: std_msgs::msg::Header::into_rmw_message(std::borrow::Cow::Borrowed(&msg.header)).into_owned(),
        info: msg.info
          .iter()
          .map(|elem| super::msg::MotorInfoValue::into_rmw_message(std::borrow::Cow::Borrowed(elem)).into_owned())
          .collect(),
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      header: std_msgs::msg::Header::from_rmw_message(msg.header),
      info: msg.info
          .into_iter()
          .map(super::msg::MotorInfoValue::from_rmw_message)
          .collect(),
    }
  }
}


// Corresponds to node_control_msgs__msg__MotorInfoValue

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct MotorInfoValue {
    /// 开机时间
    pub startup_time_ms: u64,

    /// CANFD板软件版本
    pub sw_version: [u8; 3],

    /// CANFD板硬件版本
    pub hw_version: [u8; 3],

    /// 关节软件版本
    pub joint_version: [u8; 3],

    /// CANFD板状态
    pub state: u16,

    /// 关节批次号
    pub serial_num: u64,

}



impl Default for MotorInfoValue {
  fn default() -> Self {
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::MotorInfoValue::default())
  }
}

impl rosidl_runtime_rs::Message for MotorInfoValue {
  type RmwMsg = super::msg::rmw::MotorInfoValue;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        startup_time_ms: msg.startup_time_ms,
        sw_version: msg.sw_version,
        hw_version: msg.hw_version,
        joint_version: msg.joint_version,
        state: msg.state,
        serial_num: msg.serial_num,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      startup_time_ms: msg.startup_time_ms,
        sw_version: msg.sw_version,
        hw_version: msg.hw_version,
        joint_version: msg.joint_version,
      state: msg.state,
      serial_num: msg.serial_num,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      startup_time_ms: msg.startup_time_ms,
      sw_version: msg.sw_version,
      hw_version: msg.hw_version,
      joint_version: msg.joint_version,
      state: msg.state,
      serial_num: msg.serial_num,
    }
  }
}


