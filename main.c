/*
 * GccApplication1.c
 *
 * Created: 6/19/2021 4:29:15 PM
 * Author : C TORCH
 */ 

#include "LCD.h"
#include "UART.h"
#include "SPI.h"
#define F_CPU 16000000
#include <util/delay.h>


int main(void)
{
 uint8 data_1 = 0;
 UART_Init();
 LCD_Init();
 
 uint8 tx_data = 1;
 uint8 rx_data = 0;
 
 SPI_Master_Init();
 SPI_Master_InitTrans();
 _delay_ms(1000);
 
    while (1) 
    {
		data_1 = UART_Rx();
		if (data_1)
		{
			LCD_Clear();
			LCD_WriteChar(data_1);
			rx_data = SPI_TransSiver(data_1);
			
		}
    }
}

