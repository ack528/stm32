#include "bsp_user_key.h"
#include "SysTick.h"

void Bsp_user_key1_init()//初始化user_key1
{
	GPIO_InitTypeDef Key_init_stu;
	RCC_APB2PeriphClockCmd(User_Key1_Rcc,ENABLE);
	Key_init_stu.GPIO_Mode = GPIO_Mode_IPU;
	Key_init_stu.GPIO_Pin = User_Key1_Pin;
	
	GPIO_Init(User_Key1_Port,&Key_init_stu);
}

//上拉输入，检测低电平
int key_scan(GPIO_TypeDef* GPIOx, uint16_t GPIO_pin)
{
	if(GPIO_ReadInputDataBit(GPIOx,GPIO_pin) == Key_ON)
	{
		delay_ms(10);
		while(GPIO_ReadInputDataBit(GPIOx,GPIO_pin) == Key_ON);
		return 1;
	}
	else return 0;
}
