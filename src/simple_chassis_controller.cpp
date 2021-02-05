//
// Created by qiayuan on 2/6/21.
//

#include "simple_chassis_controller/simple_chassis_controller.h"
#include <pluginlib/class_list_macros.hpp>

namespace simple_chassis_controller {
bool SimpleChassisController::init(hardware_interface::EffortJointInterface *robot,
                                   ros::NodeHandle &root_nh, ros::NodeHandle &controller_nh) {

  return true;
}

void SimpleChassisController::update(const ros::Time &time, const ros::Duration &period) {

}

PLUGINLIB_EXPORT_CLASS(simple_chassis_controller::SimpleChassisController, controller_interface::ControllerBase)
}
