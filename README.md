Arduino Projects

 Overview
This repository contains multiple Arduino projects and experiments demonstrating the use of various sensors, actuators, displays, and communication modules.  
Each project includes:
- A ready-to-use `.ino` sketch
- Component requirements
- Basic wiring information (based on standard Arduino pin assignments)

Project List

 1. PIR Sensor
Description:Detects motion using a Passive Infrared (PIR) sensor and triggers an output (e.g., LED or buzzer).  
 Required Components:
- Arduino Uno/Nano/Mega  
- PIR motion sensor module  
- LED and resistor (optional)  
 Wiring Notes:  
- PIR VCC → Arduino `5V`  
- PIR  GND → Arduino `GND`  
- PIR  OUT → Digital pin (e.g., D2)



  2. Fading LED
 Description: Demonstrates PWM (Pulse Width Modulation) to gradually fade an LED in and out.  
 Required Components:  
- Arduino board  
- LED + 220Ω resistor

Wiring Notes:  
- LED anode → Arduino PWM pin (e.g., D9)  
- LED cathode → GND



 3. Temperature Sensing with LM35
Description: Reads analog temperature values from the LM35 sensor and displays them in °C.  
 Required Components:
- Arduino board  
- LM35 temperature sensor  
- Jumper wires  
 Wiring Notes: 
- LM35 VCC → 5V  
- LM35  GND → GND  
- LM35  OUT → Analog pin (e.g., A0)



4. Ultrasonic Sensor
Description: Measures distance using an HC-SR04 ultrasonic sensor and prints the result to the Serial Monitor.  
equired Components:  
- Arduino board  
- HC-SR04 ultrasonic sensor  
Wiring Notes: 
- VCC → 5V  
- GND → GND  
- Trig → D9  
- Echo → D10



5. Water Level Sensor
Description: Detects the presence or level of water and outputs an analog signal.  
 Required Components:  
- Arduino board  
- Water level sensor module  
 Wiring Notes:  
- VCC → 5V  
- GND → GND  
- Signal → A0



 6. DC Motor Control
  Description: Controls the speed and direction of a DC motor using PWM and a motor driver (L293D/L298N).  
  Required Components:  
- Arduino board  
- DC motor  
- L293D or L298N motor driver module  
- External power supply (if needed)  
 Wiring Notes:  
- Motor driver input pins → Arduino digital pins  
- Motor power → External supply (6–12V depending on motor)



  7. Stepper Motor Control
 Description: Rotates a stepper motor with precise step control using the Stepper library.  
 Required Components:   
- Arduino board  
- Stepper motor (e.g., 28BYJ-48)  
- ULN2003 driver board  
 Wiring Notes:
- Motor wires → ULN2003  
- ULN2003 IN pins → Arduino digital pins



 8. Servo Motor Control
 Description:  Moves a servo motor to specific angles using PWM control.  
 Required Components: 
- Arduino board  
- Servo motor (e.g., SG90, MG995)  
 Wiring Notes: 
- Servo VCC → 5V  
- Servo GND → GND  
- Servo signal → PWM pin (e.g., D9)


 9. Tone Library
 Description: Uses Arduino’s tone library to generate sounds on a piezo buzzer.  
 Required Components:  
- Arduino board  
- Piezo buzzer  
 Wiring Notes:  
- Buzzer positive → Digital pin (e.g., D8)  
- Buzzer negative → GND


 10. Reading Analog Voltage
 Description:  Reads voltage from an analog pin and converts it to a human-readable format.  
 Required Components: 
- Arduino board  
- Voltage source within Arduino’s ADC range (0–5V)  
 Wiring Notes: 
- Positive → A0  
- Negative → GND



11. Keyboard & Keypad Interface
*Description: Reads input from a standard 4x4 matrix keypad or a single keyboard module.  
*Required Components:  
- Arduino board  
- 4x4 membrane keypad or compatible keyboard module  
  Wiring Notes: 
- Keypad rows/columns → Arduino digital pins


 12. Wireless Communication Examples
*Description: Demonstrates sending and receiving data wirelessly (e.g., NRF24L01, HC-05, ESP modules).  
*Required Components:  
- Arduino boards (2x for Tx and Rx)  
- Wireless module (depending on example)  
Wiring Notes:  
- Depends on module type (see module datasheet)


 13. LED Bar Graph
Description: Lights up an LED bar graph based on input values.  
Required Components: 
- Arduino board  
- LED bar graph module or discrete LEDs + resistors  
Wiring Notes: 
- LED pins → Arduino digital pins (sequential)



How to Run
1. Download or clone this repository:
   bash
   git clone https://github.com/shovo896/Arduino-.git


2. Open the desired `.ino` file in Arduino IDE.
3. Wire the components according to the wiring notes.
4. Select the correct board and COM port in Arduino IDE.
5. Upload the sketch.
6. Observe and test the project.


 Media & Diagrams

Images and diagrams are included in the repository to assist with wiring and visualization of outputs.


 Contributing

Pull requests are welcome! If you have additional Arduino projects, improvements, or bug fixes, feel free to contribute.

