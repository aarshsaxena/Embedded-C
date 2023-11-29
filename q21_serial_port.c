// Q21 Write a program in Embedded C for 8051 microcontroller to transmit 10 numbers starting from location 2000h on serial port at 9600 baud rate. Assume crystal of 11.0592MHz

#include<reg52.h>

xdata unsigned char a _at_ 0x2000;
xdata unsigned char i _at_ 0x2010;
xdata unsigned char *p _at_ 0x2011;



void main(){
i=0;p=&a;

SP=0x07;
IE=0x90;
TMOD=0x20;
TH1=TL1=0xFD;
TR1=1;
SCON=0x40;

SBUF=*p;
here: goto here;
}

void isr_transmit() interrupt 4
{

if (i<10)
{
TI=0;
p++;
i++;
SBUF=*p;}

}


