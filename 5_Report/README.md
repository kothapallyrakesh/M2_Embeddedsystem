# Report
## Table of Contents
* Description
* Requirements
* Architecture
* System Design
* Test Plan and Output
* Images and Videos
* References
## Description
Now a days bike accidents are happening more due to drunken driving in that case if the rider not worn the helmet that leads to death.considering all this issues
The Smart Helmet application is implementing to detect whether the rider is drunken or not and it ensures the helmet is worn or not.If these conditions falls the bike ignition system will turn off and the buzzer will starts to buzz and LED will ON .If the helmet is not worn the LCD displays the message "NO Helmet" and if alcohol detected it displays the message.In this way we can reduce the accidents as well as death rate.
## High Level Requirements
|ID  |DESCRIPTION                                                        |
|:---|:------------------------------------------------------------------|
|HLR1|The Application should detect the alcohol|
|HLR2|The Application should check whether the helmet is worn or not|
|HLR3|If any above case failed the system should off the ignition system of bike|
|HLR4|The Buzzer will ON if alcohol detected|
|HLR5|The LED will ON and status is updated on LCD|

## Low Level Requirements
 |ID  |DESCRIPTION                                                        |
 |:---|:------------------------------------------------------------------|
 |LLR1|System will check for helmet switch|
 |LLR2|If helmet is not worn display message on LCD "No Helmet"|
 |LLR3|The Ignition system will ON |
 |LLR4|If alcohol detected Buzzer and LED will ON|
 |LLR5|It should  indicate all the status of application on LCD |
 
 # SWOT Analysis
 ## Strengths
 * Light Weight
 * Cost Effective
 * Environment Freindly
 * Better mechanical properties
 ## Weakness
 * Hand layout process
 * Low density
 ## Opportunities
 * Vast use of natural fiber
 * Design can be updated easily
 ## Threads
 * If the ratio of resin and hardner can't use properly the mechanical proprties can be changed rather than expected
 # 4W'S & 1H
 ## WHO
 The smart helmet is an system. It can be used by all bike riders.
 ## WHAT
 Smart Helmet is an safety system for bike riders and it will reduce the drunken drivers.
 ## WHEN
 This smart helmet is very useful for both bike riders and traffic police system when rider may drunken and not wearing the helmet.
 ## Where
 The smart helmet is essential for all bike riders and can be used in hazardous manufacturing area.
 ## How
 The smart helmet will detect alcohol,crashes etc
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
 # TestPlan and Output
TEST ID| TEST CASE OBJECTIVE| INPUT DATA   | EXPECTED OUTPUT| ACTUAL OUTPUT| STATUS|
|:-----|:-------------------|:-------------|:---------------|:-------------|:------|
|TC_1 |FOR WEARING HELMET|SWITCH=1|High|HIGH|PASS|
|TC_2|FOR WEARING HELMET|SWITCH=0|HIGH|LOW|FAIL
|TC_3|FOR CHECKING ALCOHOL|ALC=1|HIGH|HIGH|PASS|
|TC_4|FOR CHECKING ALCOHOL|ALC=0|HIFG|LOW|FAIL|
|TC_5|IGNITION SYSTEM ON|SWITCH==HIGH && ALC==LOW|HIGH|HIGH|PASS|
|TC_6|IGNITION SYSTEM ON|SWITCH==HIGH && ALC==LOW|HIGH|LOW|FAIL|
# Images and Videos
## If the helmet is not worn-Ignition System OFF,Buzzer ON and Led ON
![Screenshot (498)](https://user-images.githubusercontent.com/98841253/157006965-4ff754bb-74de-4ada-bcb7-ebe415ed6159.png)
## Helmet is worn-Ignition System ON
![Screenshot (497)](https://user-images.githubusercontent.com/98841253/157007825-10222daa-055a-423d-a202-c7f9e861a3e6.png)
## If alcohol detected -Ignition system OFF,Buzzer ON and LED ON
![Screenshot (499)](https://user-images.githubusercontent.com/98841253/157008191-41668a83-18ea-412f-9704-7dd428c12a8a.png)
## Working Video
https://user-images.githubusercontent.com/98841253/157019523-fa8ff456-984a-454f-91b2-a445b5d03a87.mp4
## References
[Reference_1](https://www.youtube.com/watch?v=3CmdD5RKECM)


