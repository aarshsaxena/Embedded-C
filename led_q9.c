#include <reg52.h>

//               Circuit Diagram of LED1 & LED2.

//		_____	  ,-----Resistor--------GND
//		     | 	  |
//		P1.0 |-----------Key---------------o+5v
//			 |
//		P1.1 |--------Resistor-----LED1-----GND
//			 |
//		P1.2 |--------Resistor-----LED2-----GND
//			 |
//			 |
//			 |

//			This is the way!

	sbit key=P1^0;
	sbit l1=P1^1;
	sbit l2=P1^2;

void main(){
	
	key=1;
	
	here: if(key==1){
		l1=0;
		l2=1;
		}
	else{
		l1=1;
		l2=0;
		}
	goto here;
}