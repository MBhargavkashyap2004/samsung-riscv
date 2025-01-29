## Line follower robot using VSDsquadronmini

![image](https://github.com/user-attachments/assets/a1706305-4c25-46e1-a812-57f36f5a286d)

A line follower robot is a type of autonomous robot designed to follow a predefined path, typically marked by a visible line or track, such as a black line on a white surface or vice versa. These robots are equipped with sensors that allow them to detect the line and adjust their movement accordingly to stay on course. Here's a brief overview of how a line follower robot works: <br>

## 1. Sensors:
Infrared (IR) Sensors: These are the most common sensors used in line follower robots. They consist of an IR emitter and an IR detector. The sensor detects the reflected infrared light from the surface. If the robot is over a black line, less light is reflected back, and the sensor detects this as "low" or "off." On a white surface, more light is reflected back, which the sensor detects as "high" or "on."
Typically, line-following robots use 3 IR sensors (left, center, and right) for better accuracy and control:
Left IR sensor: Detects the left part of the line.
Center IR sensor: Detects if the robot is directly over the line.
Right IR sensor: Detects the right part of the line.
## 2. Motor Control:
The robot's movement is controlled using motors, often driven by an H-bridge motor driver (like the L293D), which allows for controlling both the speed and direction of the motors. <br>
By adjusting the motor speeds or stopping certain motors, the robot can turn or move forward, based on the sensor inputs.<br>

## 3. Decision Logic:
The basic decision-making logic of a line follower robot can be summarized as: <br>
If the middle sensor detects the line (usually black on a white background), the robot moves forward. <br>
If the left sensor detects the line, the robot will turn right to align back with the line.<br>
If the right sensor detects the line, the robot will turn left to realign.<br>
If no sensor detects the line (all sensors detect white), the robot may stop or perform a predefined action like turning in place to search for the line.<br>

## 4. Working Example:
As the robot moves along the track, it constantly reads input from the IR sensors. <br>
Depending on which sensor detects the line, the robot adjusts its movement: <br>
If the left sensor detects the line, it turns right. <br>
If the right sensor detects the line, it turns left. <br>
If the middle sensor detects the line, it moves forward. <br>
If no sensor detects the line, it stops or searches for the line. <br>

## 5. Applications:
* **Robotics Competitions**: Many robotics competitions feature line-following tasks, where robots must follow a line or path on the ground.
* **Industrial Automation**: Line-following robots are used in industries for material handling, where robots follow a line path to transport items.
* **Educational Projects**: Building a line follower robot is a common beginner project in robotics and embedded systems education.
## Advantages:
* **Simple Design**: The line follower robot is one of the simplest forms of autonomous robots, making it an excellent project for learning about robotics and control systems. <br>
* **Low-Cost Sensors**: IR sensors are inexpensive and readily available, making this type of robot affordable.<br>
* **Versatility**: Line followers can be adapted to different surfaces, paths, and tasks by modifying the sensor configuration and decision logic.<br>

# Components used
This line follower robot uses 3 IR sensors, one L293D motor driver, 2 motors and VSDSquadronmini as controller. <br>

# Pin configuration

VCC- 5v <br>
GND - GND <br>
IR_1_Pinout = PD5 <br> 
IR_2_Pinout = PD6 <br>
IR_3_Pinout = PD7 <br>
Driver_Pinout = PD1, PD2, PD3, PD4 <br>
12Volts as Vin <br>
Two motors connected to Motor driver. <br>

