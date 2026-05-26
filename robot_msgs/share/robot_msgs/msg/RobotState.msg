# RobotState.msg - 统一的机器人状态消息
# 包含IMU和电机反馈数据

std_msgs/Header header
sensor_msgs/Imu imu
node_control_msgs/MotorCommandFeedback motor_feedback