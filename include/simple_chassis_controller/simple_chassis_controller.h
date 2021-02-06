//
// Created by qiayuan on 2/6/21.
//

#ifndef SIMPLE_CHASSIS_CONTROLLER_SIMPLE_CHASSIS_CONTROLLER_H
#define SIMPLE_CHASSIS_CONTROLLER_SIMPLE_CHASSIS_CONTROLLER_H

#include <controller_interface/controller.h>
#include <hardware_interface/joint_command_interface.h>

namespace simple_chassis_controller {

class SimpleChassisController : public controller_interface::Controller<hardware_interface::EffortJointInterface> {
 public:
  SimpleChassisController() = default;
  ~SimpleChassisController() override = default;

  bool init(hardware_interface::EffortJointInterface *effort_joint_interface,
            ros::NodeHandle &root_nh, ros::NodeHandle &controller_nh) override;

  void update(const ros::Time &time, const ros::Duration &period) override;

  hardware_interface::JointHandle front_left_joint_, front_right_joint_, back_left_joint_, back_right_joint_;
 private:
  int state_{};
  ros::Time last_change_;
};
}// namespace simple_chassis_controller

#endif //SIMPLE_CHASSIS_CONTROLLER_SIMPLE_CHASSIS_CONTROLLER_H
