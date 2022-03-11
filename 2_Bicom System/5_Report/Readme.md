# 1.Remote keyless entry systems.
  * i. Description
  * ii. Identifying features
  * iii. Research
  * iv. 5W’s & 1H 
  * v. S.W.O.T analysis
# 2.Requirements
  * i. High level requirements
  * ii. Low level requirements and applications
# 3.Architecture    
  * i. Block diagram
  * ii. Behavioural Diagram
      * a. High Level Flow chart Behavioural Diagram
      * b. Low Level Flow chart Behavioural Diagram
  * iii.Structural Diagram
  * i. UML usecase diagram
  * iv. Pin diagram (STM32f407)
# 4.Test plan and Output
  * i. High level test plan
  * ii. Low level test plan

## 1.Remote Keyless Entry Systems
# 1.1 Description
BiCom system is a communication system between vehicle and its remote. The system gets its name as it performs two way communication that is from remote to vehicle and vehicle to remote. Here the transmission of data is from car to keyfob. The functionalities here are Window status, alarm status, car battery information, door status. These four functionalities will be implemented in this project. These functionalities are performed in project 1 RKE. 

# Identifying Features of Bicom System
- The use shall get window status display when  User Button Clicked once.
- The user shall  get Alram status display when  User Button Clicked twice.
- The user shall get  battery information status display when User Button Clicked thrice.
- The user shall get Door status display when  User Button Clicked forthfold.

# 1.3 Research

* The term remote keyless system (RKS), also called keyless entry or remote central locking, refers to a lock that uses an electronic remote control as a key which is activated   by a handheld device or automatically by proximity.
  Keyless entry is a convenient system that removes the need for a physical key to unlock car doors. A “fob” or keychain, whether it’s in your hand, in a pocket, or in your       bag, will unlock the door hands-free. The same fob works to start the engine.
* Keyless entry is intended to enable a driver to lock and unlock their car without a key. Keyless entry to a vehicle is usually attained by sending a radio frequency signal     from a remote transmitter to the receiver in the car. According to Compustar, the signal is sent as encrypted data from the keychain to your car.
* Most keyless entry systems also allow the driver to open the vehicle, particularly the trunk, by pressing a button or using a shoe. The sensors for the trunk detect movement   and open it automatically, a handy detail for those who are grocery shopping or moving. The car sends out the short radio signal. If the fob is in range, it’s then triggered   to respond to the car, sending out its own code. The car recognizes this and unlocks the doors.

## 1.4 5W's And 1H

![Untitled](https://user-images.githubusercontent.com/46949062/157973702-8aab9907-782d-4682-9762-a54d96369d92.jpg)


## 1.5 SWOT Analysis

![image](https://user-images.githubusercontent.com/98837660/157905281-dbd303fb-879a-41ad-91ca-1c45f67756f4.png

 ## Strengths
* smart car experience usage.
* easy process of converting information or data into a code.
* no need for manual operation by humans.
* Easy operation and take all the commands at one input.
## Weakness
* it works in a limited range of distance .
* it takes some time to take input commands and give responses.
* use may not get a correct response in some time due to delay in time.
## Opportunities
* the system is cost-effective and economically feasible.
* the system is used as a control system for automobiles.
* the system is more secure because its works on the data description.
* the system is easy to use and it is having the scope in current automobiles.
## Threats
* the system will not be taking the next command until the operation or function of the first command end.
* system will not work if there is no power supply.
* system will get damaged if in case of excessive power supply.

## 2. Requirements
# 2.1 High Level Requirements
|   ID     | High Level Requirements |
|----------| -----------------------------------------------------------------------|
|HLR1| System shall display Window status of the car  |
|HLR2| System shall display Alarm status of the car   |
|HLR3| System shall display Battery status of the car |
|HLR3| System shall display Door status of the car |


# Low Level Requirements

|   ID     | Low Levl Requirements |
|----------| -----------------------------------------------------------------------|
|LLR1.1| Based on user press of Button all leds need to turn ON | 
|LLR1.2| Based on user press of Button all leds need to turn OFF|  

|   ID     | Low Level Requirements |
|----------| -----------------------------------------------------------------------|
|LLR2.1|	According to the press of Button all LED's shall be ON at a time indicating the activation of alaram |
|LLR2.2|	According to the press of Button LED's shall be OFF at a time indicating the de activation of alaram |

|   ID     | Low Level Requirements |
|----------| -----------------------------------------------------------------------|
|LLR3.1|	According to the press of Button by three times  all LED's shall be ON in a clockwise manner |
|LLR3.2| According to the press of Button by three times  all LED's shall be OFF in a anti-clockwise manner|

|   ID     | Low Level Requirements |
|----------| -----------------------------------------------------------------------|
|LLR4.1|	According to the press of Button by four times  all LED's shall be ON in a anti-clockwise manner |
|LLR4.2| According to the press of Button by four times  all LED's shall be OFF in a clockwise manner|


------------------------------------------------------------------------------------------------------------------------------------------
## Applications 

 * Bi-directional communication makes this possible. When the door handle is pulled (or some similar trigger is activated) the base unit located within the vehicle emits a         short range, low frequency signal- polling for a nearby key fob transponder.
  * if present, the key fob recognizes the signal and responds with a UHF (ultra-high frequency) signal, transmitting a code to be authenticated by the base unit encryption         firmware, such as Microchip Technology's Keylock.

--------------------------------------------------------------------
# Architecture
# 1 . Block Diagram



 ![Block diagram](https://user-images.githubusercontent.com/55775183/157879751-45b1ef41-d842-4bf4-baba-526e34860a17.png)
 - Electronic Control Unit(ECU)         
    Electronic control unit that controls a series of actuators on an internal combustion engine to ensure optimal engine performance.
 - LCD Display  
   A liquid-crystal display (LCD) is a flat-panel display or other electronically modulated optical device.
   It uses the light-modulating properties of liquid crystals combined with polarizers. Liquid crystals do not emit light directly, instead using a backlight or reflector to      produce images in color or monochrome.
- LED  
   A light-emitting diode (LED) is a semiconductor light source that emits light when current flows through it. 
   Electrons in the semiconductor recombine with electron holes, releasing energy in the form of photons.
- Transmitter                 
   A radio transmitter is usually part of a radio communication system which uses electromagnetic waves (radio waves) to transport information (in this case sound) over a         distance.
- Buzzer                 
  The buzzer is a sounding device that can convert audio signals into sound signals. It is usually powered by DC voltage. It is widely used in alarms in Bicom System.
- Key Pad                                                
  Keypad access systems are simple security systems that require just a PIN code for door with no access card or credential required. Keypad systems are generally   used for     access applications with low security and a limited amount of users with authorized access.
- Power Supply           
  A power supply takes the AC from the wall outlet, converts it to unregulated DC, and reduces the voltage using an input power transformer, typically stepping it down to the     voltage required by the load.
 
 
 
 
 
 # 2 . Behavioural Diagram
- High Level Flow chart Behavioural Diagram






![Rks1](https://user-images.githubusercontent.com/55775183/157886509-ff306ee9-4fbf-4486-a9d0-a05170872484.png)



- Low Level Flow chart Behavioural Diagram






![2](https://user-images.githubusercontent.com/55775183/157886584-1c88f8d0-4d59-4a9d-9c7d-1bcbe9a20d1c.png)




# 3 . UML Use Case Structural Diagram

![bicomstru1](https://user-images.githubusercontent.com/55775183/157886677-dfd01d3e-f8b3-4110-9c96-b91115dbac54.png)

# 4. PIN DIAGRAM (STM32f407)

![STM32F407 PIN](https://user-images.githubusercontent.com/98824269/157914502-ba986355-c47d-46f1-8ce1-63b2f5a24f2a.png)

* It comprises of thirty two-bit central processing unit having a core of Cortex M4.
* It has a flash memory of one megabytes.
* It contains one ninety-two kilobytes static ram with the sixty-four-kilo byte core coupled memory.
* There are some additional memories units exits in it which are compact flash, NAND, NOR, SRAM.
* There is a voltage range of operating volts is 1.8 to 3.6 volts.
* It uses a thirty two-kilo hertz oscillator to calibrate the RTC module.
* It can be operated in three modes, stand, sleep, and standby.
* There are two digital to analog converter of twelve bits it has.
* It comprises of seventeen timers out of them 12 are sixteen-bit and 2 thirty-two bits timer having a frequency range of one sixty megahertz, every timer comprises of four PWM.
* There are one forty input and output pinouts this module has.
* There are fifteen types of communication protocol can be interfaced with this module.
* Communication protocol comprises of three I2C interfacings.
* Four USART, two UART three SPI, and two CAN interfacing can be done through this module.

# Best Methods Followed
* Exact Mapping of code to avoid confusions
* Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding
* Followed the exact symbols to make the understanding easier
* Detailed explanation in Low level Behavioural and Structural Diagrams

