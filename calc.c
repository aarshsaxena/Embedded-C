//Write a program in Embedded C for 8051 microcontroller to find the 16 bit sum, 8 bit difference. 16 bit product and quotient & remainder (one byte size) of two one-byte numbers stored at 2000 & 2001. All answers should be stored from memory location 2002 onwards.

#include<reg52.h>
xdata unsigned char a _at_ 0x2000;
xdata unsigned char b _at_ 0x2001;
xdata unsigned int addi _at_ 0x2002;
xdata unsigned char diff _at_ 0x2004;
xdata unsigned int prod _at_ 0x2005;
xdata unsigned char quot _at_ 0x2007;
xdata unsigned char rem _at_ 0x2008;

void main()
{
addi=a+b;
diff=a-b;
prod=a*b;
quot=a/b;
rem=a%b;

here: goto here;
}