// Write a program in Embedded C for 8051 microcontroller to copy only even numbers starting from memory location 2000H to memory location starting from 2010H.


#include <reg52.h>

xdata unsigned char a _at_ 0x2000;
xdata unsigned char b _at_ 0x2010;
xdata unsigned char i _at_ 0x2100;
void main(){
unsigned char *p=&a;
unsigned char *q=&b;

for (i=0;i<=9;i++)	{
if(*p%2==0){
  *q=*p;
  q++;
}
  p++;
}
here: goto here;
}
