// Write a program in Embedded C for 8051 microcontroller to generate a square wave of 10KHz on port pin P1.2. Assume crystal of 12MHz

// a) Using Timer 0 mm Mode 1

// b) Using Timer 0 in Mode 2

#include <reg52.h>
 sbit wave=P1^2;

 void main()
 {
  TMOD=0x02;
  TH0=TL0=0xCE;
  TR0=1;

  here: while(TF0==0);
  wave=~wave;
  TF0=0;
  goto here;



  /*TMOD = 0x01;
  TH0 = 0xFF;
  TL0 = 0x31;
  TR0 = 1;
  here: while(TF0 == 0);
  TF0 = 0;
  	  wave=~wave;
  goto here;	*/


  }