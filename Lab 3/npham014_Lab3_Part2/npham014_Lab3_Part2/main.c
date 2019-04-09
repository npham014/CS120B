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
	//unsigned char fuelGauge = 0x00;
    while (1) 
    {
		currFuel = PINA;
		switch (currFuel) {
			case 0:
				PORTC = 0x40;
				break;
			case 1:
			case 2:
				PORTC = 0x60;
				break;
			case 3:
			case 4:
				PORTC = 0x70;
				break;
			case 5:
			case 6:
				PORTC = 0x38;
				break;
			case 7:
			case 8:
			case 9:
				PORTC = 0x3C;
				break;
			case 10:
			case 11:
			case 12:
				PORTC = 0x3E;
				break;
			case 13:
			case 14:
			case 15:
				PORTC = 0x3F;
				break;
		}
		
    }
}

