/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2023 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

// pointer to GPIOC - IDR (input data
// int* ptr_idr_c = (int*)(0x40020800 + 0x10);

#include <stdint.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	//Enable RCC register (base address 0x40023800; offset is 0x30)
	int* ptr_rcc = (int*)(0x40023800 + 0x30);

	//Enable port 3 for GPIOD
	*ptr_rcc = *ptr_rcc | (1 << 3);

	//Enable pin mode for D12, D13, D14, & D15 (GPIO mode offset is 0x00);
	int* ptr_mode = (int*)(0x40020C00 + 0x00);



	//Set pin D12 to 1 (Green)
	*ptr_mode = *ptr_mode | (1 << 24);
	*ptr_mode = *ptr_mode & ~(1 << 25);

	//Set pin D13 to 1 (Orange)
	*ptr_mode = *ptr_mode | (1 << 26);
	*ptr_mode = *ptr_mode & ~(1 << 27);

	//Set pin D14 to 1 (Red)
	*ptr_mode = *ptr_mode | (1 << 28);
	*ptr_mode = *ptr_mode & ~(1 << 29);

	//Set pin D15 to 1 (Blue)
	*ptr_mode = *ptr_mode | (1 << 30);
	*ptr_mode = *ptr_mode & ~(1 << 31);

	//Enable pin output data to be 1
	int* ptr_output = (int*)(0x40020C00 + 0x14);

	*ptr_output = *ptr_output | (1 << 12);



    /* Loop forever */
	while (1) {
		*ptr_output = *ptr_output | (1  << 12);
		for (int i = 0; i < 500000; i++);
		*ptr_output = *ptr_output & ~(1 << 12);
		*ptr_output = *ptr_output | (1 << 15);
		for (int i = 0; i < 500000; i++);
		*ptr_output = *ptr_output & ~(1 << 15);
		*ptr_output = *ptr_output | (1 << 14);
		for (int i = 0; i < 500000; i++);
		*ptr_output = *ptr_output & ~(1 << 14);
		*ptr_output = *ptr_output | (1 << 13);
		for (int i = 0; i < 500000; i++);
		*ptr_output = *ptr_output & ~(1 << 13);
	}
}
