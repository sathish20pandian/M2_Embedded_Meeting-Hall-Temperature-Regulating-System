## Meeting Hall Temperature Regulating System


## Introduction
The Meeting hall regulating system is basically used to monitor the temperature of a meeting hall according to the number of members presented in the meeting hall. When a members in the meeting hall gets seated on a meeting hall, the button sensor gets activated. After that, the meeting hall analyser gets access to turn on the heater.The temperature sensor buttons keeps monitoring the temperature of the meeting hall on the basis of members available in hall and sends the analog value to the ATmega328 microcontroller. The microcontroller processes the analog input of the temperature sensor button and outputs a temperature value through serial communication. All the activities of the regulating systen is performed with a microcontroller called Atmega328 and monitored by CRO serial communication o/p..

## Required Components
- ATmega328 Microcontroller
- Oscilloscope
- Push button sensor
- Serial monitor
- 5V Power Supply


## Circuit Description
The functionality of the meeting hall regulating system is coded in embedded c through visual studio and the working of this regulating system is performed using simulation software called SimulIDE.Where the system also includes push buttons according to number of sheats availabe for maintaining the counts of members presented in the meeting hall and according to it manages increasing or decreasing of the temperature in the meeting hall and sends analog data to ATmega324 controller.

## Oscilloscope
An oscilloscope, formerly known as an oscillograph, is an instrument that graphically displays electrical signals and shows how those signals change over time.The signals are plotted on a graph, which shows how the signal changes. The vertical (Y) access represents the voltage measurement and the horizontal (X) axis represents time.

## ATmega328 controller
ATMEGA328P| – Simplified Features|
|---------|----------------------|
|CPU|8-bit AVR
|Number of Pins|28
|Operating Voltage (V)|+1.8 V TO +5.5V
|Number of programmable  I/O lines|23
|Communication Interface|Master/Slave SPI Serial Interface(17,18,19 PINS) [Can be used for programming this controller]
|Programmable Serial USART(2,3 PINS) [Can be used for programming this controller]|Two-wire Serial Interface(27,28  PINS)[Can be used to connect peripheral devices like Servos, sensors and memory devices]
|ADC Module|6channels, 10-bit resolution ADC
|Timer Module|Two 8-bit counters with Separate Prescaler and compare mode, One 16-bit counter with Separate Prescaler,compare mode and capture mode.|
|Analog Comparators|1(12,13 PINS)
|PWM channels|6
|External Oscillator|0-4MHz @ 1.8V to 5.5V,   0-10MHz @ 2.7V to 5.5V ,  0-20MHz @ 4.5V to 5.5V|
|Internal Oscillator|8MHz  Calibrated Internal Oscillator
|Program Memory Type|Flash
|Program Memory or Flash memory|32Kbytes[10000 write/erase cycles]
|CPU Speed|1MIPS for 1MHz
|RAM|2Kbytes Internal SRAM
|EEPROM|1Kbytes EEPROM
|Operating Temperature|-40°C to +105°C(+105 being absolute maximum, -40 being absolute minimum)

## Serial monitor
The Serial Monitor is an essential tool when creating projects with SimulIDE. It can be used as a debugging tool, testing out concepts or to communicate directly with the ATmega328 controller.. 

 ## Working 
 
- The System will sense the members in the meeting hall who are seated or not.
- The user who is regulating the sytem of the meeting hall has the access to modify the temperature in the meeting hall on the basis of members available.
- As per the count of members in the meeting hall, Heater will generate the heat accordingly.
- It is best for cold Countries for heat control and for normal countries it can be used as both increasing or decreasing the heatness or coldness.
- Low cost instalzation and can be redesigned according to the needs.
- simulation and prototypical Approach can be processed.


