#  Embedded Touch Detection System – TTP223

![Platform](https://img.shields.io/badge/platform-Arduino-orange)
![Language](https://img.shields.io/badge/language-C++-blue)

## An embedded capacitive touch detection system using the TTP223 touch sensor module for digital input interfacing and structured event-based control logic.

---
 
## 🚀 Project Overview

This project demonstrates digital touch detection using the TTP223 capacitive touch sensor and Arduino (Uno R4 recommended).

The system:

- Detects touch events
- Reads digital HIGH/LOW signal
- Implements event-based logic
- Displays structured serial output
- Follows Doxygen documentation standards
- Enforces Git-based development discipline

This project introduces:

- Digital sensor interfacing
- Event-driven programming
- Input signal handling
- Embedded system structuring

---

## 🔧 Hardware Requirements

- Arduino Uno R4
- TTP223 Capacitive Touch Sensor Module
- Breadboard
- Jumper wires
- USB cable

---

## 🔌 Wiring Connections

| TTP223 Pin | Arduino |
|------------|----------|
| VCC        | 5V       |
| GND        | GND      |
| OUT        | Digital Pin 2 |

---

## ⚙ Working Principle

- TTP223 uses capacitive sensing.
- When touched, the output pin becomes HIGH.
- When released, output becomes LOW.
- Arduino reads digital state and processes logic.

---

## 💻 Code Explanation -

- The touch sensor is connected to a digital input pin of Arduino.
- The LED is connected to an output pin to indicate touch detection.
- In the `setup()` function:
  - Touch sensor pin is set as INPUT.
  - LED pin is set as OUTPUT.
  - Serial communication is started using `Serial.begin(9600)`.
- In the `loop()`:
  - The sensor value is read using `digitalRead()`.
  - If the value is HIGH (touched):
    - LED turns ON.
    - "Touched!" message is printed.
  - If the value is LOW (not touched):
    - LED turns OFF.
    - "Not touched" message is printed.
  - A small delay is added for stability.

---

## 📷 Sample Output -

- Not touched  
- Not touched  
- Touched!  
- Touched!  
- Not touched  

---

## 🚀 Features -

- Real-time touch detection  
- Beginner-friendly implementation  
- Uses simple digital input/output  
- Serial monitoring for debugging  
- Can be used in automation and IoT projects  


