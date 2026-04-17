# 🎒 Smart Anti-Theft Bag System (Arduino)

## 📌 Overview
This project is a Smart Anti-Theft Bag System built using Arduino and multiple sensors. It detects suspicious activities like movement, opening, tilting, or lifting of the bag and triggers a buzzer alarm.

## 🚀 Features
- 🔍 **Motion Detection** using PIR sensor
- 🧲 **Zipper Detection** using Reed (magnetic) sensor
- 📐 **Tilt Detection** using tilt sensor
- ⚖️ **Lift Detection** using pressure sensor
- 🔊 **Alarm System** using buzzer

## 🧠 Working Principle
The system continuously monitors all sensors:
- If **motion is detected** (PIR) → buzzer turns ON
- If **zipper is opened** (Reed) → buzzer turns ON
- If **bag is lifted** (Pressure) → buzzer turns ON
- If **bag is tilted** (Tilt sensor) → buzzer beeps

## 🧰 Components Used
- Arduino Uno
- PIR Sensor
- Tilt Sensor
- Reed Switch (Magnetic Sensor)
- Force Sensitive Resistor (Pressure Sensor)
- Buzzer (Active LOW)
- Resistors (2k–10k)
- Breadboard & Jumper Wires
- Power Supply (USB / Power Bank)

## 🔌 Circuit Connections

### PIR Sensor
- **VCC** → 5V
- **GND** → GND
- **OUT** → Pin 2

### Tilt Sensor
- **VCC** → 5V
- **GND** → GND
- **DO** → Pin 3

### Reed Sensor
- **One wire** → GND
- **Other wire** → Pin 4

### Pressure Sensor (FSR)
- **One pin** → 5V
- **Other pin** → A0
- **Resistor** → A0 → GND

### Buzzer
- **VCC** → 5V
- **GND** → GND
- **I/O** → Pin 9
