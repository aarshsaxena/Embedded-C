//Write a program in Embedded C for 8051 microcontroller to find the sum of two one-byte numbers stored at 2000H & 2001H and store the sum at 2002H.


#include<reg52.h>
xdata unsigned char a _at_ 0x2000;
xdata unsigned char b _at_ 0x2001;
xdata unsigned char c _at_ 0x2002;

void main()
{
c=a+b;
here: goto here;
}