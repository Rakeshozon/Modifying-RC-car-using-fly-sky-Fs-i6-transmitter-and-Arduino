Arduino RC Car with FS-i6 Transmitter

This project is an Arduino-based RC car controlled using an FS-i6 transmitter. The car supports PWM-based speed control and steering using an L298 motor driver.

Features

Controlled via FS-i6 transmitter (CH1 for steering, CH2 for throttle)

PWM-based speed control for smooth acceleration and deceleration

Uses an L298 motor driver for motor control

Default signal handling to prevent abrupt behavior

Hardware Requirements

Arduino board

FS-i6 transmitter & receiver

L298 motor driver

Two DC motors (one for movement, one for steering)

Power source (battery pack)

Jumper wires

Wiring Diagram

Component

Arduino Pin

Motor A PWM (Steering)

6

Motor A IN1

4

Motor A IN2

5

Motor B PWM (Throttle)

11

Motor B IN3

7

Motor B IN4

8

FS-i6 CH1 (Steering)

9

FS-i6 CH2 (Throttle)

10

Installation & Usage

Clone this repository:

git clone https://github.com/your-username/your-repo.git

Open the Arduino IDE and upload the provided code to your Arduino board.

Connect the components as per the wiring diagram.

Power on the FS-i6 transmitter and receiver.

Control the car using the FS-i6 joystick.

Code Explanation

The readChannel function reads PWM signals from the FS-i6 receiver.

Steering is controlled using Motor A, mapped from FS-i6 CH1.

Throttle (forward/backward movement) is controlled using Motor B, mapped from FS-i6 CH2.

PWM signals are mapped to speed and direction values for smooth control.

Video Demonstration

Watch the project in action on YouTube: Your Video Link Here

Future Improvements

Adding LED indicators for movement direction

Integrating sensors for obstacle avoidance

Implementing Bluetooth/Wi-Fi control

License

This project is open-source under the MIT License. Feel free to modify and enhance it!
