# RGB LED Experiments — Arduino

## Overview
This folder contains six Arduino experiments exploring RGB LED color control, color mixing, brightness adjustment, and potentiometer-based input.

The experiments use an RGB LED connected to Arduino digital/PWM pins. The code uses active-low control, which is suitable for a common-anode RGB LED.

## 1. RGB Color Sequence

Cycles through red, green, and blue at one-second intervals.

**Source code:** [`01_RGB_Color_Sequence.ino`](./01_RGB_Color_Sequence.ino)

## 2. Red LED Fading

Gradually changes the red LED brightness using PWM, creating a fading effect.

**Source code:** [`02_Red_LED_Fading.ino`](./02_Red_LED_Fading.ino)

## 3. RGB Color Mixing

Demonstrates red, yellow, and purple color combinations by controlling the RGB channels.

**Source code:** [`03_RGB_Color_Mixing.ino`](./03_RGB_Color_Mixing.ino)

## 4. Cyan, White and Off

Demonstrates cyan and white color combinations and turns the LED off.

**Source code:** [`04_RGB_Cyan_White_Off.ino`](./04_RGB_Cyan_White_Off.ino)

## 5. RGB Color Selection Using a Potentiometer

Uses a potentiometer connected to analog pin A0 to select red, green, or blue based on the analog reading.

**Source code:** [`05_RGB_Potentiometer_Color_Select.ino`](./05_RGB_Potentiometer_Color_Select.ino)

## 6. Red Brightness Control Using a Potentiometer

Reads the potentiometer position and maps the analog value to the red LED's PWM brightness.

**Source code:** [`06_Red_Brightness_Potentiometer.ino`](./06_Red_Brightness_Potentiometer.ino)

## Hardware Used
- Arduino Uno
- RGB LED (common-anode type for the active-low code)
- Potentiometer (for experiments 5 and 6)
- Current-limiting resistors
- Breadboard and jumper wires

## Concepts Learned
- Digital output control
- PWM and LED fading
- RGB color mixing
- Analog input using `analogRead()`
- Mapping input values to output brightness
- Interactive control using a potentiometer

## Project Media
Photos and demonstration videos will be added to this project as they are organized.

