# Smart Environment Monitoring System

## Overview
An ESP32-based environment monitoring system that measures temperature and humidity using a DHT22 sensor. The readings are displayed on an OLED screen, and a buzzer alerts the user when preset limits are exceeded.

## Components Used
- ESP32 development board
- DHT22 temperature and humidity sensor
- 0.96-inch OLED display (128 × 64, I2C)
- Buzzer
- Breadboard and jumper wires

## Working Principle
1. The DHT22 measures the surrounding temperature and humidity.
2. The ESP32 reads the sensor data and displays it on the OLED.
3. If the temperature exceeds 30°C or humidity exceeds 70%, the buzzer activates and a warning is displayed.
4. The readings are continuously updated.

## Pin Connections

| Component | ESP32 Pin |
|---|---|
| DHT22 data | GPIO 4 |
| OLED SDA | GPIO 21 |
| OLED SCL | GPIO 22 |
| Buzzer | GPIO 18 |

## Project Photo

![Smart Environment Monitoring System](./smart-environment-monitor.jpeg)

## Libraries Required
- Adafruit GFX Library
- Adafruit SSD1306
- DHT sensor library
- Wire

## Project Files
- `Smart_Environment_Monitor.ino` — Arduino IDE source code

## Learning Outcomes
- ESP32 GPIO interfacing
- Temperature and humidity sensing
- I2C OLED communication
- Threshold-based alerts using a buzzer

## Future Improvements
- Add Wi-Fi-based monitoring
- Log readings over time
- Display data on a web dashboard

