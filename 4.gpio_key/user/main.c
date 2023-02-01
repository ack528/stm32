#include "stm32f10x.h"
#include "bsp_user_led.h"
#include "bsp_user_key.h"
#include "SysTick.h"
void delay(uint32_t num)
{
	for(;num>0;num--)
	{}
}

int main()
{

	USER_LED0();
	Bsp_user_key1_init();
	SysTick_Init(72);
	
	while(1)
	{
		if(key_scan(User_Key1_Port,User_Key1_Pin) ==1)
		  {
				User_led0(OFF);
				
			}
		
	}
	
}
