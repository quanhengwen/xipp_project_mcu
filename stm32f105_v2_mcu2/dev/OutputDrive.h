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

#define RELAY1_STATE(x) (!x)?GPIO_SetBits(RELAY1_GPIO,RELAY1_PIN):GPIO_ResetBits(RELAY1_GPIO,RELAY1_PIN)
#define RELAY2_STATE(x) (!x)?GPIO_SetBits(RELAY2_GPIO,RELAY2_PIN):GPIO_ResetBits(RELAY2_GPIO,RELAY2_PIN)
#define RELAY3_STATE(x) (!x)?GPIO_SetBits(RELAY3_GPIO,RELAY3_PIN):GPIO_ResetBits(RELAY3_GPIO,RELAY3_PIN)
#define RELAY4_STATE(x) (!x)?GPIO_SetBits(RELAY4_GPIO,RELAY4_PIN):GPIO_ResetBits(RELAY4_GPIO,RELAY4_PIN)
#define RELAY5_STATE(x) (!x)?GPIO_SetBits(RELAY5_GPIO,RELAY5_PIN):GPIO_ResetBits(RELAY5_GPIO,RELAY5_PIN)
#define RELAY6_STATE(x) (!x)?GPIO_SetBits(RELAY6_GPIO,RELAY6_PIN):GPIO_ResetBits(RELAY6_GPIO,RELAY6_PIN)
#define RELAY7_STATE(x) (!x)?GPIO_SetBits(RELAY7_GPIO,RELAY7_PIN):GPIO_ResetBits(RELAY7_GPIO,RELAY7_PIN)
#define RELAY8_STATE(x) (!x)?GPIO_SetBits(RELAY8_GPIO,RELAY8_PIN):GPIO_ResetBits(RELAY8_GPIO,RELAY8_PIN)
#define RELAY9_STATE(x) (!x)?GPIO_SetBits(RELAY9_GPIO,RELAY9_PIN):GPIO_ResetBits(RELAY9_GPIO,RELAY9_PIN)
#define RELAY10_STATE(x) (!x)?GPIO_SetBits(RELAY10_GPIO,RELAY10_PIN):GPIO_ResetBits(RELAY10_GPIO,RELAY10_PIN)
#define RELAY11_STATE(x) (!x)?GPIO_SetBits(RELAY11_GPIO,RELAY11_PIN):GPIO_ResetBits(RELAY11_GPIO,RELAY11_PIN)
#define RELAY12_STATE(x) (!x)?GPIO_SetBits(RELAY12_GPIO,RELAY12_PIN):GPIO_ResetBits(RELAY12_GPIO,RELAY12_PIN)
#define RELAY13_STATE(x) (x)?GPIO_SetBits(RELAY13_GPIO,RELAY13_PIN):GPIO_ResetBits(RELAY13_GPIO,RELAY13_PIN)

//----------------------------------------

#define MADA_1A 				GPIOE
#define MADA_1A_PIN  	GPIO_Pin_8
#define MADA_1B 				GPIOE
#define MADA_1B_PIN  	GPIO_Pin_7

#define MADA_2A 				GPIOB
#define MADA_2A_PIN  	GPIO_Pin_2
#define MADA_2B 				GPIOB
#define MADA_2B_PIN  	GPIO_Pin_1

#define MADA1A_STATE(x) (!x)?GPIO_SetBits(MADA_1A,MADA_1A_PIN):GPIO_ResetBits(MADA_1A,MADA_1A_PIN)
#define MADA1B_STATE(x) (!x)?GPIO_SetBits(MADA_1B,MADA_1B_PIN):GPIO_ResetBits(MADA_1B,MADA_1B_PIN)
#define MADA2A_STATE(x) (!x)?GPIO_SetBits(MADA_2A,MADA_2A_PIN):GPIO_ResetBits(MADA_2A,MADA_2A_PIN)
#define MADA2B_STATE(x) (!x)?GPIO_SetBits(MADA_2B,MADA_2B_PIN):GPIO_ResetBits(MADA_2B,MADA_2B_PIN)

//----------------------------------------
//????

#define  	BAINA				GPIOC
#define		BAINA_PIN		GPIO_Pin_6
#define		ANMO4				GPIOA
#define		ANMO4_PIN		GPIO_Pin_7
#define		ANMO3				GPIOC
#define		ANMO3_PIN		GPIO_Pin_4
#define		ANMO2				GPIOC
#define		ANMO2_PIN		GPIO_Pin_5
#define		ANMO1				GPIOB
#define		ANMO1_PIN		GPIO_Pin_0

#define BAINA_STATE(x) (!x)?GPIO_SetBits(BAINA,BAINA_PIN):GPIO_ResetBits(BAINA,BAINA_PIN)
#define ANMO4_STATE(x) (!x)?GPIO_SetBits(ANMO4,ANMO4_PIN):GPIO_ResetBits(ANMO4,ANMO4_PIN)
#define ANMO3_STATE(x) (!x)?GPIO_SetBits(ANMO3,ANMO3_PIN):GPIO_ResetBits(ANMO3,ANMO3_PIN)
#define ANMO2_STATE(x) (!x)?GPIO_SetBits(ANMO2,ANMO2_PIN):GPIO_ResetBits(ANMO2,ANMO2_PIN)
#define ANMO1_STATE(x) (!x)?GPIO_SetBits(ANMO1,ANMO1_PIN):GPIO_ResetBits(ANMO1,ANMO1_PIN)

//??????
void OutputDriveInit(void);

//??????????????
void RelayTest(void);//
	
#endif
