/*
 * npham014_lab2_part3.c
 *
 * Created: 4/3/2019 4:06:02 PM
 * Author : ucrcse
 */ 

#include <avr/io.h>


int main(void)
{
	DDRA = 0x00; PORTA = 0xFF;
	DDRC = 0xFF; PORTC = 0x00;
	unsigned char tempA = 0x00;
//	unsigned char fullLot = 0x04;
//Doesn't check the case where input is more than 4.
	while(1)
	{
		tempA = PINA; //tempA is input
		PORTC = tempA;// Set the input to the output.
		if(tempA & 0x04) {
			PORTC = 0x84;
		}
	}
	return 0;
}