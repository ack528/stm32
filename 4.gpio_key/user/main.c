#include "stm32f10x.h"
#include "bsp_led.h"
#include "bsp_key.h"
void delay(uint32_t num)
{
	for(;num>0;num--)
	{}
}

int main()
{
//	uint16_t user_led = 0;
	uint16_t key_statu = 0;

	USER_LED0();
	USER_LED1();
	User_led0(user_led_off);
	User_led1(user_led_off);
	bsp_key0_init();

	while(1)
	{

		if(GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4) == 0)//按键按下
		{
			delay(0xFFF);
			if(GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4) == 0)//确认按下
			{
				if(key_statu == 0)
				{
					key_statu = 1;
					User_led0(key_statu);
				}
			}
		}
		else
		{
			key_statu = 0;
			User_led0(key_statu);
		}
		

/*
		if(GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4) == 1)
		{
			while(GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_4) == 1);
			key_statu = 1;
		}
		User_led0(key_statu);
*/

		
	}
	
}
