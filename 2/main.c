#include "stm32f10x.h"
#include "stm32f10x_gpio.h"

//置位  |=  
//清零  &=~
int main (void)
{
#if 0
	//开启时钟，时钟挂载在AHB总线上
	RCC->APB2ENR |= ((1)<<3);
	
	//配置输出模式CRL（PB5的5<8所以为端口普配置低寄存器）（四位为一组所以4*5）（推挽输出）
	//建议加上寄存器复位代码
	GPIOB->CRL &=~ ((0x0F)<<(4*5));//清零
	GPIOB->CRL |= ((1)<<(4*5));
	
	//设置端口输出寄存器ODR为输出低电平
	//建议加上寄存器复位代码
	GPIOB->ODR &=~ ((1)<<(5));//清零
	GPIOB->ODR &= ~(1<<5);
#elif 0
	//开启时钟，时钟挂载在AHB总线上
	RCC->APB2ENR |= ((1)<<3);
	
	//配置输出模式CRL（PB5的5<8所以为端口普配置低寄存器）（四位为一组所以4*5）（推挽输出）
	//建议加上寄存器复位代码
	GPIOB->CRL &=~ ((0x0F)<<(4*5));//清零
	GPIOB->CRL |= ((1)<<(4*5));
	
	//设置端口输出寄存器ODR为输出低电平
	GPIO_ResetBits(GPIOB,GPIO_Pin_5);
#elif 1  //固件库编程
		//开启时钟，时钟挂载在AHB总线上
	GPIO_InitTypeDef GPIO_INIT;
	RCC->APB2ENR |= ((1)<<3);
	
	//配置输出模式CRL（PB5的5<8所以为端口普配置低寄存器）（四位为一组所以4*5）（推挽输出）
	//建议加上寄存器复位代码
	GPIO_INIT.GPIO_Mode =	GPIO_Mode_Out_PP;
	GPIO_INIT.GPIO_Pin = GPIO_Pin_5;
	GPIO_INIT.GPIO_Speed  = GPIO_PIN_SPEED_10MHZ;
	GPIO_Init(GPIOB, &GPIO_INIT);
	//设置端口输出寄存器ODR为输出低电平
	GPIO_ResetBits(GPIOB,GPIO_Pin_5);
#endif

}



void SystemInit(void)
{
	// 函数体为空，目的是为了骗过编译器不报错
}
