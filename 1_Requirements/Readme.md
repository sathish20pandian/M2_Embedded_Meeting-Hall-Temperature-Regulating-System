## Requirements
As the outside temperature varies, it may affect our room temperature. So there is a need for technique to control the temperature of the meeting hall according to the number of members presented in the room even if the outside temperature varies.This meeting hall Temperature regulating system Controller Using Atmega328 Microcontroller overcomes this problem. The system allows to regulates the specific temperature of the meeting hall and monitor the overall temperature through the CRO.

The system also includes push buttons according to number of seats availabe for maintaining the counts of members presented in the meeting hall and according to it manages increasing or decreasing of the temperature in the meeting hall and sends analog data to ATmega324 controller..

## Introduction
The Meeting hall regulating system is basically used to monitor the temperature of a meeting hall according to the number of members presented in the meeting hall. When a members in the meeting hall gets seated on a meeting hall, the button sensor gets activated. After that, the meeting hall analyser gets access to turn on the heater.The temperature sensor buttons keeps monitoring the temperature of the meeting hall on the basis of members available in hall and sends the analog value to the ATmega328 microcontroller. The microcontroller processes the analog input of the temperature sensor button and outputs a temperature value through serial communication. All the activities of the regulating system is performed with a microcontroller called Atmega328 and monitored by CRO serial communication o/p..

## Features

- The System will sense whether the seats in the meeting hall is occupied or not.
- The user who is regulating the system of the meeting hall has the access to modify the temperature in the meeting hall on the basis of members available.
- As per the count of members in the meeting hall, Heater will generate the heat accordingly.
- It is best for cold countries for heat control and for normal countries it can be used as both increasing or decreasing the heatness or coldness.
- Low cost instalzation and can be redesigned according to the needs.
- simulation and prototypical Approach can be processed.

## Simulation
The functionality of the meeting hall regulating system is coded in embedded c through visual studio and the working of this regulating system is performed using simulation software called SimulIDE. 

## SWOT- Strengths, Weakness, Opportunities and Threats
## Strengths
- It is User Friendly
- Easy to alter the temperature inside the meeting hall according to the needs.
- Low power consumption.
 ## Weakness
- Its cannot be connected wirelessly and its should be managed and maintained regularly.
## Opportunities
- It can applied commercially by implementing along with both the Heater and AC for performance according to the temperature.
## Threats
- Not suitable for average or high temperature places.
- Maintaince of the system is high.

## High Level Requirements
RID|DESCRIPTION|	STATUS|
|--|-----------|-----------|
|HLR1|	ATmega328|	Implemented|
|HLR2| Embedded	C |	Implemented|
|HLR3|	Arduino IDE|	Implemented|
|HLR4| Visual studio |Implemented|
|HLR5|SimulIDE|Implemented
## Low Level Requirements
RID|DESCRIPTION	|STATUS|
|--|------------|------|
|LLR1|Temperature Sensor|	Implemented|
|LLR2|Button sensor|	Implemented|
|LLR3|serial communication o/p|	Implemented|
|LLR4| Power Supply| Implemented|

## 4W's and 1'H
## Why:

The main concept of building this project is to easily regulate the temperature of the meeting hall on the basis of the members the presented in the hall to generate an output signal.

## What:

This project is all about the regulating the overall temperature of the meeting hall and gives the data to control the temeprature inside the hall.

## Where:

This project is best for meeting hall,computer lab,physics lab, biology lab and library because these places are covered with crowds and due to this temperature may rise.this project is used to regulate the overall temeprature of the hall. 

## When:

This project is going to be deployed on 2/12/2021.

## How:

This project includes push buttons according to number of sheats availabe for maintaining the counts of members presented in the meeting hall and according to it manages increasing or decreasing of the temperature in the meeting hall and sends analog data to ATmega324 controller and monitored using CRO.
