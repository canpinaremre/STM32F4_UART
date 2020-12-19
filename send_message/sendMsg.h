/*
 * @Author: canpinaremre
 * Purpose: To send messages via UART
 * Language:  C
 */


#include "stm32f4xx_hal.h"
#include "main.h"
#include <string.h>
#include "stdio.h"

void sendInt(uint32_t myInt,UART_HandleTypeDef* huart);
void sendString(char* myString,UART_HandleTypeDef* huart);
void sendFloat(float myFloat,UART_HandleTypeDef* huart);

