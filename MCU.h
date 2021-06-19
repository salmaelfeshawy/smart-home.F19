/*
 * MCU.h
 *
 * Created: 3/13/2021 2:23:47 PM
 *  Author: C TORCH
 */ 


#ifndef MCU_H_
#define MCU_H_

#include  "STD.h"


#define    PORTA    *((volatile uint8*) 0x3B)
#define    DDRA     *((volatile uint8*) 0x3A)
#define    PINA     *((volatile uint8*) 0x39)

#define    PORTB    *((volatile uint8*) 0x38)
#define    DDRB     *((volatile uint8*) 0x37)
#define    PINB     *((volatile uint8*) 0x36)

#define    PORTC    *((volatile uint8*) 0x35)
#define    DDRC     *((volatile uint8*) 0x34)
#define    PINC     *((volatile uint8*) 0x33)

#define    PORTD    *((volatile uint8*) 0x32)
#define    DDRD     *((volatile uint8*) 0x31)
#define    PIND     *((volatile uint8*) 0x30)

/********* UART REG**********/
#define	UBRRH	(*((volatile uint8*)0x40))
#define UBRRL	(*((volatile uint8*)0x29))
#define UCSRA	(*((volatile uint8*)0x28))
#define UCSRB	(*((volatile uint8*)0x2A))
#define UCSRC	(*((volatile uint8*)0x40))
#define UDR		(*((volatile uint8*)0x2C))


/******SPI*******/
typedef	struct
{
	uint8	SPCR;
	uint8 SPSR;
	uint8 SPDR;
	
	}SPI_REG;
	
#define SPI ((volatile	SPI_REG*)(0x2D))




#endif /* MCU_H_ */