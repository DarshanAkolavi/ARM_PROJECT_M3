## Remote Keyless Entry Systems
# Description
* This project is an Remote keyless entry(RKE) system. This system helps to Lock the car, Unlock the car, Alarm activation/deactivation and Light Focus if anyone approaches near. There is a led signaling which helps us to identify the features. For example if we press a button 1 time all the LED will be on which means we locked the car and similarly for 2, 3 and 4 clicks. In this system one of the main feature is providing technical safety to the car rolling code algorithm to prevent car thieves/hackers from intercepting and spoofing the telegrams.
* Here,we have transmitter and reciever units.Transmitter unit sends radio waves of certain frequency which is recieved by reciever which is placed inside the car.Now,the job of rolling code algorithm is that every time radio waves are transmitted the reciever accepts it and guids the transmitter with the perticular frequency required for nect process
*************************************************
* The term remote keyless system (RKS), also called keyless entry or remote central locking, refers to a lock that uses an electronic remote control as a key which is activated by a handheld device or automatically by proximity.

* Keyless entry is a convenient system that removes the need for a physical key to unlock car doors. A “fob” or keychain, whether it’s in your hand, in a pocket, or in your bag, will unlock the door hands-free. The same fob works to start the engine.

* Keyless entry is intended to enable a driver to lock and unlock their car without a key. Keyless entry to a vehicle is usually attained by sending a radio frequency signal from a remote transmitter to the receiver in the car. According to Compustar, the signal is sent as encrypted data from the keychain to your car.

* Most keyless entry systems also allow the driver to open the vehicle, particularly the trunk, by pressing a button or using a shoe. The sensors for the trunk detect movement and open it automatically, a handy detail for those who are grocery shopping or moving. The car sends out the short radio signal. If the fob is in range, it’s then triggered to respond to the car, sending out its own code. The car recognizes this and unlocks the doors.

* The vast majority of these systems are one-way with limited range. The remote sends a signal to the car, but the car does not send a signal back. They also don’t work more than about 50 feet away.

## Features 
### * Automatic Locking

Although, locking your car should come as second nature, very often, that niggling thought “have I locked the car?” does make you walk back just to be sure. Now, the keyless system saves you that trouble, because after the car is parked and you have walked a certain distance away, the car automatically locks itself. However, should you leave, forgetting the key fob in the car, the vehicle will stay unlocked. This of course ensures that you are not locked out of your car. 

## Requirements
  ### **1) HLR**
|   ID     | High Level Requirements |
|----------| -----------------------------------------------------------------------|
| HLR1     | It should be easily accesible and it must control the car using __switches__         | 
| HLR2     | It shall prevent car thieves through using different __rolling code algorithm__         | 
| HLR3     | Device shall be provided with __alaram__ for activation and  deactivation | 
| HLR4     | __Baterry life__ is important in RKE systems |

--------------------------------------------------------------------
  ### **2) LLR**
  
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
| LLR3.1   |  __Alarams__ and LEDS needs to be synchronized otherwise the user will not get required output |
| LLR3.2   |   When the blue switch is pressed three  times all led needs to turn ON in clockwise manner indicating the __alaram__ activation  |
| LLR3.3   |  __Alarams__ gives security alert to the user |

------------------------------------------------------------------------------------------------------------------------------------------

|   ID     | Low Level Requirements | 
| -------- | ----------------------------------------------------| 
| LLR4.1   | In __battery life__ ,system must use every way possible to minimize operating current and "on time." |
| LLR4.2   | The receiver must check almost constantly to avoid missing a demand for entry to the vehicle |
| LLR4.3   | To save power the receiver attempts to shut down as often as possible, even during the brief intervals between checks |








## SWOT Analysis

![image](https://user-images.githubusercontent.com/98837660/157798253-438d0d1b-9386-4e06-b6f7-bc9164bafd78.png)

 1.Strengths.
 
   * better access control and the system. 
   * convenience and easy to use. 
   * High security and better performance. 
   * save time and help quickly in emergency situations. 

 2.Weakness.
 
   * keyless locks are more expensive to purchase.
   * The proposed protocol is, that the owner is responsible for updating the key fobs with new keys (random numbers).
   * When the board computer displays a request for updating the key fobs, then the owner has to plug both key fobs into the interfaces located at the central console so that       they can be programmed with the new keys.
   * How often new keys should be written to the key fobs, depends on how often the key fob(s) is/are used or at the latest after a certain time interval.
 
 3.Opportunity.
 
   * Widely used in automobiles.
   * An RKS performs the functions of a standard car key without physical contact. 
   * When within a few yards of the car, pressing a button on the remote can lock or unlock the doors, and may perform other functions.
  
 4.Threats.
 
   * Enabling the RKE system in vehicles not only improves the security of car access but also facilitates convenience to users.
   * At the same time, the RKE system introduces many threats such as eavesdropping
   * relay, replay attack, Onboard Diagnostic (OBD) port scan attack, key fob cloning, jamming, etc.
   * Only cars with a keyless entry system can be stolen using so-called “relay” equipment.
   *  Keyless entry cars allow the driver to unlock and start the car with the key fob still in their pocket
  
-------------------------------------------------------
## 5H 1W
![new_5w](https://user-images.githubusercontent.com/46949062/157802342-5fc444bf-afbf-41c0-a513-2570608c4299.PNG)





--------------------------------------------------------
## Applications

  * Remote keyless entry systems, now fairly commonplace devices, provide car owners with a degree of convenience, making the task of physically inserting a key unnecessarily.
  * The introduced protocol has several advantages among common protocols used in Secure Remote Keyless Entry Systems. One advantage is the easy implementation of the   introduced protocol and of the lightweight encryption algorithm.
  * In the proposed Remote Keyless Entry System, the driver has to press a button on the key fob to open or lock the car. This prevents the system from a Two-Thief Attack.         Furthermore, with the proposed system it is almost impossible to become a victim of a Scan, Playback, or a Challenge Forward Prediction Attack since the authentication         message consists of encrypted decimal numbers from randomly selected memory locations.
  * Widely used in automobiles. An RKS performs the functions of a standard car key without physical contact, When within a few yards of the car, pressing a button on the        remote can lock or unlock the doors, and may perform other functions.

--------------------------------------------------------------------
