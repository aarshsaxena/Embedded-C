// Q17 Write a program in Embedded C for 8051 microcontroller to generate a square wave of 10KHz on port pin P1 2 using Interrupts. Assume crystal of 12MHz

// a) Using Timer 0 in Mode 1

// b) Using Timer 0 in Mode 2

#include <reg52.h>
sbit wave=P1^2;

void isr_mode2() interrupt 1
{
wave=~wave;
TF0=0;
}
/*void isr_mode1() interrupt 1
{
wave=~wave;
TF0=0;TR0=0;
TH0=0xFF;
TL0==xCE;
TR0=1;
}
*/


//main program
void main()
{	//TMOD=0x01; mode 1
	TMOD=0x02;
	SP=0x07;
//	TH0=0xFF;
//	TL0=0xCE;
	TH0=TL0=0xCE;
	wave=0;
	IE=0x82;
	TR0=1;
	here: goto here;	
}
