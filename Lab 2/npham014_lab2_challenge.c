/*
 * npham014_lab2_challenge.c
 *
 * Created: 4/4/2019 1:14:24 PM
 * Author : iatea
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRA = 0x00; PORTA = 0x00;
	DDRB = 0x00; PORTB = 0x00;
	DDRC = 0x00; PORTC = 0x00;
	DDRD = 0xFF; PORTD = 0X00;
	unsigned char totalWeight;
	unsigned char aWeight;
	unsigned char bWeight;
	unsigned char cWeight;
    while (1) 
    {
		aWeight = PINA;
		bWeight = PINB;
		cWeight = PINC;
		totalWeight = aWeight + bWeight + cWeight;
		if(totalWeight > 0x8C) {
			PORTD = 0X01;
			if((aWeight - cWeight) > 80 || (cWeight - aWeight) > 80) {
				PORTD = 0x03;
			}
		}
		else {
			PORTD = 0x00;
			if((aWeight - cWeight) > 80 || (cWeight - aWeight) > 80) {
				PORTD = 0X02;
			}
		}	
    }
}

