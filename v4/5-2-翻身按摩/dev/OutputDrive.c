#include "OutputDrive.h"

void Relay_Init(void);

void OutputDriveInit(void)
{
	 Relay_Init();
			
	{
		GPIO_InitTypeDef GPIO_MyStruct;
	
		RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD,ENABLE);

		GPIO_MyStruct.GPIO_Pin = GPIO_Pin_10;
		GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
		GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_PP;
		GPIO_Init(GPIOD, &GPIO_MyStruct);
			GPIO_ResetBits(GPIOD,GPIO_Pin_10);	 
			//GPIO_SetBits(GPIOD,GPIO_Pin_10);
	 }
}

void Relay_Init(void)
{
	GPIO_InitTypeDef GPIO_MyStruct;
	/*ʱ??ʹ??*/
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA|RCC_APB2Periph_GPIOB|RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOD|RCC_APB2Periph_GPIOE,ENABLE);
	/*RELAY1*/
	GPIO_MyStruct.GPIO_Pin = RELAY1_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(RELAY1_GPIO, &GPIO_MyStruct);
	RELAY1_STATE(0);
	/*RELAY2*/
	GPIO_MyStruct.GPIO_Pin = RELAY2_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(RELAY2_GPIO, &GPIO_MyStruct);
	RELAY2_STATE(0);
	/*RELAY3*/
	GPIO_MyStruct.GPIO_Pin = RELAY3_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(RELAY3_GPIO, &GPIO_MyStruct);
	RELAY3_STATE(0);
	/*RELAY4*/
	GPIO_MyStruct.GPIO_Pin = RELAY4_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(RELAY4_GPIO, &GPIO_MyStruct);
	RELAY4_STATE(0);
	/*RELAY5*/
	GPIO_MyStruct.GPIO_Pin = RELAY5_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(RELAY5_GPIO, &GPIO_MyStruct);
	RELAY5_STATE(0);
	/*RELAY6*/
	GPIO_MyStruct.GPIO_Pin = RELAY6_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(RELAY6_GPIO, &GPIO_MyStruct);
	RELAY6_STATE(0);
	/*RELAY7*/
	GPIO_MyStruct.GPIO_Pin = RELAY7_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(RELAY7_GPIO, &GPIO_MyStruct);
	RELAY7_STATE(0);
	/*RELAY8*/
	GPIO_MyStruct.GPIO_Pin = RELAY8_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(RELAY8_GPIO, &GPIO_MyStruct);
	RELAY8_STATE(0);
	/*RELAY9*/
	GPIO_MyStruct.GPIO_Pin = RELAY9_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(RELAY9_GPIO, &GPIO_MyStruct);
	RELAY9_STATE(0);


	/*RELAY10*/
	GPIO_MyStruct.GPIO_Pin = RELAY10_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(RELAY10_GPIO, &GPIO_MyStruct);
	RELAY10_STATE(0);


	/*RELAY11*/
	GPIO_MyStruct.GPIO_Pin = RELAY11_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(RELAY11_GPIO, &GPIO_MyStruct);
	RELAY11_STATE(0);

//---------------------------------------------------------
//???淧??

	/*REL_1*/
	GPIO_MyStruct.GPIO_Pin = REL_1_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_1_GPIO, &GPIO_MyStruct);
	REL_1_STATE(0);
	
	/*REL_2*/
	GPIO_MyStruct.GPIO_Pin = REL_2_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_2_GPIO, &GPIO_MyStruct);
	REL_2_STATE(0);
	
	/*REL_3*/
	GPIO_MyStruct.GPIO_Pin = REL_3_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_3_GPIO, &GPIO_MyStruct);
	REL_TOP_a_STATE(0);

	/*REL_4*/
	GPIO_MyStruct.GPIO_Pin = REL_4_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_4_GPIO, &GPIO_MyStruct);
	REL_TOP_b_STATE(0);

	/*REL_L1*/
	GPIO_MyStruct.GPIO_Pin = REL_L1_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L1_GPIO, &GPIO_MyStruct);


	GPIO_MyStruct.GPIO_Pin = REL_L2_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L2_GPIO, &GPIO_MyStruct);
	
	GPIO_MyStruct.GPIO_Pin = REL_L3_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L3_GPIO, &GPIO_MyStruct);
	
	GPIO_MyStruct.GPIO_Pin = REL_L4_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L4_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_L5_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L5_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_L6_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L6_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_L7_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L7_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_L8_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L8_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_L9_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L9_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_L10_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L10_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_L11_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L11_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_L12_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_L12_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R1_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R1_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R2_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R2_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R3_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R3_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R4_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R4_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R5_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R5_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R6_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R6_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R7_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R7_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R8_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R8_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R9_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R9_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R10_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R10_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R11_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R11_GPIO, &GPIO_MyStruct);

	GPIO_MyStruct.GPIO_Pin = REL_R12_PIN;
	GPIO_MyStruct.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_MyStruct.GPIO_Mode = GPIO_Mode_Out_OD;
	GPIO_Init(REL_R12_GPIO, &GPIO_MyStruct);
	
	REL_L1_a_STATE(0);
	REL_L2_a_STATE(0);
	REL_L3_a_STATE(0);
	REL_L4_a_STATE(0);
	REL_L5_a_STATE(0);
	REL_L6_a_STATE(0);
	
	REL_L1_b_STATE(0);
	REL_L2_b_STATE(0);
	REL_L3_b_STATE(0);
	REL_L4_b_STATE(0);
	REL_L5_b_STATE(0);
	REL_L6_b_STATE(0);
	
	REL_R1_a_STATE(0);
	REL_R2_a_STATE(0);
	REL_R3_a_STATE(0);
	REL_R4_a_STATE(0);
	REL_R5_a_STATE(0);
	REL_R6_a_STATE(0);
	
	REL_R1_b_STATE(0);
	REL_R2_b_STATE(0);
	REL_R3_b_STATE(0);
	REL_R4_b_STATE(0);
	REL_R5_b_STATE(0);
	REL_R6_b_STATE(0);
}

