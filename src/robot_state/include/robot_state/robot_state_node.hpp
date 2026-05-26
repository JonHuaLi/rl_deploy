#ifndef ROBOT_STATE__ROBOT_STATE_NODE_HPP_
#define ROBOT_STATE__ROBOT_STATE_NODE_HPP_

#include <rclcpp/rclcpp.hpp>
#include <sensor_msgs/msg/imu.hpp>
#include <node_control_msgs/msg/motor_command_feedback.hpp>
#include <robot_msgs/msg/robot_state.hpp>
#include <memory>

class RobotStateNode : public rclcpp::Node
{
public:
  RobotStateNode(const rclcpp::NodeOptions & options = rclcpp::NodeOptions());

private:
  // 订阅者
  rclcpp::Subscription<sensor_msgs::msg::Imu>::SharedPtr imu_sub_;
  rclcpp::Subscription<node_control_msgs::msg::MotorCommandFeedback>::SharedPtr motor_feedback_sub_;

  // 发布者
  rclcpp::Publisher<robot_msgs::msg::RobotState>::SharedPtr robot_state_pub_;

  // 数据存储
  sensor_msgs::msg::Imu::SharedPtr latest_imu_;
  node_control_msgs::msg::MotorCommandFeedback::SharedPtr latest_motor_feedback_;

  // 回调函数
  void imu_callback(const sensor_msgs::msg::Imu::SharedPtr msg);
  void motor_callback(const node_control_msgs::msg::MotorCommandFeedback::SharedPtr msg);
  void publish_robot_state();
};

#endif  // ROBOT_STATE__ROBOT_STATE_NODE_HPP_