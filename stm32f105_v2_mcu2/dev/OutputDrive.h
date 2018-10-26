#ifndef __OUTPUT__DIVER__H___
#define __OUTPUT__DIVER__H___

#include "system_init.h"


#define RELAY1_GPIO 	GPIOC
#define RELAY1_PIN  	GPIO_Pin_8

#define RELAY2_GPIO 	GPIOB
#define RELAY2_PIN  	GPIO_Pin_12

#define RELAY3_GPIO 	GPIOB
#define RELAY3_PIN  	GPIO_Pin_14

#define RELAY4_GPIO 	GPIOB
#define RELAY4_PIN  	GPIO_Pin_15

#define RELAY5_GPIO 	GPIOD
#define RELAY5_PIN  	GPIO_Pin_10
                                                                            
#define RELAY6_GPIO 	GPIOD
#define RELAY6_PIN  	GPIO_Pin_11

#define RELAY7_GPIO 	GPIOD
#define RELAY7_PIN  	GPIO_Pin_12

#define RELAY8_GPIO 	GPIOD
#define RELAY8_PIN  	GPIO_Pin_13

#define RELAY9_GPIO 	GPIOC
#define RELAY9_PIN  	GPIO_Pin_7

#define RELAY10_GPIO 	GPIOD
#define RELAY10_PIN  	GPIO_Pin_14

#define RELAY11_GPIO 	GPIOA
#define RELAY11_PIN  	GPIO_Pin_8

#define RELAY12_GPIO 	GPIOC
#define RELAY12_PIN  	GPIO_Pin_9

#define RELAY13_GPIO 	GPIOE
#define RELAY13_PIN  	GPIO_Pin_15

#define RELAY1_STATE(x) (!x)>0?GPIO_SetBits(RELAY1_GPIO,RELAY1_PIN):GPIO_ResetBits(RELAY1_GPIO,RELAY1_PIN)
#define RELAY2_STATE(x) (!x)>0?GPIO_SetBits(RELAY2_GPIO,RELAY2_PIN):GPIO_ResetBits(RELAY2_GPIO,RELAY2_PIN)
#define RELAY3_STATE(x) (!x)>0?GPIO_SetBits(RELAY3_GPIO,RELAY3_PIN):GPIO_ResetBits(RELAY3_GPIO,RELAY3_PIN)
#define RELAY4_STATE(x) (!x)>0?GPIO_SetBits(RELAY4_GPIO,RELAY4_PIN):GPIO_ResetBits(RELAY4_GPIO,RELAY4_PIN)
#define RELAY5_STATE(x) (!x)>0?GPIO_SetBits(RELAY5_GPIO,RELAY5_PIN):GPIO_ResetBits(RELAY5_GPIO,RELAY5_PIN)
#define RELAY6_STATE(x) (!x)>0?GPIO_SetBits(RELAY6_GPIO,RELAY6_PIN):GPIO_ResetBits(RELAY6_GPIO,RELAY6_PIN)
#define RELAY7_STATE(x) (!x)>0?GPIO_SetBits(RELAY7_GPIO,RELAY7_PIN):GPIO_ResetBits(RELAY7_GPIO,RELAY7_PIN)
#define RELAY8_STATE(x) (!x)>0?GPIO_SetBits(RELAY8_GPIO,RELAY8_PIN):GPIO_ResetBits(RELAY8_GPIO,RELAY8_PIN)
#define RELAY9_STATE(x) (!x)>0?GPIO_SetBits(RELAY9_GPIO,RELAY9_PIN):GPIO_ResetBits(RELAY9_GPIO,RELAY9_PIN)
#define RELAY10_STATE(x) (!x)>0?GPIO_SetBits(RELAY10_GPIO,RELAY10_PIN):GPIO_ResetBits(RELAY10_GPIO,RELAY10_PIN)
#define RELAY11_STATE(x) (!x)>0?GPIO_SetBits(RELAY11_GPIO,RELAY11_PIN):GPIO_ResetBits(RELAY11_GPIO,RELAY11_PIN)
#define RELAY12_STATE(x) (!x)>0?GPIO_SetBits(RELAY12_GPIO,RELAY12_PIN):GPIO_ResetBits(RELAY12_GPIO,RELAY12_PIN)
#define RELAY13_STATE(x) (x)>0?GPIO_SetBits(RELAY13_GPIO,RELAY13_PIN):GPIO_ResetBits(RELAY13_GPIO,RELAY13_PIN)

//----------------------------------------

#define MADA_1A 				GPIOE
#define MADA_1A_PIN  	GPIO_Pin_8
#define MADA_1B 				GPIOE
#define MADA_1B_PIN  	GPIO_Pin_7

#define MADA_2A 				GPIOB
#define MADA_2A_PIN  	GPIO_Pin_2
#define MADA_2B 				GPIOB
#define MADA_2B_PIN  	GPIO_Pin_1

#define MADA1A_STATE(x) (!x)>0?GPIO_SetBits(MADA_1A,MADA_1A_PIN):GPIO_ResetBits(MADA_1A,MADA_1A_PIN)
#define MADA1B_STATE(x) (!x)>0?GPIO_SetBits(MADA_1B,MADA_1B_PIN):GPIO_ResetBits(MADA_1B,MADA_1B_PIN)
#define MADA2A_STATE(x) (!x)>0?GPIO_SetBits(MADA_2A,MADA_2A_PIN):GPIO_ResetBits(MADA_2A,MADA_2A_PIN)
#define MADA2B_STATE(x) (!x)>0?GPIO_SetBits(MADA_2B,MADA_2B_PIN):GPIO_ResetBits(MADA_2B,MADA_2B_PIN)

//----------------------------------------
//变速马达
#define BS_MADAMADA_STATE(x) (x)?GPIO_SetBits(GPIOD,GPIO_Pin_15):GPIO_ResetBits(GPIOD,GPIO_Pin_15)


//初始化
void OutputDriveInit(void);

//继电器输出测试
void RelayTest(void);//
	
#endif
