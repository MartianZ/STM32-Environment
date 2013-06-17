#include <ucos_ii.h>
#include "tasks.h"
#include <stm32f10x.h>
#include <stm32f10x_conf.h>

OS_STK   Task1Stk[128];

void Task0(void *p_arg)
{
	uint8_t os_err;
	OS_CPU_SysTickInit(72000000/OS_TICKS_PER_SEC);

	#if (OS_TASK_STAT_EN > 0)
	OSStatInit(); 
	#endif

	OSTaskCreate(	Task1,
					(void *) 0,
					(OS_STK *)&Task1Stk[128 - 1],
					(INT8U)  3
				);
	while (1)
	{	
		GPIO_WriteBit(GPIOC, GPIO_Pin_6, (BitAction)(1 - GPIO_ReadOutputDataBit(GPIOC, GPIO_Pin_6)));
		OSTimeDlyHMSM(0,0,1,0);
	}
	

}


void Task1(void *p_arg)
{
	while (1)
	{
		OSTimeDly(OS_TICKS_PER_SEC/3);
		GPIO_WriteBit(GPIOC, GPIO_Pin_7, (BitAction)(1 - GPIO_ReadOutputDataBit(GPIOC, GPIO_Pin_7)));
	}
}
