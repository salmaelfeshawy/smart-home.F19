/*
 * GccApplication1.c
 *
 * Created: 6/19/2021 8:49:34 PM
 * Author : C TORCH
 */ 

#include "SPI.h"
#include "DIO.h"
#define F_CPU 16000000
#include <util/delay.h>



int main(void)
{
    uint32 tx_data = 2;
	uint8 rx_data = 0;
	/*LED*/
	DIO_SetPinDir(DIO_PORTC,DIO_PIN2,DIO_PIN_OUTPUT);
	
	SPI_Slave_Init();
	
	_delay_ms(1000);
	
    while (1) 
    {
		rx_data = SPI_TransSiver(1);
		if (rx_data == '1')
		
		{
			DIO_TogglePin(DIO_PORTC,DIO_PIN2);
			_delay_ms(500);
			rx_data = 0;
		}
		if (rx_data =='2')
		{
			DIO_SetPinDir(DIO_PORTC,DIO_PIN2,DIO_PIN_HIGH);
		}
		
		_delay_ms(1000);
    }
}

