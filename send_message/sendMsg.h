/*
 * @Author: canpinaremre
 * Purpose: To send messages via UART
 * Language:  C
 */

#ifndef SEND_MSG_H
#define SEND_MSG_H


#include "stm32f4xx_hal.h"
#include <string.h>
#include "stdio.h"

void sendInt(uint32_t myInt,UART_HandleTypeDef* huart,uint8_t newLine);
void sendString(char* myString,UART_HandleTypeDef* huart,uint8_t newLine);
void sendFloat(float myFloat,UART_HandleTypeDef* huart,uint8_t newLine);

/* #ifndef SEND_MSG_H */
#endif
