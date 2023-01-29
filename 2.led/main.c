#include "stm32f10x.h"
#include "stm32f10x_gpio.h"

//��λ  |=  
//����  &=~
int main (void)
{
#if 0
	//����ʱ�ӣ�ʱ�ӹ�����AHB������
	RCC->APB2ENR |= ((1)<<3);
	
	//�������ģʽCRL��PB5��5<8����Ϊ�˿������õͼĴ���������λΪһ������4*5�������������
	//������ϼĴ�����λ����
	GPIOB->CRL &=~ ((0x0F)<<(4*5));//����
	GPIOB->CRL |= ((1)<<(4*5));
	
	//���ö˿�����Ĵ���ODRΪ����͵�ƽ
	//������ϼĴ�����λ����
	GPIOB->ODR &=~ ((1)<<(5));//����
	GPIOB->ODR &= ~(1<<5);
#elif 0
	//����ʱ�ӣ�ʱ�ӹ�����AHB������
	RCC->APB2ENR |= ((1)<<3);
	
	//�������ģʽCRL��PB5��5<8����Ϊ�˿������õͼĴ���������λΪһ������4*5�������������
	//������ϼĴ�����λ����
	GPIOB->CRL &=~ ((0x0F)<<(4*5));//����
	GPIOB->CRL |= ((1)<<(4*5));
	
	//���ö˿�����Ĵ���ODRΪ����͵�ƽ
	GPIO_ResetBits(GPIOB,GPIO_Pin_5);
#elif 1  //�̼�����
		//����ʱ�ӣ�ʱ�ӹ�����AHB������
	GPIO_InitTypeDef GPIO_INIT;
	RCC->APB2ENR |= ((1)<<3);
	
	//�������ģʽCRL��PB5��5<8����Ϊ�˿������õͼĴ���������λΪһ������4*5�������������
	//������ϼĴ�����λ����
	GPIO_INIT.GPIO_Mode =	GPIO_Mode_Out_PP;
	GPIO_INIT.GPIO_Pin = GPIO_Pin_5;
	GPIO_INIT.GPIO_Speed  = GPIO_PIN_SPEED_10MHZ;
	GPIO_Init(GPIOB, &GPIO_INIT);
	//���ö˿�����Ĵ���ODRΪ����͵�ƽ
	GPIO_ResetBits(GPIOB,GPIO_Pin_5);
#endif

}



void SystemInit(void)
{
	// ������Ϊ�գ�Ŀ����Ϊ��ƭ��������������
}
