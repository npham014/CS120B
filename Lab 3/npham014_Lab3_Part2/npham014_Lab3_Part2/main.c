/*
 * npham014_Lab3_Part2.c
 *
 * Created: 4/8/2019 4:41:08 PM
 * Author : iatea
 */ 

#include <avr/io.h>

int main(void)
{
	
    /* Replace with your application code */
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char currFuel = PINA;
	unsigned char fuelGauge = 0x00;
    while (1) 
    {
		currFuel = PINA;
		
		
    }
}

