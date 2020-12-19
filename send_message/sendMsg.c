/*
 * @Author: canpinaremre
 * Purpose: To send messages via UART
 * Language:  C
 */


#include <module/send_message/sendMsg.h>


void sendInt(uint32_t myInt,UART_HandleTypeDef* huart){
	char sendBuffer[30]="";
	sprintf(sendBuffer, "%lu", myInt);
	strncat(sendBuffer, "\r\n", strlen("\r\n"));
	sendString(sendBuffer,huart);
}

void sendFloat(float myFloat,UART_HandleTypeDef* huart){
	char sendBuffer[30]="";
	sprintf(sendBuffer, "%.2f", myFloat);
	strncat(sendBuffer, "\r\n", strlen("\r\n"));
	sendString(sendBuffer,huart);
}

void sendString(char* myString,UART_HandleTypeDef* huart){

	HAL_UART_Transmit(huart, (uint8_t *)myString, strlen(myString), 10);
}
