## intro
## functions
## Requirements
  ### **1) HLR**

| HLR1     | It shall operate by broadcasting radio waves on a particular frequency.|
| -------- | ---------------------------------------------------------------------- | 
| HLR2     | It shall prevent car thieves through rolling code algorithm.           | 
| HLR3     | It shall recognize the signal and respond with a ultra high frequency. | 
  
  ### **2) LLR**
  
| LLR1     | It shall be able to lock the car.                   |
| -------- | ----------------------------------------------------| 
| LLR2     | It shall be able to unlock the car.                 | 
| LLR3     | It shall be able to activate/ deactivate the alarm. |
| LLR4     | It shall be able to activate the light.             |

## SWOT Analysis
  1.Strengths
  2.Weakness
  3.Opportunity
  4.Threts.
## 4H 1W
## Applications

* Remote keyless entry systems, now fairly commonplace devices, provide car owners with a degree of convenience, making the task of physically inserting a key unnecessary. 
* A passive keyless entry (PKE) system uses advanced technology to take vehicle accessibility to a higher level. With PKE, car owners have simply to pull the door handle while the   key fob is on their person; no searching through pockets or purses, no button pressing necessary.
* Bi-directional communication makes this possible. When the door handle is pulled (or some similar trigger is activated) the base unit located within the vehicle emits a short     range, low frequency signal – polling for a nearby key fob transponder.
*  If present, the key fob recognizes the signal and responds with a UHF (ultra-high frequency) signal, transmitting a code to be authenticated by the base unit encryption          firmware, such as Microchip Technology’s Keylock.
*  Finally, if a proper code is verified, the base unit instructs the vehicle’s central body controller to unlock the door. Of course, all of this takes place within a fraction of    a second, without any additional action from the user.
* The introduced protocol has several advantages among common protocols used in Secure Remote Keyless Entry Systems.One advantage is the easy implementation of the introduced protocol and of the lightweight encryption algorithm.
* In addition, the lightweight encryption algorithm requires less computation power and thus it is energy efficient. The authentication response message is built from three randomly selected decimal numbers, each in the range between 0 and 65535.
*  This means that the message length can be up to 80 bits long. Thus it is almost impossible to guess the requested authentication response message. Since the authentication response message changes for every request, the probability of guessing the right authentication response message is 1280 . Another big advantage
is that if someone borrows the car to make a test drive withthe purpose of cloning a car key, the person might not be able
to steal the car in the night from the salesman’s yard, if the salesman has re-programmed the key fobs after the test drive.
* In the proposed Remote Keyless Entry System, the driver has to press a button on the key fob to open or lock the car.This prevents the system from a Two-Thief Attack. Furthermore, with the proposed system it is almost impossible to become a victim of a Scan, Playback or a Challenge Forward Prediction Attack, since the authentication message consists of encrypted decimal numbers from randomly selected memorylocations.
* For a successful Scan Attack, the 32 bit car key ID, the always changing 80 bit authentication message and the timing must be correct, before sending the instruction command to unlock the car. Hence, it is extremely difficult to attack the proposed protocol with a Scan Attack.
* For a successful Playback Attack, the attacker must hope that the recorded sequences of ten random numbers, used to access the values of ten memory locations in order to build the authentication message, will occur again. Since RNGs are used, the probability of repeated random number sequences is very small and thus it is extremely difficult, to attack the proposed protocol with a Playback Attack. Attacking the proposed protocol with a Forward Prediction Attack is extremely difficult because the authentication message is built from the values of ten randomly selected memory locations. 
* The indices of that memory locations are generated with a RNG and thus it is almost impossible to predict the sequence of the generated random numbers.
* One drawback of the proposed protocol is, that the owner is responsible for updating the key fobs with new keys (random
numbers).
* When the board computer displays a request for updating the key fobs, then the owner has to plug both key fobs into the interfaces located at the central console, so that they can be programmed with the new keys. How often new keys should be written to the key fobs, depends on how often the key fob(s) is/are used or at latest after a certain time interval.
