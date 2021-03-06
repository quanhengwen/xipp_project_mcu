#include "system_init.h"
#include "Stm32f1_uart1.h"
#include "Stm32f1_uart2.h"
#include "Stm32f1_uart3.h"
#include "InputDrive.h"
#include "mini-data.h"
#include "ds18b20.h"
#include "Stm32f1_ADC1.h"
#include "Stm32f1_ADC2.h"
#include "ds18b20_1.h"
#include "watchdog.h"
#include "flash_rw.h"
#include "Stm32F1_Timer2.h"
#include "Stm32F1_Timer3.h"
#include "key.h"
#include "InputDrive.h"
#include "OutputDrive.h"
#include "a.h"

TagTimeRun g_run={0};

int ntmp=0;
int isCheckBedCQSensorErr=0;//气压防错误限制
int isCheckDZCQSensorErr=0;	//气压防错误限制

//气压
u16_t rPressure=0,rPressureTmp=0,rPressure2=0,rPressure2Tmp=0,rPressure3=0,rPressure3Tmp=0;
u16_t rTruePressure1=0,rTruePressure2=0,rTruePressure3=0;

//关闭所有输出
void allClose()
{
		//
	 _unit1(0); 								
	 _unit2(0); 					
	 _unit3(0); 					
	 _unit4(0); 		 					
	 _junit1(0); 						
	 _junit2(0); 							
	 _junit3(0); 							
	 _junit4(0); 				 	
	 _junit5(0); 								
	 _junit6(0); 				 		
	 _unit11(0);					
	 _unit12(0); 	 						
	 _unit13(0);
	 _unit14(0); 
	 _unit15(0); 	
}

////////////////////////////////////////////////////////////////

void setFlashData()
{
	char binFlag[4]={0};
	FLASH_ReadByte(STARTADDRFLAG ,(uint8_t*)binFlag,4);
	
	if(!(binFlag[0]=='a' && binFlag[1]=='b' && binFlag[2]=='c' && binFlag[3]=='d'))
	{
			binFlag[0]='a';
			binFlag[1]='b';
			binFlag[2]='c';
			binFlag[3]='d';
		
			FLASH_WriteByte(STARTADDRFLAG,(uint8_t*)binFlag,4);
	}
}

int main(void)
{
	EzhKeyEvent ev;
  EzhKeyState btn1;
	EzhKeyState btn2;
  zhSCM_initKeyState(&btn1);
	zhSCM_initKeyState(&btn2);
	
	STM32_Delay_init();
	//STM32F1_UART1_Init(115200);
	//STM32F1_UART2_Init(19200);
	STM32F1_UART3_Init(19200);

	//DS18B20_Init();
	//DS18B20_Init1();
	Adc_Init();
	//Adc2_Init();
	Stm32F1_Timer2Init();
	Stm32F1_Timer3Init();
	InputDriveInit();
	OutputDriveInit();
	zhSCM_GPIOConfig();
 	
	//-----------------------------------------
	//获取FALSH数据
	setFlashData();
  //-----------------------------------------

	//看门狗
	//watchdog_init();
	
	while(1)
	{
					//看门狗
					//watchdog_action();
		
					//污水桶状态
					g_run.water_full=SENSOR1_STATE();
					
					//开盖
					ev=zhSCM_keyState(&btn1,TOUCHKEY_1_GPIO,TOUCHKEY_1_PIN);
					switch(ev)
					{
						case ZH_KEY_EVENT_NONE:
							break;
						case ZH_KEY_EVENT_DOWN:
							break;
						case ZH_KEY_EVENT_PRESS:
							break;
						case ZH_KEY_EVENT_UP:
						{
							openGuiZi();
						}
						 break;
					}
					
					//关盖
					ev=zhSCM_keyState(&btn2,TOUCHKEY_2_GPIO,TOUCHKEY_2_PIN);
					switch(ev)
					{
						case ZH_KEY_EVENT_NONE:
							break;
						case ZH_KEY_EVENT_DOWN:
							break;
						case ZH_KEY_EVENT_PRESS:
							break;
						case ZH_KEY_EVENT_UP:
						{
							closeGuiZi();
						}
						 break;
					}
					
					//------------------------------------------------------------------
					//气压1
					rPressureTmp = Get_Adc_Average(10);
					if(rPressureTmp!=0x0FFF)
					{
						ntmp=rPressureTmp-rPressure;
						if(ntmp<60 && ntmp>-60) //限制突变幅度
						{
							g_run.qiya1_percent=((float)rPressureTmp/4096.0f)*100.0f;
							rTruePressure1=rPressureTmp;
							isCheckDZCQSensorErr=0;
						}
						else
						{
							isCheckDZCQSensorErr++;						
							if(isCheckDZCQSensorErr>10) //传感数据有毛病关掉继电器
							{
							}
						}
						rPressure=rPressureTmp;
					}
					/*else
					{
						ud485.qiya1_percent=0;
					}*/
			
					//------------------------------------------------------------------
					/*//气压2
					rPressure2Tmp= Get_Adc2_Average(10);
					if(rPressure2Tmp!=0x0FFF)
					{
						ntmp=rPressure2Tmp-rPressure2;
						if(ntmp<60 && ntmp>-60) //限制突变幅度
						{						
							ud485.qiya2_percent=((float)rPressure2Tmp/4096.0f)*100.0f;
							rTruePressure2=rPressure2Tmp;
							isCheckDZCQSensorErr=0;
						}
						else
						{
							isCheckDZCQSensorErr++;						
							if(isCheckDZCQSensorErr>10) //传感数据毛病太多关等继电器
							{
							}
						}
						rPressure2=rPressure2Tmp;
					}
					else
					{
						ud485.qiya2_percent=0;
					}*/
					
	}

}
