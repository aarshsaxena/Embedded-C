// Interface a 7 segment common cathode LED display to Port 1 on 8051 and two Keys KI & K2 to P2.1 and P2.2 port lines of 8051. Write a program in Embedded C for 8051 microcontroller to display a blank if no key is pressed, display 0 if both keys are pressed, display 7 if the key K1 only is pressed and display 5 if only K2 is pressed.



#include<reg52.h>
sbit key1=P2^1;
sbit key2=P2^2;
//               Circuit Diagram of LED1 & LED2.

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
//			 |	   							 |______GND                           		
//			 |
//			 |		 ____Resistor_____GND
//			 |		|
//		P2.1 |-------------Key---------------+5V
//	         |
//			 |		 ____Resistor_____GND
//			 |		|
//		P2.1 |-------------Key---------------+5V
//			 |		



//			This is the way!


void main()
{
key1=1;
key2=1;
here: if (key1==0  && key2==0)  
P1=0x00;
else if (key1==1 && key2==0)
P1=0x07;
else if (key1==0 && key2==1)
P1=0x6D;
else 
P1=0x3F;
goto here;
}
