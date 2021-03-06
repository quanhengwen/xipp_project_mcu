#include "Stm32F1_Timer3.h"
#include "InputDrive.h"

int kk_1ms=0;
u16_t sCount1ms;

extern int g_timeoverUart1;
extern int g_uart1len;

extern int g_timeoverUart2;
extern int g_uart2len;

void Stm32F1_Timer3Init(void)
{
	NVIC_InitTypeDef MyTimerIrConfig;
	TIM_TimeBaseInitTypeDef MyTimerConfig;
	MyTimerConfig.TIM_Prescaler = 7200;
	MyTimerConfig.TIM_ClockDivision = TIM_CKD_DIV1;
	MyTimerConfig.TIM_CounterMode = TIM_CounterMode_Up;
	MyTimerConfig.TIM_Period = 99;
	MyTimerConfig.TIM_RepetitionCounter = 0;
	RCC_APB1PeriphClockCmd(RCC_APB1Periph_TIM3,ENABLE);
	TIM_TimeBaseInit(TIM3,&MyTimerConfig);
	TIM_Cmd(TIM3,ENABLE);
	/*ÖÐ¶Ï*/
	MyTimerIrConfig.NVIC_IRQChannel = TIM3_IRQn;
	MyTimerIrConfig.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&MyTimerIrConfig);
	TIM_ITConfig(TIM3,TIM_IT_Update,ENABLE);
}
/*--------------------------------------------------
//
//-------------------------------------------------*/
Func_Staus CountToOneSecond(void)
{
	if (sCount1ms<100)
	{
		sCount1ms++;
	}
	else
	{
		sCount1ms=0;
		return _Enable;
	}
	return _Disable;
}
/*--------------------------------------------------
//
//-------------------------------------------------*/
void TIM3_IRQHandler(void)
{
	kk_1ms++;
	g_timeoverUart1++;
	
	//周期计数复位
	if(g_timeoverUart1>500)
	{
			g_uart1len=0;
			g_timeoverUart1=0;
	}
	if(g_timeoverUart2>500)
	{
			g_uart2len=0;
			g_timeoverUart2=0;
	}

	//---------------------------
	TIM_ClearITPendingBit(TIM3,TIM_IT_Update);
}

