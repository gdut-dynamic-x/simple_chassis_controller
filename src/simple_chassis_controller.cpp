//
// Created by qiayuan on 2/6/21.
//

#include "simple_chassis_controller/simple_chassis_controller.h"
#include <pluginlib/class_list_macros.hpp>

namespace simple_chassis_controller {
bool SimpleChassisController::init(hardware_interface::EffortJointInterface *effort_joint_interface,
                                   ros::NodeHandle &root_nh, ros::NodeHandle &controller_nh) {
  front_left_joint_ =
      effort_joint_interface->getHandle("left_front_wheel_joint");
  front_right_joint_ =
      effort_joint_interface->getHandle("right_front_wheel_joint");
  back_left_joint_ = effort_joint_interface->getHandle("left_back_wheel_joint");
  back_right_joint_ =
      effort_joint_interface->getHandle("right_back_wheel_joint");

  return true;
}

void SimpleChassisController::update(const ros::Time &time, const ros::Duration &period) {
  double tau = 0.2;  // torque
  // NOTE: DON'T COPY THESE NAIVE TESTING CODES !!! USE INVERSE KINEMATICS !!!
  // NOTE: DON'T COPY THESE NAIVE TESTING CODES !!! USE INVERSE KINEMATICS !!!
  // NOTE: DON'T COPY THESE NAIVE TESTING CODES !!! USE INVERSE KINEMATICS !!!
  static double cmd_[6][4] = {{tau, tau, tau, tau}, //  forward
                              {-2 * tau, -2 * tau, -2 * tau, -2 * tau}, //  backward
                              {-tau, tau, tau, -tau}, //  left
                              {2 * tau, -2 * tau, -2 * tau, 2 * tau}, //  right
                              {2 * tau, -2 * tau, 2 * tau, -2 * tau}, //  clockwise
                              {-tau, tau, -tau, tau}};  //  counterclockwise
  if ((time - last_change_).toSec() > 2) {
    state_ = (state_ + 1) % 6;
    last_change_ = time;
  }
  front_left_joint_.setCommand(cmd_[state_][0]);
  front_right_joint_.setCommand(cmd_[state_][1]);
  back_left_joint_.setCommand(cmd_[state_][2]);
  back_right_joint_.setCommand(cmd_[state_][3]);
}

PLUGINLIB_EXPORT_CLASS(simple_chassis_controller::SimpleChassisController, controller_interface::ControllerBase)
}
