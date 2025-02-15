/*
 * main.h
 *
 *  Created on: Mar 24, 2023
 *      Author: czechk
 */

#ifndef MAIN_H_
#define MAIN_H_



#endif /* MAIN_H_ */


#define DELAY 500000

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
	uint32_t reserved1: 3;
	uint32_t CRC_EN: 1;
	uint32_t reserved2: 5;
} RCC_AHB1ENR_t;

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
} GPIOx_MODER_t;

typedef struct {
	uint32_t IDR0 : 1;
	uint32_t IDR1 : 1;
	uint32_t IDR2 : 1;
	uint32_t IDR3 : 1;
	uint32_t IDR4 : 1;
	uint32_t IDR5 : 1;
	uint32_t IDR6 : 1;
	uint32_t IDR7 : 1;
	uint32_t IDR8 : 1;
	uint32_t IDR9 : 1;
	uint32_t IDR10 : 1;
	uint32_t IDR11 : 1;
	uint32_t IDR12 : 1;
	uint32_t IDR13 : 1;
	uint32_t IDR14 : 1;
	uint32_t IDR15 : 1;
	uint32_t reserved : 16;
} GPIOx_IDR_t;

typedef struct {
	uint32_t ODR0 : 1;
	uint32_t ODR1 : 1;
	uint32_t ODR2 : 1;
	uint32_t ODR3 : 1;
	uint32_t ODR4 : 1;
	uint32_t ODR5 : 1;
	uint32_t ODR6 : 1;
	uint32_t ODR7 : 1;
	uint32_t ODR8 : 1;
	uint32_t ODR9 : 1;
	uint32_t ODR10 : 1;
	uint32_t ODR11 : 1;
	uint32_t ODR12 : 1;
	uint32_t ODR13 : 1;
	uint32_t ODR14 : 1;
	uint32_t ODR15 : 1;
	uint32_t reserved : 16;
} GPIOx_ODR_t;
