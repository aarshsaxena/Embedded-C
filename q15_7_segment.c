// Q15. Interface a 7 segment common anode LED display to Port 1 on 8051 and Key Kl on Port 2.1. Write a program in Embedded C for 8051 microcontroller to display a blank initially and then increment the display by I every time Kl is pressed After 9, the count should roll back to O and continue.

#include<reg52.h>
sbit K1=P2^1;
xdata unsigned char i _at_ 0x2000;
xdata unsigned char codes[10]= {0xF9, 0xA4, 0xB0, 0x99, 0x82, 0xF8, 0x80, 0x90, 0xC0};
void main()
	{
   
    K1=1;
	P1=0xFF;
								  
	here: for(i=0;i<=9;i++)
	{ 
	while (K1==0);
	P1=codes[i];
	while (K1==1);
	  }
	 
	 goto here;
	}