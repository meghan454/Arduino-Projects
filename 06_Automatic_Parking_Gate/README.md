# Automatic Parking Gate Using Arduino

## Overview
An Arduino-based automatic parking gate system that detects an approaching vehicle using an ultrasonic sensor and controls a servo motor to open and close the gate automatically.

## Features
- Automatic vehicle detection using an ultrasonic sensor
- Servo motor-based gate control
- RGB LED status indication
- Buzzer alert when an object is detected
- Real-time distance monitoring through the Serial Monitor

## Components Used
- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Servo Motor
- RGB LED
- Buzzer
- Breadboard
- Jumper Wires

## Pin Connections

| Component | Arduino Pin |
|---|---|
| Ultrasonic Trig | 9 |
| Ultrasonic Echo | 10 |
| Servo Signal | 5 |
| RGB LED Red | 11 |
| RGB LED Green | 12 |
| RGB LED Blue | 13 |
| Buzzer | 6 |

## Working Principle

1. The ultrasonic sensor measures the distance of an object in front of it.
2. When an object is detected within 15 cm, the servo rotates to 90°, opening the gate.
3. The buzzer turns ON and the RGB LED changes its indication.
4. When the detected distance exceeds 15 cm, the servo returns to 0°, closing the gate, and the buzzer turns OFF.
5. The measured distance is displayed in the Serial Monitor at 9600 baud.

## Control Logic

- **Distance ≤ 15 cm:** Gate opens, buzzer ON.
- **Distance > 15 cm:** Gate closes, buzzer OFF.

## Learning Outcomes
- Interfacing an ultrasonic sensor with Arduino
- Controlling a servo motor
- Working with RGB LEDs and buzzers
- Using conditional statements for automation
- Combining multiple electronic components into one system

## Project Status
Completed as a hands-on Arduino electronics project.

## Future Improvements
- Add an LCD to display distance and gate status.
- Add vehicle counting functionality.
- Improve detection reliability and gate timing.
