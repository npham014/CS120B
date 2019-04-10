/*
 * npham014_Lab3_Challenge1.c
 *
 * Created: 4/10/2019 1:20:16 PM
 * Author : iatea
 */ 

#include <avr/io.h>


int main(void)
{
    /* Replace with your application code */
	DDRA = 0x00; PORTA = 0xFF;
	DDRB = 0xFF; PORTB = 0x00;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char topHalf;
	unsigned char botHalf;
    while (1) 
    {
		topHalf = PINA & 0xF0; // Mask out the bottom half to get top part.
		botHalf = PINA & 0x0F; //Mask out top half bottom
		
		topHalf >>= 4; //Right shift 4 times to move the top half to the bottom. eg 0xF0->0x0F
		botHalf <<= 4; //Left shift 4 times to move the bottom half to the top. eg 0x0C -> 0xC0
		PORTB=topHalf;
		PORTC=botHalf;
    }
}

