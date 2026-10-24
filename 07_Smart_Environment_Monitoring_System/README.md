# Smart Environment Monitoring System

## Overview
An ESP32-based environmental monitoring system that measures temperature and humidity using a DHT22 sensor. The readings are displayed on an OLED screen, and a buzzer alerts the user when either measurement exceeds a predefined threshold.

## Features
- Real-time temperature monitoring
- Real-time humidity monitoring
- OLED display for sensor readings and warning messages
- Audible alert when temperature exceeds 30°C or humidity exceeds 70%
- Sensor error detection
- Serial Monitor output for debugging and monitoring

## Components Used
- ESP32 development board
- DHT22 temperature and humidity sensor
- 0.96-inch OLED display (SSD1306, 128 × 64)
- Buzzer
- Breadboard
- Jumper wires

## Pin Connections

| Component | ESP32 Pin / Setting |
|---|---|
| DHT22 Data | GPIO 4 |
| OLED SDA | GPIO 21 |
| OLED SCL | GPIO 22 |
| OLED I²C Address | 0x3C |
| Buzzer | GPIO 18 |

## Working Principle

1. The DHT22 sensor measures the surrounding temperature and relative humidity.
2. The ESP32 reads the sensor values every two seconds.
3. The OLED displays the temperature and humidity readings.
4. If temperature exceeds 30°C or humidity exceeds 70%, the buzzer turns ON and a warning is displayed.
5. When both measurements are within their limits, the display shows "Environment Normal" and the buzzer remains OFF.
6. If a sensor reading fails, the OLED displays an error message and the buzzer turns OFF.

## Alert Conditions

- **Temperature > 30°C:** High-temperature warning.
- **Humidity > 70%:** High-humidity warning.
- **Either condition exceeded:** Buzzer ON.
- **Neither condition exceeded:** Environment Normal.

## Libraries Required
- Adafruit GFX Library
- Adafruit SSD1306
- DHT sensor library

Additional ESP32 support is required in the Arduino IDE.

## Learning Outcomes
- Interfacing sensors with an ESP32
- Reading temperature and humidity data
- Communicating with an OLED using I²C
- Implementing threshold-based alerts
- Integrating sensors, displays, and output devices
- Handling sensor reading errors

## Project Status
Completed and tested as a hands-on embedded systems project.

## Future Improvements
- Add data logging for long-term monitoring.
- Send readings to an IoT dashboard using Wi-Fi.
- Add adjustable alert thresholds.
- Display historical readings and trends.
