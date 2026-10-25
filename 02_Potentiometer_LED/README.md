# Potentiometer-Controlled LED Brightness

## Overview
This Arduino experiment demonstrates how a potentiometer can control the brightness of an LED by varying the analog input voltage.

## Working Principle
1. The potentiometer provides a variable voltage to the Arduino analog input.
2. The Arduino reads the voltage using its ADC.
3. The analog reading is mapped to a PWM output value.
4. The PWM signal controls the LED brightness.

## Project Demonstration

Watch the potentiometer-controlled LED and RGB LED experiments in action on LinkedIn:

[Watch the Combined LED Experiments Video](https://www.linkedin.com/posts/meghan-d-b87133337_arduino-electronics-rgbled-activity-7520109007890649088-b1Hr)

## Project Photo

![Potentiometer Controlled LED Brightness](./potentiometer%20controlled%20led%20brightness.jpeg)

## Source Code

[01_Potentiometer_LED_Brightness.ino](./01_Potentiometer_LED_Brightness.ino)

## Hardware Used
- Arduino Uno
- Potentiometer
- LED
- Current-limiting resistor
- Breadboard and jumper wires

## Concepts Learned
- Analog input using `analogRead()`
- PWM output using `analogWrite()`
- Mapping sensor readings to output values
- LED brightness control

