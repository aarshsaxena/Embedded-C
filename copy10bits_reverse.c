// Write a program in Embedded C for 8051 microcontroller to copy 10) bytes of data starting from memory location 2000H to memory location starting from 2010H in reverse.



#include <reg52.h>

xdata unsigned char source _at_ 0x2000;
xdata unsigned char destination _at_ 0x2020;
xdata unsigned char i _at_ 0x200A;
void main(){
char *p=&source;
char *q=&destination;

for (i=0;i<=9;i++)	{
*q=*p;
*p++;
*q--;
}
here: goto here;
}