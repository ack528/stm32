#ifndef __BSP_LED_H__
#define __BSP_LED_H__

#include "stm32f10x.h"
#define USER_LED0_PORT GPIOB
#define USER_LED0_PIN  GPIO_Pin_5
#define USER_LED1_PORT GPIOE
#define USER_LED1_PIN  GPIO_Pin_5


void USER_LED0(void);//用户LED0
void USER_LED1(void);//用户LED1

typedef enum
{
	user_led_on = 1,
	user_led_off = 0
}user_led_para;


void User_led0(uint16_t statu);//开关userled
void User_led1(uint16_t statu);
#endif
