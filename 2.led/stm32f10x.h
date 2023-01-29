#ifndef __STM32F10X_H__
#define __STM32F10X_H__

//���stm32�Ĵ���ӳ��Ĵ���
//�����������ߵ�ַ
#define PERIPH_BASE  (unsigned int)0x40000000
#define PERIPH_APB1  PERIPH_BASE
#define PERIPH_APB2  (PERIPH_BASE+0x10000)
#define PERIPH_AHB   (PERIPH_BASE+0x20000)

//��������
#define RCC_BASE     (PERIPH_AHB+0x1000)
#define GPIOB_BASE   (PERIPH_APB2+0x0C00)

#if 0
//����RCC�Ĺ���
#define RCC_CR         *(unsigned int*)(RCC_BASE+0x00)
#define RCC_CFGR       *(unsigned int*)(RCC_BASE+0x04)
#define RCC_CIR        *(unsigned int*)(RCC_BASE+0x08)
#define RCC_APB2RSTR   *(unsigned int*)(RCC_BASE+0x0C)
#define RCC_APB1RSTR   *(unsigned int*)(RCC_BASE+0x10)
#define RCC_AHBENR     *(unsigned int*)(RCC_BASE+0x14)
#define RCC_APB2ENR    *(unsigned int*)(RCC_BASE+0x18)
#define RCC_APB1ENR    *(unsigned int*)(RCC_BASE+0x1C)
#define RCC_BDCR       *(unsigned int*)(RCC_BASE+0x20)
#define RCC_CSR        *(unsigned int*)(RCC_BASE+0x24)
#define RCC_AHBRSTR    *(unsigned int*)(RCC_BASE+0x28)
#define RCC_CFGR2      *(unsigned int*)(RCC_BASE+0x2C)

//����GPIOB�Ĺ���
#define GPIOB_CRL    *(unsigned int*)(GPIOB_BASE+0x00)
#define GPIOB_CRH    *(unsigned int*)(GPIOB_BASE+0x04)
#define GPIOB_IDR    *(unsigned int*)(GPIOB_BASE+0x08)
#define GPIOB_ODR    *(unsigned int*)(GPIOB_BASE+0x0C)
#define GPIOB_BSRR   *(unsigned int*)(GPIOB_BASE+0x10)
#define GPIOB_BSR    *(unsigned int*)(GPIOB_BASE+0x14)
#define GPIOB_LCKR   *(unsigned int*)(GPIOB_BASE+0x18)
#endif

typedef unsigned int  uint32_t;
typedef unsigned short  uint16_t;

typedef struct
{
	uint32_t CRL;
	uint32_t CRH;
	uint32_t IDR;
	uint32_t ODR;
	uint32_t BSRR;
	uint32_t BRR;
	uint32_t LCKR;
}GPIO_Typedef;

typedef struct
{
		uint32_t CR;
		uint32_t CFGR;
		uint32_t CIR;
		uint32_t APB2RSTR;
		uint32_t APB1RSTR;
		uint32_t AHBENR;
		uint32_t APB2ENR;
		uint32_t APB1ENR;
		uint32_t BDCR;
		uint32_t CSR;
		uint32_t AHBRSTR;
		uint32_t CFGR2;
}RCC_Typedef;
//��GPIO_BASE�ĵ�ַת��Ϊ�ṹ�壬�����嵽����
#define  GPIOB  ((GPIO_Typedef*)GPIOB_BASE)
//��RCC�ĵ�ַת��Ϊ�ṹ�壬�����嵽����
#define  RCC  ((RCC_Typedef*)RCC_BASE)


#endif
