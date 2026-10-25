# LDR Automatic Lighting — Arduino Experiments

## Overview
This folder contains two Arduino experiments using a Light Dependent Resistor (LDR) to respond to changes in ambient light.

## Project Demonstration

This project includes two Arduino experiments demonstrating light sensing and automatic responses.

1. **LDR-Based Automatic Night Lamp** — Automatically controls an LED based on ambient light levels.
2. **LDR-Based Light Detection with Buzzer** — Uses light-level changes to trigger an audible alert.

**Video demonstration:** [Watch the LDR experiments on LinkedIn](https://lnkd.in/p/gGedxQHH)

## 1. LDR Automatic Night Lamp

An LDR senses the surrounding light level. The Arduino uses the sensor reading to control an LED automatically, demonstrating a simple automatic lighting system.

![LDR Automatic Night Lamp](./LDR_Automatic_Night_Lamp.jpeg)

**Source code:** [`01_LDR_Automatic_Night_Lamp.ino`](./01_LDR_Automatic_Night_Lamp.ino)

## 2. LDR Night Lamp with Buzzer

This experiment extends the LDR-based night lamp by adding a buzzer to provide an audible output under the programmed conditions.

![LDR Night Lamp with Buzzer](./LDR_Automatic_Night_Lamp_Buzzer.jpeg)

**Source code:** [`02_LDR_Night_Lamp_Buzzer.ino`](./02_LDR_Night_Lamp_Buzzer.ino)

## Hardware Used
- Arduino board
- LDR sensor or LDR module
- LED and current-limiting resistor
- Buzzer (second experiment)
- Breadboard and jumper wires

## Concepts Learned
- Light sensing using an LDR
- Analog sensor readings
- Conditional control using sensor values
- Interfacing LEDs and buzzers
- Basic automation with Arduino

