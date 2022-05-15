/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Rajasekhar
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2022 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include "MyStm32f407xx.h"
#define HZ_1 		80000000
#define	HZ_4		50000000
#define	HZ_8		25000000
int slow();
int fast();
int medium();
void setOutput(void);
void delay(int par);
void off();
int veh_Off();
void hold_On_Off();

int main(void)
{
	uint16_t count = 1;
	/*Setting GREEN LED PIN With Clock*/
	GPIO_Handle_t INP,LED;
	LED.pGPIOx = GPIOD;
	LED.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	LED.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	LED.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
	LED.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&LED);

	/*Setting ORANGE LED PIN With Clock*/
	LED.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	LED.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	LED.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	LED.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&LED);

	/*Setting RED LED pin With Clock*/
	LED.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	LED.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	LED.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	LED.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&LED);

	/*Setting RED LED pin With Clock*/
	LED.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_15;
	LED.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	LED.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	LED.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&LED);

	/*Setting PA0 as input pin*/
	INP.pGPIOx = GPIOA;
	INP.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_IN;
	GPIO_Init(&INP);

	while(1)
	{

		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ENABLE){//checking for input as HIGH from Port PA0 pin.

			if(count == 1){															//To Turn on RED LED with some 2 sec
				hold_On_Off();
				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);//RED led
				count++;

			}
			else if(count == 2){													//Button pressed 2nd time
				if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ENABLE)
				while(count ==2){
					if(slow() == 1){
						count++;
						break;
					}

				}
			}
			else if(count == 3){													//Button pressed 3rd time
				while(count == 3){
					if(medium() == 1){
						count++;
						break;
					}
				}
			}
			else if(count == 4){													//Button pressed 4th time
				while(count == 4){
					if(fast() == 1){
						count++;
						break;
					}
				}
			}
			else if(count == 5){													//Button pressed 5th time
				off();
				count++;
			}
			else if(count ==6){														//Button pressed 6th time

				if(veh_Off() == 1){
					delay(HZ_4);
					count =1;														//To Restart the car in a press of 2 sec.
				}

			}
		}
	}

}

void delay(int par)																	//This function is used to provide delay
{
	for (uint32_t i = 0; i < par ; i++);
}

int slow()																			//To run at 2nd Key press of the button
{
	/*Enabling all the BLUE GREEN ORANGE led on 2nd key press with some delay*/
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(HZ_1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(HZ_1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay(HZ_1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(HZ_1);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	/*If push button is pressed return 1*/
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)){
		return  1;
	}
	else
	return 0;
}
/*Enabling all the BLUE GREEN ORANGE led on 3rd key press with some delay*/
int medium(){
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(HZ_4);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(HZ_4);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay(HZ_4);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(HZ_4);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)){
		return  1;
	}
	else
		return 0;
}
/*Enabling all the BLUE GREEN ORANGE led on 4th key press with some delay*/
int fast(){
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(HZ_8);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(HZ_8);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay(HZ_8);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(HZ_8);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);

	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)){
		return  1;
	}
	else
		return 0;
}
/*Enabling all the BLUE GREEN ORANGE led on 5th key press with some delay*/

void off(){

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay(250000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(250000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(250000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);

}
/*Enabling all the BLUE GREEN ORANGE led on 6th key press with some delay*/
int veh_Off(){
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, DISABLE);
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)){
			return  1;
		}
		else
			return 0;
}
//For holding 2 sec press car turn on
void hold_On_Off(){
	delay(20000000);
	delay(20000000);
	delay(20000000);
	delay(20000000);
}
