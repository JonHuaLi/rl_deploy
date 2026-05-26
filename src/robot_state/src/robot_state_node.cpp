#include "robot_state/robot_state_node.hpp"
#include <memory>

RobotStateNode::RobotStateNode(const rclcpp::NodeOptions & options)
: Node("robot_state_node", options)
{
  // QoS配置
  // auto qos = rclcpp::QoS(rclcpp::KeepLast(10))
  //   .reliable()
  //   .transient_local();

  // 修改QoS配置为best_effort
  auto qos = rclcpp::QoS(rclcpp::KeepLast(5)).best_effort();

  // 订阅IMU
  // imu_sub_ = this->create_subscription<sensor_msgs::msg::Imu>(
  //   "/imu/data", 10,
  //   std::bind(&RobotStateNode::imu_callback, this, std::placeholders::_1));
  imu_sub_ = this->create_subscription<sensor_msgs::msg::Imu>(
    "/imu/data", rclcpp::QoS(5).best_effort(),
    std::bind(&RobotStateNode::imu_callback, this, std::placeholders::_1));
  // 订阅电机反馈
  // motor_feedback_sub_ = this->create_subscription<node_control_msgs::msg::MotorCommandFeedback>(
  //   "/motor_control/motor_comand_feedback", 10,
  //   std::bind(&RobotStateNode::motor_callback, this, std::placeholders::_1));
  motor_feedback_sub_ = this->create_subscription<node_control_msgs::msg::MotorCommandFeedback>(
    "/motor_control/motor_comand_feedback", rclcpp::QoS(5).best_effort(),
    std::bind(&RobotStateNode::motor_callback, this, std::placeholders::_1));

  // 发布机器人状态
  robot_state_pub_ = this->create_publisher<robot_msgs::msg::RobotState>(
    "/robot/state", qos);

  RCLCPP_INFO(this->get_logger(), "Robot State节点已启动 (1000Hz电机反馈触发)");
}

void RobotStateNode::imu_callback(const sensor_msgs::msg::Imu::SharedPtr msg)
{
  latest_imu_ = msg;
}

void RobotStateNode::motor_callback(const node_control_msgs::msg::MotorCommandFeedback::SharedPtr msg)
{
  latest_motor_feedback_ = msg;
  publish_robot_state();  // 电机反馈到达时立即发布
}

void RobotStateNode::publish_robot_state()
{
  if (!latest_imu_ || !latest_motor_feedback_) {
    return;  // 等待两个数据都到达
  }

  auto robot_state = robot_msgs::msg::RobotState();
  
  // 设置消息头
  robot_state.header.stamp = this->now();
  robot_state.header.frame_id = "robot_base";
  
  // 复制IMU数据
  robot_state.imu = *latest_imu_;
  
  // 复制电机反馈数据
  robot_state.motor_feedback = *latest_motor_feedback_;
  
  // 发布
  robot_state_pub_->publish(robot_state);
}

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<RobotStateNode>());
  rclcpp::shutdown();
  return 0;
}