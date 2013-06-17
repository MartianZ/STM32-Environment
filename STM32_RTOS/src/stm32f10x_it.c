/******************** (C) COPYRIGHT 2007 STMicroelectronics ********************
* stm32f10x_it.c
* 如果中断需要OS管理,则在进入中断前要加入OSIntNesting++;,退出的时候要OSIntExit(); 
*******************************************************************************/

/* Includes ------------------------------------------------------------------*/
#include "ucos_ii.h"

/* Private typedef -----------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
#define countof(a)   (sizeof(a) / sizeof(*(a)))

/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/*******************************************************************************
* Function Name  : NMIException
* Description    : This function handles NMI exception.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void NMIException(void)
{
}

/*******************************************************************************
* Function Name  : HardFaultException
* Description    : This function handles Hard Fault exception.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void HardFaultException(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  while (1)
  {
  }
}

/*******************************************************************************
* Function Name  : MemManageException
* Description    : This function handles Memory Manage exception.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void MemManageException(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  while (1)
  {
  }
}

/*******************************************************************************
* Function Name  : BusFaultException
* Description    : This function handles Bus Fault exception.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void BusFaultException(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
  while (1)
  {
  }
}

/*******************************************************************************
* Function Name  : UsageFaultException
* Description    : This function handles Usage Fault exception.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void UsageFaultException(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  while (1)
  {
  }
}

/*******************************************************************************
* Function Name  : DebugMonitor
* Description    : This function handles Debug Monitor exception.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void DebugMonitor(void)
{
}

/*******************************************************************************
* Function Name  : SVCHandler
* Description    : This function handles SVCall exception.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void SVCHandler(void)
{
}

/*******************************************************************************
* Function Name  : PendSVC
* Description    : This function handles PendSVC exception.
* Input          : None
* Output         : None
* Return         : None 
此中断在os_cpu_a.asm中定义
*******************************************************************************/
//void PendSVC(void)
//{
//}

/*******************************************************************************
* Function Name  : SysTickHandler
* Description    :UCOS 系统时钟，
*******************************************************************************/
void SysTick_Handler(void)
{
    OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();                         /* Tell uC/OS-II that we are starting an ISR          */
    OSIntNesting++;
    OS_EXIT_CRITICAL();

    OSTimeTick();                                /* Call uC/OS-II's OSTimeTick()                       */

    OSIntExit();                                 /* Tell uC/OS-II that we are leaving the ISR          */
}

/*******************************************************************************
* Function Name  : WWDG_IRQHandler
* Description    : This function handles WWDG interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void WWDG_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : PVD_IRQHandler
* Description    : This function handles PVD interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void PVD_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : TAMPER_IRQHandler
* Description    : This function handles Tamper interrupt request. 
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void TAMPER_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : RTC_IRQHandler    RTC中断
* Description    : RTC中断中，处理好Real_Time的值
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void RTC_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : FLASH_IRQHandler
* Description    : This function handles Flash interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void FLASH_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : RCC_IRQHandler
* Description    : This function handles RCC interrupt request. 
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void RCC_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : EXTI0_IRQHandler
* Description    : This function handles External interrupt Line 0 request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void EXTI0_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : EXTI1_IRQHandler
* Description    : This function handles External interrupt Line 1 request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void EXTI1_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : EXTI2_IRQHandler
* Description    : This function handles External interrupt Line 2 request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void EXTI2_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : EXTI3_IRQHandler
* Description    : This function handles External interrupt Line 3 request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void EXTI3_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : EXTI4_IRQHandler
* Description    : This function handles External interrupt Line 4 request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void EXTI4_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : DMAChannel1_IRQHandler
* Description    : This function handles DMA Stream 1 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void DMAChannel1_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : DMAChannel2_IRQHandler
* Description    : This function handles DMA Stream 2 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void DMAChannel2_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : DMAChannel3_IRQHandler
* Description    : This function handles DMA Stream 3 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void DMAChannel3_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : DMAChannel4_IRQHandler
* Description    : This function handles DMA Stream 4 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void DMAChannel4_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : DMAChannel5_IRQHandler
* Description    : This function handles DMA Stream 5 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void DMAChannel5_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : DMAChannel6_IRQHandler
* Description    : This function handles DMA Stream 6 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void DMAChannel6_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : DMAChannel7_IRQHandler
* Description    : This function handles DMA Stream 7 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void DMAChannel7_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : ADC_IRQHandler
* Description    : This function handles ADC global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void ADC_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : USB_HP_CAN_TX_IRQHandler
* Description    : This function handles USB High Priority or CAN TX interrupts 
*                  requests.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USB_HP_CAN_TX_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : USB_LP_CAN_RX0_IRQHandler
* Description    : This function handles USB Low Priority or CAN RX0 interrupts 
*                  requests.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USB_LP_CAN_RX0_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : CAN_RX1_IRQHandler
* Description    : This function handles CAN RX1 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void CAN_RX1_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : CAN_SCE_IRQHandler
* Description    : This function handles CAN SCE interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void CAN_SCE_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : EXTI9_5_IRQHandler
* Description    : This function handles External lines 9 to 5 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void EXTI9_5_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : TIM1_BRK_IRQHandler
* Description    : This function handles TIM1 Break interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void TIM1_BRK_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : TIM1_UP_IRQHandler
* Description    : This function handles TIM1 overflow and update interrupt 
*                  request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void TIM1_UP_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : TIM1_TRG_COM_IRQHandler
* Description    : This function handles TIM1 Trigger and commutation interrupts 
*                  requests.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void TIM1_TRG_COM_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : TIM1_CC_IRQHandler
* Description    : This function handles TIM1 capture compare interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void TIM1_CC_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : TIM2_IRQHandler TIM2中断
* Description    : This function handles TIM2 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/

void TIM2_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : TIM3_IRQHandler
* Description    : This function handles TIM3 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void TIM3_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : TIM4_IRQHandler
* Description    : This function handles TIM4 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void TIM4_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : I2C1_EV_IRQHandler
* Description    : This function handles I2C1 Event interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void I2C1_EV_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : I2C1_ER_IRQHandler
* Description    : This function handles I2C1 Error interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void I2C1_ER_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : I2C2_EV_IRQHandler
* Description    : This function handles I2C2 Event interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void I2C2_EV_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : I2C2_ER_IRQHandler
* Description    : This function handles I2C2 Error interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void I2C2_ER_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : SPI1_IRQHandler
* Description    : This function handles SPI1 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void SPI1_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : SPI2_IRQHandler
* Description    : This function handles SPI2 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void SPI2_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : USART1_IRQHandler
* Description    : This function handles USART1 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USART1_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : USART2_IRQHandler
* Description    : This function handles USART2 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USART2_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : USART3_IRQHandler
* Description    : This function handles USART3 global interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USART3_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : EXTI15_10_IRQHandler
* Description    : This function handles External lines 15 to 10 interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void EXTI15_10_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : RTCAlarm_IRQHandler
* Description    : This function handles RTC Alarm interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void RTCAlarm_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/*******************************************************************************
* Function Name  : USBWakeUp_IRQHandler
* Description    : This function handles USB WakeUp interrupt request.
* Input          : None
* Output         : None
* Return         : None
*******************************************************************************/
void USBWakeUp_IRQHandler(void)
{
	OS_CPU_SR         cpu_sr;
	OS_ENTER_CRITICAL();
    OSIntNesting++;
    OS_EXIT_CRITICAL();
	//用户程序..

    OSIntExit();
}

/******************* (C) COPYRIGHT 2007 STMicroelectronics *****END OF FILE****/
