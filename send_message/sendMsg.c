/*
 * @Author: canpinaremre
 * Purpose: To send messages via UART
 * Language:  C
 */


#include <module/send_message/sendMsg.h>


void sendInt(uint32_t myInt,UART_HandleTypeDef* huart,uint8_t newLine){
	char sendBuffer[30]="";
	sprintf(sendBuffer, "%lu", myInt);
	sendString(sendBuffer,huart,newLine);
}

void sendFloat(float myFloat,UART_HandleTypeDef* huart,uint8_t newLine){
	char sendBuffer[30]="";
	sprintf(sendBuffer, "%.2f", myFloat);
	sendString(sendBuffer,huart,newLine);
}

void sendString(char* myString,UART_HandleTypeDef* huart,uint8_t newLine){
	char sendBuffer[60]="";
	strncat(sendBuffer, myString, strlen(myString));
	if(newLine)
		strncat(sendBuffer, "\r\n", strlen("\r\n"));

	HAL_UART_Transmit(huart, (uint8_t *)sendBuffer, strlen(sendBuffer), 10);
}
