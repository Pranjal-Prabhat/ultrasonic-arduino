# EASYLIB-ARDUINO

---
Author: Pranjal Prabhat 👨‍🔬
---

## What's Diffrent 👀
- Measurment in cm , m , inches.
- Set timeout for sensor.
- Acces to use GPIO pin as vcc directly by functions of this library.

## Overview 🖐
ULRASONIC-ARDUINO simplifies interfacing with ultrasonic sensors. It provides functions for accurate distance measurement in meters, centimeters, and inches.

## How to Use 👀
1. **Download the Library:**
   - Copy the library ZIP file from this repository or download it.

2. **Open Arduino IDE:**
   - Launch the Arduino IDE on your computer.

3. **Navigate to Sketch:**
   - Click on "Sketch" in the top menu bar of the Arduino IDE.

4. **Include the Library:**
   - From the dropdown menu, navigate to "Include Library" -> "Add .ZIP Library..."
   - Select the downloaded ZIP file of the library.

5. **Installation:**
   - The library will be installed, and you can now use it in your Arduino sketches.

6. **Compile the Sketch:**
   - After including the library, compile your Arduino sketch to recognize and use the library functions.

     ```cpp
     #include <ultrasonic.h>
     ```
   - This line includes the `ultrasonic` library in your sketch, allowing you to use its functions.

## Features and Functions 👀

| Function         | Reference and Use                                                      | Arguments                                                      |
|------------------|------------------------------------------------------------------------|----------------------------------------------------------------|
| `ultrasonic`     | Constructor for initializing the ultrasonic sensor.                     | `ultrasonic(trigPin, echoPin, vccPin = 0, delayMillis = 5, timeout = -1)` |
| `readData`       | Returns the distance measured by the sensor in meters.                  | None                                                           |
| `readData_m`     | Equivalent to `readData()`; returns distance in meters.                 | None                                                           |
| `readData_cm`    | Returns the distance measured by the sensor in centimeters.             | None                                                           |
| `readData_inch`  | Returns the distance measured by the sensor in inches.                  | None                                                           |

## **ultrasonic()**
- **Purpose**: Initializes an ultrasonic sensor with specified pins and optional parameters.
- **Arguments**:
  - `trigPin`: Pin connected to the trigger of the ultrasonic sensor.
  - `echoPin`: Pin connected to the echo of the ultrasonic sensor.
  - `vccPin` (optional): Pin connected to the VCC (power) of the sensor. Defaults to 0 if not provided.
  - `delayMillis` (optional): Delay in milliseconds for sensor stabilization after triggering. Defaults to 5ms if not provided.
  - `timeout` (optional): Timeout duration in microseconds for pulseIn function. Defaults to -1 (infinite timeout) if not provided.

## **readData()**
- **Purpose**: Measures the distance from the ultrasonic sensor and returns the value in meters.
- **Return Value**: Distance measured in meters.

## **readData_m()**
- **Purpose**: Same as `readData()`, returning the distance in meters.
- **Return Value**: Distance measured in meters.

## **readData_cm()**
- **Purpose**: Measures the distance from the ultrasonic sensor and returns the value in centimeters.
- **Return Value**: Distance measured in centimeters.

## **readData_inch()**
- **Purpose**: Measures the distance from the ultrasonic sensor and returns the value in inches.
- **Return Value**: Distance measured in inches.
