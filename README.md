# simple_chassis_controller

## Overview

This is controller example/template for an assignment which assesses DynamicX reserve member.

**Keywords:** RoboMaster, ROS, ros_control

### License

The source code is released under a [BSD 3-Clause license](LICENSE).

**Author: QiayuanLiao<br />
Affiliation: [Dynamicx]()<br />
Maintainer: QiayuanLiao, liaoqiayuan@gmail.com**

The simple_chassis_controller package has been tested under [ROS] Noetic on respectively 18.04 and 20.04. This is
research code, expect that it changes often and any fitness for a particular purpose is disclaimed.

## Installation

### Building from Source

#### Dependencies

- [Robot Operating System (ROS)](http://wiki.ros.org) (middleware for robotics),
- [rm_description](https://github.com/gdut-dynamic-x/rm_description)
- controller_interface
- forward_command_controller
- hardware_interface
- pluginlib

Install dependencies:

    sudo rosdep install --from-paths src

#### Building

To build from source, clone the latest version from this repository into your catkin workspace and compile the package
using

	cd catkin_workspace/src
	git clone git@github.com:gdut-dynamic-x/rm_description.git
    # git clone https://github.com/gdut-dynamic-x/rm_description.git
	cd ../
	catkin build # Actually nothing to build

## Usage

Run the simulation and controller with:

	roslaunch simple_chassis_controller run_simulation_and_controller.launch

## Config files

Config file config

* **controllers.yaml**  Params of simple_chassis_controller and joint_state_controller.

## Launch files

* **run_simulation_and_controller.launch:** Hero chassis only simulation and simple chassis controller

## Bugs & Feature Requests

Please report bugs and request features using
the [Issue Tracker](https://github.com/gdut-dynamic-x/simple_chassis_controller/issues)
.

[ROS]: http://www.ros.org
