//存放stm32寄存器映射的代码
//定义外设总线地址
#define PERIPH_BASE  (unsigned int)0x40000000
#define PERIPH_APB1  PERIPH_BASE
#define PERIPH_APB2  (PERIPH_BASE+0x10000)
#define PERIPH_AHB   (PERIPH_BASE+0x20000)

//定义外设
#define RCC_BASE     (PERIPH_AHB+0x1000)
#define GPIOB_BASE   (PERIPH_APB2+0x0C00)

#define RCC_APB2ENR  *(unsigned int*)(RCC_BASE+0x18)

//定义GPIOB的功能
#define GPIOB_CRL    *(unsigned int*)GPIOB_BASE
#define GPIOB_CRH    *(unsigned int*)(GPIOB_BASE+0x04)
#define GPIOB_ODR    *(unsigned int*)(GPIOB_BASE+0x0C)
