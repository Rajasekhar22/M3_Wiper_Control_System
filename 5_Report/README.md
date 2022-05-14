# REPORT

# ABSTRACT

```bash
  "Windshield wiper's play a major role during adverse climatic conditions by wiping the rain continuuosly over thee windshield 
  area to provide clear vision to the    driver.It is very difficult to drive any vehicle during rainy conditions. In this 
  Control, frequency based speed control of wiper is being implemented. Total control of the windshield wiper is done by using
  in built push button. To   overcome different types of rain speeds, different speed's of wiper movement is enabled on every key 
  press."
```

##  INSTRUMENTS REQUIRED

| S.NO | APPARATUS | QUANTITY/TOOLS |
| ---- | --------- | -------- |
| 01 | STM32F407 DISCOVERY BOARD | 1 |
| 02 | STM32CUBEIDE | 1 |
| 03 | XPACK TOOLS | BUILD, QEMU, OPENOCD |
| 04 | COMMAND PROMPT | CYGWIN |


##  HARDWARE EXPLANATION

###  STM32F407VGTx - Discovery board
<img width="526" alt="2022-05-14-10-07-03" src="https://user-images.githubusercontent.com/101009958/168410851-b96cb765-2a08-42c7-942b-aa01e757b7b0.png">

##  SOFTWARE 

```bash
  "Software is implemented using C LANGUAGE using GNU ARM BASED COMPILER, The code is compiled and runned using Qemu, and command
  line arguments."
```

```bash
  "As there is unavailability of WIPER to interface in the software, LED's inbuilt in the DISCOVERY KIT are used to determine the 
  movement of wiper."
```
##  PROCEDURE

```bash
  * Button pressed 1st - RED LIGHT glows, which indicates the CAR IGNITION ON.
  * Button pressed 2nd - BLUE, GREEN, ORANGE LED glows with slow movement with some delay.
  * Button pressed 3rd - BLUE, GREEN, ORANGE LED glows with medium speed movement with some delay.
  * Button pressed 4th - BLUE, GREEN, ORANGE LED glows with fast speed movement with some delay.
  * Button pressed 5th - ORANGE, GREEN, BLUE LED glows anticlockwise direction indicating wiper off.
  * Button pressed 6th - RED LIGHT off, which indicates the CAR IGNITION OFF. 
```
##  OUTPUT RESULTS

##  SLOW SPEED

https://user-images.githubusercontent.com/101009958/168411184-4bbac668-7f61-4c21-b017-38bc61c0a959.mp4

##  MEDIUM SPEED

https://user-images.githubusercontent.com/101009958/168411188-35c7d134-46de-484b-9a35-6b2da4eea102.mp4

##  FAST

https://user-images.githubusercontent.com/101009958/168411191-b51574e7-3bf6-4abb-a93a-0433ba73b418.mp4

##  TURNING WIPER OFF

https://user-images.githubusercontent.com/101009958/168411195-5c4547ca-1947-4af6-962b-f5c97a229589.mp4

##  CAR OFF

https://user-images.githubusercontent.com/101009958/168411200-47f25ee0-830b-4fd6-b72e-086382ef19a1.mp4

##  WHOLE PROCESS

https://user-images.githubusercontent.com/101009958/168411210-be83ca86-d9eb-46e9-a7a2-f29cc1999d0e.mp4


##  CONCLUSION

```bash
  Wiper Control System with various speeds is succesfully implemented using STM32F407VGTx-DISCOVERY BOARD .
```
