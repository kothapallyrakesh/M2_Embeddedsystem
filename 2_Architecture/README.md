
 # Structural Diagram

 
![smartHelmet_complete](https://user-images.githubusercontent.com/98841253/157017424-6cf775a8-6050-46dc-a7ff-f76620a853f1.JPG)


 # Behavioral Diagram
![Structurel_finaSmartHelmet](https://user-images.githubusercontent.com/98841253/157030024-c6af5f5d-f1cc-441b-9de6-fc333325cc9c.JPG)
 # System Design
 ## Components Required
 ## ATMEGA328P Micro controller:
 In this project, microcontroller ATMEGA 328p is used.It can be known as brain of this 
circuit.. One can store commands and values which occur during the mechanism of circuit. 
All the signals are processed in microcontroller and send it to various other devices.
 
 ## Alcohol Sensor(Mq-3)
 This sensor is used to detect alcohol content in biker’s breath. It runs on voltage supply of 2-
3.3V. If the sensitivity of MQ-3 is more than 0.04mg/L in breathe then the driver can't drive 
the bike
 
 ## Helmet switch
 The switch is used to check the helmet is worn or not
 ##Motor
 In this project the motor is used as bike ,if all the conditions satisfied the motor will on otherwise off.
 ## Stepper Motor
 In this project the stepper motor acts as bike,When the helmet is worn the motor will starts to rotate. If the helmet is removed or alcohol is detected the motor will off.It means ignition system of bike will turn off.
## Buzzer
Buzzer is used as actuator when the alcohol is detected the buzzer starts to buzz.
## LED
LED is used for indication of alcohol detection if the rider is drunken the LED will ON along with buzzer.

 ## LCD
 The status of the system is displayed on LCD
 ## Power Supply
 This is required for controller.
