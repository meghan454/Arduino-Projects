# Ultrasonic Sensor Projects — Arduino

This folder contains two projects using the HC-SR04 ultrasonic sensor to detect objects and trigger different outputs.

## Project Demonstration

This project includes two Arduino experiments demonstrating distance measurement and sensor-based automation.

1. **Ultrasonic Distance Detection with LED and Buzzer** — Measures the distance to nearby objects and triggers alerts when an object comes within a set range.
2. **Ultrasonic Sensor-Based Servo Barrier** — Uses distance detection to control a servo motor and demonstrate an automatic barrier.

**Video Demonstration:** [Watch the Ultrasonic Sensor Experiments on LinkedIn](https://lnkd.in/p/gtmazeNF)

## 1. Ultrasonic Distance Sensor with LED and Buzzer

The HC-SR04 measures the distance to an object. The Arduino uses the measured distance to control an LED and buzzer according to the programmed threshold.

![Ultrasonic Distance Sensor with LED and Buzzer](./ultrasonic%20distance%20sensor_led_buzzer.jpeg)

**Source code:** [`01_Ultrasonic_Buzzer.ino`](./01_Ultrasonic_Buzzer.ino)

## 2. Ultrasonic Sensor with Servo Motor

This project uses distance measurements to control a servo motor. When an object is detected within the programmed distance, the servo changes position, demonstrating a simple automatic barrier mechanism.

![Ultrasonic Sensor with Servo Motor](./ultrasonic%20sensor_servo%20motor.jpeg)

**Source code:** [`02_Ultrasonic_Servo.ino`](./02_Ultrasonic_Servo.ino)

## Hardware Used
- Arduino board
- HC-SR04 ultrasonic sensor
- LED and current-limiting resistor
- Buzzer
- Servo motor
- Breadboard and jumper wires

## Concepts Learned
- Ultrasonic distance measurement
- Trigger and echo signals
- Conditional control based on distance
- Buzzer and LED interfacing
- Servo motor control

