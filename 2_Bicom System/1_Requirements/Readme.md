 # About the Bicom System
 # Introduction
BiCom system is a communication system between vehicle and its remote. The system gets its name as it performs two way communication that is from remote to vehicle and vehicle to remote. Here the transmission of data is from car to keyfob. The functionalities here are Window status, alarm status, car battery information, door status. These four functionalities will be implemented in this project. These functionalities are performed in project 1 RKE.
# Identifying Features of Bicom System
- The use shall get window status display when  User Button Clicked once.
- The user shall  get Alram status display when  User Button Clicked twice.
- The user shall get  battery information status display when User Button Clicked thrice.
- The user shall get Door status display when  User Button Clicked forthfold.

## SWOT Analysis

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

## Requirements
 
|   ID     | High Level Requirements |
|----------| -----------------------------------------------------------------------|
| HLR1     | It should be easily accesible and it must control the car using __switches__         | 
| HLR2     | It shall prevent car thieves through using different __rolling code algorithm__         | 
| HLR3     | Device shall be provided with __alaram__ for activation and  deactivation | 
| HLR4     | __Baterry life__ is important in RKE systems |
| HLR5     | __Car Status__ information shall display on the keyfob by LED or display|

--------------------------------------------------------------------

  
|   ID     | Low Level Requirements | 
| -------- | ----------------------------------------------------| 
| LLR1.1   | Depending on the type of __switch__ movement the perticular action must be completed |                    
| LLR1.2   | LEDS are used for indication of the task completion based on perticular __switch__ operation  | 
| LLR1.3  | The __switches__ will be present in the transmitter unit |

------------------------------------------------------------------------------------------------------------------------------

|   ID     | Low Level Requirements | 
| -------- | ----------------------------------------------------| 
| LLR2.1   | __Rolling code algorithm__ protects the car from hackers by gemerating a new frequency radio waves for every use |
| LLR2.2   | Reciever gives information of frequency value which will be used for every use which is the main feature of __rolling code algorithm__ |
| LLR2.3   | __Rolling code algorithm__ gives technical support for the car |

-----------------------------------------------------------------------------

|   ID     | Low Level Requirements | 
| -------- | ----------------------------------------------------| 
| LLR3.1   |  __Alarms__ and LEDS needs to be synchronized otherwise the user will not get required output |
| LLR3.2   |   When the blue switch is pressed three  times all led needs to turn ON in clockwise manner indicating the __alarm__ activation  |
| LLR3.3   |  __Alarms__ gives security alert to the user |

------------------------------------------------------------------------------------------------------------------------------------------

|   ID     | Low Level Requirements | 
| -------- | ----------------------------------------------------| 
| LLR4.1   | In __battery life__ ,system must use every way possible to minimize operating current and "on time." |
| LLR4.2   | The receiver must check almost constantly to avoid missing a demand for entry to the vehicle |
| LLR4.3   | To save power the receiver attempts to shut down as often as possible, even during the brief intervals between checks.|

--------------------------------------------------------

|   ID     | Low Level Requirements | 
| -------- | ----------------------------------------------------| 
| LLR5.1   | In __Car Status__ ,system must show window status in display. |
| LLR5.2   | System must show alarm status. |
| LLR5.3   | System must show car battery information.|
| LLR5.4   | System must show Door status.|

--------------------------------------------------------
## Applications 

 * Bi-directional communication makes this possible. When the door handle is pulled (or some similar trigger is activated) the base unit located within the vehicle emits a         short range, low frequency signal- polling for a nearby key fob transponder.
  * if present, the key fob recognizes the signal and responds with a UHF (ultra-high frequency) signal, transmitting a code to be authenticated by the base unit encryption         firmware, such as Microchip Technology's Keylock.
