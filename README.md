# Arduino RC Car with FS-i6 Transmitter

This project is an Arduino-based RC car controlled using an FS-i6 transmitter. The car supports PWM-based speed control and steering using an L298 motor driver.

## Features
- Controlled via FS-i6 transmitter (CH1 for steering, CH2 for throttle)
- PWM-based speed control for smooth acceleration and deceleration
- Uses an L298 motor driver for motor control
- Default signal handling to prevent abrupt behavior

## Hardware Requirements
- Arduino board
- FS-i6 transmitter & receiver
- L298 motor driver
- Two DC motors (one for movement, one for steering)
- Power source (battery pack)
- Jumper wires

## Wiring Diagram
| Component | Arduino Pin |
|-----------|------------|
| Motor A PWM (Steering) | 6 |
| Motor A IN1 | 4 |
| Motor A IN2 | 5 |
| Motor B PWM (Throttle) | 11 |
| Motor B IN3 | 7 |
| Motor B IN4 | 8 |
| FS-i6 CH1 (Steering) | 9 |
| FS-i6 CH2 (Throttle) | 10 |

## Installation & Usage
1. Clone this repository:
   ```sh
   git clone https://github.com/Rakeshozon/Modifying-RC-car-using-fly-sky-Fs-i6-transmitter-and-Arduino.git
   ```
2. Open the Arduino IDE and upload the provided code to your Arduino board.
3. Connect the components as per the wiring diagram.
4. Power on the FS-i6 transmitter and receiver.
5. Control the car using the FS-i6 joystick.
## Code Files

* `RC_Car_FlySky_Control.ino`: Arduino code that reads signals from the FlySky receiver, interprets them, and controls the motors using the L298N driver.

## Setup and Installation

1.  **Hardware Connections:**
    * Connect the FlySky FS-iA6B receiver's channels to the Arduino Nano/UNO's digital input pins. (Refer to the code for specific pin assignments.)
    * Connect the Arduino's digital output pins to the L298N motor driver's input pins.
    * Connect the L298N motor driver's output pins to the RC car's motors.
    * Connect the L298N to the power supply.
    * Connect the Arduino to the power supply.
    * Ensure all ground connections are common.
2.  **Arduino IDE Setup:**
    * Install the Arduino IDE if you haven't already.
    * Connect your Arduino uno to your computer.
    * Open the `RC_Car_FlySky_Control.ino` file in the Arduino IDE.
    * Select the correct board and port.
    * Upload the code to your Arduino Nano.
3.  **FlySky FS-i6 Setup:**
    * Bind the reciever to the transmitter.
    * Calibrate the transmitter sticks if neccesary.

## Usage

* Power on the RC car and the FlySky FS-i6 transmitter.
* Use the transmitter's sticks to control the RC car's movement.
* 
## Code Explanation
- The `readChannel` function reads PWM signals from the FS-i6 receiver.
- Steering is controlled using Motor A, mapped from FS-i6 CH1.
- Throttle (forward/backward movement) is controlled using Motor B, mapped from FS-i6 CH2.
- PWM signals are mapped to speed and direction values for smooth control.

## Video Demonstration
Watch the project in action on YouTube: [Your Video Link Here](https://youtu.be/_3YylDgggYM?si=gITfw0rmud95TX09)

## Future Improvements
- Adding LED indicators for movement direction
- Integrating sensors for obstacle avoidance
- Implementing Bluetooth/Wi-Fi control

## License
This project is open-source under the MIT License. Feel free to modify and enhance it!

---
### Author
[Rakesh ]  
GitHub: [https://github.com/Rakeshozon]

