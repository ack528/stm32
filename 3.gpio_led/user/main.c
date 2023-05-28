#include "stm32f10x.h"
#include "bsp_led.h"
void delay(uint32_t num)
{
	for(;num>0;num--)
	{}
}

int main()
{
	USER_LED0();
	USER_LED1();
	while(1)
	{
		User_led0(user_led_on);
		User_led1(user_led_on);
		delay(0xFFFFF);
		
		User_led0(user_led_off);
		User_led1(user_led_off);
		delay(0xFFFFF);
	}
}
