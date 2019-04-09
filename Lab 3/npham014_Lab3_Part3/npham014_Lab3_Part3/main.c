/*
 * npham014_Lab3_Part3.c
 *
 * Created: 4/9/2019 2:04:31 PM
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
  /* Replace with your application code */
  DDRA = 0x00; PORTA = 0xFF;
  DDRC = 0xFF; PORTC = 0x00;
  unsigned char currFuel = PINA;
  //unsigned char fuelGauge = 0x00;
  unsigned char seatBeltCheck = 0x00;
/*  unsigned char test = 0x03;
  unsigned char test2 = 0x03;
  unsigned char test3 = 0x00; */
  unsigned char output = 0x00;
  while (1)
  {
	  seatBeltCheck = PINA & 0xF0;
	  
	  currFuel = PINA & 0x0F;
	  switch (currFuel) {
		  case 0:
		  output = 0x40;
		  break;
		  case 1:
		  case 2:
		  output = 0x60;
		  break;
		  case 3:
		  case 4:
		  output = 0x70;
		  break;
		  case 5:
		  case 6:
		  output = 0x38;
		  break;
		  case 7:
		  case 8:
		  case 9:
		  output = 0x3C;
		  break;
		  case 10:
		  case 11:
		  case 12:
		  output = 0x3E;
		  break;
		  case 13:
		  case 14:
		  case 15:
		  output = 0x3F;
		  break;
	  }
	  if(seatBeltCheck == 0x30) {
		  output = SetBit(output,7,1);
	  }
	  PORTC = output;
  }
}

