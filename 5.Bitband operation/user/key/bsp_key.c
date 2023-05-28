
#include "bsp_key.h"

void bsp_key0_init(void)
{
	GPIO_InitTypeDef key_init_struct;
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
	key_init_struct.GPIO_Mode = GPIO_Mode_IPU;
	key_init_struct.GPIO_Pin = GPIO_Pin_4;
	GPIO_Init(GPIOE, &key_init_struct);
}
