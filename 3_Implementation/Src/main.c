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
int slow();
int fast();
int medium();
void setOutput(void);
void delay(int par);
void off();


int main(void)
{
	uint16_t count = 1;
	/*Setting GREEN LED PIN*/
	GPIO_Handle_t INP,LED;
	LED.pGPIOx = GPIOD;
	LED.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_12;
	LED.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	LED.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST ;
	LED.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&LED);

	/*Setting ORANGE LED PIN*/
	LED.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_13;
	LED.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	LED.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	LED.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&LED);

	/*Setting RED LED pin*/
	LED.GPIO_PinConfig.GPIO_PinNumber = GPIO_PIN_NO_14;
	LED.GPIO_PinConfig.GPIO_PinMode = GPIO_MODE_OUT;
	LED.GPIO_PinConfig.GPIO_PinSpeed = GPIO_SPEED_FAST;
	LED.GPIO_PinConfig.GPIO_PinOPType = GPIO_OP_TYPE_PP;
	GPIO_PeriClockControl(GPIOD, ENABLE);
	GPIO_Init(&LED);

	/*Setting RED LED pin*/
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
		//GPIO_WriteToOutputPin(GPIOA, GPIO_PIN_NO_0, DISABLE);//setting PAO '0' initially
		if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0) == ENABLE){//checking for input as HIGH

			if(count == 1){

				GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_14);//RED led
				count++;

			}


			else if(count == 2){

				while(count ==2){
					if(slow() == 1){
						count++;
						break;
					}

				}
			}
			else if(count == 3){
				while(count == 3){
					if(medium() == 1){
						count++;
						break;
					}
				}
			}
			else if(count == 4){
				while(count == 4){
					if(fast() == 1){
						count++;
						break;
					}
				}
			}
			else if(count == 5){
				off();
				count++;
			}
			else if(count ==6){
				GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_14, DISABLE);

			}
		}
	}

}

void delay(int par)
{
	for (uint32_t i = 0; i < par ; i++);
}

int slow()
{
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(250000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(250000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay(250000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(250000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	/*GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(50000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);*/
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)){
		return  1;
	}
	else
	return 0;
}
int medium(){
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(100000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(100000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay(100000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(100000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	/*GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(7500000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);*/
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)){
		return  1;
	}
	else
		return 0;
}

int fast(){
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(50000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(50000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay(50000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(50000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);
	/*GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(100000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);*/
	if(GPIO_ReadFromInputPin(GPIOA, GPIO_PIN_NO_0)){
		return  1;
	}
	else
		return 0;
}

void off(){

	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_13);
	delay(10000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_13, DISABLE);
	GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_12);
	delay(10000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_12, DISABLE);GPIO_ToggleOutputPin(GPIOD, GPIO_PIN_NO_15);
	delay(10000000);
	GPIO_WriteToOutputPin(GPIOD, GPIO_PIN_NO_15, DISABLE);


}
