// Q20 Write a program in Embedded C for 8051 microcontroller to transmit the number 0x5A on serial port at baud rate of 1200 baud in an infinite loop using interrupt. Assume crystal of 11.0592MHz

#include<reg52.h>

void main(){
SP=0x07;
IE=0x90;
TMOD=0x20;
TH1=TL1=0xE8;
TR1=1;
SCON=0x40;
SBUF=0x5A;
here: goto here;
}

void isr_transmit() interrupt 4
{
TI=0;
SBUF=0x5A;

}



