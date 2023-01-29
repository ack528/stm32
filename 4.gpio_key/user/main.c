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
		User_led0(ON);
		delay(0xFFFFF);
		User_led0(OFF);
		User_led1(ON);
		delay(0xFFFFF);
		User_led1(OFF);
	}
}
