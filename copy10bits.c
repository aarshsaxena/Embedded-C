// Write a program in Embedded C for 8051 microcontroller to copy 10 bytes of data starting from memory location 2000H to memory location starting from 2010H.


#include <reg52.h>

xdata unsigned char a _at_ 0x2000;
xdata unsigned char b _at_ 0x2010;
xdata unsigned char i _at_ 0x2100;
void main(){
char *p=&a;
char *q=&b;

for (i=0;i<=9;i++)	{
*q=*p;
p++;
q++;
}
here: goto here;
}