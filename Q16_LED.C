// Q16. Interface a 7 segment common anode LED display to Port | on 8051 Write a program in Embedded C for 8051 microcontroller to display a blank initially and then merement the display by I atter every 500msecond. After 9. the count should roll beck to 0 and continue.

#include<reg52.h>
xdata unsigned char i _at_ 0x2000;
xdata unsigned char codes[10]= {0xF9, 0xA4, 0xB0, 0x99, 0x82, 0xF8, 0x80, 0x90, 0xC0};

void delay(){
	TMOD=0x01;
	TH0=0xEC;
	TL0=0x78;
	TR0=1;
	if (TF0==1);
	TF0=0;
}

void main()
	{
   	SP=0x07;
	P1=0xFF;
								   
	{
	here: for(i=0;i<=9;i++)
	{ 
	delay();
	P1=codes[i];
	  }
	 }
	 
	 goto here;
	}

