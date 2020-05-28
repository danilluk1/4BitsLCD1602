#ifndef __LCD_H

#define __LCD_H

#include "stm32f4xx_hal.h"

//HIGH VOLTAGE
#define d0_set HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, GPIO_PIN_SET)
#define d1_set HAL_GPIO_WritePin(GPIOD, GPIO_PIN_1, GPIO_PIN_SET)
#define d2_set HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_SET)
#define d3_set HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_SET)
#define d4_set HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_SET)
#define d5_set HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_SET)
#define d6_set HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_SET)
#define d7_set HAL_GPIO_WritePin(GPIOD, GPIO_PIN_7, GPIO_PIN_SET)


//LOW VOLTAGE
#define d0_reset HAL_GPIO_WritePin(GPIOD, GPIO_PIN_0, GPIO_PIN_RESET)
#define d1_reset HAL_GPIO_WritePin(GPIOD, GPIO_PIN_1, GPIO_PIN_RESET)
#define d2_reset HAL_GPIO_WritePin(GPIOD, GPIO_PIN_2, GPIO_PIN_RESET)
#define d3_reset HAL_GPIO_WritePin(GPIOD, GPIO_PIN_3, GPIO_PIN_RESET)
#define d4_reset HAL_GPIO_WritePin(GPIOD, GPIO_PIN_4, GPIO_PIN_RESET)
#define d5_reset HAL_GPIO_WritePin(GPIOD, GPIO_PIN_5, GPIO_PIN_RESET)
#define d6_reset HAL_GPIO_WritePin(GPIOD, GPIO_PIN_6, GPIO_PIN_RESET)
#define d7_reset HAL_GPIO_WritePin(GPIOD, GPIO_PIN_7, GPIO_PIN_RESET)


//Enable pin
#define e1 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_SET)
#define e0 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_9, GPIO_PIN_RESET)

#define rs1 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_SET)
#define rs0 HAL_GPIO_WritePin(GPIOE, GPIO_PIN_8, GPIO_PIN_RESET)


void LCD_ini();

#endif

