 # 1.About the Bicom System
 # 1.1 Introduction
BiCom system is a communication system between vehicle and its remote. The system gets its name as it performs two way communication that is from remote to vehicle and vehicle to remote. Here the transmission of data is from car to keyfob. The functionalities here are Window status, alarm status, car battery information, door status. These four functionalities will be implemented in this project. These functionalities are performed in project 1 RKE.
# 1.2 Identifying Features of Bicom System
- The use shall get window status display when  User Button Clicked once.
- The user shall  get Alram status display when  User Button Clicked twice.
- The user shall get  battery information status display when User Button Clicked thrice.
- The user shall get Door status display when  User Button Clicked forthfold.

# 1.3 5W'S AND 1H
![Untitled](https://user-images.githubusercontent.com/46949062/157973702-8aab9907-782d-4682-9762-a54d96369d92.jpg)

## 1.4 SWOT Analysis

![image](https://user-images.githubusercontent.com/98837660/157905281-dbd303fb-879a-41ad-91ca-1c45f67756f4.png)

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

## 2 Requirements
# 2.1 High Level Requirements
 
|   ID     | High Level Requirements |
|----------| -----------------------------------------------------------------------|
|HLR1| System shall display Window status of the car  |
|HLR2| System shall display Alarm status of the car   |
|HLR3| System shall display Battery status of the car |
|HLR3| System shall display Door status of the car |

--------------------------------------------------------------------
# 2.2 Low Level Requirements
|   ID     | Low Level Requirements |
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



------------------------------------------------------------------------------------------------------------------------------

## 2.3 Applications 

 * Bi-directional communication makes this possible. When the door handle is pulled (or some similar trigger is activated) the base unit located within the vehicle emits a         short range, low frequency signal- polling for a nearby key fob transponder.
  * if present, the key fob recognizes the signal and responds with a UHF (ultra-high frequency) signal, transmitting a code to be authenticated by the base unit encryption         firmware, such as Microchip Technology's Keylock.
