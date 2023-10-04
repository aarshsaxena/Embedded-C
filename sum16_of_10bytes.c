// Write a program in Embedded C for 8051 microcontroller to find the 16 bit sum of 10 bytes of data starting from memory location 3000H to 3009H and store the 16 bit sum at 3010H & 3011H.


#include<reg52.h>
xdata unsigned char a _at_ 0x3000;
xdata unsigned int s _at_ 0x3010;
xdata unsigned char i _at_ 0x3015;
   
void main()
{
	char *p=&a;
	s=0;
	for(i=0;i<=9;i++)
	{
		s = s + *p;
   		p++;
   	}  
   
    here:goto here; }


