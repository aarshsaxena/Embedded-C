// Q18. Write a program in Embedded C for 8051 microcontroller to generate a square wave of 500Hz on port pin P1.2 using Interrupts. Assume crystal of 12MHz.

// a) Using Timer 0 in Mode 1

// b) Using Tuner 0 in Mode 2

#include <reg52.h>
sbit wave=P1^2;
xdata unsigned char count _at_ 0x2000;
/*
void isr_wave() interrupt 1
{
count++;
if (count==4){
wave=~wave;
count=0;
TF0=0;
}
else{
TF0=0;}
} */

void isr_wave() interrupt 1
{
wave=~wave;
TF0=0;
TH0=0xFC;
TL0=0x18;
}



void main(){
TH0=0xFC;
TL0=0x18;
TR0=1;
IE=0x82;
here: goto here;
}