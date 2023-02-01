#ifndef __BSP_USER_KEY__
#define __BSP_USER_KEY__

#include "stm32f10x.h"

#define Key_ON  0
#define Key_OFF 1

#define User_Key1_Rcc  RCC_APB2Periph_GPIOE
#define User_Key1_Port GPIOE
#define User_Key1_Pin  GPIO_Pin_3

void Bsp_user_key1_init(void);
int key_scan(GPIO_TypeDef* GPIOx, uint16_t GPIO_pin);

#endif
