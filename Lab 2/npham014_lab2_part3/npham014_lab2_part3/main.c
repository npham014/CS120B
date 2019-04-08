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
	unsigned char spacesAvail = 0x00;
	unsigned char spacesTaken = 0;
//Doesn't check the case where input is more than 4.
	while(1)
	{
		spacesTaken = 0;
		tempA = PINA; //tempA is input
		while(tempA) {
			spacesTaken += tempA & 1;
			tempA >>= 1;
		}
		spacesAvail = 4 - spacesTaken;
		PORTC = spacesAvail;// Set the input to the output.
		if(!spacesAvail) {
			PORTC = 0x80;
		}
	}
	return 0;
}