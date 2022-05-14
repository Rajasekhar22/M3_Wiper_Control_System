#include<stdint.h>

#define SRAM_START	0x20000000UL
#define SRAM_SIZE		(128U * 1024U)
#define SRAM_END		((SRAM_START) + (SRAM_SIZE))

#define STACK_START	SRAM_END

extern uint32_t _etext;
extern uint32_t _mdata;
extern uint32_t _edata;
extern uint32_t _sdata;
extern uint8_t _la_data;

extern uint32_t _sbss;
extern uint32_t _ebss;

int main(void);

void Reset_handler(void) ;

void NMI_handler(void) __attribute__((weak, alias ("Default_handler")));
void HardFault_handler(void) __attribute__((weak, alias ("Default_handler")));
void MemManage_handler(void) __attribute__((weak, alias ("Default_handler")));
void BusFault_handler(void) __attribute__((weak, alias ("Default_handler")));
void UsageFault_handler(void) __attribute__((weak, alias ("Default_handler")));
void SVCall_handler(void) __attribute__((weak, alias ("Default_handler")));
void Debug_Monitor_handler(void) __attribute__((weak, alias ("Default_handler")));
void PendSV_handler(void) __attribute__((weak, alias ("Default_handler")));
void SysTick_handler(void) __attribute__((weak, alias ("Default_handler")));
void WWDG_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void PVD_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TAMP_STAMP_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void RTC_WKUP_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void FLASH_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void RCC_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void EXTI0_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void EXTI1_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void EXTI2_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void EXTI3_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void EXTI4_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA1_Stream0_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA1_Stream1_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA1_Stream2_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA1_Stream3_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA1_Stream4_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA1_Stream5_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA1_Stream6_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void ADC_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CAN1_TX_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CAN1_RX0_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CAN1_RX1_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CAN1_SCE_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void EXTI9_5_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM1_BRK_TIM9_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM1_UP_TIM10_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM1_TRG_COM_TIM11_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM1_CC_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM2_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM3_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM4_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void I2C1_EV_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void I2C1_ER_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void I2C2_EV_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void I2C2_ER_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void SPI1_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void SPI2_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void USART1_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void USART2_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void USART3_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void EXTI15_10_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void RTC_Alarm_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void OTG_FS_WKUP_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM8_BRK_TIM12_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM8_UP_TIM13_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM8_TRG_COM_TIM14_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM8_CC_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA1_Stream7_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void FSMC_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void SDIO_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM5_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void SPI3_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void UART4_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void UART5_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM6_DAC_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void TIM7_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA2_Stream0_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA2_Stream1_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA2_Stream2_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA2_Stream3_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA2_Stream4_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void ETH_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void ETH_WKUP_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CAN2_TX_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CAN2_RX0_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CAN2_RX1_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CAN2_SCE_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void OTG_FS_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA2_Stream5_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA2_Stream6_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DMA2_Stream7_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void USART6_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void I2C3_EV_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void I2C3_ER_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void OTG_HS_EP1_OUT_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void OTG_HS_EP1_IN_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void OTG_HS_WKUP_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void OTG_HS_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void DCMI_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void CRYP_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void HASH_RNG_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));
void FPU_IRQhandler(void) __attribute__((weak, alias ("Default_handler")));



uint32_t vectors[] __attribute__((section (".isr_vector"))) = {
	STACK_START,
	(uint32_t) Reset_handler,
	(uint32_t) NMI_handler,
	(uint32_t) HardFault_handler,
	(uint32_t) MemManage_handler,
	(uint32_t) BusFault_handler,
	(uint32_t) UsageFault_handler,
	0,
	0,
	0,
	0,
	(uint32_t) SVCall_handler,
	(uint32_t) Debug_Monitor_handler,
	0,
	(uint32_t) PendSV_handler,
	(uint32_t) SysTick_handler,
	(uint32_t) WWDG_IRQhandler,
	(uint32_t) PVD_IRQhandler,
	(uint32_t) TAMP_STAMP_IRQhandler,
	(uint32_t) RTC_WKUP_IRQhandler,
	0,
	(uint32_t) FLASH_IRQhandler,
	(uint32_t) RCC_IRQhandler,
	(uint32_t)  EXTI0_IRQhandler,
	(uint32_t)  EXTI1_IRQhandler,
	(uint32_t)  EXTI2_IRQhandler,
	(uint32_t)  EXTI3_IRQhandler,
	(uint32_t)  EXTI4_IRQhandler,
	(uint32_t) DMA1_Stream0_IRQhandler,
	(uint32_t) DMA1_Stream1_IRQhandler,
	(uint32_t) DMA1_Stream2_IRQhandler,
	(uint32_t) DMA1_Stream3_IRQhandler,
	(uint32_t) DMA1_Stream4_IRQhandler,
	(uint32_t) DMA1_Stream5_IRQhandler,
	(uint32_t) DMA1_Stream6_IRQhandler,
	(uint32_t) ADC_IRQhandler,
	(uint32_t) CAN1_TX_IRQhandler,
	(uint32_t) CAN1_RX0_IRQhandler,
	(uint32_t) CAN1_RX1_IRQhandler,
	(uint32_t) CAN1_SCE_IRQhandler,
	(uint32_t) EXTI9_5_IRQhandler,
	(uint32_t) TIM1_BRK_TIM9_IRQhandler,
	(uint32_t) TIM1_UP_TIM10_IRQhandler,
	(uint32_t) TIM1_TRG_COM_TIM11_IRQhandler,
	(uint32_t) TIM1_CC_IRQhandler,
	(uint32_t) TIM2_IRQhandler,
	(uint32_t) TIM3_IRQhandler,
	(uint32_t) TIM4_IRQhandler,
	(uint32_t) I2C1_EV_IRQhandler,
	(uint32_t) I2C1_ER_IRQhandler,
	(uint32_t) I2C2_EV_IRQhandler,
	(uint32_t) I2C2_ER_IRQhandler,
	(uint32_t) SPI1_IRQhandler,
	(uint32_t) SPI2_IRQhandler,
	(uint32_t) USART1_IRQhandler,
	(uint32_t) USART2_IRQhandler,
	(uint32_t) USART3_IRQhandler,
	(uint32_t) EXTI15_10_IRQhandler,
	(uint32_t) RTC_Alarm_IRQhandler,
	(uint32_t) OTG_FS_WKUP_IRQhandler,
	(uint32_t) TIM8_BRK_TIM12_IRQhandler,
	(uint32_t) TIM8_UP_TIM13_IRQhandler,
	(uint32_t) TIM8_TRG_COM_TIM14_IRQhandler,
	(uint32_t) TIM8_CC_IRQhandler,
	(uint32_t) DMA1_Stream7_IRQhandler,
	(uint32_t) FSMC_IRQhandler,
	(uint32_t) SDIO_IRQhandler,
	(uint32_t) TIM5_IRQhandler,
	(uint32_t) SPI3_IRQhandler,
	(uint32_t) UART4_IRQhandler,
	(uint32_t) UART5_IRQhandler,
	(uint32_t) TIM6_DAC_IRQhandler,
	(uint32_t) TIM7_IRQhandler,
	(uint32_t) DMA2_Stream0_IRQhandler,
	(uint32_t) DMA2_Stream1_IRQhandler,
	(uint32_t) DMA2_Stream2_IRQhandler,
	(uint32_t) DMA2_Stream3_IRQhandler,
	(uint32_t) DMA2_Stream4_IRQhandler,
	(uint32_t) ETH_IRQhandler,
	(uint32_t) ETH_WKUP_IRQhandler,
	(uint32_t) CAN2_TX_IRQhandler,
	(uint32_t) CAN2_RX0_IRQhandler,
	(uint32_t) CAN2_RX1_IRQhandler,
	(uint32_t) CAN2_SCE_IRQhandler,
	(uint32_t) OTG_FS_IRQhandler,
	(uint32_t) DMA2_Stream5_IRQhandler,
	(uint32_t) DMA2_Stream6_IRQhandler,
	(uint32_t) DMA2_Stream7_IRQhandler,
	(uint32_t) USART6_IRQhandler,
	(uint32_t) I2C3_EV_IRQhandler,
	(uint32_t) I2C3_ER_IRQhandler,
	(uint32_t) OTG_HS_EP1_OUT_IRQhandler,
	(uint32_t) OTG_HS_EP1_IN_IRQhandler,
	(uint32_t) OTG_HS_WKUP_IRQhandler,
	(uint32_t) OTG_HS_IRQhandler,
	(uint32_t) DCMI_IRQhandler,
	(uint32_t) CRYP_IRQhandler,
	(uint32_t) HASH_RNG_IRQhandler,
	(uint32_t) FPU_IRQhandler,


};

void Default_handler(void)
{
	while(1);
}

void Reset_handler(void)
{
	uint32_t size = (uint32_t)&_edata - (uint32_t) & _sdata;

	uint8_t *pDst = (uint8_t*)& _sdata;
	uint8_t *pSrc = (uint8_t*)&_la_data;

	for(uint32_t i =0 ; i < size ; i++)
	{
		*pDst++ = *pSrc++;
	}

	size = (uint32_t)&_ebss - (uint32_t)&_sbss;
	pDst = (uint8_t*)&_sbss;
	for(uint32_t i =0 ; i < size ; i++)
	{
		*pDst++ = 0;
	}


	main();
}

