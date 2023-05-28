#include "bsp_led.h"
void USER_LED0(void)//初始化用户LED0
{	
	GPIO_InitTypeDef GPIO_INIT_STRUCT;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	GPIO_INIT_STRUCT.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_INIT_STRUCT.GPIO_Pin = GPIO_Pin_5;
	GPIO_INIT_STRUCT.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(USER_LED0_PORT, &GPIO_INIT_STRUCT);
}
void USER_LED1(void)//初始化用户LED1
{	
	GPIO_InitTypeDef GPIO_INIT_STRUCT;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
	GPIO_INIT_STRUCT.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_INIT_STRUCT.GPIO_Pin = GPIO_Pin_5;
	GPIO_INIT_STRUCT.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(USER_LED1_PORT, &GPIO_INIT_STRUCT);
}
void User_led0(uint16_t statu)
{
	if(statu) 
	GPIO_ResetBits(GPIOB,GPIO_Pin_5); 
	else 
	GPIO_SetBits(GPIOB,GPIO_Pin_5);
}
void User_led1(uint16_t statu)
{
	if(statu) 
	GPIO_ResetBits(GPIOE,GPIO_Pin_5); 
	else 
	GPIO_SetBits(GPIOE,GPIO_Pin_5);
}

