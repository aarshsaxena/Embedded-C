// Q19 Write a program in Embedded C for 8051 microcontroller to transmit the number 0x5A on serial port at baud rate of 1200 baud in an infinite loop Assume crystal of 11.0592MHz

#include<reg52.h>
void main(){
TMOD=0x20;
TH1=TL1=0xE8;
TR1=1;
SCON=0x40;
SBUF=0x54;
while(TI==0);
TI=0;
here: goto here;
}