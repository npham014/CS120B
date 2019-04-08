/*
 * npham014_Lab3_Part1.c
 *
 * Created: 4/8/2019 3:44:13 PM
 * Author : iatea
 */ 

#include <avr/io.h>

unsigned char SetBit(unsigned char x, unsigned char k, unsigned char b) {
	return (b ? x | (0x01 << k) : x & ~(0x01 << k));
}
unsigned char GetBit(unsigned char x, unsigned char k) {
	return ((x & (0x01 << k)) != 0);
}

int main(void)
{
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char total = 0;
	unsigned char tempA = PINA;
	unsigned char tempB = PINB;
    /* Replace with your application code */
    while (1) 
    {
		tempA = PINA;
		tempB = PINB;
		total = 0;
		while(tempA) {
			total += tempA & 1;
			tempA >>= 1;
		}
		while(tempB) {
			total += tempB & 1;
			tempB >>= 1;
		}
		
		PORTC = total;
    }
}

