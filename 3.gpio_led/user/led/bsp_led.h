#ifndef __BSP_LED_H__
#define __BSP_LED_H__

#include "stm32f10x.h"
#define USER_LED0_PORT GPIOB
#define USER_LED0_PIN  GPIO_Pin_5
#define USER_LED1_PORT GPIOE
#define USER_LED1_PIN  GPIO_Pin_5

#define ON 1
#define OFF 0

#define User_led0(a) if(a) GPIO_ResetBits(GPIOB,GPIO_Pin_5); else GPIO_SetBits(GPIOB,GPIO_Pin_5);
#define User_led1(a) if(a) GPIO_ResetBits(GPIOE,GPIO_Pin_5); else GPIO_SetBits(GPIOE,GPIO_Pin_5);

void USER_LED0(void);//用户LED0
void USER_LED1(void);//用户LED1
#endif
