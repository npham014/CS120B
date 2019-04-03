/*
 * npham014_lab2_part1.c
 *
 * Created: 4/3/2019 4:06:02 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;

	while(1)
	{
		tempA = PINA & 0x01;
		tempC = PINA & 0x02;
		if((tempA == 0x01)&&(tempC != 0x02)) {
			tempB = (tempB & 0xFC) | 0x01;
		}	
		else {
			tempB = (tempB & 0xFC) | 0x00;
		}
		PORTB = tempB;
	}
	return 0;
}

