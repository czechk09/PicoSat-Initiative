/*
 * main.h
 *
 *  Created on: Mar 27, 2023
 *      Author: czechk
 */

#ifndef MAIN_H_
#define MAIN_H_



#endif /* MAIN_H_ */

#define DELAY 500000

//Addresses
#define RCC_ADDR 0x40023800
#define GPIOA_ADDR 0x40020000
#define GPIOD_ADDR 0x40020C00
#define SYSCFG_ADDR 0x40013800
#define EXTI_ADDR 0x40013C00

//Offsets
#define RCC_OFFSET 0x30
#define MODER_OFFSET 0x00
#define IDR_OFFSET 0x10
#define ODR_OFFSET 0x14
#define SYSCFG_EXTICR1_OFFSET 0x08
#define RCC_APB2ENR_OFFSET 0x44
#define RTSR_OFFSET 0x08
#define EXTI_IMR_OFFSET 0x00
#define EXTI_PR_OFFSET 0x14

typedef struct {
	uint32_t GPIOA_EN: 1;
	uint32_t GPIOB_EN: 1;
	uint32_t GPIOC_EN: 1;
	uint32_t GPIOD_EN: 1;
	uint32_t GPIOE_EN: 1;
	uint32_t GPIOF_EN: 1;
	uint32_t GPIOG_EN: 1;
	uint32_t GPIOH_EN: 1;
	uint32_t GPIOI_EN: 1;
	uint32_t  reserved1: 3;
	uint32_t CRC_EN: 1;
	uint32_t reserved2: 5;
}RCC_AHB1ENR_t;

typedef struct {
	uint32_t MODER0: 2;
	uint32_t MODER1: 2;
	uint32_t MODER2: 2;
	uint32_t MODER3: 2;
	uint32_t MODER4: 2;
	uint32_t MODER5: 2;
	uint32_t MODER6: 2;
	uint32_t MODER7: 2;
	uint32_t MODER8: 2;
	uint32_t MODER9: 2;
	uint32_t MODER10: 2;
	uint32_t MODER11: 2;
	uint32_t MODER12: 2;
	uint32_t MODER13: 2;
	uint32_t MODER14: 2;
	uint32_t MODER15: 2;
}GPIOx_MODER_t;

typedef struct {
	uint32_t ODR0: 1;
	uint32_t ODR1: 1;
	uint32_t ODR2: 1;
	uint32_t ODR3: 1;
	uint32_t ODR4: 1;
	uint32_t ODR5: 1;
	uint32_t ODR6: 1;
	uint32_t ODR7: 1;
	uint32_t ODR8: 1;
	uint32_t ODR9: 1;
	uint32_t ODR10: 1;
	uint32_t ODR11: 1;
	uint32_t ODR12: 1;
	uint32_t ODR13: 1;
	uint32_t ODR14: 1;
	uint32_t ODR15: 1;
	uint32_t reserved: 16;
}GPIOx_ODR_t;

typedef struct {
	uint32_t IDR0: 1;
	uint32_t IDR1: 1;
	uint32_t IDR2: 1;
	uint32_t IDR3: 1;
	uint32_t IDR4: 1;
	uint32_t IDR5: 1;
	uint32_t IDR6: 1;
	uint32_t IDR7: 1;
	uint32_t IDR8: 1;
	uint32_t IDR9: 1;
	uint32_t IDR10: 1;
	uint32_t IDR11: 1;
	uint32_t IDR12: 1;
	uint32_t IDR13: 1;
	uint32_t IDR14: 1;
	uint32_t IDR15: 1;
	uint32_t reserved: 16;
}GPIOx_IDR_t;

typedef struct {
	uint32_t EXTI0: 4;
	uint32_t EXTI1: 4;
	uint32_t EXTI2: 4;
	uint32_t EXTI3: 4;
	uint32_t reserved: 16;
}SYSCFG_EXTICR1_t;

typedef struct {
	uint32_t TR0: 1;
	uint32_t TR1: 1;
	uint32_t TR2: 1;
	uint32_t TR3: 1;
	uint32_t TR4: 1;
	uint32_t TR5: 1;
	uint32_t TR6: 1;
	uint32_t TR7: 1;
	uint32_t TR8: 1;
	uint32_t TR9: 1;
	uint32_t TR10: 1;
	uint32_t TR11: 1;
	uint32_t TR12: 1;
	uint32_t TR13: 1;
	uint32_t TR14: 1;
	uint32_t TR15: 1;
	uint32_t TR16: 1;
	uint32_t TR17: 1;
	uint32_t TR18: 1;
	uint32_t TR19: 1;
	uint32_t TR20: 1;
	uint32_t TR21: 1;
	uint32_t TR22: 1;
	uint32_t reserved: 9;
}EXTI_RTSR_t;

typedef struct {
	uint32_t MR0: 1;
	uint32_t MR1: 1;
	uint32_t MR2: 1;
	uint32_t MR3: 1;
	uint32_t MR4: 1;
	uint32_t MR5: 1;
	uint32_t MR6: 1;
	uint32_t MR7: 1;
	uint32_t MR8: 1;
	uint32_t MR9: 1;
	uint32_t MR10: 1;
	uint32_t MR11: 1;
	uint32_t MR12: 1;
	uint32_t MR13: 1;
	uint32_t MR14: 1;
	uint32_t MR15: 1;
	uint32_t MR16: 1;
	uint32_t MR17: 1;
	uint32_t MR18: 1;
	uint32_t MR19: 1;
	uint32_t MR20: 1;
	uint32_t MR21: 1;
	uint32_t MR22: 1;
	uint32_t reserved: 9;
}EXTI_IMR_t;

typedef struct {
	uint32_t PR0: 1;
	uint32_t PR1: 1;
	uint32_t PR2: 1;
	uint32_t PR3: 1;
	uint32_t PR4: 1;
	uint32_t PR5: 1;
	uint32_t PR6: 1;
	uint32_t PR7: 1;
	uint32_t PR8: 1;
	uint32_t PR9: 1;
	uint32_t PR10: 1;
	uint32_t PR11: 1;
	uint32_t PR12: 1;
	uint32_t PR13: 1;
	uint32_t PR14: 1;
	uint32_t PR15: 1;
	uint32_t PR16: 1;
	uint32_t PR17: 1;
	uint32_t PR18: 1;
	uint32_t PR19: 1;
	uint32_t PR20: 1;
	uint32_t PR21: 1;
	uint32_t PR22: 1;
	uint32_t reserved: 9;
}EXTI_PR_t;








