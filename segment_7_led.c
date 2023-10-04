// Interface a 7 segment common cathode LED display to Port Ton 8051 and one Key (K1) to P2.1 port lines of 8051. Write a program in Embedded C for 8051 microcontroller to display 7 if the key is pressed and dislay 5 if the key is not pressed.

#include<reg52.h>
sbit key=P2^1;



//		     	  							  _____GND
//		     | 	  							 |
//		P1.0 |--------Resistor-----LED a-----|
//			 |								 |
//		P1.1 |--------Resistor-----LED b-----|
//			 |								 |
//		P1.2 |--------Resistor-----LED c-----|
//			 |								 |
//		P1.3 |--------Resistor-----LED d-----|
//			 |								 |
//		P1.4 |--------Resistor-----LED e-----|
//			 |								 |
//		P1.5 |--------Resistor-----LED f-----|
//			 |								 |
//		P1.6 |--------Resistor-----LED g-----|
//			 |								 |
//		P1.7 |--------Resistor-----LED dp----|
//			 |	                              
//			 |		
//			 |
//			 |		 ____Resistor_____GND
//			 |		|
//		P2.1 |-------------Key---------------+5V
//			 |		


//			This is the way!


void main()
{
key=1;
here: if (key==1)  
P1=0x07;
else
P1=0x6D;
goto here;
}




