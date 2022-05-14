# REPORT

# ABSTRACT

```bash
  "Windshield wiper's play a major role during adverse climatic conditions by wiping the rain continuuosly over thee windshield 
  area to provide clear vision to the    driver.It is very difficult to drive any vehicle during rainy conditions. In this 
  Control, frequency based speed control of wiper is being implemented. Total control of the windshield wiper is done by using
  in built push button. To   overcome different types of rain speeds, different speed's of wiper movement is enabled on every key 
  press."
```

##  INTRODUCTION

```bash
  "In this project windshield wiper is implemented with 3 type of speeds using delay using STM32f407VGTx - DISCOVERY BOARD. LED's 
  inbuilt in board are used demonstrate the speeds and movement of the wiper over the windshield. Different operations of the 
  Provides respective speed and the movement of wiper. LED's are considered as the wiper's because, There is no wiper to interface 
  with STM32 board used."

```

### Pull-Up Mode

![Schematic-Pullup-resistor-STM32F4](https://user-images.githubusercontent.com/101009958/168415764-c33b820c-13a1-4ecf-8756-5d6f57431d85.jpg)

In Pull-up mode, when a push button is not pressed, a logic high input appears on the STM32F4 GPIO pin. Because a 5V signal appears on the input terminal through an R1 resistor. On the contrary, when the push button is pressed, metallic contacts of the push button make contact with the ground terminal and the input terminal. Therefore, a logic low input reflects on the digital input pin of the STM32F4 Discovery board. In short, by reading this state of the push button with a digital input pin of a microcontroller, we can identify whether a push button is pressed or not. The following schematic diagram shows the connection of a push button with a pull-up resistor. 

### Pull-Down Mode

![Pull-down-resistor-with-Push-button-Schematic](https://user-images.githubusercontent.com/101009958/168415787-21339e48-9b87-485f-9ed8-184167b003db.jpg)

In Pull-down mode, when a push button is not pressed, a logic low input appears on STM32F4 GPIO pin. Because a ground reference signal appears on the input terminal through a R1 resistor. On the contrary, when the push button is pressed, metallic contacts of the push button make contact with the +5V signal and the input terminal. Therefore, a logic high input reflects on the digital input pin of STM32F4 Discovery board. The following schematic diagram shows the connection of a push button with a pull-up resistor.

### OnBoard Push Button STM32F4 Discovery Board

![OnBoard-Push-Button-STM32F4-Discovery-Board](https://user-images.githubusercontent.com/101009958/168415840-b005f3ec-85b2-4ec9-9fca-9664a63be94e.jpg)

The discovery board comes with one user button connected with pin zero of PORTA GPIO. We will use this push button as a digital input to control onboard LEDs on the discovery board. 

As you can see in the following schematic diagram, the onboard user push button is connected with PA0 digital pin through a pull-down resistor. This means when the push button is not pressed, we will get an active low signal at the PA0 pin. Similarly, when it is pressed, we will get an active high signal on the PA0 pin. 

##  BEHAVIOURAL DIAGRAM

<img width="800" alt="2022-05-14-01-25-04" src="https://user-images.githubusercontent.com/101009958/168410659-c55cf5de-7039-45f1-8efe-879a05a07bd6.png">

##  INSTRUMENTS REQUIRED

| S.NO | APPARATUS | QUANTITY/TOOLS |
| ---- | --------- | -------- |
| 01 | STM32F407 DISCOVERY BOARD | 1 |
| 02 | STM32CUBEIDE | Latest version |
| 03 | XPACK TOOLS | BUILD, QEMU, OPENOCD |
| 04 | COMMAND PROMPT | CYGWIN |


##  HARDWARE EXPLANATION

###  STM32F407VGTx - Discovery board
<img width="526" alt="2022-05-14-10-07-03" src="https://user-images.githubusercontent.com/101009958/168410851-b96cb765-2a08-42c7-942b-aa01e757b7b0.png">

##  Introduction
  The STM32F4DISCOVERY Discovery kit allows users to easily develop applications with
the STM32F407VG high-performance microcontroller with the Arm® Cortex®-M4 32-bit
core. It includes everything required either for beginners or experienced users to get started
quickly.
  Based on STM32F407VG, it includes an ST-LINK/V2-A embedded debug tool, one STMEMS digital accelerometer, one digital microphone, one audio 
DAC with integrated class D speaker driver, LEDs, push-buttons and a USB OTG Micro-AB connector. Specialized addon boards can be connected 
by means of the extension header connectors. The STM32F4DISCOVERY Discovery kit comes with the STM32 comprehensive free software libraries
and examples available with the STM32CubeF4 MCU Package.

##  SOFTWARE 

```bash
  "Software is implemented using C LANGUAGE using GNU ARM BASED COMPILER, The code is compiled and runned using Qemu, and command
  line arguments."
```

```bash
  "As there is unavailability of WIPER to interface in the software, LED is inbuilt in the DISCOVERY KIT are used to determine the 
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
