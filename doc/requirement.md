# 考核需求及评分细则

## 考核形式

梯度队员将以2人一组，需求编写麦克纳姆轮底盘的控制器，并用它控制在Gazebo中的英雄机器人底盘，进行最终答辩并提交所有代码（仓库）。

## 需求

未标注的需求需组内完成，禁止询问其他组或导师。

### 必做

如果没有完成必做需求，没有资格参加答辩。

#### 1. 运行 [rm_description]

**分数: 5**

参考资料：

- [rm_description]

#### 2. 学习理解并运行 [simple_chassis_controller]

**分数: 15**

要求：

1. 全程使用 CLion 进行编译和 DeBug （可寻求导师帮助）
2. 如需使用catkin命令行工具，使用 `catkin-tool` 而不是 `catkin_make` (可寻求导师帮助)
3. 理解 `SimpleChassisController` 的类成员意义
4. 理解控制器怎么被加载进模拟器或实际机器人中 (pluginlib)

参考资料：

- [CLion ROS setup tutorial](https://www.jetbrains.com/help/clion/ros-setup-tutorial.html)
- [CLion Attach to process](https://www.jetbrains.com/help/clion/attaching-to-local-process.html)
  调试simple_chassis_controller时, 应该 attach 到 `gzsever`
- [simple_chassis_controller]
- [ros_control: A generic and simple control framework for ROS](http://www.theoj.org/joss-papers/joss.00456/10.21105.joss.00456.pdf)
- [ros_control: wiki](https://github.com/ros-controls/ros_control/wiki)
- [Gazbeo: Tutorial: ROS Control](http://gazebosim.org/tutorials/?tut=ros_control)
- [pluginlib](http://wiki.ros.org/pluginlib)

[rm_description]: https://github.com/gdut-dynamic-x/rm_description

[simple_chassis_controller]: https://github.com/gdut-dynamic-x/simple_chassis_controller

[catkin-tool]: https://catkin-tools.readthedocs.io/

### 选做

#### 1. 完善的版本管理：

**分数： 15**

要求：

1. 及时的commit
2. 需要