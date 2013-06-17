#include <stdio.h>
#include <stm32f10x.h>
#include <ucos_ii.h>

#include "tasks.h"

OS_STK   Task0Stk[128];

void STM32Init()
{
	SystemInit();

	GPIO_InitTypeDef GPIO_InitStructure;
	/* Enable GPIOC Clock for LED on board*/
  	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
  	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7 | GPIO_Pin_6;
 	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
  	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
  	GPIO_Init(GPIOC, &GPIO_InitStructure);

	GPIO_WriteBit(GPIOC, GPIO_Pin_6, 1);
	GPIO_WriteBit(GPIOC, GPIO_Pin_7, 0);


}

int main()
{
	unsigned char os_err;

	STM32Init();
	OSInit();
	
	os_err = OSTaskCreate(	Task0,
							(void *) 0,
							(OS_STK *)&Task0Stk[128 - 1],
							(INT8U) 2
				     	 );
	OSStart(); 
	while(1);
	return 0;
}
